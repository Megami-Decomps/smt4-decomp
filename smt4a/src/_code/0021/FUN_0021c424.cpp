/* Returns 1 if the first object in the list exists and jobFind accepts its first word, otherwise 0. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u32 id;
} Entry;

extern s32 jobFind(u32 id);
extern Entry *DAT_00588e2c;

u32 FUN_0021c424(void)
{
    u32 result = 0;

    if (DAT_00588e2c != NULL) {
        if (jobFind(DAT_00588e2c->id) != 0) {
            return 1;
        }
    }
    return result;
}

}
