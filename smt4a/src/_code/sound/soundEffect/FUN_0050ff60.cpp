/* NON_MATCHING: identical except register allocation of the constants stored at the end (retail uses r1-r3 and pushes only r4; the build holds 60/4000/100 in r5/r6/ip and pushes r4-r6). The atexit registrations are the linker-removed __aeabi_atexit calls. */
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
extern Obj421a58 DAT_006195dc;
extern SoundEffectSmoothing DAT_0061963c;
extern SoundEffectReverb DAT_0061975c;
extern const u32 DAT_006306ec[];

int __aeabi_atexit(void *object, void (*destructor)(void *), void *moduleHandle);
void FUN_0045ec40(void *object);
void _ZN9Obj55be80D1Ev(void *object);

// Constructs the global sound effects (smoothing and reverb), registers their destructors and
// sets the default parameters.
void FUN_0050ff60(void)
{
    Obj421a58 *smoothing = new (&DAT_006195dc) Obj421a58();
    __aeabi_atexit(smoothing, FUN_0045ec40, &entry);
    DAT_0061963c.interval = 250;
    DAT_0061963c.rise = 0.4f;
    DAT_0061963c.fall = 0.5f;
    DAT_0061963c.enabled = 0;
    Obj55be80 *reverb = new (&DAT_0061963c + 1) Obj55be80();
    __aeabi_atexit(reverb, _ZN9Obj55be80D1Ev, &entry);
    DAT_0061975c.time = 60;
    DAT_0061975c.delay = 4000;
    DAT_0061975c.volume = 100;
    DAT_0061975c.fall = 0.5f;
    DAT_0061975c.rise = 0.4f;
    DAT_0061975c.source = DAT_006306ec;
    DAT_0061975c.ratio = 0.6f;
    DAT_0061975c.gain = 0.4f;
    DAT_0061975c.enabled = 0;
    DAT_0061975c.unk21 = 0;
    DAT_0061975c.sizeA = 0xbe0;
    DAT_0061975c.sizeB = 0xe60;
    DAT_0061975c.sizeC = 0x820;
}

}
