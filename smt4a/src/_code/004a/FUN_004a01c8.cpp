/* NON_MATCHING: percentage damage, group selection and minimum-one-HP clamps are recovered; helper inlining, flag predicates and register allocation differ. */
#include "shard/Shard0034.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {
s32 gameSlotTableFindFree();
s32 unitHasRankingBonus(u16 id);
}

static __inline s32 damageRecordMaximum(SlotRecordA *record)
{
    if (record == NULL)
        return 0;
    s16 maximum = record->maxHp;
    if (unitHasRankingBonus(record->id))
        maximum = (s16)(s32)(maximum * 1.25f);
    return maximum;
}

static __inline void damageSetRecordCurrent(SlotRecordA *record, s16 value)
{
    if (record != NULL) {
        s32 maximum = damageRecordMaximum(record);
        if (value <= maximum) {
            maximum = value;
            if (value <= 0)
                maximum = 1;
        }
        record->hp = maximum;
    }
}

// Apply percentage damage to matching player/party records while preserving at least one HP.
extern "C" void FUN_004a01c8(u32 group, u8 conditionBit, s32 percentage)
{
    if (percentage <= 0)
        return;
    u32 mask = 1u << conditionBit;
    if ((group == 0 || group == 2 || group == 3) &&
        !(gameGetPlayerData()->ailments & 2) &&
        !(gameGetPlayerData()->ailments & 0x400) &&
        (gameGetPlayerData()->ailments & mask)) {
        s16 maximum = gameGetPlayerData()->maxHp;
        PlayerDataA *current = gameGetPlayerData();
        s32 loss = maximum * percentage / 100;
        if (loss <= 0)
            loss = 1;
        s32 remaining = current->hp - loss;
        if (remaining <= 0)
            remaining = 1;
        s16 value = remaining;
        PlayerDataA *player = gameGetPlayerData();
        if (value <= (player->maxHp)) {
            (player->maxHp) = value;
            if (value <= 0)
                (player->maxHp) = 1;
        }
        player->hp = (player->maxHp);
    }
    s32 count;
    const s8 *slots;
    if (group == 0 || group == 1) {
        count = gameSlotTableFindFree();
        slots = gameGetSlotTable()->party;
    } else if (group == 2 || group == 3) {
        count = 3;
        slots = gameGetSlotTable()->reserve;
    } else {
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        if (slots[index] >= 0) {
            SlotRecordA *record = gameGetSlotRecord(slots[index]);
            s16 flags = record->ailments;
            if (!(flags & 2) && !(flags & 0x400) && (flags & mask)) {
                s32 loss = damageRecordMaximum(record) * percentage / 100;
                if (loss <= 0)
                    loss = 1;
                s32 remaining = record->hp - loss;
                if (remaining <= 0)
                    remaining = 1;
                damageSetRecordCurrent(record, (s16)remaining);
            }
        }
    }
}
