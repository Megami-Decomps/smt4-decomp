/* NON_MATCHING: near (197 rows against 198): same switch cases, calls and constants; retail keeps the stage-mode index in r5 through a conditional move (cmp; movge; blt) where ours uses `subs`, hoists the party count/offset pair loads differently in case 4, copies the camera position as three plain words with swapped r0/r1, and holds the battle block in r8/r4 differently in case 6 */
#include "battle/BtlMainAccess.h"
#include "shard/FUN_004fea10.h"
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

/* Battle stage setup state (observed fields only). */
struct Vec2 {
    f32 x;
    f32 y;
};

struct StageUnitSlot {
    u32 pad00;
    Vec2 pos;                /* 0x04 */
    u8 pad0C[0x1C - 0x0C];
};

/* Battle main state (observed field only). */
struct BtlMainView {
    u8 pad0000[0x4D68];
    u32 activeRecord;        /* 0x4D68 */
};

struct StageState {
    u32 step;                /* 0x000: setup step 1..9 */
    u8 pad004[0x1C - 4];
    s32 value;               /* 0x01C */
    s32 id;                  /* 0x020 */
    u8 pad024[0x34 - 0x24];
    StageUnitSlot slot[1];   /* 0x034: one per active party slot, stride 0x1C */
    u8 pad050[0x184 - 0x50];
    void *file;              /* 0x184: loaded stage file */
};

/* Per-stage-mode camera/formation table, stride 0x1C. */
struct StageModeParams {
    f32 cameraPos[3];        /* 0x00 */
    Vec2 slotOffset;         /* 0x0C */
    f32 groupScale;          /* 0x14 */
    f32 pad18;
};

struct BattleUnitBlock {
    u8 pad000[0x268];
    s16 totalA;              /* 0x268 */
    s16 totalB;              /* 0x26A */
    u8 pad26C[0x400 - 0x26C];
    u32 activeRecord;        /* 0x400 */
};

extern const StageModeParams DAT_00529780[];   /* 0x529780 */
extern const u8 DAT_00529834;                  /* 0x529834: stage file name */
extern f32 *g_btlCamera;                       /* 0x571508 */
extern u32 g_btlStageModel;                    /* 0x57a4f8 */

s32 FUN_004116a0(StageState *state);
s32 btlSpawnStageHeightEffects(StageState *state);
s32 asdMemFree(void *memory);
s32 asdLoadFileAsyncSimple(const u8 *name, void **destination, s32 flag);
s32 mathVectorClear(f32 *vector);
s32 btlStageGetModeIndex(u32 context);
s32 FUN_00411c04(StageState *state, s32 flag);
s32 partyCountActiveSlots(void);
s32 controllerGroupSetPosition(u32 model, f32 x, f32 y, f32 z);
BattleUnitBlock *FUN_003eaf20(void);
u32 partyFindActiveRecordById(u32 id);
u32 saveSlotFindSelected(void);
s32 FUN_003ecfb4(BtlMainView *mainState, void *unit, u32 record, s32 flag);
s32 FUN_004fe7e4(s32 a, s32 b, s32 c);
s32 FUN_003f14a0(BtlMainView *mainState);
u32 FUN_003e503c(u32 index);
s32 FUN_00187168(u32 record);
s32 FUN_004fef44(s32 a, s32 b, s32 c);
s32 FUN_00412488(StageState *state);
s32 FUN_00411cec(StageState *state);

/* Runs one setup step of the battle stage (`state->step`): spawn effects, load the stage file and
 * set the camera, place the party slots, or apply the stage's results. */
void FUN_00410f84(StageState *state)
{
    switch (state->step) {
    case 1:
        FUN_004116a0(state);
        return;
    case 2:
        btlSpawnStageHeightEffects(state);
        return;
    case 3: {
        if (state->file != 0) {
            asdMemFree(state->file);
            state->file = 0;
        }
        asdLoadFileAsyncSimple(&DAT_00529834, &state->file, 0);
        mathVectorClear(g_btlCamera);
        g_btlCamera[3] = 0.0f;
        g_btlCamera[4] = 0.0f;
        s32 mode = btlStageGetModeIndex(reinterpret_cast<u32>(state));
        if (mode >= 0) {
            g_btlCamera[0] = DAT_00529780[mode].cameraPos[0];
            g_btlCamera[1] = DAT_00529780[mode].cameraPos[1];
            g_btlCamera[2] = DAT_00529780[mode].cameraPos[2];
        }
        return;
    }
    case 4: {
        state->value = 0;
        state->id = -1;
        FUN_00411c04(state, 1);
        s32 mode = btlStageGetModeIndex(reinterpret_cast<u32>(state));
        if (mode >= 0) {
            s32 count = partyCountActiveSlots();
            const StageModeParams *params = &DAT_00529780[mode];
            Vec2 offset = params->slotOffset;
            for (s32 i = 0; i < count; i++) {
                Vec2 pos = state->slot[i].pos;
                pos.x = pos.x + offset.x;
                pos.y = pos.y + offset.y;
                state->slot[i].pos = pos;
            }
            controllerGroupSetPosition(g_btlStageModel, params->groupScale, params->groupScale, params->groupScale);
        }
        return;
    }
    case 5: {
        BtlMainView *mainState = reinterpret_cast<BtlMainView *>(btlGetMainState());
        BattleUnitBlock *block = FUN_003eaf20();
        u32 record = partyFindActiveRecordById((u16)state->value);
        FUN_003ecfb4(mainState, (u8 *)block + 0x164, record, 1);
        block->activeRecord = record;
        mainState->activeRecord = record;
        FUN_004fea10(0, 0, 1);
        FUN_004fe7e4(0, 0, 1);
        FUN_003f14a0(mainState);
        return;
    }
    case 6: {
        BtlMainView *mainState = reinterpret_cast<BtlMainView *>(btlGetMainState());
        BattleUnitBlock *block = FUN_003eaf20();
        u32 record = saveSlotFindSelected();
        FUN_003ecfb4(mainState, (u8 *)block + 0x164, record, 0);
        block->activeRecord = record;
        s16 sumA = 0;
        s16 sumB = 0;
        for (s32 i = 1; i < 12; i++) {
            u8 *slot = (u8 *)FUN_003e503c((u16)i);
            if (FUN_00187168((u32)slot) != 0) {
                sumA = (s16)(*(u16 *)(slot + 0x12) + sumA);
                sumB = (s16)(*(u16 *)(slot + 0x14) + sumB);
            }
        }
        s16 totalA = (s16)(block->totalA + sumA);
        s16 totalB = (s16)(block->totalB + sumB);
        block->totalA = totalA;
        block->totalB = totalB;
        if (totalA >= 1000) {
            block->totalA = 999;
        }
        if (totalB >= 1000) {
            block->totalB = 999;
        }
        FUN_004fea10(0, 0, 1);
        FUN_004fe7e4(0, 0, 1);
        FUN_003f14a0(mainState);
        FUN_004fef44(0, 0, 0);
        return;
    }
    case 8:
        FUN_00412488(state);
        return;
    case 9:
        FUN_00411cec(state);
        return;
    default:
        return;
    }
}

} /* extern "C" */
