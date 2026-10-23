#include "common.h"

extern "C" {

extern int dialogOpen(int mode, int flag);
extern const char *scrGetArgString(void);
extern int infoWinExpandAndSetText(const char *text);
extern int infoWinSetTimer(u32 arg);

u32 scrOpenDialogText(void)
{
    infoWinExpandAndSetText(scrGetArgString());
    dialogOpen(1, 1);
    infoWinSetTimer(0xFFFFFFFF);
    return 1;
}

}
