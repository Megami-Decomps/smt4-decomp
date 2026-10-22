/* NON_MATCHING: vptr, float constants and default-field stores are scheduled in a different order. */
#include "classes/Obj4209cc.h"

/* Starts with no parts, no handle and no block. */
Obj4209cc::Obj4209cc()
{
    unk04 = 0;
    handle = 0;
    buffer = NULL;
    unk28 = 0;
    unk2C = 0;
    scale = 1.0f;
    unk34[0] = 0.0f;
    unk34[1] = 0.0f;
    unk34[2] = 0.0f;
    unk40 = 7;
    for (int i = 0; i < 3; ++i) {
        rowA[i] = NULL;
        rowB[i] = NULL;
    }
}
