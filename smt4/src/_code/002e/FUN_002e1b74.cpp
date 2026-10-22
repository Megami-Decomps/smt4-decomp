#include "common.h"

extern "C" {

extern u16 scrGetArg(u32 index);

typedef struct Target {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u32 unk84;
    /* 0x88 */ u8 unk88;
    /* 0x89 */ u8 unk89[0xF];
    /* 0x98 */ u16 unk98;
} Target;

typedef struct Obj {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Target *target;
} Obj;

extern Obj g_messageMain;
u32 FUN_002e1b74(void)
{
    Target *target = g_messageMain.target;
    u16 value = scrGetArg(0);

    target->unk98 = value;
    target->unk84 = 10;
    target->unk88 = 3;
    return 1;
}

} /* extern "C" */
