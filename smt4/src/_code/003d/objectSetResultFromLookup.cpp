#include "common.h"

extern "C" {

typedef struct Object003db57c {
    /* 0x0000 */ u8 unk0000[0x1cfc];
    /* 0x1cfc */ u32 result;
} Object003db57c;

u32 FUN_002ae164(u32 id);
u32 FUN_002470a8(u32 value, u32 lookup, bool flag);

/* Stores FUN_002470a8's result for `value`, the lookup of `id` and `flag` in the object. */
void objectSetResultFromLookup(Object003db57c *obj, u32 id, u32 value, u32 flag)
{
    obj->result = FUN_002470a8(value, FUN_002ae164(id), flag);
}

} /* extern "C" */
