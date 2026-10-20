#include "common.h"

extern "C" {

typedef struct IdList {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 ids[3];
} IdList;

extern int FUN_00437cac(u32 owner, u32 id, ...);
extern IdList *FUN_004383d8(u32 id);

/* Checks `id` and each non-zero id of its list: returns 2 when any check fails, else 0. */
u32 idListCheck(u32 unused, u32 owner, u32 id)
{
    IdList *list;
    int i;

    if (FUN_00437cac(owner, id) == 0) {
        return 2;
    }
    list = FUN_004383d8(id);
    if (list != NULL) {
        for (i = 0; i < 3; i++) {
            u16 listed = list->ids[i];

            if (listed == 0) {
                return 0;
            }
            if (FUN_00437cac(owner, listed, listed) == 0) {
                return 2;
            }
        }
    }
    return 0;
}

} /* extern "C" */
