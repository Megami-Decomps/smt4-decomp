/* NON_MATCHING: 10 lines (one loop index shared by the loops): only the sort key's bitfield packing differs (retail updates the two words separately with a
 * shared 0xFFFDFFFF mask and stores them with one strd; this build loads both words with ldm and shifts the first). */
#include "camp/Unite/UniteGlobals.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/UnitStats.h"

extern "C" {
void gridNavigationConfigure(void *, s32, s32, s32, s32, s32);
void FUN_0029b130(u16 *, s32, const UnitePairEntryIV *, u32);
}

/* Fills the candidate list with the skills of both parents that can be inherited (flag 0x20) and that neither the list
 * nor the result already has, then sorts it by the fusion pair. */
extern "C" void uniteBuildInheritedSkillCandidates(u16 resultId, const StatBlock *first, const StatBlock *second)
{
    s32 i;

    UniteWork *work = g_unite;
    s32 count = 0;
    const NkmBaseRecord *result = nkmBaseGetRecord(resultId);
    for (i = 0; i < 24; ++i)
        work->secondListIV.indices[i] = 0;
    for (i = 0; i < 8; ++i) {
        if (first->skills.ids[i] && (dataTable06Sub1GetRecord(first->skills.ids[i])->flags & 0x20) &&
            !arrayContainsU16(work->secondListIV.indices, 24, first->skills.ids[i]) &&
            !arrayContainsU16(result->skills, 8, first->skills.ids[i]))
            work->secondListIV.indices[count++] = first->skills.ids[i];
    }
    for (i = 0; i < 8; ++i) {
        if (second->skills.ids[i] && (dataTable06Sub1GetRecord(second->skills.ids[i])->flags & 0x20) &&
            !arrayContainsU16(work->secondListIV.indices, 24, second->skills.ids[i]) &&
            !arrayContainsU16(result->skills, 8, second->skills.ids[i]))
            work->secondListIV.indices[count++] = second->skills.ids[i];
    }
    gridNavigationConfigure(work->secondListIV.cursor, count, 8, 1, 1, 1);
    UnitePairEntryIV key;
    key.firstId = first->id;
    key.secondId = second->id;
    key.firstType = 1;
    key.secondType = 1;
    key.resultId = resultId;
    FUN_0029b130(work->secondListIV.indices, count, &key, 0);
}
