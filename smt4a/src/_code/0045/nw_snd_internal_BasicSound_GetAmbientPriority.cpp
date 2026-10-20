#include "shard/Shard0045.h"

extern "C" {

typedef struct VAmbient VAmbient;

typedef struct VAmbientVtbl {
    /* 0x00 */ void *unk00[3];
    /* 0x0C */ void (*slot3)(VAmbient *self, u32 arg, u32 priority);
} VAmbientVtbl;

struct VAmbient {
    /* 0x00 */ const VAmbientVtbl *vtbl;
};

typedef struct AmbientSource {
    /* 0x00 */ VAmbient *target;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 arg;
} AmbientSource;

void nw_snd_internal_BasicSound_GetAmbientPriority(AmbientSource *source, u32 priority)
{
    VAmbient *target = source->target;

    if (target != NULL) {
        target->vtbl->slot3(target, source->arg, priority);
    }
}

} /* extern "C" */
