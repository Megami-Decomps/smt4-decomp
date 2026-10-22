/* NON_MATCHING: native descriptor/vector construction is integrated; remaining member initialization scheduling differs. */
#include "classes/Obj55a328.h"

extern "C" void clearStringVector(Obj55aff4Vector *values);

/* Clears the derived state and replaces the descriptor with its default value. */
Obj55a328::Obj55a328()
{
    unk08 = 0;
    unk0c = 0;
    descriptor = Obj55a788(0, 0xffff);
    unk28 = 0;
    unk10 = 0;
    unk2c = 0;
    clearStringVector(&elements);
}
