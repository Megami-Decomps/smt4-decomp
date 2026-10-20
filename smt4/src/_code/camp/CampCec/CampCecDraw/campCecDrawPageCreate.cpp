/* NON_MATCHING: retail evaluates a (file, line) pair for the allocation (debug-allocation macro arguments) before the call and discards it; nothing uses the pair */
/* Creates the draw page set: sprite handles for the tabs, items and frame parts. */
#include "common.h"
#include "camp/CampCec/CampCecDraw.h"

extern "C" {

void *asdMemAlloc(int heap, int align, int arg2, int size, int arg4);
extern u32 asdTextCreate(u32 type);

CampCecDrawPage *campCecDrawPageCreate(void)
{
    CampCecDrawPage *page = (CampCecDrawPage *)asdMemAlloc(0x100, 0x100, 0, 0x98, 1);
    int i;

    for (i = 0; i < 7; i++) {
        page->tab[i] = asdTextCreate(0);
        page->tabCount[i] = 0;
    }
    page->handle1 = asdTextCreate(0);
    page->handle0 = asdTextCreate(0);
    page->handle34 = asdTextCreate(0);
    for (i = 0; i < 8; i++) {
        page->item[i] = asdTextCreate(0);
        page->itemState[i] = 0;
    }
    page->handle38 = asdTextCreate(0);
    page->handle40 = asdTextCreate(0);
    page->handle8C = asdTextCreate(0);
    page->flag = 0;
    return page;
}

} /* extern "C" */
