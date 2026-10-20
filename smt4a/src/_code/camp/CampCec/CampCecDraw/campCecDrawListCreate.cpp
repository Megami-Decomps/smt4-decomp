/* NON_MATCHING: retail evaluates a (file, line) pair for the allocation (debug-allocation macro arguments) before the call and discards it; nothing uses the pair */
/* Creates a list of ten sprite handles with their counters cleared. */
#include "common.h"
#include "camp/CampCec/CampCecDraw.h"

extern "C" {

void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
extern u32 spriteHandleCreate(u32 type);

CampCecDrawList *campCecDrawListCreate(void)
{
    CampCecDrawList *list = (CampCecDrawList *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x98, 1);
    int i;

    for (i = 0; i < 10; i++) {
        list->handle[i] = spriteHandleCreate(0);
        list->count[i] = 0;
        list->state[i] = 0;
    }
    return list;
}

} /* extern "C" */
