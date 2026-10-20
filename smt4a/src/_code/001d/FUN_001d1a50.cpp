#include "common.h"

extern "C" {

struct Obj001d1a50;

typedef struct Wrapper001d1a50 {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ Obj001d1a50 *obj;
} Wrapper001d1a50;

void FUN_001d1a58(Obj001d1a50 *obj, u32 set);

/* Passes the wrapper's obj on to FUN_001d1a58, the function that follows it. */
void FUN_001d1a50(Wrapper001d1a50 *wrapper, u32 set)
{
    FUN_001d1a58(wrapper->obj, set);
}

} /* extern "C" */
