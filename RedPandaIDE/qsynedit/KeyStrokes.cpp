/*
 * Copyright (C) 2020-2022 Roy Qu (royqh1979@gmail.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */
#include "KeyStrokes.h"

SynEditKeyStroke::SynEditKeyStroke()
{
    mKey = 0;
    mKeyModifiers = Qt::NoModifier;
    mKey2 = 0;
    mKeyModifiers2 = Qt::NoModifier;
    mCommand = SynEditorCommand::ecNone;
}

QKeySequence SynEditKeyStroke::keySequence() const
{
    if (mKey2 == 0) {
        return QKeySequence(mKey + mKeyModifiers);
    } else {
        return QKeySequence(mKey + mKeyModifiers, mKey2+mKeyModifiers2);
    }
}

void SynEditKeyStroke::setKeySequence(QKeySequence &keySequence)
{
    if (keySequence.isEmpty())
        return;
    decodeKey(keySequence[0],mKey,mKeyModifiers);
    if (keySequence.count()>1) {
        decodeKey(keySequence[1],mKey2,mKeyModifiers2);
    } else {
        mKey2=0;
        mKeyModifiers2=Qt::NoModifier;
    }
}

int SynEditKeyStroke::key() const
{
    return mKey;
}

void SynEditKeyStroke::setKey(int key)
{
    mKey = key;
}

Qt::KeyboardModifiers SynEditKeyStroke::keyModifiers() const
{
    return mKeyModifiers;
}

void SynEditKeyStroke::setKeyModifiers(const Qt::KeyboardModifiers &keyModifiers)
{
    mKeyModifiers = keyModifiers;
}

int SynEditKeyStroke::key2() const
{
    return mKey2;
}

void SynEditKeyStroke::setKey2(int key2)
{
    mKey2 = key2;
}

Qt::KeyboardModifiers SynEditKeyStroke::keyModifiers2() const
{
    return mKeyModifiers2;
}

void SynEditKeyStroke::setKeyModifiers2(const Qt::KeyboardModifiers &keyModifiers2)
{
    mKeyModifiers2 = keyModifiers2;
}

SynEditorCommand SynEditKeyStroke::command() const
{
    return mCommand;
}

void SynEditKeyStroke::setCommand(const SynEditorCommand &command)
{
    mCommand = command;
}

SynKeyError::SynKeyError(const QString &reason):BaseError(reason)
{

}

PSynEditKeyStroke SynEditKeyStrokes::add(SynEditorCommand command, int key, Qt::KeyboardModifiers modifiers)
{
    PSynEditKeyStroke keyStroke = std::make_shared<SynEditKeyStroke>();
    keyStroke->setKey(key);
    keyStroke->setKeyModifiers(modifiers);
    keyStroke->setCommand(command);
    mList.append(keyStroke);
    return keyStroke;
}

PSynEditKeyStroke SynEditKeyStrokes::findCommand(SynEditorCommand command)
{
    for (PSynEditKeyStroke& keyStroke:mList) {
        if (keyStroke->command() == command)
            return keyStroke;
    }
    return PSynEditKeyStroke();
}

PSynEditKeyStroke SynEditKeyStrokes::findKeycode(int key, Qt::KeyboardModifiers modifiers)
{
    for (PSynEditKeyStroke& keyStroke:mList) {
        if (keyStroke->key() == key
                && keyStroke->keyModifiers()  == (modifiers & ~ Qt::KeypadModifier)
                && keyStroke->key2()==0)
            return keyStroke;
    }
    return PSynEditKeyStroke();
}

PSynEditKeyStroke SynEditKeyStrokes::findKeycode2(int key, Qt::KeyboardModifiers modifiers,
                                                  int key2, Qt::KeyboardModifiers modifiers2)
{
    for (PSynEditKeyStroke& keyStroke:mList) {
        if (keyStroke->key() == key
                && keyStroke->keyModifiers()==(modifiers & ~ Qt::KeypadModifier)
                && keyStroke->key2()==key2
                && keyStroke->keyModifiers2()== (modifiers2 & ~ Qt::KeypadModifier))
            return keyStroke;
    }
    return PSynEditKeyStroke();
}

PSynEditKeyStroke SynEditKeyStrokes::findKeySequence(const QKeySequence &keySeq)
{
    switch (keySeq.count()) {
    case 1: {
            int key;
            Qt::KeyboardModifiers modifiers;
            decodeKey(keySeq[0],key,modifiers);
            return findKeycode(key,modifiers);
        }
    case 2:
    case 3:
    case 4:
        {
            int key;
            Qt::KeyboardModifiers modifiers;
            int key2;
            Qt::KeyboardModifiers modifiers2;
            decodeKey(keySeq[0],key,modifiers);
            decodeKey(keySeq[1],key2,modifiers2);
            return findKeycode2(key,modifiers,key2,modifiers2);
        }
    default:
        return PSynEditKeyStroke();
    }
}

