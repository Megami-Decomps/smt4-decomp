#include "camp/Unite/UniteGlobals.h"
#include "gamedata/NkmBaseRecordA.h"
#include "util/BitsAndBytes_VariantB.h"
#include <string.h>

extern "C" {
void sysMemClear(void *memory, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void gridNavigationConfigure(void *cursor, s32 count, s32 visibleRows, s32 first, s32 second, s32 third);

/* Builds the inheritance screen's skill list for demon `devilId`: its initial skills, then the candidates not
 * already among them, then the extra skills, and sets the list cursor over them. */
void uniteInheritanceBuildSkillList(u32 devilId)
{
    UniteWorkA *work = g_unite;
    NkmBaseRecordA *record = nkmBaseGetRecord(devilId);
    memcpy(work->inheritanceA.slots, &record->skills, sizeof(work->inheritanceA.slots));
    sysMemClear(work->inheritanceA.mergedSkills, sizeof(work->inheritanceA.mergedSkills));
    for (s32 i = 0; i < 8; ++i) {
        if (work->inheritanceA.slots[i] != 0 &&
            arrayContainsU16(work->inheritanceA.mergedSkills, 24, work->inheritanceA.slots[i]) == 0) {
            for (s32 j = 0; j < 96; ++j) {
                if (work->inheritanceA.mergedSkills[j] == 0) {
                    work->inheritanceA.mergedSkills[j] = work->inheritanceA.slots[i];
                    break;
                }
            }
        }
    }
    for (s32 i = 0; i < 96; ++i) {
        if (work->inheritanceA.skills[i] == 0) {
            break;
        }
        if (arrayContainsU16(work->inheritanceA.mergedSkills, 24, work->inheritanceA.skills[i]) == 0) {
            for (s32 j = 0; j < 96; ++j) {
                if (work->inheritanceA.mergedSkills[j] == 0) {
                    work->inheritanceA.mergedSkills[j] = work->inheritanceA.skills[i];
                    break;
                }
            }
        }
    }
    s32 capacity = 24;
    if (work->state == 28) {
        capacity = 96;
    }
    __aeabi_memcpy4(work->inheritanceA.skills, work->inheritanceA.mergedSkills, capacity * sizeof(u16));
    s32 count = 0;
    for (s32 i = 0; i < 96; ++i) {
        if (work->inheritanceA.skills[i] == 0) {
            break;
        }
        ++count;
    }
    work->inheritanceA.skillCount = count;
    for (s32 i = 0; i < 96; ++i) {
        u16 skill = work->inheritanceA.extraSkills[i];
        if (skill == 0) {
            break;
        }
        work->inheritanceA.skills[count++] = skill;
    }
    work->inheritanceA.rowLimit = count;
    gridNavigationConfigure(&work->inheritanceA.skillList, count + 1, 9, 1, 1, 1);
}

} /* extern "C" */
