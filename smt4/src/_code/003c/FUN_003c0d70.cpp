/* NON_MATCHING: typed rewrite of the battle unit removal (298 vs 310 rows); armcc merges the 0xf4/0xf8 action stores into one stm and numbers the callee-saved registers differently. */
#include "battle/BtlMainAccess.h"
#include "battle/btlAction.h"
#include "gamedata/SaveSlotTable.h"
#include "AsdSDK/AsdMemUtil.h"

/* The action record's words the removal clears. */
struct ActionClearView {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ u32 task;
    /* 0x4c */ u8 unk4c[4];
    /* 0x50 */ u32 status;
    /* 0x54 */ u32 flags;
    /* 0x58 */ u16 presentation;
    /* 0x5a */ u8 unk5a[2];
    /* 0x5c */ u32 word5c;
    /* 0x60 */ u16 combatantIndex;
    /* 0x62 */ u8 unk62[2];
    /* 0x64 */ u32 words64[13];
    /* 0x98 */ u8 unk98[0x58];
    /* 0xf0 */ s32 slot;
    /* 0xf4 */ s32 slotB;
    /* 0xf8 */ u32 stateFlags;
    /* 0xfc */ u32 tail[6];
};

/* The entry's words and halfwords the removal clears, beyond the shared BtlEntry view. */
struct EntryClearView {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u32 flagsHigh;
    /* 0x008 */ s16 firstId;
    /* 0x00a */ u8 unk00a[0x62];
    /* 0x06c */ s16 marker;
    /* 0x06e */ u8 unk06e[4];
    /* 0x072 */ u8 stats[0x3c];
    /* 0x0ae */ u8 unk0ae[0x12];
    /* 0x0c0 */ u32 word0c0;
    /* 0x0c4 */ u8 unk0c4[0x10];
    /* 0x0d4 */ s16 word0d4;
    /* 0x0d6 */ u8 unk0d6[0x182];
    /* 0x258 */ u32 pending[6];
    /* 0x270 */ s32 pendingHead;
    /* 0x274 */ s32 pendingCount;
};

/* A unit's linked objects: only the fields the removal writes. */
struct LinkedObject {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u16 maxHp;
    /* 0x1e */ u8 unk1e[0xc];
    /* 0x2a */ s16 hp;
    /* 0x2c */ u8 unk2c[0x18];
    /* 0x44 */ u16 state;
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 unk48[0x2a];
    /* 0x72 */ u16 slotState;
};

