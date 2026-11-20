#include "runtime/Stdio.h"
#include "font/SearchWin/SearchWin.h"

extern "C" {
void soundPlaySeUnpanned(u32);
void searchWinInitialize(void);
extern SearchWinWork* g_searchWin;
extern const char DAT_00403cb0[];
extern const char DAT_00403cc4[];
s32 scrGetArg(u32);
s32 eventIsSkipping(void);

// Opens the search window with the requested wireless-operation message.
u32 scrComm_SearchWin_Start(void)
{
    if (g_searchWin == NULL && eventIsSkipping() == 0) {
        searchWinInitialize();
        s32 mode = scrGetArg(0);
        SearchWinWork* window = g_searchWin;
        if (mode == 0) {
            __2sprintf((char *)window->text, DAT_00403cb0);
        } else if (mode == 1) {
            __2sprintf((char *)window->text, DAT_00403cc4);
        } else {
            return 1;
        }
        window->active = 1;
        window->state = 1;
        soundPlaySeUnpanned(0x1000180);
    }
    return 1;
}
}
