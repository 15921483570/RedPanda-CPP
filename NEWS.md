Red Panda C++ Version 1.0.0
  - fix: calculation for code snippets's tab stop positions is not correct
  - fix: Refresh files view shouldn'tchange open/save dialog's default folder
  - enhancement: "locate in files view" will request user's confirmation when change the working folder
  - enhancement: adjust tab order in the find dialog
  - enhancement: highlight hits in the find panel's result list
  - enhancement: optimize startup time
  - fix: batch replace in file doesn't respect item check states in the find panel
  - enhancement: option for default file encoding in "option" dialog's "editor"->"misc" tab
  - enhancement: auto detect "gbk" encoding when running in zh_CN locale under Linux
  - enhancement: disable encoding submenu when editor closed
  - enhancement: clear infos in the status bar when editor closed
  - fix: wrong selection when drag & dropped in editor
  - enhancement: toggle block comment
  - fix: syntax color of #include header filenames not correct
  - enhancement: disable "code completion" will disable enhanced syntax highlight
  - enhancement: match bracket

Red Panda C++ Version 0.14.5
  - fix: the "gnu c++ 20" option in compiler set options is wrong
  - enhancement: option "open files in the same red panda C++ instance", in options->environment->file associations
  - enhancement: hide unsupported files in files view
  - fix: can't correctly set break conditions
  - fix: crash when copy to non-c files
  - fix: fonts in cpu window is not correctly set, when dpi changed
  - enhancement: enable group undo
  - enhancement: add option "hide symbols start with underscore" and "hide synbols start with two underscore"
  - fix: can't rename project files that not openned in editor
  - enhancement: group undo will stop at spaces
  - fix: menu font size is wrong when dpi changed
  - enhancement: better processing of symbol completion
  - enhancement: better support of ligatures
  - enhancement: use the expression evaluation logic to handle "goto declaration"/"goto definition" 
  - enhancement: reduce startup time by about 1 second.
  - enhancement: add option "mouse selection/drag scroll speed" in the options dialog's "Editor" / "general" tab.
  - fix: the scroll speed of mouse selection/drag is too fast.
  - fix: the scroll behavior of mouse dragging on the editor's edge is not correct
  - fix: calculation of caret position is not in consistence.
  - fix: undo one symbol completion as a whole operation
  - fix: crash when open a project that contains custom folder
  - enhancement: symbol completion when editor has selection 
  - fix: save project's layout shouldn't modify the project file
  - enhancement: use expression processing in syntax highlighting for identifiers
  - fix: if a function's declaration can't be found, it will be wrongly highlighted as variable
  - change: "locate in files view" won't change the working folder, if current file is in subfolders of the working folder
  - enhancement: hide function tips, when input method is visible

Red Panda C++ Version 0.14.4
  - enhancement: git - log
  - fix: error in templates
  - enhancement: git - reset
  - fix: header completion error when header name contains '+'
  - enhancement: clear history in file -> recent menu
  - enhancement: close project in project view's context menu
  - enhancement: auto find compiler sets when run for the first time
  - enhancement: git - remotes
  - enhancement: rename "open folder" to "choose working folder"
  - enhancement: let user choose app theme when first run
  - enhancement: git - pull / push / fetch

Red Panda C++ Version 0.14.3
  - fix: wrong code completion font size, when screen dpi changed
  - enhancement: replace Files View Panel's path lineedit control with combo box
  - enhancement: custome icons for project view
  - fix: convert to encoding setting in compiler set option not correctly handled
  - change: rename "compile log" panel to "tools output"
  - fix: debug panel can't be correctly show/hide
  - enhancement: redesign tools output's context menu, add "clear" menu item
  - enhancement: tools -> git  in the options dialog
  - enhancement: auto detect git in PATH
  - enhancement: git - create repository
  - enhancement: git - add files
  - enhancement: git - commit
  - enhancement: git - restore
  - enhancement: git - branch / switch
  - enhancement: git - merge
  - fix: compiler set index not correctly saved, when remove compiler sets in options dialog
  - enhancement: when create a repository in a project, auto add it's files to the repository
  - enhancement: when add files to project, auto add it to git (if the project has a git repository)
  - enhancement: when save a file, and it's under files view's current folder,  auto add it to git (if it has a git repository)
  - enhancement: new file icons for high contrast icon set
  - fix: left and bottom panel size not correct when DPI changed
  - fix: icons in files view not changed, when icon set is changed
  

