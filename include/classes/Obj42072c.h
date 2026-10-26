#ifndef CLASSES_OBJ42072C_H
#define CLASSES_OBJ42072C_H

#include "common.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "classes/EffGeomRecord.h"
#include <stddef.h>

extern "C" {
void asdMemFreeNonNull(void *block);
}


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
typedef char Obj42072cSizeCheck[sizeof(Obj42072c) == 0x7AC ? 1 : -1];

#endif
