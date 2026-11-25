#ifndef CLASSES_OBJ557B68_H
#define CLASSES_OBJ557B68_H

#include "common.h"
#include <stddef.h>
#include <vector>
#include "classes/Obj557b18.h"

struct Obj557b68ColorEntry {
    /* 0x00 */ u32 color;
    /* 0x04 */ u8 enabled;
};

typedef char Obj557b68ColorEntryLayoutCheck[sizeof(Obj557b68ColorEntry) == 8 ? 1 : -1];
extern "C" void asdOperatorDelete(void* block);
extern "C" u32* setMinus1ReturnPtr(u32* value);
extern "C" void* __aeabi_vec_ctor_nocookie_nodtor(void* array, void* (*construct)(void*), u32 size, u32 count);

struct Obj557b68WordVector {
    /* 0x00 */ std::vector<u32> words;

    Obj557b68WordVector();
    ~Obj557b68WordVector();
};

enum { MORI_SCENE_COLOR_LISTS = 8 };

/* The scene's colour slots and per-colour item lists. The lists are destroyed before the colours. */
struct Obj557b68Vectors {
    /* 0x00 */ std::vector<Obj557b68ColorEntry> colors;
    /* 0x0C */ Obj557b68WordVector records[MORI_SCENE_COLOR_LISTS];
};

/* A word set to -1 by its constructor. */
struct Obj557b68MinusOne {
    u32 value;

    Obj557b68MinusOne() { setMinus1ReturnPtr(&value); }
};

// A projection onto a texture and its clip range (the shadow map's set-up, smt4a moriModelShadowMapBuild, addresses the block
// from its start and fills it in).
struct Obj557b68Projection {
    Obj557b68Projection() : unk00(0), unk01(0), nearClip(0.0f), farClip(0.0f) {}

    u8 unk00;                         // 0x00
    u8 unk01;                         // 0x01
    Obj557b18Matrix matrixB;          // 0x04: the texture projection
    Obj557b18Matrix matrixC;          // 0x34
    f32 nearClip;                     // 0x64
    f32 farClip;                      // 0x68
};

/* Projection setup and the two words cleared at its start by the scene constructor. */
struct Obj557b68ProjectionSetup {
    Obj557b68ProjectionSetup() : unk00(0), unk04(0) {}

    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ Obj557b68Projection projection;
};

/* The first block of the object's state: counters, three matrices and the projection setup. */
struct Obj557b68Layer {
    Obj557b68Layer()
        : unk010(0), unk014(0), unk018(0), unk01c(0),
          width(240.0f), height(400.0f), unk0cc(0x18000000),
          unk0d4(0.0f), unk0d8(1.0f), unk0dc(0), unk0e0(0), unk0e8(0)
    {
    }

    u32 unk010;                       // 0x010
    u32 unk014;                       // 0x014
    u32 unk018;                       // 0x018
    u32 unk01c;                       // 0x01C
    Obj557b18Matrix matrixA;          // 0x020
    Obj557b68ProjectionSetup projectionSetup; /* 0x050 */
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

/* Three view sizes and four flags. */
struct Obj557b68Tail {
    Obj557b68Tail() : unk0ec(0)
    {
        for (s32 i = 0; i < 3; ++i) viewSizes[i] = 4;
        for (s32 i = 0; i < 4; ++i) viewFlags[i] = 0;
    }

    /* 0x00 */ u32 unk0ec;
    /* 0x04 */ u16 viewSizes[3];
    /* 0x0A */ u8 viewFlags[4];
    /* 0x0E */ u8 unk0fa[2];
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
    Obj557b68Vectors vectors;        /* 0x108 */
    u8 unk174[8];                    // 0x174
    f32 fogStart;                    // 0x17C
    f32 fogEnd;                      // 0x180
    f32 fogOffset;                   // 0x184
    f32 fogScale;                    // 0x188
    f32 fogPower;                    // 0x18C
    u8 fogColor[4];                  // 0x190
};

typedef char Obj557b68LayoutCheck[offsetof(Obj557b68, layer) == 0x10 && offsetof(Obj557b68Layer, matrixA) == 0x10 &&
    offsetof(Obj557b68Layer, projectionSetup.projection.matrixB) == 0x4C &&
    offsetof(Obj557b68Layer, projectionSetup.projection.matrixC) == 0x7C &&
    offsetof(Obj557b68Layer, projectionSetup.projection.farClip) == 0xB0 &&
    offsetof(Obj557b68Layer, unk0e4) == 0xD4 && sizeof(Obj557b68Layer) == 0xDC &&
    offsetof(Obj557b68, tail) == 0xEC && offsetof(Obj557b68, unk104) == 0x104 &&
    offsetof(Obj557b68, vectors.colors) == 0x108 && offsetof(Obj557b68, vectors.records) == 0x114 &&
    offsetof(Obj557b68, fogStart) == 0x17C && offsetof(Obj557b68, fogColor) == 0x190 &&
    sizeof(Obj557b68) == 0x194 ? 1 : -1];

#endif
