#include "mapnavi/NaviMainGlobals.h"

extern "C" {

void requestBeginProcessing(u8 *entry, s8 index, s16 value);
void naviMainRequestProcessing(s32 index, s16 value)
{
    if (g_naviMain != NULL) {
        requestBeginProcessing(g_naviMain->slider, index, value);
    }
}

} /* extern "C" */
