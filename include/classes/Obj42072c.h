#ifndef CLASSES_OBJ42072C_H
#define CLASSES_OBJ42072C_H

#include "common.h"

extern "C" {
int asdMemFree(void *block);
int asdMemFreeNonNull(void *block);
int memClear(void *block, int size);
int nn_gr_CTR_Vertex_LoadArray_DisableAll(void *array);
}

/* One vertex load array of an Obj42072c (an nn::gr::CTR::Vertex::LoadArray; only its first
 * word is touched here). */
class Obj42072cVertexArray {
public:
    Obj42072cVertexArray() { first = 0; }

    /* 0x00 */ u32 first;
    /* 0x04 */ u8 unk04[0x6C];
};

/* One of the twelve flag-and-parameters entries of an Obj42072c. */
class Obj42072cEntry {
public:
    Obj42072cEntry() { used = 0; }

    void clear()
    {
        used = 0;
        param[0] = 0.0f;
        param[1] = 0.0f;
        param[2] = 0.0f;
        param[3] = 0.0f;
    }

    /* 0x00 */ u8 used;
    /* 0x04 */ f32 param[4];
};

/* The three fields after the entries. */
class Obj42072cTail {
public:
    void clear()
    {
        unk00 = 0;
        unk04 = 0;
        unk08 = 0;
    }

    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
};

/* The part of an Obj42072c that reset() clears: twelve vertex load arrays and parameter
 * entries. */
class Obj42072cState {
public:
    /* Zeroes the state of every array and entry. */
    void reset()
    {
        unk00 = 0;
        memClear(block, sizeof(block));
        for (u32 i = 0; i < 12; i++) {
            flags[i] = 0;
            nn_gr_CTR_Vertex_LoadArray_DisableAll(&arrays[i]);
            entries[i].clear();
        }
    }

    /* Starts empty: reset() and the three trailing fields. */
    Obj42072cState()
    {
        reset();
    }

    /* 0x000 */ u32 unk00;
    /* 0x004 */ u8 block[0x150];
    /* 0x154 */ u8 flags[12];
    /* 0x160 */ Obj42072cVertexArray arrays[12];
    /* 0x6A0 */ Obj42072cEntry entries[12];
};

/* The enemy graphics renderer (EnemyGrRenderer.cpp; vtable at 0x42072c, named after it until its
 * real name is settled): it owns the state above and two buffers it allocates and frees. */
class Obj42072c {
public:
    Obj42072c(s32 count);
    virtual ~Obj42072c();
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ s32 count;
    /* 0x08 */ void *buffer08;   /* count * 0x90 bytes */
    /* 0x0C */ void *buffer0C;   /* count * 0x0C bytes */
    /* 0x10 */ Obj42072cState state;
    /* 0x7A0 */ Obj42072cTail tail;
};

/* The vertex API's load-array setup views. */
struct VertexLoadArrayEntry {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 index;
};
struct VertexLoadArrayInput {
    /* 0x00 */ u8 count;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u8 formats[12];
    /* 0x10 */ const VertexLoadArrayEntry *entries[12];
};
struct VertexLoadArrayData {
    /* 0x00 */ const void *buffer;
    /* 0x04 */ u8 formats[12];
    /* 0x10 */ u32 elementSizes[12];
    /* 0x40 */ u32 indices[12];
};
struct VertexLoadArrayBank {
    /* 0x000 */ u32 dirty;
    /* 0x004 */ u8 unk004[0x15C];
    /* 0x160 */ VertexLoadArrayData arrays[12];
};
typedef char VertexLoadArrayDataSizeCheck[sizeof(VertexLoadArrayData) == 0x70 ? 1 : -1];

#endif
