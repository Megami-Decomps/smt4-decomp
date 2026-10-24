/* NON_MATCHING: scheduling only: retail materializes the zero result (mov r4,#0) before loading *entries */
/* Returns 1 if the first object in the list exists and jobFind accepts its first word, otherwise 0. */
#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u32 id;
} Entry;

extern s32 jobFind(u32 id);

u32 FUN_0021c424(Entry **entries)
{
    u32 result = 0;

    if (*entries != NULL) {
        if (jobFind((*entries)->id) != 0) {
            return 1;
        }
    }
    return result;
}

}
