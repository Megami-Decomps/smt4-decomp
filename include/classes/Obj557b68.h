#ifndef CLASSES_OBJ557B68_H
#define CLASSES_OBJ557B68_H

#include "common.h"
#include <stddef.h>
#include "classes/Obj557b18.h"

struct Obj557b68Entry {
    u32 values[2]; // 0x00
};

extern "C" void _ZN4__rw15__rw_deallocateEPvji(void* entries, s32 count, s32 allocator);
extern "C" void asdOperatorDelete(void* block);
extern "C" u32* setMinus1ReturnPtr(u32* value);
extern "C" void* __aeabi_vec_ctor_nocookie_nodtor(void* array, void* (*construct)(void*), u32 size, u32 count);

struct Obj557b68EntryVector {
    Obj557b68Entry* begin;    // 0x00
    Obj557b68Entry* end;      // 0x04
    Obj557b68Entry* capacity; // 0x08

    Obj557b68EntryVector() : begin(0), end(0), capacity(0) {}

    ~Obj557b68EntryVector()
    {
        _ZN4__rw15__rw_deallocateEPvji(begin, capacity - begin, 0);
    }
};

struct Obj557b68WordVector {
    u32* begin;    // 0x00
    u32* end;      // 0x04
    u32* capacity; // 0x08

    Obj557b68WordVector();
};

// A word set to -1 by its constructor.
struct Obj557b68MinusOne {
    u32 value;

    Obj557b68MinusOne() { setMinus1ReturnPtr(&value); }
};

// The first block of the object's state: counters, three matrices and the projection setup.
struct Obj557b68Layer {
    Obj557b68Layer()
        : unk010(0), unk014(0), unk018(0), unk01c(0),
          unk050(0), unk054(0), unk058(0), unk059(0),
          unk0bc(0.0f), unk0c0(0.0f), width(240.0f), height(400.0f), unk0cc(0x18000000),
          unk0d4(0.0f), unk0d8(1.0f), unk0dc(0), unk0e0(0), unk0e8(0)
    {
    }

    u32 unk010;                       // 0x010
    u32 unk014;                       // 0x014
    u32 unk018;                       // 0x018
    u32 unk01c;                       // 0x01C
    Obj557b18Matrix matrixA;          // 0x020
    u32 unk050;                       // 0x050
    u32 unk054;                       // 0x054
    u8 unk058;                        // 0x058
    u8 unk059;                        // 0x059
    Obj557b18Matrix matrixB;          // 0x05C
    Obj557b18Matrix matrixC;          // 0x08C
    f32 unk0bc;                       // 0x0BC
    f32 unk0c0;                       // 0x0C0
    f32 width;                        // 0x0C4
    f32 height;                       // 0x0C8
    u32 unk0cc;                       // 0x0CC
    u8 unk0d0[4];                     // 0x0D0
    f32 unk0d4;                       // 0x0D4
    f32 unk0d8;                       // 0x0D8
    u32 unk0dc;                       // 0x0DC
    u32 unk0e0;                       // 0x0E0
    Obj557b68MinusOne unk0e4;         // 0x0E4
    u32 unk0e8;                       // 0x0E8
};

// Three view sizes and four flags.
struct Obj557b68Tail {
    Obj557b68Tail()
        : unk0ec(0), unk0f0(4), unk0f2(4), unk0f4(4), unk0f6(0), unk0f7(0), unk0f8(0), unk0f9(0)
    {
    }

    u32 unk0ec;                       // 0x0EC
    u16 unk0f0;                       // 0x0F0
    u16 unk0f2;                       // 0x0F2
    u16 unk0f4;                       // 0x0F4
    u8 unk0f6;                        // 0x0F6
    u8 unk0f7;                        // 0x0F7
    u8 unk0f8;                        // 0x0F8
    u8 unk0f9;                        // 0x0F9
    u8 unk0fa[2];                     // 0x0FA
};

// An owner of one entry vector and eight word vectors (vtable at 0x557b68).
class Obj557b68 {
public:
    Obj557b68();
    virtual ~Obj557b68();
    static void operator delete(void* block) { asdOperatorDelete(block); }

    u32 unk004;                       // 0x004
    u32 unk008;                       // 0x008
    u32 unk00c;                       // 0x00C
    Obj557b68Layer layer;             // 0x010
    Obj557b68Tail tail;               // 0x0EC
    u32 unk0fc;                       // 0x0FC
    u32 unk100;                       // 0x100
    u32 unk104;                       // 0x104
    Obj557b68EntryVector entries;     // 0x108
    Obj557b68WordVector records[8];   // 0x114
    u8 unk174[8];                    // 0x174
    f32 fogStart;                    // 0x17C
    f32 fogEnd;                      // 0x180
    f32 fogOffset;                   // 0x184
    f32 fogScale;                    // 0x188
    f32 fogPower;                    // 0x18C
    u8 fogColor[4];                  // 0x190
};

typedef char Obj557b68LayoutCheck[offsetof(Obj557b68, layer) == 0x10 && offsetof(Obj557b68Layer, matrixA) == 0x10 &&
    offsetof(Obj557b68Layer, matrixB) == 0x4C && offsetof(Obj557b68Layer, matrixC) == 0x7C &&
    offsetof(Obj557b68Layer, unk0e4) == 0xD4 && sizeof(Obj557b68Layer) == 0xDC &&
    offsetof(Obj557b68, tail) == 0xEC && offsetof(Obj557b68, unk104) == 0x104 &&
    offsetof(Obj557b68, entries) == 0x108 && offsetof(Obj557b68, records) == 0x114 &&
    offsetof(Obj557b68, fogStart) == 0x17C && offsetof(Obj557b68, fogColor) == 0x190 &&
    sizeof(Obj557b68) == 0x194 ? 1 : -1];

#endif
