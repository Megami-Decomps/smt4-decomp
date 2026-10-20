#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {

extern AsdModelIdList g_asdModelIdLists[];

/* Returns id `index` of id list `list`, or 0 if the index is outside the list. */
u32 asdModelIdListGet(s32 index, s32 list)
{
    u32 id;

    if (index >= 0 && g_asdModelIdLists[list].count > index) {
        id = g_asdModelIdLists[list].id[index];
    } else {
        id = 0;
    }
    return id;
}

} /* extern "C" */
