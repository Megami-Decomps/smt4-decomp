#include "shard/W4_Match4_Obj559ecc.h"

extern "C" void operatorDeleteArray(void *allocation);

/* Releases the string's allocation, when present. */
Obj55aff4::~Obj55aff4()
{
    if (text != NULL) {
        operatorDeleteArray(text);
    }
}
