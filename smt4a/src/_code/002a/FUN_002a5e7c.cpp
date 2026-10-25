/* NON_MATCHING: store order of the record update and the loop's scheduling differ from retail (150 rows against 147); the compendium percentage uses __aeabi_idivmod as retail does. */
#include "shard/W4_W4Match6b_GameDataBlock.h"

/* A party demon record (300 bytes each) as the compendium registration reads it. */
struct PartyDemon {
    /* 0x000 */ u16 level;
    /* 0x002 */ u16 form;
    /* 0x004 */ u16 stats[5];
    /* 0x00E */ u8 unk00E[0x12];
    /* 0x020 */ u16 growth[5];
    /* 0x02A */ u8 unk02A[6];
    /* 0x030 */ u32 skillBits;
    /* 0x034 */ u32 affinities[4];
    /* 0x044 */ u32 resistances[2];
    /* 0x04C */ u8 learned[0x12];
    /* 0x05E */ u8 unk05E[4];
    /* 0x062 */ u16 id;
    /* 0x064 */ u16 variant;
    /* 0x066 */ u8 unk066[0x46];
    /* 0x0AC */ u16 bonus[5];
    /* 0x0B6 */ u8 unk0B6[0x75];
    /* 0x12B */ u8 temperament;
};

/* A compendium entry (0x50 bytes): what is stored of a demon once it has been registered. */
struct CompendiumRecord {
    /* 0x00 */ u16 variant;
    /* 0x02 */ u16 stats[5];
    /* 0x0C */ u16 growth[5];
    /* 0x16 */ u8 flags;           /* bits 2-5: temperament, bit 0: registered */
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u16 level;
    /* 0x1A */ u16 form;
    /* 0x1C */ u32 affinities[4];
    /* 0x2C */ u32 resistances[2];
    /* 0x34 */ u8 unk34[4];
    /* 0x38 */ u32 skillBits;
    /* 0x3C */ u8 learned[0x12];
    /* 0x4E */ u16 unk4E;
};

typedef char CompendiumRecordSizeCheck[sizeof(CompendiumRecord) == 0x50 ? 1 : -1];

#define COMPENDIUM_FLAG_REGISTERED 1
#define COMPENDIUM_MAX_ID 0x500
#define COMPENDIUM_LISTED 1
#define COMPENDIUM_SEEN 2

/* The demon model table's entry. */
struct DemonModelInfo {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[8];
    /* 0x0A */ u16 flags;
};

/* The party block inside the save data: the order list and the 300-byte demon records. */
struct PartyBlock {
    /* 0x0000 */ u8 unk0000[0x8C];
    /* 0x008C */ u8 unk008C[0x68];
    /* 0x00F4 */ PartyDemon demons[1];
};

extern "C" {

DemonModelInfo *FUN_00184310(u32 id);
void countersRaiseA(s32 counter, s32 amount);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

/* Registers the demon with the given id in the compendium from the party member that currently
 * is that demon, then reports the percentage of listed demons that were seen. */
void FUN_002a5e7c(u32 id)
{
    PartyBlock *party = (PartyBlock *)g_gameDataBlocks.saveBlock;
    s8 *order = (s8 *)party + 0x1D14;
    u8 *partyCount = (u8 *)party + 0x1D2F;
    PartyDemon *demon = NULL;
    u16 i;

    for (i = 0; i < *partyCount; i++) {
        s32 slot = order[i];

        if (slot >= 0 && party->demons[slot].id == id) {
            demon = &party->demons[slot];
            break;
        }
    }
    if (id <= COMPENDIUM_MAX_ID) {
        CompendiumRecord *entry = (CompendiumRecord *)&g_gameDataBlocks.saveBlock->inventory.items[id];
        CompendiumRecord record;
        s32 listed;
        s32 seen;
        s32 index;

        __aeabi_memcpy4(&record, entry, sizeof(CompendiumRecord));
        record.variant = demon->variant;
        record.skillBits = demon->skillBits;
        record.level = demon->level;
        record.form = demon->form;
        record.stats[0] = demon->stats[0] + demon->bonus[0];
        record.growth[0] = demon->growth[0];
        record.stats[1] = demon->stats[1] + demon->bonus[1];
        record.growth[1] = demon->growth[1];
        record.stats[2] = demon->stats[2] + demon->bonus[2];
        record.growth[2] = demon->growth[2];
        record.stats[3] = demon->stats[3] + demon->bonus[3];
        record.growth[3] = demon->growth[3];
        record.stats[4] = demon->stats[4] + demon->bonus[4];
        record.growth[4] = demon->growth[4];
        record.affinities[0] = demon->affinities[0];
        record.affinities[1] = demon->affinities[1];
        record.affinities[2] = demon->affinities[2];
        record.affinities[3] = demon->affinities[3];
        record.resistances[0] = demon->resistances[0];
        record.resistances[1] = demon->resistances[1];
        __aeabi_memcpy4(record.learned, demon->learned, sizeof(record.learned));
        record.flags = (record.flags & ~0x3C) | ((demon->temperament << 2) & 0x3C);
        __aeabi_memcpy4(entry, &record, sizeof(CompendiumRecord));
        entry->flags |= COMPENDIUM_FLAG_REGISTERED;
        listed = 0;
        seen = 0;
        for (index = 0; index < 0x4FF; index++) {
            DemonModelInfo *info = FUN_00184310((u16)(index + 1));

            if (info != NULL && (info->flags & COMPENDIUM_LISTED) != 0) {
                listed++;
                if (info->id <= COMPENDIUM_MAX_ID &&
                    (g_gameDataBlocks.saveBlock->inventory.items[info->id].bits & COMPENDIUM_SEEN) != 0) {
                    seen++;
                }
            }
        }
        countersRaiseA(5, seen * 100 / listed);
    }
}

} /* extern "C" */
