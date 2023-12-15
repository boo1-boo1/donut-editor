/*** includes ***/

#define _DEFAULT_SOURCE
#define _BSD_SOURCE
#define _GNU_SOURCE

#include "donut_append_buffer.h"
#include "donut_data.h"
#include "donut_defines.h"
#include "donut_editor_operations.h"
#include "donut_file_io.h"
#include "donut_file_types.h"
#include "donut_find.h"
#include "donut_init.h"
#include "donut_input.h"
#include "donut_output.h"
#include "donut_row_operations.h"
#include "donut_syntax_highlighting.h"
#include "donut_terminal.h"

int main(int argc, char *argv[]) {
  enableRawMode();
  initEditor();
  if (argc >= 2) {
    editorOpen(argv[1]);
  }

  editorSetStatusMessage(
    "HELP: Ctrl-S = save | Ctrl-Q = quit | Ctrl-F = find");

  while (1) {
    editorRefreshScreen();
    editorProcessKeypress();
  }

  return 0;
}
