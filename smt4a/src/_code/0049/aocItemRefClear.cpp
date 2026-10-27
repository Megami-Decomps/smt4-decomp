#include "gamedata/AocItemRef.h"

/* Clears an item reference (id and price scaling). */
extern "C" void aocItemRefClear(AocItemRef *ref)
{
    ref->id = 0;
    ref->unk02Bit0 = 0;
    ref->scaled = 0;
    ref->percent = 0;
}
