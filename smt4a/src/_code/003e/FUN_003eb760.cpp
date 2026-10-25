/* NON_MATCHING: readable rewrite with packed ten/six-bit slots compiles (171 vs 173 rows); register allocation of the loop-carried pointers differs */
#include "common.h"
#include "Model/MoriModelResource.h"

// A ten-bit value with a six-bit companion packed into one halfword.
struct TenSix {
    u16 low : 10;
    u16 high : 6;
};

// Battle entry being initialised (only the members written here).
struct BattleEntry {
    u8 kind;                // 0x00
    u8 unk01;
    u16 id;                 // 0x02
    u16 category;           // 0x04
    u16 variant;            // 0x06
    u16 unk08;              // 0x08
    u8 unk0a[0xca];
    u8 flags[4];            // 0xd4
    s32 stats[4];           // 0xd8
    u16 growth[5];          // 0xe8
    u8 unkf2[2];
    s32 baseStats[4];       // 0xf4
    s32 growthCopy[3];      // 0x104
    u16 level;              // 0x110
    u16 unk112;             // 0x112
    u16 unk114;             // 0x114
    u16 exp;                // 0x116
    u8 unk118[0x10];
    TenSix slotsA[0x15];    // 0x128
    TenSix slotsB[0x15];    // 0x152
    u8 slotsC[0x15];        // 0x1a6 (six-bit value of each)
    u8 unk1bb_[1];
    u8 unk1bc_[1];
    u8 unk1bd;
    u8 clear[0x228 - 0x1be];
    u32 unk228;             // 0x228
};

// Party member record the entry is created from (only the members read).
struct MemberSource {
    u8 unk00[0x0e];
    s16 hpRate;             // 0x0e
    s16 mpRate;             // 0x10
    u16 growth[5];          // 0x12
    u8 unk1c[0x0e];
    s16 strength;           // 0x2a
    s16 magic;              // 0x2c
    u8 unk2e[0x32];
    u16 levelWord;          // 0x60
    u16 id;                 // 0x62
    u16 expWord;            // 0x64
    u8 unk66[0xc6];
    u16 category;           // 0x12c
    u16 variant;            // 0x12e
};

struct CategoryEntry {
    u8 unk00[0x0c];
    u32 value;              // 0x0c
};

struct DevilInfo {
    u8 unk00[9];
    s8 type;                // 0x09
    u8 unk0a[0x31];
    u8 rate;                // 0x3b
};

extern "C" {

u32 FUN_004da024(u32 index);
u32 FUN_004da0b4(u32 index);
u32 randomGetLowerTenBits(MemberSource* member, u32 index);
u32 randomGetUpperSixBits(MemberSource* member, u32 index);
CategoryEntry* dataTableGetCategoryEntry(s32 category, u16 variant);
DevilInfo* FUN_00184310(u16 id);
void clearTwoWords(void* words);
void rt_memclr(void* block, u32 size);

// Builds a battle entry from a party member, rolling its random slots unless saved data exists.
void FUN_003eb760(void* unused, BattleEntry* entry, MemberSource* member)
{
    s32 hasSaved = FUN_00177654();
    entry->id = member->id;
    entry->kind = 8;
    entry->unk08 = 0xffff;
    entry->category = 0xffff;
    entry->variant = 0xffff;
    entry->flags[0] = 0;
    entry->flags[1] = 0;
    entry->flags[2] = 0;
    entry->flags[3] = 0;
    entry->stats[0] = member->strength;
    entry->stats[1] = member->hpRate;
    entry->stats[2] = member->magic;
    entry->stats[3] = member->mpRate;
    for (s32 i = 0; i < 5; i++) entry->growth[i] = member->growth[i];
    entry->baseStats[0] = entry->stats[0];
    entry->baseStats[1] = entry->stats[1];
    entry->baseStats[2] = entry->stats[2];
    entry->baseStats[3] = entry->stats[3];
    entry->growthCopy[0] = *reinterpret_cast<u32*>(&entry->growth[0]);
    entry->growthCopy[1] = *reinterpret_cast<u32*>(&entry->growth[2]);
    entry->growthCopy[2] = *reinterpret_cast<u32*>(&entry->growth[4]);
    entry->level = member->levelWord;
    entry->exp = member->expWord;

    if (hasSaved != 0) {
        entry->category = member->category;
        entry->variant = member->variant;
        for (s32 i = 0; i < 0x15; i++) {
            entry->slotsA[i].low = FUN_004da024(i & 0xff);
            entry->slotsA[i].high = FUN_004da0b4(i & 0xff);
            entry->slotsB[i].low = FUN_004da024(i & 0xff);
            u32 six = FUN_004da0b4(i & 0xff);
            entry->slotsB[i].high = six;
            entry->slotsC[i] = six & 0x3f;
        }
        entry->unk1bb_[0] = dataTableGetCategoryEntry((s16)member->category, member->variant)->value;
    } else {
        for (s32 i = 0; i < 0x15; i++) {
            entry->slotsA[i].low = randomGetLowerTenBits(member, i & 0xff);
            entry->slotsA[i].high = randomGetUpperSixBits(member, i & 0xff);
            entry->slotsB[i].low = randomGetLowerTenBits(member, i & 0xff);
            u32 six = randomGetUpperSixBits(member, i & 0xff);
            entry->slotsB[i].high = six;
            entry->slotsC[i] = six & 0x3f;
        }
        DevilInfo* info = FUN_00184310(entry->id);
        entry->unk1bb_[0] = info->rate;
        if (info->type == 1) {
            entry->unk1bc_[0] = 1;
        } else if (info->type == 4) {
            entry->unk1bc_[0] = 0;
        } else if (info->type == 5) {
            entry->unk1bc_[0] = 2;
        }
    }
    entry->unk112 = 0;
    entry->unk114 = 0;
    entry->unk228 = 0;
    clearTwoWords(reinterpret_cast<u8*>(entry) + 0x1be);
    clearTwoWords(reinterpret_cast<u8*>(entry) + 0x1c6);
    clearTwoWords(reinterpret_cast<u8*>(entry) + 0x1ce);
    rt_memclr(reinterpret_cast<u8*>(entry) + 0x1d6, 0x50);
}

} /* extern "C" */
