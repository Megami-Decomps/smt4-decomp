#include "classes/Obj4221d4.h"

extern "C" void FUN_001a6928(Obj4221d4 *, s32);
extern "C" void asdMemFree(void *);
extern "C" void asdOperatorDeleteB(void *);

Obj4221d4::~Obj4221d4()
{
    FUN_001a6928(this, 1);
    if (bufferC != NULL) {
        asdOperatorDeleteB(bufferC);
        bufferC = NULL;
    }
    if (bufferB != NULL) {
        asdMemFree(bufferB);
        bufferB = NULL;
    }
    if (bufferA != NULL) {
        asdMemFree(bufferA);
        bufferA = NULL;
    }
}
