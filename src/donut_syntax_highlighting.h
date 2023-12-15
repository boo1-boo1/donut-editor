#ifndef DONUT_SYNTAX_HIGHLIGHTING_H
#define DONUT_SYNTAX_HIGHLIGHTING_H

void editorUpdateSyntax(erow *row);
int editorSyntaxToColor(int hl);
void editorSelectSyntaxHighlight(void);

#endif