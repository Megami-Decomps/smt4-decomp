#include "ui/MessageMainA.h"
#include "bible/bibleMain.h"

extern "C" {

s32 messageSetActiveMode(s32 enabled)
{
    MessageWindowA *banner = g_messageMain.banner;
    banner->unk0092 = 1;
    banner->stepActive = 1;
    if (enabled != 0) {
        banner->counterElapsed = -1;
    } else {
        banner->counterElapsed = 1;
    }
    return 1;
}

} /* extern "C" */
