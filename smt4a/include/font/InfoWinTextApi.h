#ifndef FONT_INFOWINTEXTAPI_A_H
#define FONT_INFOWINTEXTAPI_A_H
extern "C" {
/* Expand and copy supplied text into the information window's owned buffer. */
void infoWinExpandAndSetText(const char *text);
/* Show the supplied message indefinitely using the default information window. */
int FUN_002c2d44(const char *text);
}
#endif
