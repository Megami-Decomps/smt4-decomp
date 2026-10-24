#include "common.h"
#include "AsdSDK/AsdDebugHooks.h"

struct TitleCloseWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 requested;
    /* 0x05 */ u8 unk05[0xb];
    /* 0x10 */ u8 hasSubobject;
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ u8 subobject[4];
};

extern "C" {

extern TitleCloseWork *g_titleMain;

/* Request closure of the title work and tell the debug hook about its active subobject. */
s32 FUN_0021f468(void)
{
    TitleCloseWork *title = g_titleMain;
    title->requested = 1;
    void *target = title;
    if (title->hasSubobject != 0)
        target = title->subobject;
    asdDebugHookPtr(target);
    return 0;
}

} /* extern "C" */