void SynEditKeyStrokes::clear()
{
    return mList.clear();
}

void SynEditKeyStrokes::resetDefaults()
{
    clear();
    add(SynEditorCommand::ecUp, Qt::Key_Up, Qt::NoModifier);
    add(SynEditorCommand::ecSelUp, Qt::Key_Up, Qt::ShiftModifier);
    add(SynEditorCommand::ecSelUp, Qt::Key_Up, Qt::ShiftModifier | Qt::AltModifier);
    add(SynEditorCommand::ecScrollUp, Qt::Key_Up, Qt::ControlModifier);
    add(SynEditorCommand::ecDown, Qt::Key_Down, Qt::NoModifier);
    add(SynEditorCommand::ecSelDown, Qt::Key_Down, Qt::ShiftModifier);
    add(SynEditorCommand::ecSelDown, Qt::Key_Down, Qt::ShiftModifier | Qt::AltModifier);
    add(SynEditorCommand::ecScrollDown, Qt::Key_Down, Qt::ControlModifier);
    add(SynEditorCommand::ecLeft, Qt::Key_Left, Qt::NoModifier);
    add(SynEditorCommand::ecSelLeft, Qt::Key_Left, Qt::ShiftModifier);
    add(SynEditorCommand::ecSelLeft, Qt::Key_Left, Qt::ShiftModifier | Qt::AltModifier);
    add(SynEditorCommand::ecWordLeft, Qt::Key_Left, Qt::ControlModifier);
    add(SynEditorCommand::ecSelWordLeft, Qt::Key_Left, Qt::ShiftModifier|Qt::ControlModifier);
    add(SynEditorCommand::ecRight, Qt::Key_Right, Qt::NoModifier);
    add(SynEditorCommand::ecSelRight, Qt::Key_Right, Qt::ShiftModifier);
    add(SynEditorCommand::ecSelRight, Qt::Key_Right, Qt::ShiftModifier | Qt::AltModifier);
    add(SynEditorCommand::ecWordRight, Qt::Key_Right, Qt::ControlModifier);
    add(SynEditorCommand::ecSelWordRight, Qt::Key_Right, Qt::ShiftModifier|Qt::ControlModifier);

    add(SynEditorCommand::ecPageDown, Qt::Key_PageDown, Qt::NoModifier);
    add(SynEditorCommand::ecSelPageDown, Qt::Key_PageDown, Qt::ShiftModifier);
    add(SynEditorCommand::ecPageBottom, Qt::Key_PageDown, Qt::ControlModifier);
    add(SynEditorCommand::ecSelPageBottom, Qt::Key_PageDown, Qt::ShiftModifier|Qt::ControlModifier);
    add(SynEditorCommand::ecPageUp, Qt::Key_PageUp, Qt::NoModifier);
    add(SynEditorCommand::ecSelPageUp, Qt::Key_PageUp, Qt::ShiftModifier);
    add(SynEditorCommand::ecPageTop, Qt::Key_PageUp, Qt::ControlModifier);
    add(SynEditorCommand::ecSelPageTop, Qt::Key_PageUp, Qt::ShiftModifier|Qt::ControlModifier);
    add(SynEditorCommand::ecLineStart, Qt::Key_Home, Qt::NoModifier);
    add(SynEditorCommand::ecSelLineStart, Qt::Key_Home, Qt::ShiftModifier);
    add(SynEditorCommand::ecEditorStart, Qt::Key_Home, Qt::ControlModifier);
    add(SynEditorCommand::ecSelEditorStart, Qt::Key_Home, Qt::ShiftModifier|Qt::ControlModifier);
    add(SynEditorCommand::ecLineEnd, Qt::Key_End, Qt::NoModifier);
    add(SynEditorCommand::ecSelLineEnd, Qt::Key_End, Qt::ShiftModifier);
    add(SynEditorCommand::ecEditorEnd, Qt::Key_End, Qt::ControlModifier);
    add(SynEditorCommand::ecSelEditorEnd, Qt::Key_End, Qt::ShiftModifier|Qt::ControlModifier);
    add(SynEditorCommand::ecToggleMode, Qt::Key_Insert, Qt::NoModifier);
//    add(SynEditorCommand::ecCopy, Qt::Key_Insert, Qt::ControlModifier);
//    add(SynEditorCommand::ecCut, Qt::Key_Delete, Qt::ShiftModifier);
//    add(SynEditorCommand::ecPaste, Qt::Key_Insert, Qt::ShiftModifier);
    add(SynEditorCommand::ecDeleteChar, Qt::Key_Delete, Qt::NoModifier);
    add(SynEditorCommand::ecDeleteLastChar, Qt::Key_Backspace, Qt::NoModifier);
//    add(SynEditorCommand::ecDeleteLastChar, Qt::Key_Backspace, Qt::ShiftModifier);
//    add(SynEditorCommand::ecDeleteWordStart, Qt::Key_Backspace, Qt::ControlModifier);
//    add(SynEditorCommand::ecDeleteWordEnd, Qt::Key_Delete, Qt::ControlModifier);
//    add(SynEditorCommand::ecUndo, Qt::Key_Backspace, Qt::AltModifier);
//    add(SynEditorCommand::ecRedo, Qt::Key_Backspace, Qt::AltModifier|Qt::ShiftModifier);
    add(SynEditorCommand::ecLineBreak, Qt::Key_Return, Qt::NoModifier);
    add(SynEditorCommand::ecLineBreak, Qt::Key_Return, Qt::ShiftModifier);
    add(SynEditorCommand::ecLineBreakAtEnd, Qt::Key_Return, Qt::ControlModifier);
    add(SynEditorCommand::ecLineBreak, Qt::Key_Enter, Qt::NoModifier);
    add(SynEditorCommand::ecLineBreak, Qt::Key_Enter, Qt::ShiftModifier);
    add(SynEditorCommand::ecLineBreakAtEnd, Qt::Key_Enter, Qt::ControlModifier);
//    add(SynEditorCommand::ecTab, Qt::Key_Tab, Qt::NoModifier);
//    add(SynEditorCommand::ecShiftTab, Qt::Key_Backtab, Qt::ShiftModifier);
//    add(SynEditorCommand::ecShiftTab, Qt::Key_Tab, Qt::ShiftModifier);
    add(SynEditorCommand::ecContextHelp, Qt::Key_F1, Qt::NoModifier);

//    add(SynEditorCommand::ecSelectAll, Qt::Key_A, Qt::ControlModifier);
//    add(SynEditorCommand::ecCopy, Qt::Key_C, Qt::ControlModifier);
//    add(SynEditorCommand::ecPaste, Qt::Key_V, Qt::ControlModifier);
//    add(SynEditorCommand::ecCut, Qt::Key_X, Qt::ControlModifier);
//    add(SynEditorCommand::ecBlockIndent, Qt::Key_I, Qt::ControlModifier|Qt::ShiftModifier);
//    add(SynEditorCommand::ecBlockUnindent, Qt::Key_U, Qt::ControlModifier|Qt::ShiftModifier);
//    add(SynEditorCommand::ecLineBreak, Qt::Key_M, Qt::ControlModifier);
//    add(SynEditorCommand::ecInsertLine, Qt::Key_N, Qt::ControlModifier);
//    add(SynEditorCommand::ecDeleteWord, Qt::Key_T, Qt::ControlModifier);
//    add(SynEditorCommand::ecDeleteLine, Qt::Key_Y, Qt::ControlModifier);
//    add(SynEditorCommand::ecDeleteEOL, Qt::Key_Y, Qt::ControlModifier|Qt::ShiftModifier);
//    add(SynEditorCommand::ecDuplicateLine, Qt::Key_D, Qt::ControlModifier);

//    add(SynEditorCommand::ecUndo, Qt::Key_Z, Qt::ControlModifier);
//    add(SynEditorCommand::ecRedo, Qt::Key_Z, Qt::ControlModifier|Qt::ShiftModifier);
//    add(SynEditorCommand::ecNormalSelect, Qt::Key_N, Qt::ControlModifier | Qt::ShiftModifier);
//    add(SynEditorCommand::ecColumnSelect, Qt::Key_C, Qt::ControlModifier | Qt::ShiftModifier);
//    add(SynEditorCommand::ecLineSelect, Qt::Key_L, Qt::ControlModifier | Qt::ShiftModifier);
    //    add(SynEditorCommand::ecMatchBracket, Qt::Key_B, Qt::ControlModifier | Qt::ShiftModifier);
}

void SynEditKeyStrokes::setExtraKeyStrokes()
{
    add(SynEditorCommand::ecDeleteWordStart, Qt::Key_Backspace, Qt::ControlModifier);
    add(SynEditorCommand::ecDeleteWordEnd, Qt::Key_Delete, Qt::ControlModifier);

    add(SynEditorCommand::ecDuplicateLine, Qt::Key_D, Qt::ControlModifier);
    add(SynEditorCommand::ecDeleteLine, Qt::Key_E, Qt::ControlModifier);

    add(SynEditorCommand::ecSelectAll, Qt::Key_A, Qt::ControlModifier);
    add(SynEditorCommand::ecCopy, Qt::Key_C, Qt::ControlModifier);
    add(SynEditorCommand::ecPaste, Qt::Key_V, Qt::ControlModifier);
    add(SynEditorCommand::ecCut, Qt::Key_X, Qt::ControlModifier);

    add(SynEditorCommand::ecUndo, Qt::Key_Z, Qt::ControlModifier);
    add(SynEditorCommand::ecRedo, Qt::Key_Y, Qt::ControlModifier);
}
