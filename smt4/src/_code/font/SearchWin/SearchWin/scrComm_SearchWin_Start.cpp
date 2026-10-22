#include "font/SearchWin/SearchWin.h"

extern "C" {
void textFormatBuffer(void*, const char*, ...);
void FUN_002bf810(u32);
void FUN_002cedd8(void);
extern SearchWinWork* DAT_0043e170;
extern const char DAT_00403cb0[];
extern const char DAT_00403cc4[];
s32 scrGetArg(u32);
s32 FUN_002c1d5c(void);

// Opens the search window with the requested wireless-operation message.
u32 scrComm_SearchWin_Start(void)
{
    if (DAT_0043e170 == NULL && FUN_002c1d5c() == 0) {
        FUN_002cedd8();
        s32 mode = scrGetArg(0);
        SearchWinWork* window = DAT_0043e170;
        if (mode == 0) {
            textFormatBuffer(window->text, DAT_00403cb0);
        } else if (mode == 1) {
            textFormatBuffer(window->text, DAT_00403cc4);
        } else {
            return 1;
        }
        window->active = 1;
        window->state = 1;
        FUN_002bf810(0x1000180);
    }
    return 1;
}
}
