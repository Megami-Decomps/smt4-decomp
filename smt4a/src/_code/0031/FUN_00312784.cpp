#include "common.h"

struct MapGimicFlag {
    /* 0x00 */ u8 unk00[0x7c];
    /* 0x7c */ s32 flag;
};

extern "C" {

extern MapGimicFlag *g_mapGimic;

/* Script command: raises the map gimic flag at 0x7c. */
u32 FUN_00312784(void)
{
    g_mapGimic->flag = 1;
    return 1;
}

} /* extern "C" */
