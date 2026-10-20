/* Creates the set of sprite handles of the cec screens. */
#include "common.h"
#include "camp/CampCec/CampCecDraw.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *asdMemAlloc(int heap, int align, int arg2, int size, int arg4);
extern u32 asdTextCreate(u32 type);

CampCecDrawSet *campCecDrawSetCreate(void)
{
    CampCecDrawSet *set;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\camp\\CampCec\\CampCecDraw.cpp", 56);
    set = (CampCecDrawSet *)asdMemAlloc(0x100, 0x100, 0, 0x10, 1);

    set->handle[0] = asdTextCreate(0);
    set->handle[1] = asdTextCreate(0);
    set->handle[2] = asdTextCreate(0);
    set->flag = 0;
    return set;
}

} /* extern "C" */
