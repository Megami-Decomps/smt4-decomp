#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/CampCec/CampCecDraw.h"
#include "camp/CampStateQueries_Smt4a.h"
#include "AsdSDK/Source/Gfx/Text/AsdTextA.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {


CampCecDrawPageA *campCecDrawPageCreate(void)
{
    CampCecDrawPageA *page;
    int i;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecDraw.cpp", 791);
    page = (CampCecDrawPageA *)asdMemoryAllocTracked(0x100, 0x100, 0, 0xb8, 1);

    for (i = 0; i < 7; i++) {
        page->tab[i] = (u32)spriteHandleCreate(0);
        page->tabCount[i] = 0;
    }
    page->handle1 = (u32)spriteHandleCreate(0);
    page->handle0 = (u32)spriteHandleCreate(0);
    page->handle34 = (u32)spriteHandleCreate(0);
    for (i = 0; i < 8; i++) {
        page->item[i] = (u32)spriteHandleCreate(0);
        page->itemState[i] = 0;
    }
    page->handle38 = (u32)spriteHandleCreate(0);
    page->handle40 = (u32)spriteHandleCreate(0);
    page->handle48 = (u32)spriteHandleCreate(0);
    page->flag = 0;
    for (i = 0; i < 9; i++) {
        page->tail[i] = 0;
    }
    return page;
}

} /* extern "C" */
