#include "common.h"
#include "ui/UiControl.h"

extern "C" {

extern const char *scrGetArgString(s32 index);
extern int infoWinExpandAndSetText(const char *text);
extern int infoWinSetTimer(u32 arg);

u32 scrOpenDialogText(void)
{
    infoWinExpandAndSetText(scrGetArgString(0));
    dialogOpen(1, 1);
    infoWinSetTimer(0xFFFFFFFF);
    return 1;
}

}
