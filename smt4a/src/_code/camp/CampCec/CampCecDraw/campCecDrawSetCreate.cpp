/* Creates the set of sprite handles of the cec screens. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/CampCec/CampCecDraw.h"

extern "C" {

void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
extern u32 spriteHandleCreate(u32 type);

CampCecDrawSetA *campCecDrawSetCreate(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecDraw.cpp", 62);
    CampCecDrawSetA *set = (CampCecDrawSetA *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x18, 1);

    set->handle[0] = spriteHandleCreate(0);
    set->handle[1] = spriteHandleCreate(0);
    set->handle[2] = spriteHandleCreate(0);
    set->handleD = spriteHandleCreate(0);
    set->flag = 0;
    return set;
}

} /* extern "C" */
