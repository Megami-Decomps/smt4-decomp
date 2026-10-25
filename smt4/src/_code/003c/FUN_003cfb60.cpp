/* NON_MATCHING: unit-slot address: retail loads the work pointer into r1 and the 0x3c7 stride into r0 (swapped here). */
#include "common.h"

extern "C" {

typedef struct BtlWork {
    /* 0x0000 */ u8 unk0000[0x84];
    /* 0x0084 */ s32 unitIndex;
    /* 0x0088 */ s32 state;
    /* 0x008C */ u8 unk008c[0x1FC6 - 0x8C];
    /* 0x1FC6 */ s16 hp;
} BtlWork;

typedef struct BtlTarget {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ s16 unk62;
    /* 0x64 */ u32 flags;
} BtlTarget;

typedef struct BtlAction {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ BtlTarget *target;
} BtlAction;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ u8 state;
    /* 0x0A */ u8 unk0a[0xF1C - 0xA];
} BtlUnit; /* 0xF1C bytes */

typedef struct BtlActionTable {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ BtlUnit *units;
} BtlActionTable;

typedef struct BtlMain {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 flags;
} BtlMain;

#define BTL_MAIN_FLAG_ACTION_PENDING 0x02000000

extern BtlActionTable g_btlAction; /* 0x434278 */
extern BtlMain *g_btlMain; /* 0x4342c8 */
extern u32 g_btlEvent; /* 0x435d48 */
extern u32 g_btlUiBlock; /* 0x439ca8 */

extern int FUN_0027e3b8(u32);
extern int btlUiPanelFadeInWhenReady(u32);
extern int btlReflectCreateKind24(int, BtlAction *, u32, int);
extern int FUN_003ddee0(int, BtlAction *, BtlTarget *, int, int, int);
extern int frameRangeExtend(BtlWork **, BtlAction *, int, int, int, int);

static __inline BtlUnit *btlGetUnit(s32 index)
{
    return &g_btlAction.units[index];
}

/* Runs the action: puts the unit into its idle/hit state (1 when hp <= 1, else 0 and a UI call), fires the action's hooks and marks the unit's slot. Returns 0 when blocked by an event. */
u32 FUN_003cfb60(BtlWork **work, BtlAction *action)
{
    if (FUN_0027e3b8(g_btlEvent) != 0) {
        return 0;
    }
    if ((*work)->state != 13) {
        if ((*work)->hp - 1 <= 0) {
            (*work)->state = 1;
        } else {
            (*work)->state = 0;
            btlUiPanelFadeInWhenReady(g_btlUiBlock);
        }
    }
    if ((action->target->flags & 0xFF) != 0) {
        FUN_003ddee0(0, action, action->target, 0, 0, 0);
    }
    btlReflectCreateKind24(30, action, action->unk20, 1);
    frameRangeExtend(work, action, action->target->unk62, 0, 30, 30);
    g_btlMain->flags &= ~BTL_MAIN_FLAG_ACTION_PENDING;
    btlGetUnit((*work)->unitIndex)->state = 27;
    return 1;
}

}
