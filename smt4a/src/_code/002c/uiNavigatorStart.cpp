#include "common.h"

extern "C" {

void uiSpriteSetKeyframe(u8 *member, s32 a, s32 b);
void uiSpriteSetImageKeyframe(u8 *member, s32 a, s32 b);

typedef struct Navi {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 timer;
    /* 0x014 */ u8 unk014[0x0C];
    /* 0x020 */ u32 mode;
    /* 0x024 */ u8 unk024[8];
    /* 0x02C */ u32 value;
    /* 0x030 */ u8 flag;
    /* 0x031 */ u8 unk031[2];
    /* 0x033 */ u8 option;
    /* 0x034 */ u8 unk034[0x20];
    /* 0x054 */ u8 member54[0x8C];
    /* 0x0E0 */ u8 memberE0[0x24C];
    /* 0x32C */ u8 flagA;
    /* 0x32D */ u8 flagB;
} Navi;
extern Navi *g_infoWin;

/* Starts the navigator in state 1: restarts its members and sets the timer to 30, the mode to 2, and stores the given values. */
void uiNavigatorStart(u32 value, u8 option, u32 unused, u8 flagA, u8 flagB)
{
    Navi *navi;
    u8 *member;

    navi = g_infoWin;
    member = g_infoWin->member54;
    g_infoWin->state = 1;
    uiSpriteSetKeyframe(member, 5, 0);
    uiSpriteSetImageKeyframe(navi->member54, 0, 0);
    uiSpriteSetKeyframe(navi->memberE0, 3, 0);
    navi->option = option;
    navi->flag = 1;
    navi->timer = 0x1E;
    navi->mode = 2;
    navi->value = value;
    navi->flagA = flagA;
    navi->flagB = flagB;
}

} /* extern "C" */
