/* NON_MATCHING: retail keeps the object in r5 and the table section in r4 (built swaps them) and turns the last sort loop into a counted pointer walk; the rest is identical */
#include "AsdSDK/AsdDebug.h"
#include "gamedata/DataTable.h"
#include "shard/W5_W5Match2_ScalarRecord.h"
#include "shard/W6_W6Match5_DevilSort.h"

#define UNITE_RACE_COUNT 0x38

/* A fusable demon: its id and level, kept sorted per race. */
struct UniteDevilEntry {
    u16 id;
    u16 level;
};

struct UniteCtrl {
    /* 0x000 */ u8 counts[UNITE_RACE_COUNT];                /* fusable demons per race */
    /* 0x038 */ UniteDevilEntry *lists[UNITE_RACE_COUNT];   /* per race, sorted by level */
    /* 0x118 */ u8 unk118;
    /* 0x119 */ u8 unk119;
    /* 0x11A */ u16 unk11A;
    /* 0x11C */ u8 unk11C;
    /* 0x11D */ u8 unk11D;
    /* 0x11E */ u16 unk11E;
    /* 0x120 */ u8 unk120;
    /* 0x121 */ u8 unk121;
    /* 0x122 */ __packed u32 unk122;
    /* 0x126 */ __packed u32 unk126;
    /* 0x12A */ __packed u32 unk12A;
    /* 0x12E */ __packed u32 unk12E;
    /* 0x132 */ u8 unk132;
    /* 0x133 */ u8 unk133;
    /* 0x134 */ u16 unk134Low : 10;
    /* 0x134 */ u16 unk134High : 6;
    /* 0x136 */ u8 unk136;
    /* 0x137 */ u8 unk137;
    /* 0x138 */ s16 unk138;
    /* 0x13A */ s16 unk13A;
    /* 0x13C */ u8 unk13C[0x7];
    /* 0x143 */ u8 unk143;
    /* 0x144 */ u8 unk144[0x38];
    /* 0x17C */ u8 unk17C;
};

extern "C" {
void *asdMemAlloc(s32 heap, s32 align, s32 a, s32 size, s32 flag);
s32 recordCompareRankAndIndex(const RankedRecord *left, const RankedRecord *right);
void FUN_002b7bca(void *base, s32 count, s32 elementSize, s32 (*compare)(const RankedRecord *, const RankedRecord *));

/* Counts the fusable demons per race, allocates and fills the per-race lists, sorts them and
 * resets the fusion selection state. */
UniteCtrl *FUN_003c9c94(UniteCtrl *unite)
{
    void *section = dataTableGet(0, 0);
    dataTableGetEntries(section);
    u32 count = dataTableGetCount(section);
    u8 filled[UNITE_RACE_COUNT] = {0};
    s32 i;
    u32 n;

    for (i = 0; i < UNITE_RACE_COUNT; i++)
        unite->counts[i] = 0;
    for (n = 0; n < count; n++) {
        DevilSortRecord *devil = devilGetRecord((u16)n);
        if (devil->race < UNITE_RACE_COUNT && (((u16 *)devil)[3] & 1))
            unite->counts[devil->race]++;
    }
    for (i = 0; i < UNITE_RACE_COUNT; i++) {
        unite->lists[i] = NULL;
        if (unite->counts[i] != 0) {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\unite\\UniteCtrl.cpp", 213);
            unite->lists[i] = (UniteDevilEntry *)asdMemAlloc(0x100, 0x100, 0, unite->counts[i] * sizeof(UniteDevilEntry), 1);
        }
    }
    for (n = 0; n < count; n++) {
        DevilSortRecord *devil = devilGetRecord((u16)n);
        if (devil->race < UNITE_RACE_COUNT && (((u16 *)devil)[3] & 1)) {
            unite->lists[devil->race][filled[devil->race]].id = devil->id;
            unite->lists[devil->race][filled[devil->race]].level = devil->level;
            filled[devil->race]++;
        }
    }
    for (i = 0; i < UNITE_RACE_COUNT; i++) {
        if (unite->lists[i] != NULL)
            FUN_002b7bca(unite->lists[i], unite->counts[i], sizeof(UniteDevilEntry), recordCompareRankAndIndex);
    }
    unite->unk11C = 0;
    unite->unk11E = 0;
    unite->unk118 = 0;
    unite->unk11A = 0;
    unite->unk143 = 0;
    unite->unk120 = 0;
    unite->unk121 = 0;
    unite->unk122 = 0;
    unite->unk126 = 0;
    unite->unk12A = 0;
    unite->unk12E = 0;
    unite->unk132 = 0;
    unite->unk134High = 0;
    unite->unk136 = 0;
    unite->unk138 = -1;
    unite->unk13A = -1;
    unite->unk17C = 0;
    return unite;
}

} /* extern "C" */
