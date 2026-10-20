#include "common.h"

extern "C" {

typedef struct UniteSub {
    /* 0x00 */ u8 unk00[0x6c];
    /* 0x6c */ u8 flag;
} UniteSub;

typedef struct Unite {
    /* 0x0000 */ u8 unk0000[0x9500];
    /* 0x9500 */ UniteSub sub;
} Unite;

extern Unite *g_unite;

/* True while the unite sub-object's flag is clear. */
u8 uniteFlagIsClear(void)
{
    UniteSub *sub = &g_unite->sub;

    return sub->flag == 0;
}

} /* extern "C" */
