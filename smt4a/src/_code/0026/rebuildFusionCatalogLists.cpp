/* NON_MATCHING: only scratch registers for the unique-race append value/address are exchanged; -O2 candidate. */
#include "camp/Unite/UniteGlobals.h"
#include "shard/W6_W6Match8_DevilRecordA.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match6_CompactSortRecord.h"
#include <stdlib.h>
#include "camp/Unite/UnitePreferences.h"
#include "code/Code004d.h"
#include "runtime/String.h"

extern "C" {
extern const u32 DAT_0052f210[];
void sysMemClear(void *, u32);
u32 compendiumEntryIsRegistered(u32);
u16 itemIsCollectedWithRelated(u32);
s32 arrayContainsU16(const u16 *, s32, u32);
s32 FUN_002b2ca8(const void *, const void *);
u32 FUN_00229210(s32);

void rebuildFusionCatalogLists()
{
    UniteWorkA *work = g_unite;
    const FusionCatalogCriteria *filter = uniteGetCatalogCriteria();
    sysMemClear(work->catalogA.demons, sizeof(work->catalogA.demons));
    rt_memclr(work->catalogA.races, sizeof(work->catalogA.races));
    sysMemClear(work->catalogA.skills, sizeof(work->catalogA.skills));
    s32 demonCount = 0, raceCount = 0;
    for (u16 id = 0; id <= 1200; ++id) {
        if (entryDefIsAvailable(work->context, id)) {
            const NkmBaseRecordA *demon = nkmBaseGetRecord(id);
            if ((compendiumEntryIsRegistered(demon->id) || itemIsCollectedWithRelated(demon->id)) &&
                (!filter->race || filter->race == demon->race) &&
                (!filter->levelBand || FUN_004da77c(reinterpret_cast<u32>(work->context), demon->level, filter->levelBand))) {
                work->catalogA.demons[demonCount++] = demon->id;
            }
            if (!arrayContainsU16(work->catalogA.races, raceCount, demon->race))
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
