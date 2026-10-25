#include "classes/Obj4209cc.h"

/* Starts with no parts, no handle and no block. */
Obj4209cc::Obj4209cc()
{
    handle = 0;
    buffer = NULL;
    unk28 = 0;
    unk2C = 0;
    scale = 1.0f;
    for (int i = 0; i < 3; ++i) {
        unk34[i] = 0.0f;
    }
    unk40 = 7;
    for (int i = 0; i < 3; ++i) {
        rowA[i] = NULL;
        rowB[i] = NULL;
    }
}
