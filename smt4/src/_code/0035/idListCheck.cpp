#include "shard/W6_W6Match3_IdList.h"

extern "C" {


extern int FUN_002387f8(u32 owner, u32 id, ...);
extern IdList *idListFind(u32 id);

/* Checks `id` and each non-zero id of its list: returns 2 when any check fails, else 0. */
u32 idListCheck(u32 unused, u32 owner, u32 id)
{
    IdList *list;
    int i;

    if (FUN_002387f8(owner, id) == 0) {
        return 2;
    }
    list = idListFind(id);
    if (list != NULL) {
        for (i = 0; i < 3; i++) {
            u16 listed = list->ids[i];

            if (listed == 0) {
                return 0;
            }
            if (FUN_002387f8(owner, listed, listed) == 0) {
                return 2;
            }
        }
    }
    return 0;
}

} /* extern "C" */
