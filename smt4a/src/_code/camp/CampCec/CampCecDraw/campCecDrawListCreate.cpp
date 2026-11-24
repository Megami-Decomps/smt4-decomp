/* Creates a list of ten sprite handles with their counters cleared. */
#include "common.h"
#include "camp/CampCec/CampCecDraw.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Text/AsdTextA.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {


CampCecDrawList *campCecDrawListCreate(void)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\camp\\CampCec\\CampCecDraw.cpp", 2284);
    CampCecDrawList *list = (CampCecDrawList *)asdMemoryAllocTracked(0x100, 0x100, 0, 0x98, 1);
    int i;

    for (i = 0; i < 10; i++) {
        list->handle[i] = (u32)spriteHandleCreate(0);
        list->count[i] = 0;
        list->state[i] = 0;
    }
    return list;
}

} /* extern "C" */
