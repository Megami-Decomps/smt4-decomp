#include "common.h"

extern "C" {

typedef struct Object003db57c {
    /* 0x0000 */ u8 unk0000[0x1cfc];
    /* 0x1cfc */ u32 result;
} Object003db57c;

u32 dataTable40FindById(u32 id);
u32 namedVariantTableGetEntries(u32 value, u32 lookup, bool flag);

/* Stores namedVariantTableGetEntries's result for `value`, the lookup of `id` and `flag` in the object. */
void objectSetResultFromLookup(Object003db57c *obj, u32 id, u32 value, u32 flag)
{
    obj->result = namedVariantTableGetEntries(value, dataTable40FindById(id), flag);
}

} /* extern "C" */
