#include "common.h"

extern "C" {

int FUN_00224f68(void *obj, int arg);
extern int asdTMTexTableNodeIsLoaded(u32 table, int index);

typedef struct Obj {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ void *target;
} Obj;

/* Counts the set entries of tables 0x14 (5 entries) and 0x15 (4 entries); with 9 or more, calls FUN_00224f68. Returns 0. */
u32 FUN_0020f564(Obj *obj)
{
    s32 i;
    s32 count;
    void *target = obj->target;

    if (target != NULL) {
        count = 0;
        i = count;
        do {
            if (asdTMTexTableNodeIsLoaded(0x14, i) != 0) {
                count++;
            }
            i++;
        } while (i < 5);
        i = 0;
        do {
            if (asdTMTexTableNodeIsLoaded(0x15, i) != 0) {
                count++;
            }
            i++;
        } while (i < 4);
        if (count >= 9) {
            FUN_00224f68(target, 0);
            return 0;
        }
    }
    return 0;
}

} /* extern "C" */