extern "C" {
extern u32 g_btlUiBlock;
void FUN_00337a34(BtlMainState *state);
void FUN_003390dc(BtlMainState *state, BtlActionRecord *action, s32 id);
void objectTotalAdd(BtlMainState *state);
void keyedAccumulatorAdd(BtlMainState *state, u32 key, s32 count);
void recordClampCurrentCount(void *record);
void objectFlagsClear(void *object, u32 flags);
s32 flagWordTestBit(void *object, u32 bit);
void FUN_003ae2d0(u32 ui, s32 index, s32 value, s32 flag);
void FUN_002505c0(s32 a, s32 b, u32 resource, s32 a4, s32 a5, s32 a6, s32 a7);
void FUN_00394b0c(void);
void __aeabi_memset4(void *block, u32 size, s32 value);
void rt_memclr(void *block, u32 size);

void FUN_003c0d70(s32 index, s32 unused, s32 removeLinked, s32 keepLink)
{
    BtlMainState *state = btlGetMainState();
    BtlEntry *entry = &state->entries[index];
    EntryClearView *words = reinterpret_cast<EntryClearView *>(entry);
    if ((entry->flags & 0x200000) != 0) {
        FUN_00337a34(state);
        return;
    }
    if ((entry->flags & 1) == 0)
        return;

    u32 oldFlags = entry->flags;
    entry->flags = oldFlags & ~1u;
    bool clearActions = (entry->flags & 0x800080) == 0;
    u32 reserved = (oldFlags & 0x800000) >> 23;
    u32 downed = (oldFlags & 2) >> 1;
    if (clearActions) {
        for (s32 i = 0; i < 109; ++i) {
            BtlActionRecord **actions = &state->actions;
            BtlActionRecord *record = &(*actions)[i];
            if (record->participant.combatantIndex == entry->selectionIndex) {
                ActionClearView *action = reinterpret_cast<ActionClearView *>(record);
                action->status = 0;
                action->flags = 0;
                action->presentation = 0;
                action->task = 0;
                if (downed == 0)
                    action->combatantIndex = 0xFFFF;
                action->word5c = 0;
                for (s32 k = 0; k < 13; ++k)
                    action->words64[k] = 0;
                action->slot = -1;
                action->stateFlags = 0;
                action->slotB = -1;
                for (s32 k = 0; k < 6; ++k)
                    action->tail[k] = 0;
                FUN_003390dc(state, record, entry->members.ids[0]);
            }
        }
        entry->flags |= 0x80;
    }

    if ((entry->flags & 0x10) != 0) {
        if (removeLinked != 0 && entry->devil != NULL) {
            if (words->pendingCount > 0)
                objectTotalAdd(state);
            s32 slot = words->pendingHead;
            do {
                if (words->pending[slot] != 0) {
                    keyedAccumulatorAdd(state, words->pending[slot], 1);
                    words->pending[slot] = 0;
                }
                --slot;
                if (slot < 0)
                    slot = 5;
            } while (words->pendingHead != slot);
            entry->devil = NULL;
            words->pendingCount = 0;
            words->pendingHead = 0;
        }
        --state->emergencyAction.gate;
    } else if ((entry->flags & 0x20) != 0) {
        LinkedObject *reserve = reinterpret_cast<LinkedObject *>(entry->reserve);
        if (reserve != NULL && removeLinked != 0) {
            reserve->state = 2;
            reserve->hp = 0;
        }
        state->unk49c4 = 0;
    } else {
        LinkedObject *link = reinterpret_cast<LinkedObject *>(entry->link);
        if ((oldFlags & 8) != 0) {
            if (keepLink != 0) {
                if (link != NULL) {
                    link->state &= ~0x10;
                    if (entry->hp > 0)
                        recordClampCurrentCount(entry->link);
                    entry->link = NULL;
                }
            } else {
                s8 *mark = reinterpret_cast<s8 *>(gameGetSlotTable()) + (index - 1) + 0x9108;
                if (*mark >= 0) {
                    *mark = -1;
                    if (removeLinked == 0) {
                        FUN_003ae2d0(g_btlUiBlock, index, -1, 1);
                        FUN_002505c0(0, 0, 0x1000172, 0, 0, 0, 0);
                    }
                    if (link != NULL) {
                        link->state &= ~0x10;
                        if (entry->hp > 0)
                            recordClampCurrentCount(entry->link);
                    }
                }
            }
        }
        if (removeLinked != 0) {
            LinkedObject *source = reinterpret_cast<LinkedObject *>(entry->source);
            if (source != NULL) {
                source->slotState = 2;
                source->hp = 0;
                entry->groupMask = 2;
                entry->hp = 0;
                entry->maxHp = source->maxHp;
                FUN_00394b0c();
            }
            if (link != NULL) {
                link->state = 2;
                link->hp = 0;
            }
        } else if (link != NULL) {
            if (flagWordTestBit(entry->link, 10) != 0) {
                objectFlagsClear(entry->link, 0x10);
                objectFlagsClear(entry->link, 0x20);
                objectFlagsClear(entry->link, 0x40);
                objectFlagsClear(entry->link, 0x80);
                objectFlagsClear(entry->link, 0x100);
                objectFlagsClear(entry->link, 0x200);
                objectFlagsClear(entry->link, 8);
            }
            if ((entry->groupMask & 0x400) != 0)
                entry->groupMask &= ~0x3F8;
            if (entry->hp > 0 && link->id == entry->id)
                recordClampCurrentCount(entry->link);
        }
        --state->eventCount;
    }

    words->flags = 0;
    words->flagsHigh = 0;
    if (downed != 0) {
        words->flags = 6;
        words->flagsHigh = 0;
    }
    if (reserved != 0)
        words->flags |= 0x11;
    if ((reserved | downed) == 0) {
        __aeabi_memset4(&words->firstId, 100, -1);
        words->firstId = 0;
        memClear(reinterpret_cast<u8 *>(entry) + 0xCC, 396);
    }
    words->marker = -1;
    rt_memclr(words->stats, sizeof(words->stats));
    // The modifier block is cleared with word stores starting at the unaligned offset 0xae.
    *reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(entry) + 0xAE) = 0;
    *reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(entry) + 0xB2) = 0;
    *reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(entry) + 0xB6) = 0;
    *reinterpret_cast<u32 *>(reinterpret_cast<u8 *>(entry) + 0xBA) = 0;
    *reinterpret_cast<u16 *>(reinterpret_cast<u8 *>(entry) + 0xBE) = 0;
    for (s32 k = 0; k < 6; ++k)
        words->pending[k] = 0;
    words->word0c0 = 0;
    words->pendingHead = 0;
    words->pendingCount = 0;
    words->word0d4 = -1;
}
}
