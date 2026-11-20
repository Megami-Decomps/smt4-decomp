/* NON_MATCHING: the reverb constants use a larger saved-register set, and the smoothing address
 * and float literals are pooled in a different order. The atexit registrations link to NOPs. */
#include "classes/Obj421a58.h"
#include "classes/Obj55be80.h"
#include <new>

/* The smoothing parameters that follow the first effect object. */
struct SoundEffectSmoothing {
    /* 0x00 */ u32 interval;
    /* 0x04 */ f32 rise;
    /* 0x08 */ f32 fall;
    /* 0x0C */ u8 enabled;
    /* 0x0D */ u8 unk0d[3];
};

/* The reverb parameters that follow the second effect object. */
struct SoundEffectReverb {
    /* 0x00 */ u32 time;
    /* 0x04 */ u32 delay;
    /* 0x08 */ u32 volume;
    /* 0x0C */ f32 fall;
    /* 0x10 */ f32 rise;
    /* 0x14 */ const u32 *source;
    /* 0x18 */ f32 ratio;
    /* 0x1C */ f32 gain;
    /* 0x20 */ u8 enabled;
    /* 0x21 */ u8 unk21;
    /* 0x24 */ u32 sizeA;
    /* 0x28 */ u32 sizeB;
    /* 0x2C */ u32 sizeC;
};

extern "C" {

extern u8 entry;
extern Obj421a58 g_soundDelayEffect;
extern SoundEffectSmoothing g_soundDelayParameters;
extern SoundEffectReverb g_soundReverbParameters;
extern const u32 DAT_006306ec[];

int __aeabi_atexit(void *object, void (*destructor)(void *), void *moduleHandle);
void FUN_0045ec40(void *object);
void _ZN9Obj55be80D1Ev(void *object);

// Constructs the global sound effects (smoothing and reverb), registers their destructors and
// sets the default parameters.
void FUN_0050ff60(void)
{
    Obj421a58 *smoothing = new (&g_soundDelayEffect) Obj421a58();
    __aeabi_atexit(smoothing, FUN_0045ec40, &entry);
    g_soundDelayParameters.interval = 250;
    g_soundDelayParameters.rise = 0.4f;
    g_soundDelayParameters.fall = 0.5f;
    g_soundDelayParameters.enabled = 0;
    Obj55be80 *reverb = new (&g_soundDelayParameters + 1) Obj55be80();
    __aeabi_atexit(reverb, _ZN9Obj55be80D1Ev, &entry);
    g_soundReverbParameters.time = 60;
    g_soundReverbParameters.delay = 4000;
    g_soundReverbParameters.volume = 100;
    g_soundReverbParameters.fall = 0.5f;
    g_soundReverbParameters.rise = 0.4f;
    g_soundReverbParameters.source = DAT_006306ec;
    g_soundReverbParameters.ratio = 0.6f;
    g_soundReverbParameters.gain = 0.4f;
    g_soundReverbParameters.enabled = 0;
    g_soundReverbParameters.unk21 = 0;
    g_soundReverbParameters.sizeA = 0xbe0;
    g_soundReverbParameters.sizeB = 0xe60;
    g_soundReverbParameters.sizeC = 0x820;
}

}
