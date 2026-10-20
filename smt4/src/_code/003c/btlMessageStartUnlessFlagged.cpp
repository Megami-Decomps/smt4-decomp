#include "common.h"

extern "C" {

typedef struct BattleMain {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;
} BattleMain;

s32 FUN_0022a4ac(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern BattleMain *btlGetMainState(void);

/* Starts the battle message FUN_0022a4ac for `id` unless battle flags 0x40 or 0x100 are set; returns 0 when skipped. */
s32 btlMessageStartUnlessFlagged(s32 id, s32 arg)
{
    BattleMain *battle = btlGetMainState();
    u32 flags = battle->flags;
    s32 mode;

    if ((flags & 0x40) != 0) {
        return 0;
    }
    if ((flags & 0x100) != 0) {
        return 0;
    }
    mode = -1;
    if (arg != 0) {
        mode = 13;
    }
    return FUN_0022a4ac(2, (s16)id, 0, 0, arg, 0, mode);
}

} /* extern "C" */
