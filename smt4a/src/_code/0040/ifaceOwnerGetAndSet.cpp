#include "shard/Shard0040.h"

extern "C" {

typedef struct IfaceVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ u32 (*get)(u32 arg);
    /* 0x08 */ void (*set)(u32 arg, u32 value);
} IfaceVtbl;

typedef struct IfaceOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 arg;
    /* 0x08 */ const IfaceVtbl *vtbl;
} IfaceOwner;

/* Reads the value through the interface into `out`, then forwards `value` to it (tail call). */
void ifaceOwnerGetAndSet(IfaceOwner *owner, u32 value, u32 *out)
{
    *out = owner->vtbl->get(owner->arg);
    owner->vtbl->set(owner->arg, value);
}

} /* extern "C" */
