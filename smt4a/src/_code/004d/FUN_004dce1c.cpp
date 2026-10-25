/* NON_MATCHING: the u64 battle flag tests/updates schedule their loads and register use differently (retail loads each mask as ldm pairs and pairs the word ORs), the escape-state tail is laid out in a different branch order, and the g_btlAux flag word is read through a pool constant offset. */
#include "common.h"

namespace {
struct BtlBattleData {
    /* 0x0000 */ u8 unk0000[0xa8];
    /* 0x00a8 */ s32 uiState;
    /* 0x00ac */ u8 unk00ac[0x60];
    /* 0x010c */ u32 stateFlags;
    /* 0x0110 */ u8 unk0110[0x2248];
    /* 0x2358 */ s32 phase;
    /* 0x235c */ u8 unk235c[0x225e];
    /* 0x45ba */ u8 attempts;
};

struct BtlUnitHandle {
    /* 0x00 */ BtlBattleData *data;
};

struct BtlAiAction {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x20];
    /* 0x024 */ u32 uiIndex;
    /* 0x028 */ u8 unk028[0x544];
    /* 0x56c */ u32 unk56c;
};

struct BtlCamera {
    /* 0x000 */ u8 unk000[0x7cc];
    /* 0x7cc */ s32 unk7cc;
};

struct BtlAuxBlock {
    /* 0x0000 */ u8 unk0000[0x339c];
    /* 0x339c */ u32 flags;
};

/* The u64 flag masks kept in the battle action block. */
struct BtlActionMasks {
    /* 0x000 */ u8 unk000[0x110];
    /* 0x110 */ u64 mask110;
    /* 0x118 */ u8 unk118[0x10];
    /* 0x128 */ u64 mask128;
    /* 0x130 */ u8 unk130[0x20];
    /* 0x150 */ u64 mask150;
};

/* The battle's unit flags that live in the data block at 0x45a0. */
struct BtlFlagsData {
    u8 unk000[0x45a0];
    u64 flags;
};
}

extern "C" {
extern BtlActionMasks g_btlAction;
extern BtlCamera *g_btlCamera;
extern u32 g_btlAux;
extern s32 g_btlEvent;

void FUN_00408184(s32 kind, s32 flag);
s32 FUN_004c67d0(void);
s32 FUN_004d7a70(s32 event, s32 kind, s32 arg, s32 flag);
void FUN_004d7fe4(s32 event);
void nameEntriesRegisterVerNames(void *work);
void btlQueueDuplicateSuppressedAction(s32 a, s32 b, s32 c);
void FUN_004fbeac(s32 a, BtlAiAction *action, s32 b, s32 c, s32 d);
void FUN_004fd508(s32 a, BtlAiAction *action, s32 kind, u32 uiIndex, s32 flag);
void FUN_004feecc(s32 a, s32 b);
s32 FUN_004f2708(BtlCamera *camera, BtlBattleData *data, s32 flag);
s32 isEntryUsable(s32 event);
s32 gameProgressIsAdvanced(void);
s32 lcgRandomRange(u32 limit);

/* Battle escape attempt: rolls against the escape chance, then moves the unit's UI state to the
   "escaped" or the "failed" branch and queues the matching command. */
void FUN_004dce1c(BtlUnitHandle *handle, BtlAiAction *action)
{
    action->unk56c = 0;
    BtlFlagsData *flagsData = reinterpret_cast<BtlFlagsData *>(handle->data);
    if ((flagsData->flags & g_btlAction.mask128) == 0 && (handle->data->stateFlags & 0x40000) != 0) {
        if ((action->flags & 0x2000) == 0) {
            FUN_004fbeac(0, action, 0, 5, 0);
            return;
        }
    } else if ((action->flags & 0x2000) == 0) {
        if (g_btlCamera->unk7cc >= 0 && FUN_004f2708(g_btlCamera, handle->data, 1) != 0) {
            btlQueueDuplicateSuppressedAction(0, 0, 0);
        }
        FUN_004feecc(1, 0);
    }
    FUN_004fd508(0, action, 15, action->uiIndex, 1);
    s32 chance = FUN_004c67d0();
    s32 escaped = lcgRandomRange(99) < chance;
    u8 attempts = handle->data->attempts + 1;
    handle->data->attempts = attempts;
    handle->data->attempts = attempts < 255 ? attempts : 255;
    if ((reinterpret_cast<BtlAuxBlock *>(g_btlAux)->flags & 0x400) != 0) {
        nameEntriesRegisterVerNames(reinterpret_cast<void *>(g_btlAux));
    }
    if (handle->data->phase == 3) {
        escaped = 1;
    }
    if (gameProgressIsAdvanced() != 0) {
        escaped = 0;
    }
    flagsData = reinterpret_cast<BtlFlagsData *>(handle->data);
    if ((flagsData->flags & g_btlAction.mask128) != 0) {
        escaped = 1;
    }
    if (handle->data->uiState == 4) {
        if ((handle->data->stateFlags & 0x40000) != 0) {
            handle->data->uiState = 0;
        } else {
            escaped = 1;
        }
    }
    if (escaped) {
        FUN_00408184(4, 1);
        handle->data->uiState = 4;
        if (isEntryUsable(g_btlEvent) != 0) {
            return;
        }
        if (FUN_004d7a70(g_btlEvent, 6, -1, 0) != 0) {
            FUN_004d7fe4(g_btlEvent);
            return;
        }
    } else {
        FUN_00408184(5, 1);
        handle->data->uiState = 0;
        flagsData = reinterpret_cast<BtlFlagsData *>(handle->data);
        flagsData->flags |= g_btlAction.mask110;
        flagsData = reinterpret_cast<BtlFlagsData *>(handle->data);
        flagsData->flags |= g_btlAction.mask150;
    }
    FUN_004fbeac(0, action, 0, 1, 0);
}

} /* extern "C" */
