/* NON_MATCHING: retail stores the three 64/32-bit "-1" words with ldrexd/strexd/ldrex/strex loops (atomic stores of an SDK atomic type) and builds the first record with strb/stm sequences; this version uses plain stores and a struct copy, so the schedule and register use differ. */
#include "common.h"

// Parameter record copied to its twin below (0x14 bytes).
struct RecordParams {
    u8 a;      // 0x00
    u8 b;      // 0x01
    u8 c;      // 0x02
    u8 d;      // 0x03
    u32 e;     // 0x04
    u32 f;     // 0x08
    u32 g;     // 0x0c
    u8 h;      // 0x10
    u8 i;      // 0x11
    u8 j;      // 0x12
    u8 pad13;
};

// 0x18-byte slot cleared by FUN_00361934 (its constructor).
struct SlotRecord {
    u32 first;    // 0x00
    u32 second;   // 0x04
    u32 third;    // 0x08
    u8 flagA;     // 0x0c
    u8 flagB;     // 0x0d
    u16 shorts[4]; // 0x10
};

// Object with a vtable and four zeroed words (0x14 bytes).
struct VtableObject {
    const void *vtable; // 0x00
    u32 unk04[4];       // 0x04
};

struct AtomicRegistry {
    s64 first;        // 0x00
    s64 second;       // 0x08
    s32 third;        // 0x10
    u32 pad14;
    SlotRecord slot;  // 0x18
    SlotRecord slots[8]; // 0x30
};

// Timing state at 0x473888.
struct TimerState {
    u8 unk00[0x20];
    s32 ticksPerFrame; // 0x20
    u32 flagWord;      // 0x24 (object with a static destructor)
    u8 flag;           // 0x28
    u8 unk29[0x0f];
    s64 limits[5];     // 0x38
    s32 invalidA;      // 0x60
    s32 invalidB;      // 0x64
    u32 clearedA;      // 0x68
    u32 clearedB;      // 0x6c
};

extern "C" {
extern RecordParams DAT_004ef430;
extern RecordParams DAT_004ef444;
extern AtomicRegistry DAT_004ef858;
extern VtableObject DAT_004ef960;
extern VtableObject DAT_004ef974;
extern TimerState DAT_00473888;
extern const u8 DAT_00420fd8[];
extern u32 DAT_004738b4;
extern u32 DAT_004738b8;

void FUN_00361934(void *);
void _ZN9Obj420fd0D1Ev(void *);
void FUN_003573a0(void *);
void _ZN10NnOsThreadD1Ev(void *);
void entry(void);
void __aeabi_vec_ctor_nocookie_nodtor(void *, void (*ctor)(void *), u32 elementSize, u32 count);
void FUN_002ad314(f32 *numerator, f32 *denominator, u32 mode);
s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *handle);

// Initialises the timing globals: limits, parameter records, the atomic registry and its slots, two vtable objects and
// the ticks-per-frame scale; registers their static destructors.
void FUN_003ee9bc(void)
{
    DAT_00473888.invalidA = -1;
    DAT_00473888.invalidB = -1;
    DAT_00473888.clearedA = 0;
    DAT_00473888.clearedB = 0;

    DAT_004ef430.a = 0x87;
    DAT_004ef430.b = 8;
    DAT_004ef430.c = 10;
    DAT_004ef430.d = 2;
    DAT_004ef430.e = 10;
    DAT_004ef430.f = 14;
    DAT_004ef430.g = 4;
    DAT_004ef430.h = 4;
    DAT_004ef430.i = 100;
    DAT_004ef430.j = 10;
    DAT_004ef444 = DAT_004ef430;

    DAT_00473888.flagWord = 0;
    DAT_00473888.flag = 1;
    __aeabi_atexit(&DAT_00473888.flagWord, _ZN10NnOsThreadD1Ev, (void *)entry);

    DAT_004ef858.first = -1;
    DAT_004ef858.second = -1;
    DAT_004ef858.third = -1;
    DAT_004ef858.slot.first = 0;
    DAT_004ef858.slot.second = 0;
    DAT_004ef858.slot.third = 0;
    DAT_004ef858.slot.flagA = 0;
    DAT_004ef858.slot.flagB = 0;
    DAT_004ef858.slot.shorts[0] = 0;
    DAT_004ef858.slot.shorts[1] = 0;
    DAT_004ef858.slot.shorts[2] = 0;
    DAT_004ef858.slot.shorts[3] = 0;
    __aeabi_vec_ctor_nocookie_nodtor(DAT_004ef858.slots, FUN_00361934, sizeof(SlotRecord), 8);

    DAT_004ef960.vtable = DAT_00420fd8;
    DAT_004ef960.unk04[0] = 0;
    DAT_004ef960.unk04[1] = 0;
    DAT_004ef960.unk04[2] = 0;
    DAT_004ef960.unk04[3] = 0;
    __aeabi_atexit(&DAT_004ef960, _ZN9Obj420fd0D1Ev, (void *)entry);

    DAT_004ef974.vtable = DAT_00420fd8;
    DAT_004ef974.unk04[0] = 0;
    DAT_004ef974.unk04[1] = 0;
    DAT_004ef974.unk04[2] = 0;
    DAT_004ef974.unk04[3] = 0;
    __aeabi_atexit(&DAT_004ef974, _ZN9Obj420fd0D1Ev, (void *)entry);

    DAT_004738b4 = 0;
    DAT_004738b8 = 0;
    __aeabi_atexit(&DAT_004738b4, FUN_003573a0, (void *)entry);

    DAT_00473888.limits[0] = 1000000000;
    DAT_00473888.limits[1] = 20000000;
    DAT_00473888.limits[2] = 450000000;
    DAT_00473888.limits[3] = 2000000000;
    DAT_00473888.limits[4] = 100000000;

    f32 counts[2];
    f32 base;
    FUN_002ad314(&base, counts, 0x100000);
    DAT_00473888.ticksPerFrame = (s32)((base / counts[0]) * 256.0f);
}
}
