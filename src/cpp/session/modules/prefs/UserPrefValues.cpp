/* UserPrefValues.cpp
 *
 * Copyright (C) 2009-19 by RStudio, Inc.
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */
 
/* DO NOT HAND-EDIT! This file is automatically generated from the formal user preference schema
 * JSON. To add a preference, add it to "user-prefs-schema.json", then run "generate-prefs.R" to
 * rebuild this file.
 */

#include <session/prefs/UserPrefValues.hpp>

namespace rstudio {
namespace session {
namespace modules {
namespace prefs {

/**
 * Whether to run .Rprofile again after resuming a suspended R session.
 */
bool UserPrefValues::runRprofileOnResume()
{
   return readPref<bool>("run_rprofile_on_resume");
}

/**
 * Whether to save the workspace after the R session ends.
 */
std::string UserPrefValues::saveWorkspace()
{
   return readPref<std::string>("save_workspace");
}

/**
 * Whether to load the workspace when the R session begins.
 */
bool UserPrefValues::loadWorkspace()
{
   return readPref<bool>("load_workspace");
}

/**
 * The initial working directory for new R sessions.
 */
std::string UserPrefValues::initialWorkingDirectory()
{
   return readPref<std::string>("initial_working_directory");
}

/**
 * The CRAN mirror to use.
 */
std::string UserPrefValues::cranMirror()
{
   return readPref<std::string>("cran_mirror");
}

/**
 * The name of the default Bioconductor mirror.
 */
std::string UserPrefValues::bioconductorMirrorName()
{
   return readPref<std::string>("bioconductor_mirror_name");
}

/**
 * The URL of the default Bioconductor mirror.
 */
std::string UserPrefValues::bioconductorMirrorUrl()
{
   return readPref<std::string>("bioconductor_mirror_url");
}

/**
 * Whether to always save the R console history.
 */
bool UserPrefValues::alwaysSaveHistory()
{
   return readPref<bool>("always_save_history");
}

/**
 * Whether to remove duplicate entries from the R console history.
 */
bool UserPrefValues::removeHistoryDuplicates()
{
   return readPref<bool>("remove_history_duplicates");
}

/**
 * Show the result of the last expression (.Last.value) in the Environment pane.
 */
bool UserPrefValues::showLastDotValue()
{
   return readPref<bool>("show_last_dot_value");
}

/**
 * The line ending format to use when saving files.
 */
std::string UserPrefValues::lineEndingConversion()
{
   return readPref<std::string>("line_ending_conversion");
}

/**
 * Whether to use newlines when saving Makefiles.
 */
bool UserPrefValues::useNewlinesInMakefiles()
{
   return readPref<bool>("use_newlines_in_makefiles");
}

/**
 * The terminal shell to use on Windows.
 */
std::string UserPrefValues::windowsTerminalShell()
{
   return readPref<std::string>("windows_terminal_shell");
}

/**
 * The terminal shell to use on POSIX operating systems (MacOS and Linux).
 */
std::string UserPrefValues::posixTerminalShell()
{
   return readPref<std::string>("posix_terminal_shell");
}

/**
 * The fully qualified path to the custom shell command to use in the Terminal tab.
 */
std::string UserPrefValues::customShellCommand()
{
   return readPref<std::string>("custom_shell_command");
}

/**
 * The command-line options to pass to the custom shell command.
 */
std::string UserPrefValues::customShellOptions()
{
   return readPref<std::string>("custom_shell_options");
}

/**
 * Show line numbers in RStudio's code editor.
 */
bool UserPrefValues::showLineNumbers()
{
   return readPref<bool>("show_line_numbers");
}

/**
 * Highlight the selected word in RStudio's code editor.
 */
bool UserPrefValues::highlightSelectedWord()
{
   return readPref<bool>("highlight_selected_word");
}

/**
 * Highlight the selected line in RStudio's code editor.
 */
bool UserPrefValues::highlightSelectedLine()
{
   return readPref<bool>("highlight_selected_line");
}

/**
 * Layout of panes in the RStudio workbench.
 */
bool UserPrefValues::panes()
{
   return readPref<bool>("panes");
}

/**
 * Whether to insert spaces when pressing the Tab key.
 */
bool UserPrefValues::useSpacesForTab()
{
   return readPref<bool>("use_spaces_for_tab");
}

/**
 * The number of spaces to insert when pressing the Tab key.
 */
int UserPrefValues::numSpacesForTab()
{
   return readPref<int>("num_spaces_for_tab");
}

/**
 * Whether to automatically detect indentation settings from file contents.
 */
bool UserPrefValues::autoDetectIndentation()
{
   return readPref<bool>("auto_detect_indentation");
}

/**
 * Whether to show the margin guide in the RStudio code editor.
 */
bool UserPrefValues::showMargin()
{
   return readPref<bool>("show_margin");
}

/**
 * Whether to flash the cursor off and on.
 */
bool UserPrefValues::blinkingCursor()
{
   return readPref<bool>("blinking_cursor");
}

/**
 * The number of columns of text after which the margin is shown.
 */
int UserPrefValues::marginColumn()
{
   return readPref<int>("margin_column");
}

/**
 * Whether to show invisible characters, such as spaces and tabs, in the RStudio code editor.
 */
bool UserPrefValues::showInvisibles()
{
   return readPref<bool>("show_invisibles");
}

/**
 * Whether to show indentation guides in the RStudio code editor.
 */
bool UserPrefValues::showIndentGuides()
{
   return readPref<bool>("show_indent_guides");
}

/**
 * Whether continue comments (by inserting the comment character) after adding a new line.
 */
bool UserPrefValues::continueCommentsOnNewline()
{
   return readPref<bool>("continue_comments_on_newline");
}

/**
 * The keybindings to use in the RStudio code editor.
 */
std::string UserPrefValues::editorKeybindings()
{
   return readPref<std::string>("editor_keybindings");
}

/**
 * Whether to insert matching pairs, such as () and [], when the first is typed.
 */
bool UserPrefValues::insertMatching()
{
   return readPref<bool>("insert_matching");
}

/**
 * Whether to insert spaces around the equals sign in R code.
 */
bool UserPrefValues::insertSpacesAroundEquals()
{
   return readPref<bool>("insert_spaces_around_equals");
}

/**
 * Whether to insert parentheses after function completions.
 */
bool UserPrefValues::insertParensAfterFunctionCompletion()
{
   return readPref<bool>("insert_parens_after_function_completion");
}

/**
 * Whether to attempt completion of multiple-line statements when pressing Tab.
 */
bool UserPrefValues::tabMultilineCompletion()
{
   return readPref<bool>("tab_multiline_completion");
}

/**
 * Whether to show help tooltips for functions when the cursor has not been recently moved.
 */
bool UserPrefValues::showHelpTooltipOnIdle()
{
   return readPref<bool>("show_help_tooltip_on_idle");
}

/**
 * Which kinds of delimiters can be used to surround the current selection.
 */
std::string UserPrefValues::surroundSelection()
{
   return readPref<std::string>("surround_selection");
}

/**
 * Whether to enable code snippets in the RStudio code editor.
 */
bool UserPrefValues::enableSnippets()
{
   return readPref<bool>("enable_snippets");
}

/**
 * When to use auto-completion for R code in the RStudio code editor.
 */
std::string UserPrefValues::codeCompletion()
{
   return readPref<std::string>("code_completion");
}

/**
 * When to use auto-completion for other languages (such as JavaScript and SQL) in the RStudio code editor.
 */
std::string UserPrefValues::codeCompletionOther()
{
   return readPref<std::string>("code_completion_other");
}

/**
 * Whether to always use code completion in the R console.
 */
bool UserPrefValues::consoleCodeCompletion()
{
   return readPref<bool>("console_code_completion");
}

/**
 * The number of milliseconds to wait before offering code suggestions.
 */
int UserPrefValues::codeCompletionDelay()
{
   return readPref<int>("code_completion_delay");
}

/**
 * The number of characters in a symbol that can be entered before completions are offered.
 */
int UserPrefValues::codeCompletionCharacters()
{
   return readPref<int>("code_completion_characters");
}

/**
 * Whether to show function signature tooltips during autocompletion.
 */
bool UserPrefValues::showFunctionSignatureTooltips()
{
   return readPref<bool>("show_function_signature_tooltips");
}

/**
 * Whether to show diagnostic messages (such as syntax and usage errors) for R code as you type.
 */
bool UserPrefValues::showDiagnosticsR()
{
   return readPref<bool>("show_diagnostics_r");
}

/**
 * Whether to show diagnostic messages for C++ code as you type.
 */
bool UserPrefValues::showDiagnosticsCpp()
{
   return readPref<bool>("show_diagnostics_cpp");
}

/**
 * Whether to show diagnostic messages for other types of code (not R or C++).
 */
bool UserPrefValues::showDiagnosticsOther()
{
   return readPref<bool>("show_diagnostics_other");
}

/**
 * Whether to show style diagnostics (suggestions for improving R code style)
 */
bool UserPrefValues::styleDiagnostics()
{
   return readPref<bool>("style_diagnostics");
}

/**
 * Whether to check code for problems after saving it.
 */
bool UserPrefValues::diagnosticsOnSave()
{
   return readPref<bool>("diagnostics_on_save");
}

/**
 * Whether to run code diagnostics in the background, as you type.
 */
bool UserPrefValues::backgroundDiagnostics()
{
   return readPref<bool>("background_diagnostics");
}

/**
 * The number of milliseconds to delay before running code diagnostics in the background.
 */
int UserPrefValues::backgroundDiagnosticsDelayMs()
{
   return readPref<int>("background_diagnostics_delay_ms");
}

/**
 * Whether to run diagnostics in R function calls.
 */
bool UserPrefValues::diagnosticsInRFunctionCalls()
{
   return readPref<bool>("diagnostics_in_r_function_calls");
}

/**
 * Whether to check arguments to R function calls.
 */
bool UserPrefValues::checkArgumentsToRFunctionCalls()
{
   return readPref<bool>("check_arguments_to_r_function_calls");
}

/**
 * Whether to check for unexpected variable assignments inside R function calls.
 */
bool UserPrefValues::checkUnexpectedAssignmentInFunctionCall()
{
   return readPref<bool>("check_unexpected_assignment_in_function_call");
}

/**
 * Whether to generate a warning if a variable is used without being defined in the current scope.
 */
bool UserPrefValues::warnIfNoSuchVariableInScope()
{
   return readPref<bool>("warn_if_no_such_variable_in_scope");
}

/**
 * Whether to generate a warning if a variable is defined without being used in the current scope
 */
bool UserPrefValues::warnVariableDefinedButNotUsed()
{
   return readPref<bool>("warn_variable_defined_but_not_used");
}

/**
 * Whether to automatically discover and offer to install missing R package dependenices.
 */
bool UserPrefValues::autoDiscoverPackageDependencies()
{
   return readPref<bool>("auto_discover_package_dependencies");
}

/**
 * Whether to ensure that source files end with a newline character.
 */
bool UserPrefValues::autoAppendNewline()
{
   return readPref<bool>("auto_append_newline");
}

/**
 * Whether to strip trailing whitespace from each line when saving.
 */
bool UserPrefValues::stripTrailingWhitespace()
{
   return readPref<bool>("strip_trailing_whitespace");
}

/**
 * Whether to save the position of the cursor when a fille is closed, restore it when the file is opened.
 */
bool UserPrefValues::restoreSourceDocumentCursorPosition()
{
   return readPref<bool>("restore_source_document_cursor_position");
}

/**
 * Whether to automatically re-indent code when it's pasted into RStudio.
 */
bool UserPrefValues::reindentOnPaste()
{
   return readPref<bool>("reindent_on_paste");
}

/**
 * Whether to vertically align arguments to R function calls during automatic indentation.
 */
bool UserPrefValues::verticallyAlignArgumentsIndent()
{
   return readPref<bool>("vertically_align_arguments_indent");
}

/**
 * Whether to soft-wrap R source files, wrapping the text for display without inserting newline characters.
 */
bool UserPrefValues::softWrapRFiles()
{
   return readPref<bool>("soft_wrap_r_files");
}

/**
 * Whether to focus the R console after executing an R command from a script.
 */
bool UserPrefValues::focusConsoleAfterExec()
{
   return readPref<bool>("focus_console_after_exec");
}

/**
 * The style of folding to use.
 */
std::string UserPrefValues::foldStyle()
{
   return readPref<std::string>("fold_style");
}

/**
 * Whether to automatically save scripts before executing them.
 */
bool UserPrefValues::saveBeforeSourcing()
{
   return readPref<bool>("save_before_sourcing");
}

/**
 * Whether to use syntax highlighting in the R console.
 */
bool UserPrefValues::syntaxColorConsole()
{
   return readPref<bool>("syntax_color_console");
}

/**
 * Whether to allow scrolling past the end of a file.
 */
bool UserPrefValues::scrollPastEndOfDocument()
{
   return readPref<bool>("scroll_past_end_of_document");
}

/**
 * Whether to highlight R function calls in the code editor.
 */
bool UserPrefValues::highlightRFunctionCalls()
{
   return readPref<bool>("highlight_r_function_calls");
}

/**
 * The maximum number of characters to display in a single line in the R console.
 */
int UserPrefValues::consoleLineLengthLimit()
{
   return readPref<int>("console_line_length_limit");
}

/**
 * How to treat ANSI escape codes in the console.
 */
std::string UserPrefValues::ansiConsoleMode()
{
   return readPref<std::string>("ansi_console_mode");
}

/**
 * Whether to show a toolbar on code chunks in R Markdown documents.
 */
bool UserPrefValues::showInlineToolbarForRCodeChunks()
{
   return readPref<bool>("show_inline_toolbar_for_r_code_chunks");
}

/**
 * Whether to highlight code chunks in R Markdown documents with a different background color.
 */
bool UserPrefValues::highlightCodeChunks()
{
   return readPref<bool>("highlight_code_chunks");
}

/**
 * Whether to save all open, unsaved files before building the project.
 */
bool UserPrefValues::saveFilesBeforeBuild()
{
   return readPref<bool>("save_files_before_build");
}

/**
 * The default editor font size, in points.
 */
double UserPrefValues::fontSizePoints()
{
   return readPref<double>("font_size_points");
}

/**
 * The name of the color theme to apply to the text editor in RStudio.
 */
std::string UserPrefValues::editorTheme()
{
   return readPref<std::string>("editor_theme");
}

/**
 * The default character encoding to use when saving files.
 */
std::string UserPrefValues::defaultEncoding()
{
   return readPref<std::string>("default_encoding");
}

/**
 * Whether to show the toolbar at the top of the RStudio workbench.
 */
bool UserPrefValues::toolbarVisible()
{
   return readPref<bool>("toolbar_visible");
}

/**
 * The directory path under which to place new projects by default.
 */
std::string UserPrefValues::defaultProjectLocation()
{
   return readPref<std::string>("default_project_location");
}

/**
 * Whether to echo R code when sourcing it.
 */
bool UserPrefValues::sourceWithEcho()
{
   return readPref<bool>("source_with_echo");
}

/**
 * Whether to initialize new projects with a Git repo by default.
 */
bool UserPrefValues::newProjectGitInit()
{
   return readPref<bool>("new_project_git_init");
}

/**
 * The default engine to use when processing Sweave documents.
 */
std::string UserPrefValues::defaultSweaveEngine()
{
   return readPref<std::string>("default_sweave_engine");
}

/**
 * The default program to use when processing LaTeX documents.
 */
std::string UserPrefValues::defaultLatexProgram()
{
   return readPref<std::string>("default_latex_program");
}

/**
 * Whether to use Roxygen for documentation.
 */
bool UserPrefValues::useRoxygen()
{
   return readPref<bool>("use_roxygen");
}

/**
 * Whether to use RStudio's data import feature.
 */
bool UserPrefValues::useDataimport()
{
   return readPref<bool>("use_dataimport");
}

/**
 * The program to use to preview PDF files after generation.
 */
std::string UserPrefValues::pdfPreviewer()
{
   return readPref<std::string>("pdf_previewer");
}

/**
 * Whether to always enable the concordance for RNW files.
 */
bool UserPrefValues::alwaysEnableRnwConcordance()
{
   return readPref<bool>("always_enable_rnw_concordance");
}

/**
 * Whether to insert numbered sections in LaTeX.
 */
bool UserPrefValues::insertNumberedLatexSections()
{
   return readPref<bool>("insert_numbered_latex_sections");
}

/**
 * The language of the spelling dictionary to use for spell checking.
 */
std::string UserPrefValues::spellingDictionaryLanguage()
{
   return readPref<std::string>("spelling_dictionary_language");
}

/**
 * The list of custom dictionaries to use when spell checking.
 */
core::json::Object UserPrefValues::spellingCustomDictionaries()
{
   return readPref<core::json::Object>("spelling_custom_dictionaries");
}

/**
 * The number of milliseconds to wait before linting a document after it is loaded.
 */
int UserPrefValues::documentLoadLintDelay()
{
   return readPref<int>("document_load_lint_delay");
}

/**
 * Whether to ignore words in uppercase when spell checking.
 */
bool UserPrefValues::ignoreUppercaseWords()
{
   return readPref<bool>("ignore_uppercase_words");
}

/**
 * Whether to ignore words with numbers in them when spell checking.
 */
bool UserPrefValues::ignoreWordsWithNumbers()
{
   return readPref<bool>("ignore_words_with_numbers");
}

/**
 * Whether to enable real-time spellchecking by default.
 */
bool UserPrefValues::realTimeSpellchecking()
{
   return readPref<bool>("real_time_spellchecking");
}

/**
 * Whether to navigate to build errors.
 */
bool UserPrefValues::navigateToBuildError()
{
   return readPref<bool>("navigate_to_build_error");
}

/**
 * Whether to enable RStudio's Packages pane.
 */
bool UserPrefValues::packagesPaneEnabled()
{
   return readPref<bool>("packages_pane_enabled");
}

/**
 * Whether to use RCPP templates.
 */
bool UserPrefValues::useRcppTemplate()
{
   return readPref<bool>("use_rcpp_template");
}

/**
 * Whether to restore the last opened source documents when RStudio starts up.
 */
bool UserPrefValues::restoreSourceDocuments()
{
   return readPref<bool>("restore_source_documents");
}

/**
 * Whether to handle errors only when user code is on the stack.
 */
bool UserPrefValues::handleErrorsInUserCodeOnly()
{
   return readPref<bool>("handle_errors_in_user_code_only");
}

/**
 * Whether to automatically expand tracebacks when an error occurs.
 */
bool UserPrefValues::autoExpandErrorTracebacks()
{
   return readPref<bool>("auto_expand_error_tracebacks");
}

/**
 * Whether to check for new versions of RStudio when RStudio starts.
 */
bool UserPrefValues::checkForUpdates()
{
   return readPref<bool>("check_for_updates");
}

/**
 * Whether to show functions without source references in the Traceback pane while debugging.
 */
bool UserPrefValues::showInternalFunctions()
{
   return readPref<bool>("show_internal_functions");
}

/**
 * Where to display Shiny applications when they are run.
 */
std::string UserPrefValues::shinyViewerType()
{
   return readPref<std::string>("shiny_viewer_type");
}

/**
 * Where to display Shiny applications when they are run.
 */
std::string UserPrefValues::plumberViewerType()
{
   return readPref<std::string>("plumber_viewer_type");
}

/**
 * The default name to use as the document author when creating new documents.
 */
std::string UserPrefValues::documentAuthor()
{
   return readPref<std::string>("document_author");
}

/**
 * The path to the preferred R Markdown template.
 */
std::string UserPrefValues::rmdPreferredTemplatePath()
{
   return readPref<std::string>("rmd_preferred_template_path");
}

/**
 * Where to display R Markdown documents when they have completed rendering.
 */
std::string UserPrefValues::rmdViewerType()
{
   return readPref<std::string>("rmd_viewer_type");
}

/**
 * Whether to show verbose diagnostic information when publishing content.
 */
bool UserPrefValues::showPublishDiagnostics()
{
   return readPref<bool>("show_publish_diagnostics");
}

/**
 * Whether to check remote server SSL certificates when publishing content.
 */
bool UserPrefValues::publishCheckCertificates()
{
   return readPref<bool>("publish_check_certificates");
}

/**
 * Whether to use a custom certificate authority (CA) bundle when publishing content.
 */
bool UserPrefValues::usePublishCaBundle()
{
   return readPref<bool>("use_publish_ca_bundle");
}

/**
 * The path to the custom certificate authority (CA) bundle to use when publishing content.
 */
std::string UserPrefValues::publishCaBundle()
{
   return readPref<std::string>("publish_ca_bundle");
}

/**
 * Whether to show chunk output inline for ordinary R Markdown documents.
 */
bool UserPrefValues::rmdChunkOutputInline()
{
   return readPref<bool>("rmd_chunk_output_inline");
}

/**
 * Whether to show the document outline by default when opening R Markdown documents.
 */
bool UserPrefValues::showDocOutlineRmd()
{
   return readPref<bool>("show_doc_outline_rmd");
}

/**
 * Whether to automatically run an R Markdown document's Setup chunk before running other chunks.
 */
bool UserPrefValues::autoRunSetupChunk()
{
   return readPref<bool>("auto_run_setup_chunk");
}

/**
 * Whether to hide the R console when executing inline R Markdown chunks.
 */
bool UserPrefValues::hideConsoleOnChunkExecute()
{
   return readPref<bool>("hide_console_on_chunk_execute");
}

/**
 * The unit of R code to execute when the Execute command is invoked.
 */
std::string UserPrefValues::executionBehavior()
{
   return readPref<std::string>("execution_behavior");
}

/**
 * Whether to show the Terminal tab.
 */
bool UserPrefValues::showTerminalTab()
{
   return readPref<bool>("show_terminal_tab");
}

/**
 * Whether to use local echo in the Terminal.
 */
bool UserPrefValues::terminalLocalEcho()
{
   return readPref<bool>("terminal_local_echo");
}

/**
 * Whether to use websockets to communicate with the shell in the Terminal tab.
 */
bool UserPrefValues::terminalWebsockets()
{
   return readPref<bool>("terminal_websockets");
}

/**
 * Whether to automatically close the Terminal tab.
 */
bool UserPrefValues::terminalAutoClose()
{
   return readPref<bool>("terminal_auto_close");
}

/**
 * Whether to track and save changes to system environment variables in the Terminal.
 */
bool UserPrefValues::terminalTrackEnvironment()
{
   return readPref<bool>("terminal_track_environment");
}

/**
 * Whether to print the render command use to knit R Markdown documents in the R Markdown tab.
 */
bool UserPrefValues::showRmdRenderCommand()
{
   return readPref<bool>("show_rmd_render_command");
}

/**
 * Whether to enable moving text on the editing surface by clicking and dragging it.
 */
bool UserPrefValues::enableTextDrag()
{
   return readPref<bool>("enable_text_drag");
}

/**
 * Whether to show hidden files in the Files pane.
 */
bool UserPrefValues::showHiddenFiles()
{
   return readPref<bool>("show_hidden_files");
}

/**
 * The visibility of the Jobs tab.
 */
std::string UserPrefValues::jobsTabVisibility()
{
   return readPref<std::string>("jobs_tab_visibility");
}

/**
 * Whether to show the Launcher jobs tab in RStudio Pro.
 */
bool UserPrefValues::showLauncherJobsTab()
{
   return readPref<bool>("show_launcher_jobs_tab");
}

/**
 * How to sort jobs in the Launcher tab in RStudio Pro.
 */
std::string UserPrefValues::launcherJobsSort()
{
   return readPref<std::string>("launcher_jobs_sort");
}

/**
 * How to detect busy status in the Terminal.
 */
std::string UserPrefValues::busyDetection()
{
   return readPref<std::string>("busy_detection");
}

/**
 * A whitelist of apps that should not be considered busy in the Terminal.
 */
core::json::Object UserPrefValues::busyWhitelist()
{
   return readPref<core::json::Object>("busy_whitelist");
}

/**
 * The working directory to use when knitting R Markdown documents.
 */
std::string UserPrefValues::knitWorkingDir()
{
   return readPref<std::string>("knit_working_dir");
}

/**
 * Which objects to show in the document outline pane.
 */
std::string UserPrefValues::docOutlineShow()
{
   return readPref<std::string>("doc_outline_show");
}

/**
 * When to preview LaTeX mathematical equations when cursor has not moved recently.
 */
std::string UserPrefValues::latexPreviewOnCursorIdle()
{
   return readPref<std::string>("latex_preview_on_cursor_idle");
}

/**
 * Whether to wrap around when going to the previous or next editor tab.
 */
bool UserPrefValues::wrapTabNavigation()
{
   return readPref<bool>("wrap_tab_navigation");
}

/**
 * The theme to use for the main RStudio user interface.
 */
std::string UserPrefValues::globalTheme()
{
   return readPref<std::string>("global_theme");
}

/**
 * Whether to ignore whitespace when generating diffs of version controlled files.
 */
bool UserPrefValues::gitDiffIgnoreWhitespace()
{
   return readPref<bool>("git_diff_ignore_whitespace");
}

/**
 * Whether double-clicking should select a word in the Console pane.
 */
bool UserPrefValues::consoleDoubleClickSelect()
{
   return readPref<bool>("console_double_click_select");
}

/**
 * Whether a git repo should be initialized inside new projects by default.
 */
bool UserPrefValues::newProjGitInit()
{
   return readPref<bool>("new_proj_git_init");
}

/**
 * The root document to use when compiling PDF documents.
 */
std::string UserPrefValues::rootDocument()
{
   return readPref<std::string>("root_document");
}

/**
 * When to show the server home page in RStudio Server Pro.
 */
std::string UserPrefValues::showUserHomePage()
{
   return readPref<std::string>("show_user_home_page");
}

/**
 * Whether to reuse sessions when opening projects in RStudio Server Pro.
 */
bool UserPrefValues::reuseSessionsForProjectLinks()
{
   return readPref<bool>("reuse_sessions_for_project_links");
}

/**
 * Whether to enable RStudio's version control system interface.
 */
bool UserPrefValues::vcsEnabled()
{
   return readPref<bool>("vcs_enabled");
}

/**
 * The path to the Git executable to use.
 */
std::string UserPrefValues::gitExePath()
{
   return readPref<std::string>("git_exe_path");
}

/**
 * The path to the Subversion executable to use.
 */
std::string UserPrefValues::svnExePath()
{
   return readPref<std::string>("svn_exe_path");
}

/**
 * The path to the terminal executable to use.
 */
std::string UserPrefValues::terminalPath()
{
   return readPref<std::string>("terminal_path");
}

/**
 * The path to the RSA key file to use.
 */
std::string UserPrefValues::rsaKeyPath()
{
   return readPref<std::string>("rsa_key_path");
}

/**
 * Whether to use the devtools R package.
 */
bool UserPrefValues::useDevtools()
{
   return readPref<bool>("use_devtools");
}

/**
 * Whether to use Internet2 for networking on R for Windows.
 */
bool UserPrefValues::useInternet2()
{
   return readPref<bool>("use_internet2");
}

/**
 * Whether to use secure downloads when fetching R packages.
 */
bool UserPrefValues::useSecureDownload()
{
   return readPref<bool>("use_secure_download");
}

/**
 * Whether to clean up temporary files after running R CMD CHECK.
 */
bool UserPrefValues::cleanupAfterRCmdCheck()
{
   return readPref<bool>("cleanup_after_r_cmd_check");
}

/**
 * Whether to view the directory after running R CMD CHECK.
 */
bool UserPrefValues::viewDirAfterRCmdCheck()
{
   return readPref<bool>("view_dir_after_r_cmd_check");
}

/**
 * Whether to hide object files in the Files pane.
 */
bool UserPrefValues::hideObjectFiles()
{
   return readPref<bool>("hide_object_files");
}

/**
 * Whether to restore the last project when starting RStudio.
 */
bool UserPrefValues::restoreLastProject()
{
   return readPref<bool>("restore_last_project");
}

/**
 * Whether to clean output after running Texi2Dvi.
 */
bool UserPrefValues::cleanTexi2dviOutput()
{
   return readPref<bool>("clean_texi2dvi_output");
}

/**
 * Whether to enable shell escaping with LaTeX documents.
 */
bool UserPrefValues::latexShellEscape()
{
   return readPref<bool>("latex_shell_escape");
}

/**
 * Whether to restore the last version of R used by the project in RStudio Pro.
 */
bool UserPrefValues::restoreProjectRVersion()
{
   return readPref<bool>("restore_project_r_version");
}

   

}
}
}
}
