/* NON_MATCHING: percentage damage, group selection and minimum-one-HP clamps are recovered; helper inlining, flag predicates and register allocation differ. */
#include "shard/Shard0034.h"
#include "shard/Shard004B.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 gameSlotTableFindFree();
ScaledRecordValues *gameGetSlotRecord(s32 slot);
s32 FUN_0018416c(u16 id);
}

static __inline s32 damageRecordMaximum(ScaledRecordValues *record)
{
    if (record == NULL)
        return 0;
    s16 maximum = record->maximum;
    if (FUN_0018416c(record->id))
        maximum = (s16)(s32)(maximum * 1.25f);
    return maximum;
}

static __inline void damageSetRecordCurrent(ScaledRecordValues *record, s16 value)
{
    if (record != NULL) {
        s32 maximum = damageRecordMaximum(record);
        if (value <= maximum) {
            maximum = value;
            if (value <= 0)
                maximum = 1;
        }
        record->current = maximum;
    }
}

// Apply percentage damage to matching player/party records while preserving at least one HP.
extern "C" void FUN_004a01c8(u32 group, u8 conditionBit, s32 percentage)
{
    if (percentage <= 0)
        return;
    u32 mask = 1u << conditionBit;
    if ((group == 0 || group == 2 || group == 3) &&
        !(reinterpret_cast<PlayerData *>(gameGetPlayerData())->unk5E & 2) &&
        !(reinterpret_cast<PlayerData *>(gameGetPlayerData())->unk5E & 0x400) &&
        (reinterpret_cast<PlayerData *>(gameGetPlayerData())->unk5E & mask)) {
        s16 maximum = reinterpret_cast<PlayerData *>(gameGetPlayerData())->unk1C;
        PlayerData *current = reinterpret_cast<PlayerData *>(gameGetPlayerData());
        s32 loss = maximum * percentage / 100;
        if (loss <= 0)
            loss = 1;
        s32 remaining = current->unk2A - loss;
        if (remaining <= 0)
            remaining = 1;
        s16 value = remaining;
        PlayerData *player = reinterpret_cast<PlayerData *>(gameGetPlayerData());
        s16 limit = player->unk1C;
        if (value <= limit) {
            limit = value;
            if (value <= 0)
                limit = 1;
        }
        player->unk2A = limit;
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
            ScaledRecordValues *record = gameGetSlotRecord(slots[index]);
            u16 flags = record->flags;
            if (!(flags & 2) && !(flags & 0x400) && (flags & mask)) {
                s32 loss = damageRecordMaximum(record) * percentage / 100;
                if (loss <= 0)
                    loss = 1;
                s32 remaining = record->current - loss;
                if (remaining <= 0)
                    remaining = 1;
                damageSetRecordCurrent(record, (s16)remaining);
            }
        }
    }
}
