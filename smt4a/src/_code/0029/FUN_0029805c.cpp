#include "common.h"

extern "C" {

struct NaviEntry { u8 data[0x2BC]; };
struct NaviState {
    /* 0x00000 */ u8 unk00[0x206BC];
    /* 0x206BC */ NaviEntry entry;
};
extern NaviState *g_naviMain;
void requestBeginProcessing(NaviEntry *entry, s8 index, s16 value);
void FUN_0029805c(s32 index, s16 value)
{
    if (g_naviMain != NULL) {
        requestBeginProcessing(&g_naviMain->entry, index, value);
    }
}

} /* extern "C" */
