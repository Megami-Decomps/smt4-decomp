/* Creates the set of sprite handles of the cec screens. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "camp/CampCec/CampCecDraw.h"
#include "AsdSDK/Source/Gfx/Text/AsdTextA.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {


CampCecDrawSetA *campCecDrawSetCreate(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecDraw.cpp", 62);
    CampCecDrawSetA *set = (CampCecDrawSetA *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x18, 1);

    set->handle[0] = (u32)spriteHandleCreate(0);
    set->handle[1] = (u32)spriteHandleCreate(0);
    set->handle[2] = (u32)spriteHandleCreate(0);
    set->handleD = (u32)spriteHandleCreate(0);
    set->flag = 0;
    return set;
}

} /* extern "C" */
