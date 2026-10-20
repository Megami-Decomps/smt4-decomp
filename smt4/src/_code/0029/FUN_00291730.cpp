/* NON_MATCHING: retail loads the node into r1 (before computing &obj->node in r4); built loads it into r0 after the add */
#include "common.h"

extern "C" {

typedef struct Object00291730 {
    /* 0x000 */ u8 unk000[0xb7c];
    /* 0xb7c */ void *node;
} Object00291730;

void asdTMTexTableFreeEntry(s32 id);
void asdTMTexTableReleaseNode(s32 id);

/* Releases the object's texture-table node (if it holds one), then frees table entry 0x33. */
void FUN_00291730(Object00291730 *obj)
{
    void **node = &obj->node;

    if (*node != NULL) {
        asdTMTexTableReleaseNode(0x33);
        *node = NULL;
    }
    asdTMTexTableFreeEntry(0x33);
}

} /* extern "C" */
