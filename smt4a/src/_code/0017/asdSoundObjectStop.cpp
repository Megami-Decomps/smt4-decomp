/* NON_MATCHING: identical except register allocation: retail keeps `frames` in r5 (reused for the fade pointer) and the integer zero in r6; this build swaps r5/r6. */
#include "common.h"

struct InterpolationState {
    f32 start;       // 0x00
    f32 end;         // 0x04
    s32 duration;    // 0x08
    s32 elapsed;     // 0x0C
};

struct SoundObject;
struct SoundObjectVtbl {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void (*stopNow)(SoundObject *object);
    /* 0x14 */ u8 unk14[0x10];
    /* 0x24 */ void (*onFadeStart)(SoundObject *object);
};

/* A playing sound: its volume fade, play flags and the group it is registered with. */
struct SoundObject {
    /* 0x00 */ SoundObjectVtbl *vtbl;
    /* 0x04 */ u8 unk04[0x0C];
    /* 0x10 */ void *group;
    /* 0x14 */ u8 unk14[0x54];
    /* 0x68 */ InterpolationState fade;
    /* 0x78 */ u8 unk78[0x20];
    /* 0x98 */ u8 playing;
    /* 0x99 */ u8 pending;
    /* 0x9A */ u8 unk9A;
    /* 0x9B */ u8 fadingOut;
    /* 0x9C */ u8 unk9C;
    /* 0x9D */ u8 unk9D;
    /* 0x9E */ u8 unk9E[3];
    /* 0xA1 */ u8 state;
    /* 0xA2 */ u8 unkA2;
    /* 0xA3 */ u8 unkA3;
};

extern "C" {

f32 FUN_0017fc38(const InterpolationState *state);
void FUN_001a586c(void *group, SoundObject *object);

/* Fades the sound out over a time proportional to its current fade value, or stops it at once when it is not playing or
 * `frames` is not positive. */
void asdSoundObjectStop(SoundObject *object, s32 frames)
{
    if (frames > 0 && object->state != 2 && (object->playing != 0 || object->pending != 0)) {
        s32 duration = (s32)(FUN_0017fc38(&object->fade) * (f32)frames);
        InterpolationState *fade = &object->fade;
        f32 silent = 0.0f;
        fade->start = FUN_0017fc38(fade);
        fade->end = silent;
        fade->duration = duration;
        fade->elapsed = 0;
        object->unk9D = 0;
        if (object->group != NULL) {
            FUN_001a586c(object->group, object);
        }
        object->vtbl->onFadeStart(object);
        object->unk9A = 0;
        object->state = 0;
        object->unkA3 = 0;
        object->fadingOut = 1;
        object->unkA2 = 0;
        return;
    }
    object->vtbl->stopNow(object);
}

} /* extern "C" */
