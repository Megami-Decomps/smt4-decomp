/* NON_MATCHING: only scratch registers for the unique-race append value/address are exchanged; -O2 candidate. */
#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"
#include <stdlib.h>

struct FusionCatalogCriteria {
    u8 unk00[8];
    s16 race;
    u8 unk0a[0xb];
    s8 skillCategory; // 0x15
    u8 unk16[0xd];
    s8 levelBand; // 0x23
};
extern "C" {
extern UniteWork *g_unite;
extern const u32 DAT_0052f210[];
u8 *FUN_0026140c();
void sysMemClear(void *, u32);
void rt_memclr(void *, u32);
u32 entryDefIsAvailable(void *, u16);
u32 FUN_002a4b28(u32);
u16 FUN_0026264c(u32);
u32 FUN_004da77c(void *, s32, u32);
u32 FUN_0032fea0(const u16 *, s32, u16);
s32 FUN_002b2ca8(const void *, const void *);
u32 FUN_00229210(s32);

void rebuildFusionCatalogLists()
{
    UniteWork *work = g_unite;
    const FusionCatalogCriteria *filter = (const FusionCatalogCriteria *)(FUN_0026140c() + 0x20);
    sysMemClear(work->catalogA.demons, sizeof(work->catalogA.demons));
    rt_memclr(work->catalogA.races, sizeof(work->catalogA.races));
    sysMemClear(work->catalogA.skills, sizeof(work->catalogA.skills));
    s32 demonCount = 0, raceCount = 0;
    for (u16 id = 0; id <= 1200; ++id) {
        if (entryDefIsAvailable(work->context, id)) {
            const DevilRecordA *demon = FUN_00184310(id);
            if ((FUN_002a4b28(demon->id) || FUN_0026264c(demon->id)) &&
                (!filter->race || filter->race == demon->race) &&
                (!filter->levelBand || FUN_004da77c(work->context, demon->level, filter->levelBand))) {
                work->catalogA.demons[demonCount++] = demon->id;
            }
            if (!FUN_0032fea0(work->catalogA.races, raceCount, demon->race))
                work->catalogA.races[raceCount++] = demon->race;
        }
    }
    qsort(work->catalogA.demons, demonCount, sizeof(u16), FUN_002b2ca8);
    s32 skillCount = 0;
    for (u16 id = 0; id <= 500; ++id) {
        const CompactSortRecord *skill = findSkillMetadataById(id);
        if (skill && (skill->flags & 0x20) &&
            (filter->skillCategory < 0 || DAT_0052f210[filter->skillCategory] == skill->category) &&
            FUN_00229210((s16)id)) {
            work->catalogA.skills[skillCount++] = id;
        }
    }
    work->catalogA.demonCount = demonCount;
    work->catalogA.raceCount = raceCount;
    work->catalogA.skillCount = skillCount;
}
}
