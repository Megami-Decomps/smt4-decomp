#ifndef GAMEDATA_ITEMSORTCATEGORY_H
#define GAMEDATA_ITEMSORTCATEGORY_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* The sort category of a skill or item id (its data table 4 record's kind mapped to 0-4; 99 when the
   id is 0), shared by both games. */
u32 itemGetSortCategory(u32 id);

#ifdef __cplusplus
}
#endif

#endif
