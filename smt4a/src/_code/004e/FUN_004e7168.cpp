/* NON_MATCHING: instruction scheduling and register allocation differ - retail forms the unit record's priority address as record+0x200 (+122) and keeps the u64 masks in ldm pairs on different registers; the logic is otherwise identical. */
#include "common.h"
#include "battle/BattleHelpers.h"

namespace {
/* One actor's record from the unit table. */
struct BtlUnitRecord {
    /* 0x000 */ u8 unk000[0x258];
    /* 0x258 */ u32 commandA;
    /* 0x25c */ u32 commandB;
    /* 0x260 */ u8 unk260[0x1a];
    /* 0x27a */ u16 priority;
};

/* A slot of the battle's per-unit table (0x408 bytes each; only the leading flags are read). */
struct BtlTableSlot {
    /* 0x000 */ u64 flags;
    /* 0x008 */ u8 unk008[0x400];
};

struct BtlTable {
    /* 0x0000 */ u8 unk0000[0x1020];
    /* 0x1020 */ BtlTableSlot slots[50];
};

struct BtlBattleData {
    /* 0x0000 */ u8 unk0000[0xa4];
    /* 0x00a4 */ s32 unitIndex;
    /* 0x00a8 */ s32 uiState;
    /* 0x00ac */ u8 unk00ac[0x1f50];
    /* 0x1ffc */ BtlTable *table;
    /* 0x2000 */ u8 unk2000[0x356];
    /* 0x2356 */ s16 actor;
    /* 0x2358 */ s32 phase;
    /* 0x235c */ s32 phaseArg;
    /* 0x2360 */ s32 trigger;
    /* 0x2364 */ u8 unk2364[4];
    /* 0x2368 */ s32 highestPriority;
    /* 0x236c */ u8 unk236c[0x2234];
    /* 0x45a0 */ u64 flags;
};

struct BtlUnitHandle {
    /* 0x00 */ BtlBattleData *data;
};

struct BtlCommandChoice {
    /* 0x000 */ u8 unk000[0x1be];
    /* 0x1be */ u16 mode;
};

struct BtlCommandEntry {
    /* 0x0 */ u32 commandA;
    /* 0x4 */ u32 commandB;
    /* 0x8 */ u8 unk08[8];
};

struct BtlAiAction {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x20];
    /* 0x024 */ u32 uiIndex;
    /* 0x028 */ BtlCommandChoice *choice;
    /* 0x02c */ u8 unk02c[0x9b8];
    /* 0x9e4 */ BtlCommandEntry commands[109];
};

/* The u64 flag masks kept in the battle action block. */
struct BtlActionMasks {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ u64 mask10;
    /* 0x018 */ u8 unk018[0x28];
    /* 0x040 */ u64 mask40;
    /* 0x048 */ u8 unk048[0xa0];
    /* 0x0e8 */ u64 mask0e8;
    /* 0x0f0 */ u8 unk0f0[8];
    /* 0x0f8 */ u64 mask0f8;
    /* 0x100 */ u8 unk100[0x38];
    /* 0x138 */ u64 mask138;
};
}

extern "C" {
extern BtlActionMasks g_btlAction;
BtlUnitRecord *FUN_003f0e20(BtlBattleData *data, s32 index);
void FUN_004fcde0(s32 arg, BtlAiAction *action, BtlUnitRecord *record);
void FUN_004fd508(s32 arg, BtlAiAction *action, u32 kind, u32 uiIndex, s32 flag);

/* Per-actor battle step: raises the priority high-water mark, applies the current phase's flag changes
   and commands, and refreshes the action's per-unit command table. */
void FUN_004e7168(BtlUnitHandle *handle, BtlAiAction *action)
{
    BtlUnitRecord *unit = FUN_003f0e20(handle->data, handle->data->actor);
    if (unit != NULL && (g_btlAction.mask0f8 & handle->data->flags) == 0) {
        if (unit->priority > handle->data->highestPriority) {
            handle->data->highestPriority = unit->priority;
        }
    }
    switch (handle->data->phase) {
    case 2:
        handle->data->flags |= g_btlAction.mask138;
        break;
    case 3:
        action->choice->mode = 4;
        return;
    }
    bool command = false;
    u32 kind = 0;
    if (handle->data->phase == 1) {
        switch (handle->data->phaseArg) {
        case 1:
            command = true;
            kind = 12;
            break;
        case 2:
            command = true;
            kind = 5;
            break;
        case 3:
            command = true;
            kind = 3;
            break;
        case 4:
            command = true;
            kind = 14;
            break;
        case 7:
            handle->data->flags |= g_btlAction.mask0e8;
            action->flags |= 4;
            break;
        }
        if (handle->data->trigger == 2) {
            BtlUnitRecord *record = FUN_003f0e20(handle->data, handle->data->actor);
            if (record != NULL) {
                FUN_004fcde0(0, action, record);
            }
        }
        if (command) {
            FUN_004fd508(0, action, kind, action->uiIndex, 1);
        }
    }
    s32 active = 0;
    for (s32 i = 0; i < 50; i++) {
        u64 flags = handle->data->table->slots[i].flags;
        if ((flags & g_btlAction.mask10) != 0 && (flags & g_btlAction.mask40) == 0) {
            active++;
        }
    }
    if (active == 0) {
        handle->data->uiState = 10;
    }
    btlUnitClearRecordFields(handle, handle->data->unitIndex);
    for (s32 i = 0; i < 109; i++) {
        action->commands[i].commandA = 0;
        BtlUnitRecord *record = FUN_003f0e20(handle->data, i);
        if (record != NULL) {
            action->commands[i].commandA = record->commandA;
            action->commands[i].commandB = record->commandB;
        }
    }
}

} /* extern "C" */
