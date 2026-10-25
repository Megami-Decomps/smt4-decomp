/* NON_MATCHING: register allocation differs (retail keeps g_btlMain in r0 from the entry load into the first call and spills fewer values around the unit loop) */
#include "common.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"
#include "AsdSDK/Source/Gfx/Effect/effGeometry.h"

/* One battle unit (0x114 bytes); only the fields this state reads. */
struct ReflectUnit {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u32 flags;      /* bit 0: in battle, 1: acting, 4: second layout */
    /* 0x54 */ u32 pending;    /* bit 3: a reflect effect is waiting */
    /* 0x58 */ u16 effectFlags; /* bit 11: the effect was started */
    /* 0x5a */ u8 unk5a[8];
    /* 0x62 */ s16 skillSlot;
    /* 0x64 */ u8 unk64[0xb0];
};

/* The battle work area this state runs in. */
struct ReflectBattle {
    /* 0x0000 */ u8 unk0000[2];
    /* 0x0002 */ u16 selectedId;
    /* 0x0004 */ u8 unk0004[0xdc];
    /* 0x00e0 */ u32 flags;
    /* 0x00e4 */ u32 flags2;
    /* 0x00e8 */ u8 unk00e8[0x1db0];
    /* 0x1e98 */ ReflectUnit *units;
    /* 0x1e9c */ u8 unk1e9c[0x2604];
    /* 0x44a0 */ u32 phase;    /* bit 1: second phase, bit 21: effect done */
    /* 0x44a4 */ u8 unk44a4[0x13];
    /* 0x44b7 */ u8 locked;
};

/* The effect task: its state, and flags in the word at 0x0c. */
struct ReflectTask {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u32 flags;
};

/* Layout of the reflect effect icons: spacing and offsets for the two icon styles. */
struct ReflectLayout {
    s32 spacing;
    s32 offsetY;
    s32 style;
};
struct ReflectLayouts {
    ReflectLayout normal;   /* 0x439a20 */
    ReflectLayout special;  /* 0x439a2c */
    s32 offsetX;            /* 0x439a38 */
};

struct ReflectMainState {
    /* 0x0000 */ u8 unk0000[0x3028];
    /* 0x3028 */ u32 flags;   /* bit 10: reflect effects are pending */
};

extern "C" {
extern BtlMain *g_btlMain;
extern ReflectMainState *DAT_00435d18;
extern ReflectLayouts DAT_00439a20;
extern u32 g_btlUiBlock;
void FUN_0024082c(BtlMain *btl, s32 frames);
void FUN_00254f58(ReflectBattle *battle);
s32 btlFindNthActiveSpecialEntry(ReflectBattle *battle, s32 mode);
void btlSetSelectedListedValue(s32 value);
void FUN_003ae720(u32 block, s32 mode);
void FUN_00240678(ReflectTask *task, ReflectBattle *battle);
s32 FUN_003db7b4(ReflectMainState *state);
void FUN_002b7bca(ReflectUnit **list, s32 count, s32 stride, void *compare);
void FUN_0019d7d4(void);
const u16 *FUN_0027da30(ReflectBattle *battle, s32 slot);
s32 pairedEntryTableContains(ReflectBattle *battle, u16 id);
void FUN_0024057c(ReflectBattle *battle, ReflectUnit *unit, s32 a, s32 b, s32 style);
void btlReflectInitKind9(s32 x, ReflectTask *task, ReflectUnit *unit, s32 kind, s32 count);
void FUN_002505c0(s32 x, ReflectTask *task, u32 id, s32 a, s32 b, s32 c, s32 d);

/* Waits out the reflect effects of a battle turn: starts them one unit at a time, then hands the
   battle back to the main task state. */
void FUN_0023fbdc(ReflectTask *task, ReflectBattle *battle)
{
    u32 *phase = &battle->phase;
    if (battle->locked == 0 && ((battle->flags & 0x2000000) != 0 || (*phase & 2) != 0)) {
        if (g_btlMain->cameraEditor.value != 0) {
            FUN_0024082c(g_btlMain, g_btlMain->cameraEditor.value);
        } else {
            FUN_0024082c(g_btlMain, 120);
        }
        if ((*phase & 2) != 0) {
            FUN_00254f58(battle);
            *phase |= 0x200000;
            if (btlFindNthActiveSpecialEntry(battle, 1) < 0 && (battle->flags2 & 0x20) == 0) {
                btlSetSelectedListedValue(3);
            }
        } else {
            FUN_00254f58(battle);
            *phase |= 0x200000;
            FUN_003ae720(g_btlUiBlock, 0);
        }
        task->flags = 0;
        task->state = 15;
        FUN_00240678(task, battle);
        return;
    }
    if (task->flags == 0 && (DAT_00435d18->flags & 0x400) != 0) {
        g_btlMain->flags |= 0x4000;
        FUN_00240614(reinterpret_cast<BattleVersionResources *>(DAT_00435d18));
        task->flags |= 2;
    }
    if ((task->flags & 2) != 0 && FUN_003db7b4(DAT_00435d18) != 0) {
        ReflectUnit *waiting[50];
        s32 waitingCount = 0;
        for (s32 i = 4; i < 54; i++) {
            ReflectUnit *unit = &battle->units[i];
            if ((unit->flags & 1) != 0 && (unit->flags & 2) != 0 && (unit->pending & 8) != 0) {
                waiting[waitingCount++] = unit;
            }
        }
        FUN_002b7bca(waiting, waitingCount, 4, FUN_0019d7d4);
        s16 started = 0;
        s32 firstStarted = 0;
        for (s32 i = 0; i < waitingCount; i++) {
            ReflectUnit *unit = waiting[i];
            if ((unit->flags & 1) != 0 && (unit->flags & 2) != 0 && (unit->pending & 8) != 0) {
                unit->pending &= ~8;
                if ((unit->effectFlags & 0x800) == 0 &&
                    pairedEntryTableContains(battle, FUN_0027da30(battle, unit->skillSlot)[1]) == 0) {
                    unit->effectFlags |= 0x800;
                    const ReflectLayout *layout = (unit->flags & 0x10) != 0 ? &DAT_00439a20.special : &DAT_00439a20.normal;
                    s16 spacing = (s16)layout->spacing;
                    s16 offsetY = (s16)layout->offsetY;
                    s16 style = (s16)layout->style;
                    s16 offsetX = (s16)DAT_00439a20.offsetX;
                    FUN_0024057c(battle, unit, 0, 0, style);
                    FUN_002451c4(started * spacing + offsetY + offsetX, reinterpret_cast<u32>(task), reinterpret_cast<u32>(unit), 0xff, style, 0);
                    btlReflectInitKind9(started * spacing + offsetX, task, unit, (unit->flags & 0x10) != 0 ? 7 : 6, 13);
                    if (firstStarted == 0) {
                        FUN_002505c0(started * spacing, task, 0x10001d4, 0, 0, 0, 0);
                        firstStarted = 1;
                    }
                    started = started + 1;
                }
            }
        }
        if (g_btlMain->cameraEditor.value != 0) {
            FUN_0024082c(g_btlMain, g_btlMain->cameraEditor.value);
        } else {
            FUN_0024082c(g_btlMain, 120);
        }
        if ((*phase & 2) == 0) {
            FUN_00254f58(battle);
            *phase |= 0x200000;
            FUN_003ae720(g_btlUiBlock, 0);
        }
        task->flags = 0;
        task->state = 15;
        FUN_00240678(task, battle);
    }
}

} /* extern "C" */
