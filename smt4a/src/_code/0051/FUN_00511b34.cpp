/* NON_MATCHING: same calls, loop and null-checked placement construction as retail; register allocation differs (retail keeps the manager in r4 and ends with `mov r0, r4`, as the inlined constructor of a global would) and unk14/unk18 are stored with strd instead of stm. */
#include "common.h"
#include <new>

#define VOICE_COUNT 24

class SndVoiceImpl {
public:
    SndVoiceImpl(u32 index);
    u8 unk00[0x7c];
};

class SndVoice {
public:
    SndVoice(u32 index);
    u8 unk00[0x68];
    SndVoiceImpl *impl; // 0x68
};

/* nn::snd::CTR::VoiceManager: the voices, their implementations and a table of voice pointers. */
struct SndVoiceManager {
    u8 unk00[0x10];
    u32 unk10;                         // 0x10
    u32 unk14;                         // 0x14
    s32 unk18;                         // 0x18
    SndVoice voices[VOICE_COUNT];      // 0x1c
    SndVoiceImpl impls[VOICE_COUNT];   // 0xa3c
    SndVoice *voiceTable[VOICE_COUNT]; // 0x15dc
};

extern "C" {
extern SndVoiceManager g_nnSndVoiceManager;
extern u8 entry;
void FUN_00439cc0(void *object);
s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *moduleHandle);

// Constructs the global voice manager (every voice, its implementation, and the voice table)
// and registers its destructor.
void FUN_00511b34(void)
{
    SndVoiceManager *manager = &g_nnSndVoiceManager;
    SndVoice *voice = manager->voices;
    SndVoiceImpl *impl = manager->impls;
    manager->unk10 = 0;
    manager->unk14 = 0;
    manager->unk18 = -1;
    for (s32 i = 0; i < VOICE_COUNT; i++) {
        manager->voiceTable[i] = new (voice) SndVoice(i);
        voice++;
        manager->voiceTable[i]->impl = new (impl) SndVoiceImpl(i);
        impl++;
    }
    __aeabi_atexit(manager, FUN_00439cc0, &entry);
}
}
