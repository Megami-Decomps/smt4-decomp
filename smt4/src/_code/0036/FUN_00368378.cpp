#include "common.h"

extern "C" {

struct Sink;
typedef struct SinkVtbl {
    /* 0x0 */ void *unk0[3];
    /* 0xC */ void (*push)(struct Sink *sink, u32 value);
} SinkVtbl;

typedef struct Sink {
    /* 0x0 */ SinkVtbl *vtbl;
} Sink;

typedef struct Target {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Sink *sink;
} Target;

typedef struct Source {
    /* 0x000 */ u8 unk000[0x164];
    /* 0x164 */ u32 *begin;
    /* 0x168 */ u32 *end;
} Source;

/* Pushes every value of the source's list into the target's sink. */
void FUN_00368378(Target *target, Source *source)
{
    u32 *value;
    u32 *end;

    if (target->sink != NULL) {
        end = source->end;
        for (value = source->begin; value != end; value = value + 1) {
            target->sink->vtbl->push(target->sink, *value);
        }
    }
}

} /* extern "C" */
