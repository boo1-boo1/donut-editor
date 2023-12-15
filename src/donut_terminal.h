#ifndef DONUT_TERMINAL_H
#define DONUT_TERMINAL_H

void die(const char *s);
void disableRawMode(void);
void enableRawMode(void);
int editorReadKey(void);
int getCursorPosition(int *rows, int *cols);
int getWindowSize(int *rows, int *cols);

#endif