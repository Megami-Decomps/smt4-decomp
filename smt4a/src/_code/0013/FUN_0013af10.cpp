/* NON_MATCHING: near (200 rows against 203): same slot walk, fade/loop state machine, constants and calls from the asm; retail indexes the sound-object table with an unsigned compare (movcs/bcs), keeps the table base in r4 (add r9,r4,#0 and sl = base+256 derived from it) and shares the `object->data` free path as a call-free block, ours takes the base from one literal with signed index compares (a u32 index variant moved the rows to 206) */
#include "util/FUN_0014375c.h"
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

#define SOUND_OBJECTS 4

#define OBJ_ACTIVE     0x01
#define OBJ_STARTED    0x02
#define OBJ_FADE_REQ   0x04
#define OBJ_FADING     0x08

struct AsdSndObject;

/* One sound object slot, stride 0x78 (observed fields only). */
struct SoundObject {
    u8 kind;                   /* 0x00: 0 free, 1/2 in use */
    u8 pad01[0x43];
    u32 data;                  /* 0x44: loaded sound data */
    AsdSndObject *handle;      /* 0x48 */
    u32 option;                /* 0x4C */
    s32 mode;                  /* 0x50: 3 halves the sound id, 4 never fades */
    u8 pad54[4];
    f32 gainRight;             /* 0x58 */
    f32 gainLeft;              /* 0x5C */
    u8 pad60[4];
    s32 delay;                 /* 0x64 */
    u32 flags;                 /* 0x68 */
    u8 pad6C[4];
    s32 fadeKind;              /* 0x70 */
    u8 options;                /* 0x74: 2 replace, 4 no loop */
    u8 soundId;                /* 0x75 */
    s8 loop;                   /* 0x76 */
    u8 stereo;                 /* 0x77 */
};

struct SoundObjectTable {
    SoundObject object[SOUND_OBJECTS];   /* 0x61978C */
    u8 pad1E0[0x1E6 - SOUND_OBJECTS * 0x78];
    s8 enabled;                          /* 0x619972 */
};

extern SoundObjectTable DAT_0061978c;

s32 jyoucyuGetTableEntry(u32 index);
s32 FUN_001681a4(AsdSndObject *handle);
AsdSndObject *asdSoundObjectCreate(u32 data, u32 option, u32 kind, f32 gain0, f32 gain1);
s32 asdSoundObjectRegister(AsdSndObject *handle, s32 id, s32 flag);
s32 asdSoundObjectFadeOut(AsdSndObject *handle);
s32 asdMemFree(u32 memory);
s32 FUN_00152bf8(AsdSndObject *handle);
void rt_aeabi_memclr(void *memory, s32 size);
s32 FUN_00162ea4(void);
s32 FUN_001517b4(s32 a, s32 b);
s32 slotIsActive(s32 a);

/* The sound object in slot `index`, or NULL when the index is out of range. */
static __inline SoundObject *soundObjectAt(s32 index)
{
    if (index >= SOUND_OBJECTS) {
        return 0;
    }
    return &DAT_0061978c.object[index];
}

/* Releases a finished sound object (data, handle) and clears its slot. */
static void soundObjectRelease(SoundObject *object, s32 keepLoop)
{
    if (object->data != 0) {
        asdMemFree(object->data);
    }
    object->data = 0;
    FUN_00152bf8(object->handle);
    rt_aeabi_memclr(object, sizeof(SoundObject));
    if (keepLoop != 0) {
        object->loop = 1;
    }
    object->flags = 0;
    object->kind = 0;
}

/* Per-frame update of the four sound objects: starts pending ones (fading out the others when a
 * replacement is requested), steps fade-out/loop state and releases finished objects. */
void FUN_0013af10(void)
{
    if (jyoucyuGetTableEntry(1) != 0) {
        return;
    }
    for (s32 i = 0; i < SOUND_OBJECTS; i++) {
        SoundObject *object = soundObjectAt(i);

        if (object->kind != 2) {
            continue;
        }
        if ((object->flags & OBJ_ACTIVE) != 0) {
            s32 start = 1;
            if ((object->options & 2) != 0) {
                s32 anyPlaying = 0;
                for (s32 j = 0; j < SOUND_OBJECTS; j++) {
                    SoundObject *other = soundObjectAt(j);
                    if (FUN_001681a4(other->handle) != 0) {
                        anyPlaying = other != 0;
                        break;
                    }
                }
                if (anyPlaying) {
                    for (s32 k = 0; k < SOUND_OBJECTS; k++) {
                        SoundObject *other = soundObjectAt(k);
                        if (FUN_001681a4(other->handle) != 0 && other->mode != 4) {
                            other->flags = other->flags | OBJ_FADE_REQ;
                            other->fadeKind = 0;
                        }
                    }
                } else {
                    for (s32 j = 0; j < SOUND_OBJECTS; j++) {
                        if (soundObjectAt(j)->kind == 1) {
                            soundObjectRelease(object, 0);
                            start = 0;
                            break;
                        }
                    }
                }
            }
            if (start == 0) {
                continue;
            }
            object->handle = asdSoundObjectCreate(object->data, object->option, object->stereo == 1 ? 3 : 1, 0.0f, 0.0f);
            FUN_0014375c(object->handle, object->gainLeft, object->gainRight);
            if (object->mode == 3) {
                asdSoundObjectRegister(object->handle, object->soundId >> 1, 0);
            } else {
                asdSoundObjectRegister(object->handle, object->soundId, 0);
            }
            object->flags = (object->flags & ~OBJ_ACTIVE) | OBJ_STARTED;
        } else if ((object->flags & OBJ_STARTED) != 0) {
            if ((DAT_0061978c.enabled != 0 || FUN_00162ea4() != 0) && object->mode != 4) {
                object->flags = object->flags | OBJ_FADE_REQ;
                object->fadeKind = 0;
            }
            if ((object->flags & OBJ_FADE_REQ) != 0) {
                object->fadeKind = 3;
                asdSoundObjectFadeOut(object->handle);
                object->flags = (object->flags & ~(OBJ_STARTED | OBJ_FADE_REQ)) | OBJ_FADING;
            } else if (FUN_001681a4(object->handle) == 0 && object->delay >= 1) {
                object->loop = 1;
                object->flags = (object->flags & ~(OBJ_STARTED | OBJ_FADE_REQ)) | OBJ_FADING;
            } else {
                object->delay = object->delay + 1;
            }
        }
        if ((object->flags & OBJ_FADING) != 0 && FUN_001681a4(object->handle) == 0) {
            s32 loop = object->loop;
            if ((object->options & 4) != 0) {
                loop = 0;
            }
            soundObjectRelease(object, loop);
        }
    }
    if (DAT_0061978c.enabled == 1 && FUN_001517b4(9, 2) == 0 && slotIsActive(6) == 0) {
        DAT_0061978c.enabled = 0;
    }
}

} /* extern "C" */
