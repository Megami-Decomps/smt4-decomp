#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/SkillFlags.h"

struct FusionCatalogOptions {
    u8 unk00[8];
    s16 race;
    u8 unk0a[0xb];
    s8 skillCategory;
};
struct FusionCatalogState {
    u8 unk00[0x1c];
    FusionCatalogOptions options;
};
typedef char FusionCatalogFilterOffsets[offsetof(FusionCatalogState, options.race) == 0x24 &&
    offsetof(FusionCatalogState, options.skillCategory) == 0x31 ? 1 : -1];
extern "C" {
extern UniteWork *g_unite;
const FusionCatalogState *FUN_002a0d0c(void);
s32 devilIsAvailable(void *, u16);
s32 FUN_0029ea68(u16);
s32 FUN_0029e9cc(u16);
s32 arrayContainsU16(const u16 *, s32, u16);
void memClear(void *, u32);
void rt_memclr(void *, u32);
s32 devilCompareTablePriority(const void *, const void *);
void FUN_002b7bca(void *, u32, u32, s32 (*)(const void *, const void *));
const SkillFlagsRecord *dataTable06Sub1GetRecord(u16);
s32 FUN_001a15f4(s16);
extern const u32 DAT_004032e8[];

void uniteRebuildFusionCatalog(void)
{
    UniteWork *work = g_unite;
    const FusionCatalogOptions *options = &FUN_002a0d0c()->options;
    memClear(work->catalogIV.demons, sizeof(work->catalogIV.demons));
    rt_memclr(work->catalogIV.races, sizeof(work->catalogIV.races));
    rt_memclr(work->catalogIV.skills, sizeof(work->catalogIV.skills));
    s32 demonCount = 0;
    s32 raceCount = 0;
    for (u16 id = 0; id < 1201; ++id) {
        if (devilIsAvailable(work->context, id)) {
            const DevilSortRecord *record = devilGetRecord(id);
            if (FUN_0029ea68(record->id) || FUN_0029e9cc(record->id)) {
                if (!options->race || options->race == record->race)
                    work->catalogIV.demons[demonCount++] = record->id;
                if (!arrayContainsU16(work->catalogIV.races, raceCount, record->race))
                    work->catalogIV.races[raceCount++] = record->race;
            }
        }
    }
    FUN_002b7bca(work->catalogIV.demons, demonCount, sizeof(u16), devilCompareTablePriority);
    s32 skillCount = 0;
    for (u16 id = 0; id < 501; ++id) {
        const SkillFlagsRecord *record = dataTable06Sub1GetRecord(id);
        if (record && (record->flags & 0x20) &&
            (options->skillCategory < 0 ||
             DAT_004032e8[options->skillCategory] == record->classification.category) &&
            FUN_001a15f4(static_cast<s16>(id))) {
            work->catalogIV.skills[skillCount++] = id;
        }
    }
    work->catalogIV.demonCount = demonCount;
    work->catalogIV.raceCount = raceCount;
    work->catalogIV.skillCount = skillCount;
}
}
