#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {

typedef struct Unit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x1C8];
    /* 0x1CC */ u16 level;
    /* 0x1CE */ u8 unk1CE[0xBA];
} Unit;                              /* 0x288 */

typedef struct MainState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ Unit *units;
} MainState;

s32 scrGetArg(u32 index);
int scrSetResult(bool value);

/* Script command: result is whether the argument is at most the average level of the active, present units. */
u32 scrCommBtlAverageLevelAtLeast(void)
{
    s32 threshold = scrGetArg(0);
    s32 total = 0;
    s32 count = 0;
    s32 i;

    for (i = 0; i < 109; i++) {
        Unit *unit = &reinterpret_cast<MainState *>(btlGetMainState())->units[i];

        if ((unit->flags & 0x10) != 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0) {
            count++;
            total += unit->level;
        }
    }
    scrSetResult(threshold <= total / count);
    return 1;
}

} /* extern "C" */
