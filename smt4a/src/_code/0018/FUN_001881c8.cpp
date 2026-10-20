/* Tail call into the function that follows (the same function for both halves). */
#include "common.h"

extern "C" {

void FUN_001881e8(u8 *obj, u8 *part);

void FUN_001881c8(u8 *obj)
{
    FUN_001881e8(obj, obj + 20);
    FUN_001881e8(obj, obj + 28);
}

}
