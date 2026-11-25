/* NON_MATCHING: 90 lines (171 vs 169 rows): fixed missing 0x2A gap before slotsC, slotsC[i] = slotsB[i].high, s16 -1 stores, and Growth5 copy; remaining: retail copies growth via vldmia/vstmia while keeping stats in r0..r3 and schedules randomGetUpperSixBits slightly differently. */
#include "common.h"
#include "gamedata/NkmBaseRecordA.h"
#include "Model/MoriModelResource.h"
#include "runtime/String.h"

/* A ten-bit value with a six-bit companion packed into one halfword. */
struct TenSix {
    u16 low : 10;
    u16 high : 6;
};

/* Five growth rates padded to 12 bytes (copied wholesale into growthCopy). */
struct Growth5 {
    u16 v[5];
    u16 pad;
};

/* Battle entry being initialised (only the members written here). */
struct BattleEntry {
    /* 0x000 */ u8 kind;
    /* 0x001 */ u8 unk01;
    /* 0x002 */ u16 id;
    /* 0x004 */ s16 category;
    /* 0x006 */ s16 variant;
    /* 0x008 */ s16 unk08;
    /* 0x00A */ u8 unk0a[0xCA];
    /* 0x0D4 */ u8 flags[4];
    /* 0x0D8 */ s32 stats[4];
    /* 0x0E8 */ Growth5 growth;
    /* 0x0F4 */ s32 baseStats[4];
    /* 0x104 */ Growth5 growthCopy;
    /* 0x110 */ u16 level;
    /* 0x112 */ u16 unk112;
    /* 0x114 */ u16 unk114;
    /* 0x116 */ u16 exp;
    /* 0x118 */ u8 unk118[0x10];
    /* 0x128 */ TenSix slotsA[0x15];
    /* 0x152 */ TenSix slotsB[0x15];
    /* 0x17C */ u8 unk17c[0x2A];
    /* 0x1A6 */ u8 slotsC[0x15];
    /* 0x1BB */ u8 unk1bb_[1];
    /* 0x1BC */ u8 unk1bc_[1];
    /* 0x1BD */ u8 unk1bd;
    /* 0x1BE */ u8 clear[0x228 - 0x1BE];
    /* 0x228 */ u32 unk228;
};

/* Party member record the entry is created from (only the members read). */
struct MemberSource {
    /* 0x000 */ u8 unk00[0x0E];
    /* 0x00E */ s16 hpRate;
    /* 0x010 */ s16 mpRate;
    /* 0x012 */ u16 growth[5];
    /* 0x01C */ u8 unk1c[0x0E];
    /* 0x02A */ s16 strength;
    /* 0x02C */ s16 magic;
    /* 0x02E */ u8 unk2e[0x32];
    /* 0x060 */ u16 levelWord;
    /* 0x062 */ u16 id;
    /* 0x064 */ u16 expWord;
    /* 0x066 */ u8 unk66[0xC6];
    /* 0x12C */ u16 category;
    /* 0x12E */ u16 variant;
};

struct CategoryEntry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 value;
};

extern "C" {

u32 FUN_004da024(u32 index);
u32 FUN_004da0b4(u32 index);
u32 randomGetLowerTenBits(MemberSource* member, u32 index);
u32 randomGetUpperSixBits(MemberSource* member, u32 index);
CategoryEntry* dataTableGetCategoryEntry(s32 category, u16 variant);
void clearTwoWords(void *words);

/* Builds a battle entry from a party member, rolling its random slots unless saved data exists. */
void btlEntryApplyOptionOverrides(void *unused, BattleEntry *entry, MemberSource *member)
{
    s32 hasSaved = FUN_00177654();
    entry->id = member->id;
    entry->kind = 8;
    entry->unk08 = -1;
    entry->category = -1;
    entry->variant = -1;
    entry->flags[0] = 0;
    entry->flags[1] = 0;
    entry->flags[2] = 0;
    entry->flags[3] = 0;
    entry->stats[0] = member->strength;
    entry->stats[1] = member->hpRate;
    entry->stats[2] = member->magic;
    entry->stats[3] = member->mpRate;
    for (s32 i = 0; i < 5; i++) {
        entry->growth.v[i] = member->growth[i];
    }
    entry->baseStats[0] = entry->stats[0];
    entry->baseStats[1] = entry->stats[1];
    entry->baseStats[2] = entry->stats[2];
    entry->baseStats[3] = entry->stats[3];
    entry->growthCopy = entry->growth;
    entry->level = member->levelWord;
    entry->exp = member->expWord;

    if (hasSaved != 0) {
        entry->category = member->category;
        entry->variant = member->variant;
        for (s32 i = 0; i < 0x15; i++) {
            entry->slotsA[i].low = FUN_004da024(i & 0xFF);
            entry->slotsA[i].high = FUN_004da0b4(i & 0xFF);
            entry->slotsB[i].low = FUN_004da024(i & 0xFF);
            entry->slotsB[i].high = FUN_004da0b4(i & 0xFF);
            entry->slotsC[i] = entry->slotsB[i].high;
        }
        entry->unk1bb_[0] = dataTableGetCategoryEntry((s16)member->category, member->variant)->value;
    } else {
        for (s32 i = 0; i < 0x15; i++) {
            entry->slotsA[i].low = randomGetLowerTenBits(member, i & 0xFF);
            entry->slotsA[i].high = randomGetUpperSixBits(member, i & 0xFF);
            entry->slotsB[i].low = randomGetLowerTenBits(member, i & 0xFF);
            entry->slotsB[i].high = randomGetUpperSixBits(member, i & 0xFF);
            entry->slotsC[i] = entry->slotsB[i].high;
        }
        NkmBaseRecordA *info = nkmBaseGetRecord(entry->id);
        entry->unk1bb_[0] = info->battleRace;
        if (info->category == 1) {
            entry->unk1bc_[0] = 1;
        } else if (info->category == 4) {
            entry->unk1bc_[0] = 0;
        } else if (info->category == 5) {
            entry->unk1bc_[0] = 2;
        }
    }
    entry->unk112 = 0;
    entry->unk114 = 0;
    entry->unk228 = 0;
    clearTwoWords((u8 *)entry + 0x1BE);
    clearTwoWords((u8 *)entry + 0x1C6);
    clearTwoWords((u8 *)entry + 0x1CE);
    rt_memclr((u8 *)entry + 0x1D6, 0x50);
}

} /* extern "C" */