Red Panda C++ Version 0.14.2
  - enhancement: file system view mode for project
  - enhancement: remove / rename / create new folder in the files view
  - fix: crash when there are catch blocks in the upper most scope
  - fix: can't read project templates when path has non-ascii chars
  - fix: huge build size for c++ files

Red Panda C++ Version 0.14.1
  - enhancement: custom theme
  - fix: failed to show function tip, when there are parameters having '[' and ']'
  - enhancement: display localized theme name in the option dialog
  - enhancement: show custom theme folder in options dialog -> enviroment -> folders
  - enhancement: display localzed icon set name in the option dialog
  - enhancement: new sky blue icon set, contributed by Alan-CRL
  - enhancement: show caret at once, when edition finished
  - enhancement: new header dialog for project
  - enhancement: new contrast icon set, contributed by Alan-CRL
  - enhancement: new contrast theme, contributed by Alan-CRL
  - enhancement: theme now have default icon set
  - fix: wrong icons for file associations
  - fix: editor's font size set by ctrl+mouse wheel will be reset by open the option dialog
  - fix: actions not correctly disabled when compile
  - fix: can't differentiate disabled and enabled buttons, when using contrast icon set
  - fix: when running problem cases, the output textbox might be wrongly cleared.
  - fix: typo error in the parser
  - fix: typing after symbols like 'std::string' shouldn't show code completion suggestions

Red Panda C++ Version 0.14.0
  - enhancement: custom icon set ( in the configuration folder)
  - enhancement: show custom icon set folder in options -> enviroment -> folders 
  - enhancement: new class ( to project) wizard
  - enhancement: greatly speed up code completion 
  - fix: code folding calcuation not correct when some codes are folded and editing after them
  - enhancement: code completion ui redesigned
  - fix: mainwindow action's short cut doesn't work,  if the action is not in menu or toolbar
  - fix: when run all cases for a problem, processing of output is slow

Red Panda C++ Version 0.13.4
  - fix: when copy comments, don't auto indent
  - enhancement: auto add a new line when press enter between '/*' and '*/'
  - fix: code completion popup won't show  members of 'this'
  - fix: can't show private & protected members of 'this'
  - fix: function name like 'A::B' is not correctly parsed
  - fix: static members are not correct shown after Classname + '::'
  - enhancement: show parameter tips for class constructors
  - enhancement: when there are tips showing, don't show mouse tips
  - enhancement: setting non-ascii font for editors
  - enhancement: correct handle windows dpi change event
  - enhancement: code completion find words with char in the middle

Red Panda C++ Version 0.13.3
  - enhancement: restore editor position after rename symbol
  - enhancement: restore editor position after reformat code
  - fix: If project's compiler set is not the same with the default compiler set, parser for the project doesn't use the project's compiler set
  - fix: If project's compiler set is not the same with the default compiler set, auto openned project's file will use wrong compiler set to do syntax check.
  - change: symbols that exactly match are sorted to the front in the code suggestion popup list
  - fix: symbols defind locally should be sorted to the front in the code suggestion popup list
  - fix: when show function tips, can't correctly calcuate the current position in the function param list
  - fix: app will become very slow when processing very long lines.
  - enhancement: If console pauser doesn't exist, warn and stop running programs.
  - fix: app crash when ctrl+click on a #include statement that point to a directory instead of header file.
  - fix: ctrl+click on the enum value will jump to the wrong line in it's definition file
  - fix: line info in the mouse tip of statement not correct
  - fix: editor crash when no highlighter is assigned (the editing file is a not c/cpp source file);
  - fix: ')' not correctly skip in the editor when no highlighter is assigned (the editing file is a not c/cpp source file);
  - fix: Undo in the editor will lose line indents when no highlighter is assigned (the editing file is a not c/cpp source file);
  - enhancement: highlighter for GLSL (OpenGL Shading Language)
  - add a new template for raylib shader apps
  - fix: project files' charset settings doesn't work correctly
  - enhancement: add exec charset option to compiler set settings
  - enhancement: delete to word begin /delete to word end
  - fix: when open a file, all blank lines's indents are removed.
  - fix: indent lines displayed at wrong position, when there are folded lines
  - fix: if editor's active line color is disabled, caret's position may not be correct redrawn
  - fix: insert code snippets will crash, if current compiler set's include dir list is not empty and lib dir list is empty
  - fix: search around option can't be disabled
  - enhancement: show a confirm dialog when search/replace around
  - enhancement: auto zoom ui when screen's zoom factor changed (windows)
  - enhancement: parser not called when open a file, if option "clean parser symbols when hidden" is turned on.
  
