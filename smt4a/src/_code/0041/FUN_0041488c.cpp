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
    /* 0x7C */ u8 header[0xC];
    /* 0x88 */ void *buffer;
    /* 0x8C */ u8 unk8c[0x70];
    /* 0xFC */ u8 invalid;
} Target;

extern void asdMemFree(void *p);
extern void _ZN18OnlineResultRecordaSERKS_(u8 *header, Vec3 *vector);
extern s32 _ZNK18OnlineResultRecord7isValidEv(u8 *header);
extern void _ZN9Obj557c908setStateEj(Target *target, s32 arg);

/* Frees the target's buffer, copies the source's position into its header and runs _ZN9Obj557c908setStateEj (3) when it is non-negative, else marks the target invalid. */
void FUN_0041488c(Target *target, Source *source)
{
    Vec3 position;

    if (target->buffer != NULL) {
        asdMemFree(target->buffer);
        target->buffer = NULL;
    }
    position = source->position;
    _ZN18OnlineResultRecordaSERKS_(target->header, &position);
    if (_ZNK18OnlineResultRecord7isValidEv(target->header) == 0) {
        target->invalid = 1;
    } else {
        _ZN9Obj557c908setStateEj(target, 3);
    }
}

} /* extern "C" */
