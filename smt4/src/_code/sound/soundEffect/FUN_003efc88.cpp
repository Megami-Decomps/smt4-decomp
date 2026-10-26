/* NON_MATCHING: a static initialiser with no parameters (it sets g_soundEffectBuffers.id itself); the constants are held in callee-saved registers (build pushes r4-r6) where retail uses r1-r3, and the pair stores (strd -1 / stm zero) are scheduled differently. */
#include "classes/Obj421a58.h"
#include "classes/Obj421a78.h"
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

/* The effects' shared buffer table header. */
struct SoundEffectLink {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s64 id;
};

/* Two cleared words. */
struct SoundEffectPair {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
};

extern "C" {
extern SoundEffectLink g_soundEffectBuffers;
extern SoundEffectPair DAT_0044e0f0;

extern u8 entry;
extern Obj421a58 DAT_004c5484;
extern SoundEffectSmoothing DAT_004c54e4;
extern SoundEffectReverb DAT_004c5604;
extern const u32 DAT_004d4668[];

int __aeabi_atexit(void *object, void (*destructor)(void *), void *moduleHandle);
void FUN_00378e28(void *object);
void FUN_003793d8(void *object);

// Constructs the global sound effects (smoothing and reverb), registers their destructors and
// sets the default parameters.
void FUN_003efc88(void)
{
    g_soundEffectBuffers.id = -1;
    DAT_0044e0f0.first = 0;
    DAT_0044e0f0.second = 0;
    Obj421a58 *smoothing = new (&DAT_004c5484) Obj421a58();
    __aeabi_atexit(smoothing, FUN_00378e28, &entry);
    DAT_004c54e4.interval = 250;
    DAT_004c54e4.rise = 0.4f;
    DAT_004c54e4.fall = 0.5f;
    DAT_004c54e4.enabled = 0;
    Obj421a78 *reverb = new (&DAT_004c54e4 + 1) Obj421a78();
    __aeabi_atexit(reverb, FUN_003793d8, &entry);
    DAT_004c5604.time = 60;
    DAT_004c5604.delay = 4000;
    DAT_004c5604.volume = 100;
    DAT_004c5604.fall = 0.5f;
    DAT_004c5604.rise = 0.4f;
    DAT_004c5604.source = DAT_004d4668;
    DAT_004c5604.ratio = 0.6f;
    DAT_004c5604.gain = 0.4f;
    DAT_004c5604.enabled = 0;
    DAT_004c5604.unk21 = 0;
    DAT_004c5604.sizeA = 0xbe0;
    DAT_004c5604.sizeB = 0xe60;
    DAT_004c5604.sizeC = 0x820;
}

}