Red Panda C++ Version 0.13.2
  - fix: "delete and exit" button in the environtment / folder option page doesn't work correctly 
  - fix: crash when closing the options dialog under Ubuntu 20.04 LTS ( no memory leak now)
  - enhancement: can add non-code file in templates
  - enhancement: if there's no selection when copy/cut, select currect line by default
  - enhancement: support ligatures in fonts like fira code ( disabled by default, can be turned on in options dialog's editor font page)
  - enhancement: add "minimum id length required to show code completion" to the options dialog's editor code completion page
  - enhancement: modify values in the memory view while debugging
  - enhancement: auto update watch, local and memory view after expression evaluated
  - enhancement: auto update watch, local and memory view after memory modified
  - enhancement: modify values in the watch view by double click
  - fix: crash when refactor symbol and cursor is at the end of the identifier
  - fix: refactor symbol doesn't work for 1-length identifiers
  - enhancement: redirect stdio to a file while debugging ( must use gdb server mode to debug)
  - fix: parser can't correctly handle variable definitions that don't have spaces like 'int*x';
  - fix: parser can't correctly handle function parameters like 'int *x' 
  - fix: caret dispears when at '\t' under Windows  7
  - enhancement: ctrl+up/down scrolls in the editor
  - enhancement: add "wrap around" option to find/replace
  - fix: project's icon setting is not correctly saved
  - fix: project's type setting won't be saved
  - fix: If project's compiler set is not the same with the default compiler set, auto openned project's file will use wrong compiler set to do syntax check.
  - fix: open a project file through "File"->"Open" will not correctly connect it with the project internally
  - fix: wrong project program directory parameter is sent to the debugger
  - enhancement: better behavior of mouse tips
  - fix: in linux, projects no need of winres to be built

Red Panda C++ Version 0.13.1
 - enhancement: suppoort localization info in project templates
 - change: template / project files use utf-8 encoding instead of ANSI
 - fix: .rc file shouldn't be syntax checked
 - enhancement: auto save/restore size of the new project dialog
 - fix: new project dialog's tab bar should fill all empty spaces
 - enhancement: add raylib to autolinks
 - enhancement: distribute raylib with integrated gcc

Red Panda C++ Version 0.12.7
 - change: make current build system follow FHS specifications
 - fix: crash when close settings dialog in Ubuntu 20.04 (but we'll leak memory now...)
 - enhancement: add raylib.h to autolink
 - fix: shouldn't generate default autolink settings in linux
 - fix: shouldn't auto add /bin/gcc to compiler sets
 - fix: if a dir duplicates in PATH, don't add it to compiler sets repeatedly
 - enhancement: add "--sanitize=address" to compile option in the Debug compiler set in Linux 
 - enhancement: auto sort files in the project view

Red Panda C++ Version 0.12.6
 - fix: heartbeat for gdb server async command shouldn't disable actions
 - fix: problem cases doesn't use svg icons
 - fix: problem's title info not updated after running cases 
 - enhancement: open the corresponding source file from problem's context menu
 - fix: debugger's "continue" button not correctly disabled
 - change: use libicu instead of ConvertUTF.c under Linux
 - change depends to qt 5.12 instead of 5.15

Red Panda C++ Version 0.12.5
 - fix: compile error in linux
 - fix: can't receive gdb async output for commands
 - fix: can't reformat code
 - enhancement: add option for setting astyle path
 - fix: wrong file wildcard (*.*) in linux
 - fix: open terminal in linux
 - fix: wrong executable filename for source files in linux
 - enhancement: console pauser for linux 
 - enhancement: redirect input to program in linux
 - enhancement: detach pausing console window
 - rename to Red Pand C++

Version 0.12.4 For Dev-C++ 7 Beta
 - change: add copyright infos to each source file
 - fix: watch and local infos not updated when changing current frame in the call stack panel
 - enhancement: pause the debugging program (The debugger should work under gdb server mode, which is turned off by default in windows)

Version 0.12.3 For Dev-C++ 7 Beta
 - enhancement: basic linux compatibility
 - enhancement: debug with gdb server

Version 0.12.2 For Dev-C++ 7 Beta
 - enhancement: auto find compiler sets in the PATH 
 - change: path for iconsets
 - enhancement: select icon sets in options dialog ( but we  have only 1 icon set now...)

Version 0.12.1 For Dev-C++ 7 Beta
 - fix: error when drag&drop in editors

Version 0.12.0 For Dev-C++ 7 Beta
 - enhancement: enable run/debug/compile when console program finished but pausing.

Version 0.11.5 For Dev-C++ 7 Beta
 - fix: step into instruction and step over instruction not correctly disabled when cpu dialog is created
 - enhancement: icons in all dialogs auto change size with fonts 
 - enhancement: save/restore sizes of CPU dialog and settings dialog

Version 0.11.4 For Dev-C++ 7 Beta
 - fix: compiler set's custom link parameters  not used when compiling
 - fix: code completion doesn't work when input inside () or []
 - fix: auto indent processing error when input '{' in the middle of if statement
 - fix: left and right gutter offset settings not  correctly saved
 - fix: symbol completion for '<>' in the preprocessor line not work
 - enhancement: new svg icons set
 - enhancement: the size of icons in the main window zooms with font size

Version 0.11.3 For Dev-C++ 7 Beta
 - fix: use pixel size for fonts, to fit different dpi in multiple displays
 - enhancement: use the new expression parser to parse info for tips
 - enhancement: better highlight processing for preprocess directives 
 - enhancement: use the new expression parser to implement rename symbol
 - fix: rename symbol shouldn't remove empty lines

Version 0.11.2 For Dev-C++ 7 Beta
 - fix: button "run all problem cases" not disabled when compiling or debugging
 - enhancement: set font for problem case input/output textedits
 - enhancement: when run program with problem cases, updates output immediately (note: stdout of the program running with problem cases is fully buffered,
 so we need to fflush after each time output to stdout, or use setbuf(stdout,NULL) to turn the buffer off)
 - fix: current line of the disassembly in the cpu window not correctly setted
 - enhancement: add "step into one machine instruction" and "step over one machine instruction" in the cpu window
 - fix: can't correctly set TDM-GCC compiler
 - fix: auto add 32-bit compiler sets for TDM64-GCC

Version 0.11.1 For Dev-C++ 7 Beta
 - enhancement: Problem's test case shouldn't accept rich text inputs
 - enhancement: recalc layout info for code editors when dpi changed

Version 0.11.0 For Dev-C++ 7 Beta
 - enhancement: redesign the expression parser for code completion
 - fix: "make as default language" option in the project wizard doesn't work
 - fix: "ake as default language" option in the project wizard doesn't work
 - fix: typo errors in settings dialog
 - enhancement: console pauser clears STDIN buffer before show "press any key to continue..."
 - fix: path in macros should use system's path separator
 - fix: custom tools doesn't work
 - enhancement: add a demo for custom tool 

Version 0.10.4 For Dev-C++ 7 Beta
 - fix: can't correctly undo/redo indent 
 - fix: can't correctly undo/redo unindent
 - change: press tab when there are selections will do indent
 - change: press shift+tab when there are selections will do unindent
 - enhancement: press home will switch between begin of line and the position of fisrt non-space char
 - enhancement: press end will switch between end of line and the position of last non-space char 
 - enhancement: use "Microsoft Yahei" as the default UI font whe running in Simplified Chinese Windows

Version 0.10.3 For Dev-C++ 7 Beta
 - enhancement: treat files ended with ".C" or ".CPP"  as C++ files
 - enhancement: add option "ignore spaces when validating problem cases" to the "Executor"/"Problem Set" option tab.

Version 0.10.2 For Dev-C++ 7 Beta
 - fix: select by mouse can't correctly set mouse's column position
 - fix: dragging out of the editor and back will cause error
 - fix: dragging text from lines in the front to lines back will cause error
 - fix: dragging text onto itself should do nothing
 - fix：license info in the about dialog should be readonly
 - enhancement: change project name in the project view

Version 0.10.1 For Dev-C++ 7 Beta
 - fix: can't correctly expand watch expression that has spaces in it
 - fix: can't correctly display stl containers in watch
 - fix: the last line in the debug console is not correctly displayed
 - enhancement: scroll while dragging text in the editor
 - fix: dragging out of the editor shouldn't reset the caret back 

Version 0.10.0 For Dev-C++ 7 Beta
 - enhancement: use gdb/mi interface to  communicate with gdb debug session
 - enhancement: better display of watch vars
 - fix: project's modified flag not cleared after saved

Version 0.9.4 For Dev-C++ 7 Beta
 - fix: code formatter's "indent type" option not correctly saved

Version 0.9.3 For Dev-C++ 7 Beta
 - fix: the count in the title of issues view isn't correct
 - fix: columns calculation not correct when paint lines containing chinese characters
 - fix: restore caret position after reformat code
 - enhancement: ask user to rebuild project, when run/debug the project and it has been modified
 - fix: correct set the enabled state of "delete line"/"insert line"/"delete word"/"delete to BOL"/"delete to EOL" menu items
 - fix: undo "delete word"/"delete to BOL"/"delete to EOL" correct reset caret position

Version 0.9.2 For Dev-C++ 7 Beta
 - fix: gutter of the disassembly code control in the cpu info dialog is grayed
 - fix: problem set & problem views not correctly hidden when disabled in the executor / problem set options 
 - fix: executor / problem set options not correctly saved
 - fix: option "Move caret to the first non-space char in the current line when press HOME key" dosen't work fine.
 - fix: ctrl+left can't correctly move to the beginning of the last word
 - enhancement: add "delete line"/"duplicate line"/"delete word"/"delete to EOL"/"delete to BOL" in the edit menu
 - fix: crash when run "Project" / "Clean Make files"
 - fix: when make project and del non-existing files, shouldn't show error messages

Version 0.9.1 For Dev-C++ 7 Beta
 - enhancement: code completion suggestion for "__func__" variable
 - fix: ide failed to start, if there are errors in the compiler set settings
 - fix: numpad's enter key doesn't work
 - enhancement: code completion suggestion for phrase after long/short/signed/unsigned
 - enhancement: save/load default projects folder
 - enhancement: add editor general options "highlight current word" and "highlight matching braces"

Version 0.9.0 For Dev-C++ 7 Beta
 - fix: control keys in the numpad doesn't work in the editor
 - fix: project layout infos are wrongly saved to registry 
 - fix: project layout infos are not correctly saved/loaded

Version 0.8.11 For Dev-C++ 7 Beta
 - fix: text color for cpu info dialog not correctly setted

Version 0.8.10 For Dev-C++ 7 Beta
 - fix: Shouldn't update auto link settings, if the header name to be modified is unchanged
 - fix: add unit to project not correctly set new unit file's encoding
 - fix: correctly set encoding for the new added project unit file
 - fix: if there's a project openned, new file should ask user if he want to add the new file to the project
 - fix: when adding a file openned in the editor to the project, properties of it are not correctly setted.
 - enhancement: when remove a file from the project, also ask if user want to remove it from disk
 - fix: double click a project's .dev file in the Files panel should load the project

Version 0.8.9 For Dev-C++ 7 Beta
 - fix: text color of labels in statusbar not correctly updated when change theme

Version 0.8.8 For Dev-C++ 7 Beta
 - enhancement: drag & drop text in the editor
 - enhancement: auto calcuate caret line size basing on font size
 - enhancement: shift+mouse wheel to scroll horizontally 
 - fix: greatly reduces paste time 
 - fix: auto indent shouldn't use preprocessor's indent to calculate 
 - fix: option "don't add leading zeros to line numbers" not work
 - fix: "collapse all" and "uncollapse all" doesn't work

Version 0.8.7 For Dev-C++ 7 Beta
 - enhancement: auto indent line to column 1 when enter '#' at beginning of line
 - fix: when enter '{' or '}' at beginning of line, auto indent will remove all contents of the line
 - fix: auto indent should be turned off when reformat code
 - fix: auto indent should be turned off when replace in code 

Version 0.8.6 For Dev-C++ 7 Beta
 - enhancement: greatly reduces memory usage for symbol parsing ( memory needed for bits/stdc++.h reduced from 150m+ to 80m+)
 - fix: currect compiler set not correctly updated when switch between normal file and project file
 - fix: editor auto save settings not saved and applied
 - fix: only auto save files that has new modifications 
 - fix: correctly auto save files with it's own name

Version 0.8.5 For Dev-C++ 7 Beta
 - enhancement: use lighter color to draw menu seperators
 - enhancement: differentiate selected and unselected tab bars

Version 0.8.4 For Dev-C++ 7 Beta
 - enhancement: auto save/load the default open folder in the configuration file
 - fix: shouldn't auto add '()' when char succeeding the completed function name is '('
 - fix: can't show code completion popup if symbol is proceed with an operator '~' ( and it's not a destructor)
 - fix: can't show code completion popup when define MACRO
 - fix: can't debug files with chinese characters in the path

Version 0.8.3 For Dev-C++ 7 Beta
 - enhancement: View menu
 - enhancement: hide/show statusbar
 - enhancement: hide/show left/bottom tool window bars
 - enhancement: hide/show individual left/bottom tool window

Version 0.8.2 For Dev-C++ 7 Beta
 - fix: highlighter can't correctly find the end of ANSI C-style Comments
 - enhancement: add default color scheme to themes. Change theme option will change color scheme too.
 - fix: when changing options in the option dialog's color scheme panle, color of the demo editor won't be not correctly updated
 - enhancement: auto clear parsed symbols when the editor is hidden ( to reduce memory usage of un-active editors)
 - fix: when inputing in the editor, correctly set the position of the input method panel
 - fix: correctly display watch & local variable names when debugging

Version 0.8.1 For Dev-C++ 7 Beta
 - fix: ConsolePaurser.exe only exits when press ENTER
 - fix: input/output/expected textedit in the problem view shouldn't autowrap lines
 - fix: Red Panda C++ will freeze when receiving contents from Competitve Companion in chrome/edge
 - enhancement: when problem from competitive companion received, activate RedPanda C++ if it's minimized.
 - enhancement: when problem from competitive companion received, show the problem and problem set views.
 - enhancement: set problem's answer source file 
 - enhancement: open the problem's answer source file in editor
 - fix: if the proceeding line ends with ':' in comments, current line should not indent
 - enhancement: right click the problem set name label to rename it
 - change: memory view and locals view use debug console's font settings
 - fix: one line 'while' statement dosen't correctly indents
 - fix: line start with  '{' that follow an un-ended 'if'/'for' statement is not correctly un-indented
 - fix: multi-line comments indents calculation
 - fix: Installer should install the app in "program files", not "program files (x86)"
 - fix: symbol completion for '/*' not work
 - fix: javadoc-style docstring indents calculation
 - fix: indents calculation for the line succeeding "*/"

Version 0.8 For Dev-C++ 7 Beta
 - fix: find in the current file is not correcly saved in the search history
 - fix: hit info not correctly displayed in the search result view
 - fix: If find in files found no hits, search result view will not be shown.
 - fix: wront indents when paste one line content
 - fix: Results of "find symbol usage" in project not correctly set in the search result view
 - change: turn on gcc compiler's "-pipe" option by default, to use pipe instead of temp files in compiliation (and make the life of SSD longer)
 - fix: correctly save input histories for the find combo box in the Find dialog
 - fix: can't correctly test if it's not running in green mode

Version 0.7.8
 - enhancement: In problem view's output control, indicates which line is different with the expected
 - fix: current input/expected not correctly applied when save/run problem cases
 - fix: colors of the syntax issues view are not correctly set using the current color sheme
 - change: The error color of color scheme "vs code" 
 - add: "C Reference" in the help menu
 - fix: Custom editor colors shouldn't be tested for high contrast with the default background color
 - fix: Custom color settings not correctly displayed in the options widget
 - enhancement: add hit counts in the search result view
 - fix: editor actions' state not correctly updated after close editors.
 - fix: When replace in the editor, "Yes to All" and "No" button doesn't work correctly.
 - fix: crash when editing non-c/c++ files
 - enhancement: set the alpha value of scheme colors
 - enhancement: can use symbols' own foreground color to draw selection or the current line
 - enhancement: can use different colors to highlight the current word and the selections
 - enhancement: can set editor's default background / foreground color. They must be setted to make the custom color schemes correctly.
 - enhancement: can set the color for the current line's number in the gutter
 - all predefined color schemes updated. 
 - enhancement: check syntax/parse symbols when modifed and cursor's line changed.
 - enhancement: edit problem properties
 - enhancement: show problem description in the problem name lable's tooltip

Version 0.7.7
 - enhancement: Problem Set 
 - enhancement: Competitive Companion Support
 - change: "save" action will be enabled no matter contents in the current editor is modified or not
 - fix: focus not correctly set when the current editor is closed
 - fix: can't parse old c-style enum variable definition like "enum Test test;"
 - fix: remove the file change monitor if it's remove from the disk
 - fix: don't test if a file is writable before save to it (because qt can't do that test reliably).
 - fix: when search in project, files opened for search shouldn't be parsed for symbols.
 - fix: when search in project, the search history is not correctly updated.

Version 0.7.6
 - change: don't auto insert a new line when input an enter between '(' and ')' or between '[' and ']' (indent instead)
 - enhancement: the line containing '}' will use the indents of the matching '{' line, instead of just unindent one level
 - enhancement: the line containing 'public:' / 'private:' / 'protected:' / 'case *:' will use of indents of the surrounding '{' line, instead of just unindent one level
 - enhancement: correctly handle auto indents for multi-level embedding complex statements like 'for(...) if (...) printf();
 - change: Don't use 'pause' in the console pauser, in case of privilege problems.
 - enhancement: correctly handle auto indents for statement span many lines;
 - enhancment: only use colors have good contrasts with the background in the class browser and code completion suggestion window
 - fix: bottom and left panel properties not correctly saved when hiding the main window
 - fix: When debugging, if value of the variable pointed by the mouse cursor is too long, tooltip will fill the whole screen.

Version 0.7.5
 - enhancement: more accurate auto indent calculation
 - change: remove "add indent" option in the editor general options widget ( It's merged with "auto indent" option)
 - enhancement: auto insert a new line when input an enter between '(' and ')' or between '[' and ']'
 - fix: correctly updates cursor position when pasting from clipboard
 - enhancement: auto unindent when input protected: public: private: case *:
 - enhancement: can use PageDown / PageUp / Home / End to scroll in the auto completion popup

Version 0.7.4
 - fix: when debug a project, and have breakpoints that not in opened editors, dev-cpp will crash
 - fix: when a file is parsing in background, exit dev-cpp will crash
 - fix: "tab to spaces" option in the editor general options widget doesn't work
 - fix: when remove all breakpoints in the debug breakpoint view,  debug tags in the opened editors are not correctly updated.
 - change: when start debuging, show local view instead of the debug console.
 - update bundled compiler to msys2 mingw-w64 gcc 11.2 and gdb 10.2
 - update bundled xege to the lastest git build

Version 0.7.3
 - enhancement: icons in project view
 - fix: sometimes option widget will show confirm dialog even not changed
 - enhancement: only editor area will receive file drop events
 - enhancement: change project file's folder by drag and drop in the project view
 - enhancement: open project file by drag it to the editor area
 - fix: the "add bookmark" menu item is not correctly disabled on a bookmarked line
 - enhancement: "use utf8 by default" in editor's misc setting
 - fix: syntax issues not correctly cleared when the file was saved as another name.
 - enhancement: when running a program, redirect a data file to its stdin
 - fix: can't correctly handle '&&' and '||' in the #if directive (and correctly parse windows.h header file)
 - fix: crash when create an empty project
 - fix: syntax issues' filepath info not correct when build projects 
 - fix: compiler autolinks options widget don't show autolink infos
 - fix: autolink parameters are repeated when compile single files
 - enhancement: prompt for filename when create new project unit file
 - fix: options not correctly set when change compiler set in the project settings
 - change: reset compiler settings when change the project compiler set
 - enhancement: use project's compiler set type info to find a nearest system compiler set, when the project compiler set is not valid.
 - fix: toolbar's compiler set info not correctly updated when change it in the project settings dialog.

Version 0.7.2
 - fix: rainbow parenthesis stop functioning when change editor's general options
 - fix: issue count not correctly displayed when syntax check/compile finished
 - fix: function declaration's parameters not correctly parsed, if it have a definition which have different parameter names
 - fix: file path seperator used in the app is not unified, and cause errors somtimes.


Version 0.7.1
 - fix: can't add bookmark at a breakpoint line
 - fix: app name in the title bar not translated
 - use new app icon

Version 0.7.0
 - fix: Backspace still works in readonly mode
 - fix: save as file dialog's operation mode is not correct
 - enhancement: fill indents in the editor (Turned off by default)
 - enhancement: new file template
 - fix: when an editor is created, its caret will be displayed even it doesn't have focus
 - enhancement: set mouse wheel scroll speed in the editor general option tab ( 3 lines by default)
 - fix: don't highlight '#' with spaces preceeding it as error
 - fix: correctly handle integer with 'L' suffix in #if directives ( so <thread> can be correctly parsed )
 - enhancement: bookmark view
 - enhancement: autosave/load bookmarks
 - enhancement: autosave/load breakpoints 
 - enhancement: autosave/load watches
 - implement: files view
 - fix: app's title not update when editor closed

Version 0.6.8
 - enhancement: add link to cppreference in the help menu
 - fix: add mutex lock to prevent editor crash in rare conditions
 - fix: In the create project dialog, the browser button doesn't work
 - enhancement: use QStyle to implement the dark style, and better control of the style's look and feel 
 - enhancement: add link to EGE website, if locale is zh_CN

Version 0.6.7
 - fix: messages send to the gdb process's standard error are not received
 - adjust: the max value of the debug console's vertical scrollbar.
 - fix: shfit+click not correctly set selection's end
 - fix: ctrl+home/end not correctly set cursor to start/end of the editor
 - enhancement: click the encoding info in the statusbar will show encoding menu

Version 0.6.6
 - fix: crash when create new file
 - implement: two editor view

Version 0.6.5
 - implement: export as rtf / export as html
 - fix: the contents copied/exported are not correctly syntax colored
 - fix: stop execution if the source file is not compiled and user choose not to compile it
 - fix: not correctly parse gdb's output
 - fix: path not correctly setted for the debugger process
 - fix: indent line not correctly drawed
 - enhancement: use rainbox color to draw indent guide lines
 - implement: highlight matching brackets

Version 0.6.4
 - fix: code completion popup not show after '->' inputted
 - fix: font styles in the color scheme settings not in effect
 - fix: editor's font style shouldn't affect gutter's font style
 - change: enable copy as HTML by default
 - fix: unneeded empty lines when copy as HTML

Version 0.6.3
 - fix: should use c++ syntax to check ".h" files
 - fix: can't copy contents in a readonly editor
 - fix: project's file not correctly syntaxed when open in editor
 - libturtle update: add fill() / setBackgroundColor() /setBackgroundImage() functions
 - fix: code fold calculation not correct, when editing code
 - fix: can't correctly find definition of the symbols in namespace
    
Version 0.6.2 
 - fix: The Enter key in the numpad doesn't work
 - fix: The compiled executable not fully write to the disk before run it
 - fix: settings object not correctly released when exit
 - fix: shouldn't check syntax when save modifications before compiling
 - fix: shouldn't scroll to the end of the last line when update compile logs
 - fix: can't debug project

Version 0.6.1
 - fix: editor deadlock

Version 0.6.0
 - fix: old data not displayed when editing code snippets
 - fix: shift-tab for unindent not work
 - fix: can't save code snippets modifications
 - fix: errors in code snippet processing
 - change: auto open a new editor at start
 - enhancement: todo view
 - add: about dialog
 - implement: correctly recognize clang (msys2 build)
 - enhancement: don't add encoding options when using clang to compile (clang only support utf-8)
 - enhancement: find occurence in project
 - implement: rename symbol in file
 - enhancement: replace in files
 - enhancement: rename symbol in project (using search symbol occurence and replace in files)
 - fix: search in files
 - implement: register file associations
 - implement: when startup , open file provided by command line options
 - implement: open files pasted by clipboard
 - fix: code fold parsing not correct
 - enhancement: support #include_next (and clang libc++)
 - fix:  hide popup windows when the editor is closed
 - enhancement: show pinyin when input chinese characters
 - fix: add mutex lock to prevent rare conditions when editor is modifying and the content is read
 - fix: makefile generated for static / dynamic library projects not right
 - fix: editors disappeared when close/close all
 - implement: config shortcuts
 - implement: handle windows logout message
 - fix: editor's inproject property not correctly setted (and may cause devcpp to crash when close project)
 - implement: print
 - implement: tools configuration
 - implement: default settings for code formatter
 - implement: remove all custom settings

Version 0.5.0
 - enhancement: support C++ using type alias;
 - fix: when press shift, completion popu window will hide
 - enhancement: options in debugger setting widget, to skip system/project/custom header&project files when step into
 - fix: icon not correctly displayed for global variables in the class browser 
 - enhancement: more charset selection in the edit menu
 - fix: can't correctly get system default encoding name when save file
 - fix: Tokenizer can't correctly handle array parameters
 - fix: debug actions enabled states not correct updated when processing debug mouse tooltips
 - enhancement: redesign charset selection in the project options dialog's file widget
 - fix: can't correctly load last open files / project with non-asii characters in path
 - fix: can't coorectly load last open project
 - fix: can't coorectly show code completion for array elements
 - enhancement: show caret when show code/header completions
 - fix: correctly display pointer info in watch console
 - implement: search in project
 - enhancement: view memory when debugging
 - implement: symbol usage count
 - implement: user code snippet / template
 - implement: auto generate javadoc-style docstring for functions
 - enhancement: use up/down key to navigate function parameter tooltip
 - enhancement: press esc to close function parameter tooltip
 - enhancement: code suggestion for unicode identifiers
 - implement: context menu for debug console
 - fix: errors in debug console
 - fix: speed up the parsing process of debugger
 - ehancement: check if debugger path contains non-ascii characters (this will prevent it from work

Version 0.2.1
 - fix: crash when load last opens

Version 0.2
 - fix : header file completion stop work when input '.'
 - change: continue to run / debug if there are compiling warnings (but no errors)
 - enhancement: auto load last open files at start
 - enhancement: class browser syntax colors and icons
 - enhancement: function tips
 - enhancement: project support
 - enhancement: paint color editor use system palette's disabled group color
 - fix: add watch not work when there's no editor openned;
 - enhancement: rainbow parenthesis
 - enhancement: run executable with parameters
 - add: widget for function tips
 - enhancement: options for editor tooltips
 - fix: editor folder process error
