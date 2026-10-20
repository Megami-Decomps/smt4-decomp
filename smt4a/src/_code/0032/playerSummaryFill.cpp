#include "shard/Shard0032.h"

extern "C" {

typedef struct Block21D90 {
    /* 0x00000 */ u8 unk00000[0x21D90];
    /* 0x21D90 */ u32 unk21D90;
} Block21D90;

extern SummarySource *FUN_001ab888(void);
extern Block21D90 *FUN_0014af84(void);
extern u8 FUN_0031cf94(void);
extern void FUN_0031f0a8(u8 id, s32 value);
extern u32 gameDataBlocksGetWord27E90(void);
extern u8 FUN_0018719c(u32 id);
extern Lookup62_64 *saveSlotFindSelected(void);
extern Lookup62_64 *FUN_00228ab0(s32 index);
extern s32 wstrlen(const u16 *str);
extern void FUN_002e59f8(const u16 *src, u16 *dst, u32 size);

/* Fills the player summary from the party data; stats and name already set are kept. */
void playerSummaryFill(PlayerSummary *summary)
{
    SummarySource *party = FUN_001ab888();
    Lookup62_64 *entry;
    Lookup62_64 *member;
    Block21D90 *block;
    s32 i;

    summary->unk36 = party->unk66;
    block = FUN_0014af84();
    summary->unk28 = block->unk21D90;
    summary->unk20 = FUN_0031cf94();
    FUN_0031f0a8(0x10, 1);
    if (FUN_0018719c(0x581) != 0) {
        FUN_0031f0a8(4, 1);
    }
    summary->unk30 = gameDataBlocksGetWord27E90();
    summary->unk38 = party->unk2C4C;
    entry = saveSlotFindSelected();
    if (entry == NULL) {
        summary->unk44 = 0;
        summary->unk3A = 0;
    } else {
        summary->unk44 = entry->unk62;
        summary->unk3A = entry->unk64;
    }
    for (i = 0; i < 3; i++) {
        member = FUN_00228ab0(i);
        if (member != NULL) {
            summary->unk3C[i] = member->unk62;
        } else {
            summary->unk3C[i] = 0;
        }
    }
    if (wstrlen(summary->name) == 0) {
        FUN_002e59f8(party->name, summary->name, 0x12);
    }
    if (summary->stats[0] == 0) {
        summary->stats[0] = party->stats[0];
    }
    if (summary->stats[1] == 0) {
        summary->stats[1] = party->stats[1];
    }
    if (summary->stats[2] == 0) {
        summary->stats[2] = party->stats[2];
    }
    if (summary->stats[3] == 0) {
        summary->stats[3] = party->stats[3];
    }
    if (summary->stats[4] == 0) {
        summary->stats[4] = party->stats[4];
    }
    if (summary->stats[5] == 0) {
        summary->stats[5] = party->stats[5];
    }
    if (summary->stats[6] == 0) {
        summary->stats[6] = party->stats[6];
    }
}

} /* extern "C" */
