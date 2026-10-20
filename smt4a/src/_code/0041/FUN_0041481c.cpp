#include "common.h"

extern "C" {

typedef struct Vec3 {
    u32 x;
    u32 y;
    u32 z;
} Vec3;

typedef struct Source {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ Vec3 position;
} Source;

typedef struct Target {
    /* 0x00 */ u8 unk00[0x7C];
    /* 0x7C */ u8 header[0x1C];
    /* 0x98 */ void *buffer;
    /* 0x9C */ u8 unk9c[0x60];
    /* 0xFC */ u8 invalid;
} Target;

extern void asdMemFree(void *p);
extern void vectorCopyHeader(u8 *header, Vec3 *vector);
extern s32 refIsNonNegative(u8 *header);
extern void FUN_004130c0(Target *target, s32 arg);

/* Copies the source's position into the target's header; when it is non-negative frees the target's buffer and runs FUN_004130c0 (6), otherwise marks the target invalid. */
void FUN_0041481c(Target *target, Source *source)
{
    Vec3 position = source->position;

    vectorCopyHeader(target->header, &position);
    if (refIsNonNegative(target->header) == 0) {
        target->invalid = 1;
    } else {
        if (target->buffer != NULL) {
            asdMemFree(target->buffer);
            target->buffer = NULL;
        }
        FUN_004130c0(target, 6);
    }
}

} /* extern "C" */
