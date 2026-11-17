#include "shard/Shard0032.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"

extern "C" {

typedef struct Block21D90 {
    /* 0x00000 */ u8 unk00000[0x21D90];
    /* 0x21D90 */ u32 unk21D90;
} Block21D90;

extern Block21D90 *gameDataBlocksGetSaveData(void);
extern u8 gameDataBlocksGetFlagByte(void);
extern void gameDataBlocksSetFlagBits(u8 id, s32 value);
extern u32 gameDataBlocksGetWord27E90(void);
extern u8 gameFlagIsSet(u32 id);
extern s32 libc_strlen(const u16 *str);
extern void memcpySrcFirst(const u16 *src, u16 *dst, u32 size);

/* Fills the player summary from the party data; stats and name already set are kept. */
void playerSummaryFill(PlayerSummary *summary)
{
    SaveSlotTableA *party = gameGetSlotTable();
    PartySlotA *entry;
    SlotRecordA *member;
    Block21D90 *block;
    s32 i;

    summary->unk36 = party->hero.level;
    block = gameDataBlocksGetSaveData();
    summary->unk28 = block->unk21D90;
    summary->unk20 = gameDataBlocksGetFlagByte();
    gameDataBlocksSetFlagBits(0x10, 1);
    if (gameFlagIsSet(0x581) != 0) {
        gameDataBlocksSetFlagBits(4, 1);
    }
    summary->unk30 = gameDataBlocksGetWord27E90();
    summary->unk38 = party->preferredId;
    entry = saveSlotFindSelected();
    if (entry == NULL) {
        summary->unk44 = 0;
        summary->unk3A = 0;
    } else {
        summary->unk44 = entry->record.id;
        summary->unk3A = entry->record.level;
    }
    for (i = 0; i < 3; i++) {
        member = gameGetSaveSlotData(i);
        if (member != NULL) {
            summary->unk3C[i] = member->id;
        } else {
            summary->unk3C[i] = 0;
        }
    }
    if (libc_strlen(summary->name) == 0) {
        memcpySrcFirst(party->hero.name, summary->name, 0x12);
    }
    if (summary->stats[0] == 0) {
        summary->stats[0] = party->hero.equipment[0];
    }
    if (summary->stats[1] == 0) {
        summary->stats[1] = party->hero.equipment[1];
    }
    if (summary->stats[2] == 0) {
        summary->stats[2] = party->hero.equipment[2];
    }
    if (summary->stats[3] == 0) {
        summary->stats[3] = party->hero.equipment[3];
    }
    if (summary->stats[4] == 0) {
        summary->stats[4] = party->hero.equipment[4];
    }
    if (summary->stats[5] == 0) {
        summary->stats[5] = party->hero.equipment[5];
    }
    if (summary->stats[6] == 0) {
        summary->stats[6] = party->hero.equipment[6];
    }
}

} /* extern "C" */
