/* Apocalypse: the camp's skill list (g_camp->grids[3]) and the status screen's remembered row. */
#ifndef SMT4A_CAMP_CAMPSKILLLIST_H
#define SMT4A_CAMP_CAMPSKILLLIST_H

#include "camp/CampStateA.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"

/* The row of the skill list (grids[3]) the cursor is on. */
static __inline s32 campSkillListRow(CampStateA *camp)
{
    return resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(&camp->grids[3])) +
           listCursorGetRowIfUnblocked(&camp->grids[3]);
}

#endif
