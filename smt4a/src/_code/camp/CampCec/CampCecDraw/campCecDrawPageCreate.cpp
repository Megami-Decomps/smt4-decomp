#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/CampCec/CampCecDraw.h"
#include "camp/CampStateQueries_Smt4a.h"

extern "C" {

void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
extern u32 spriteHandleCreate(u32 type);

CampCecDrawPageA *campCecDrawPageCreate(void)
{
    CampCecDrawPageA *page;
    int i;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecDraw.cpp", 791);
    page = (CampCecDrawPageA *)asdMemoryAllocTracked(0x100, 0x100, 0, 0xb8, 1);

    for (i = 0; i < 7; i++) {
        page->tab[i] = spriteHandleCreate(0);
        page->tabCount[i] = 0;
    }
    page->handle1 = spriteHandleCreate(0);
    page->handle0 = spriteHandleCreate(0);
    page->handle34 = spriteHandleCreate(0);
    for (i = 0; i < 8; i++) {
        page->item[i] = spriteHandleCreate(0);
        page->itemState[i] = 0;
    }
    page->handle38 = spriteHandleCreate(0);
    page->handle40 = spriteHandleCreate(0);
    page->handle48 = spriteHandleCreate(0);
    page->flag = 0;
    for (i = 0; i < 9; i++) {
        page->tail[i] = 0;
    }
    return page;
}

} /* extern "C" */
