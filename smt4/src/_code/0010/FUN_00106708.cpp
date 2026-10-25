/* NON_MATCHING: readable rebuild from asm of the sound voice update; retail walks the four voices with an inlined bounds-checked accessor and shares the voice-start tail by jumps (the draft's gotos), and keeps the group base and the voice pointers in different registers than armcc here. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

#define VOICE_PENDING 0x1
#define VOICE_PLAYING 0x2
#define VOICE_STOP_REQUESTED 0x4
#define VOICE_STOPPING 0x8

/* One sound voice (0x78 bytes). */
struct SoundVoice {
    /* 0x00 */ u8 state;           /* 0 free, 1 reserved, 2 in use */
    /* 0x01 */ u8 unk01[0x43];
    /* 0x44 */ void *data;
    /* 0x48 */ u32 handle;
    /* 0x4C */ u32 sourceId;
    /* 0x50 */ s32 mode;           /* 3: half volume, 4: never interrupted */
    /* 0x54 */ u8 unk54[4];
    /* 0x58 */ f32 mixB;
    /* 0x5C */ f32 mixA;
    /* 0x60 */ u8 unk60[4];
    /* 0x64 */ s32 waitFrames;
    /* 0x68 */ u32 flags;
    /* 0x6C */ u8 unk6C[4];
    /* 0x70 */ s32 fade;
    /* 0x74 */ u8 options;         /* 2: interrupts the others, 4: drops the repeat */
    /* 0x75 */ u8 volume;
    /* 0x76 */ s8 repeat;
    /* 0x77 */ u8 unk77;
};

extern "C" {
extern SoundVoice DAT_004c5634[4];
extern u8 DAT_004c581a;

s32 jyoucyuGetTableEntry(s32 index);
s32 FUN_002c1850(u32 handle);
s32 FUN_002c1d5c(void);
s32 FUN_002c1658(s32 a, s32 b);
u32 asdSoundWaveVoiceCreate(void *data, u32 sourceId, s32 flag);
void voiceSetMixParam(f32 a, f32 b);
void FUN_0010b864(u32 handle, s32 volume, s32 flag);
void FUN_0010b91c(u32 handle);
void FUN_0010c270(u32 handle);
void asdMemFree(void *block);
void rt_aeabi_memclr(void *block, s32 size);

/* The voice at an index, or null past the last one. */
static SoundVoice *voiceAt(s32 index)
{
    return index < 4 ? &DAT_004c5634[index] : NULL;
}

/* Frees a voice's data block and clears its slot. */
static void releaseVoice(SoundVoice *voice)
{
    if (voice->data != NULL)
        asdMemFree(voice->data);
    voice->data = NULL;
    rt_aeabi_memclr(voice, 0x78);
    voice->flags = 0;
    voice->state = 0;
}

/* Starts a pending voice: creates its wave voice, applies the mix and volume and frees the data. */
static void startVoice(SoundVoice *voice)
{
    u32 handle = asdSoundWaveVoiceCreate(voice->data, voice->sourceId, 1);
    voice->handle = handle;
    voiceSetMixParam(voice->mixA, voice->mixB);
    s32 volume = voice->volume;
    if (voice->mode == 3)
        FUN_0010b864(voice->handle, volume >> 1, 0);
    else
        FUN_0010b864(voice->handle, volume, 0);
    if (voice->data != NULL)
        asdMemFree(voice->data);
    voice->data = NULL;
    voice->flags = (voice->flags & ~VOICE_PENDING) | VOICE_PLAYING;
}

/* Steps the four sound voices: starts pending ones (stopping the others when it interrupts),
 * stops or ends playing ones and clears finished voices. */
void FUN_00106708(void)
{
    if (jyoucyuGetTableEntry(1) != 0)
        return;
    for (s32 i = 0; i < 4; i++) {
        SoundVoice *voice = voiceAt(i);
        if (voice->state != 2)
            continue;
        if (voice->flags & VOICE_PENDING) {
            if (voice->options & 2) {
                bool busy = false;
                for (s32 j = 0; j < 4; j++) {
                    SoundVoice *other = voiceAt(j);
                    if (FUN_002c1850(other->handle) != 0) {
                        busy = true;
                        break;
                    }
                }
                if (busy) {
                    for (s32 k = 0; k < 4; k++) {
                        SoundVoice *other = voiceAt(k);
                        if (FUN_002c1850(other->handle) != 0 && other->mode != 4) {
                            other->flags |= VOICE_STOP_REQUESTED;
                            other->fade = 0;
                        }
                    }
                } else {
                    bool reserved = false;
                    for (s32 m = 0; m < 4; m++) {
                        if (voiceAt(m)->state == 1) {
                            reserved = true;
                            break;
                        }
                    }
                    if (reserved) {
                        releaseVoice(voice);
                        continue;
                    }
                }
            }
            startVoice(voice);
        } else if (voice->flags & VOICE_PLAYING) {
            if ((DAT_004c581a != 0 || FUN_002c1d5c() != 0) && voice->mode != 4) {
                voice->flags |= VOICE_STOP_REQUESTED;
                voice->fade = 0;
            }
            if (voice->flags & VOICE_STOP_REQUESTED) {
                voice->fade = 3;
                FUN_0010b91c(voice->handle);
                voice->flags = (voice->flags & ~(VOICE_PLAYING | VOICE_STOP_REQUESTED)) | VOICE_STOPPING;
            } else if (FUN_002c1850(voice->handle) == 0 && voice->waitFrames > 0) {
                voice->repeat = 1;
                voice->flags = (voice->flags & ~(VOICE_PLAYING | VOICE_STOP_REQUESTED)) | VOICE_STOPPING;
            } else {
                voice->waitFrames++;
            }
        }
        if ((voice->flags & VOICE_STOPPING) && FUN_002c1850(voice->handle) == 0) {
            s8 repeat = voice->repeat;
            if (voice->options & 4)
                repeat = 0;
            FUN_0010c270(voice->handle);
            rt_aeabi_memclr(voice, 0x78);
            if (repeat != 0)
                voice->repeat = 1;
            voice->flags = 0;
            voice->state = 0;
        }
    }
    if (DAT_004c581a == 1 && FUN_002c1658(9, 2) == 0 && FUN_002c15fc(6) == 0)
        DAT_004c581a = 0;
}

} /* extern "C" */
