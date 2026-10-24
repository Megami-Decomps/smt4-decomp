/* NON_MATCHING: structured rebuild of the sound list update (retail is goto-laden: list unlink, fade-in/out and the per-entry counter share tails); the two float arguments of FUN_00147370 (progress of the fade) are inferred from the conversion order and not verified. */
#include "common.h"

/* One playing sound of the list (a doubly linked list through +0x70/+0x74). */
struct SoundVoiceInfo {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 state;
};
struct SoundEntry {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ SoundVoiceInfo *voice;
    /* 0x3C */ u8 unk3C[0x30];
    /* 0x6C */ void *buffer;
    /* 0x70 */ SoundEntry *next;
    /* 0x74 */ SoundEntry *previous;
    /* 0x78 */ s32 position;
    /* 0x7C */ u8 unk7C[8];
    /* 0x84 */ s32 counter;
    /* 0x88 */ u8 unk88[4];
    /* 0x8C */ s32 mode;
    /* 0x90 */ u32 flags;      /* 0x40 live, 2 started, 0x20 fading in, 0x10 fading out, 0x200 finished */
};

extern "C" {
extern SoundEntry *g_asdSoundStatus;
extern s32 DAT_004e3158;     /* entries in the list */
extern u8 DAT_004e315c;      /* the list's critical section */
extern s8 DAT_004e3169;
extern s8 DAT_004e316a;      /* counters advance this frame */

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_Voice_SetState(SoundVoiceInfo *voice, s32 state);
s32 FUN_001329d4(SoundVoiceInfo *voice);
void FUN_00147370(SoundVoiceInfo *voice, f32 a, f32 b);
void sndVoiceFree(void);
void asdMemFree(void *block);

static SoundEntry *soundEntryAt(s32 index)
{
    SoundEntry *entry = g_asdSoundStatus;
    for (s32 i = 0; i < index; i++)
        entry = entry->next;
    return entry;
}

/* Unlinks the entry from the list and frees its buffer, voice and the entry itself. */
static void soundEntryRemove(SoundEntry *entry)
{
    nn_os_CriticalSection_Enter(&DAT_004e315c);
    bool found = false;
    for (SoundEntry *e = g_asdSoundStatus; e != NULL; e = e->next) {
        if (e == entry) {
            found = true;
            break;
        }
    }
    if (found) {
        if (entry->previous != NULL) {
            entry->previous->next = entry->next;
            if (entry->next != NULL)
                entry->next->previous = entry->previous;
        } else {
            g_asdSoundStatus = entry->next;
            if (g_asdSoundStatus != NULL)
                g_asdSoundStatus->previous = NULL;
        }
        DAT_004e3158--;
    }
    if (entry->buffer != NULL)
        asdMemFree(entry->buffer);
    if (entry->voice != NULL)
        sndVoiceFree();
    asdMemFree(entry);
    nn_os_CriticalSection_Leave(&DAT_004e315c);
}

/* Advances every live sound: starts it, ends or removes it when its voice stops, and steps its
 * fade-in/fade-out counters. */
void FUN_001198a4(void)
{
    nn_os_CriticalSection_Enter(&DAT_004e315c);
    if (DAT_004e3169 != 0) {
        for (s32 i = 0; i < DAT_004e3158; i++) {
            SoundEntry *entry = soundEntryAt(i);
            if (entry == NULL || !(entry->flags & 0x40))
                continue;
            bool advanceCounter = true;
            if (FUN_001329d4(entry->voice) == 0) {
                if (entry->voice->state == 2 || !(entry->flags & 2))
                    continue;
                if (entry->mode == 0) {
                    soundEntryRemove(entry);
                    i--;
                    continue;
                }
                if (entry->mode == 1)
                    entry->flags = (entry->flags & ~2u) | 0x200;
            } else if (!(entry->flags & 2)) {
                entry->flags |= 2;
            } else if (DAT_004e316a == 0) {
                continue;
            } else if (entry->flags & 0x20) {
                if (entry->position >= entry->counter)
                    FUN_00147370(entry->voice, (f32)entry->counter, (f32)entry->position);
                else {
                    FUN_00147370(entry->voice, 0.0f, 0.0f);
                    entry->flags &= ~0x20u;
                }
            } else if (entry->flags & 0x10) {
                if (entry->position >= entry->counter) {
                    FUN_00147370(entry->voice, (f32)entry->counter, (f32)entry->position);
                } else {
                    entry->flags &= ~0x10u;
                    if (entry->flags & 0x100) {
                        nn_snd_CTR_Voice_SetState(entry->voice, 1);
                        entry->flags &= ~0x100u;
                    } else if (entry->flags & 0x80) {
                        nn_snd_CTR_Voice_SetState(entry->voice, 2);
                        entry->flags &= ~0x80u;
                    }
                }
            } else {
                entry->counter++;
                advanceCounter = false;
            }
            if (advanceCounter && DAT_004e316a != 0)
                entry->counter++;
        }
        if (DAT_004e316a != 0)
            DAT_004e316a = 0;
    }
    nn_os_CriticalSection_Leave(&DAT_004e315c);
}

} /* extern "C" */
