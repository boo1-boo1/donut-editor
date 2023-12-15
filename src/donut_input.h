#ifndef DONUT_INPUT_H
#define DONUT_INPUT_H

char *editorPrompt(char *prompt, void (*callback)(char *, int));
void editorProcessKeypress(void);

#endif