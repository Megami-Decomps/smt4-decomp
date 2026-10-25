#ifndef CLASSES_EFFGEOMRECORD_H
#define CLASSES_EFFGEOMRECORD_H

#include "common.h"
#include <stddef.h>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" void *memClear(void *block, u32 size);
extern "C" void nn_gr_CTR_Vertex_LoadArray_DisableAll(u32 *array);

/* An effect geometry record (0x7E8 bytes): active-record state followed by the vertex data the
 * geometry builders fill in. Its constructor clears the draw state out of line. */
/* The record's leading draw state. */
struct EffGeomState {
    /* 0x00 */ u8 flag00;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s8 unk08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30[6];
};

/* One vertex-array slot of a record (0x70 bytes; its constructor sets up the array description). */
class EffGeomVertexSlot {
public:
    EffGeomVertexSlot();
    union {
        /* 0x00 */ u8 data[0x70];
        /* 0x00 */ u32 first;
    };
};

/* One color slot of a record (0x14 bytes; its constructor is out of line). */
class EffGeomColorSlot {
public:
    EffGeomColorSlot();
    void clear()
    {
        enabled = 0;
        values[0] = 0.0f;
        values[1] = 0.0f;
        values[2] = 0.0f;
        values[3] = 0.0f;
    }
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ f32 values[4];
};
typedef char EffGeomSlotLayoutCheck[sizeof(EffGeomVertexSlot) == 0x70 &&
    offsetof(EffGeomVertexSlot, first) == 0 &&
    sizeof(EffGeomColorSlot) == 0x14 &&
    offsetof(EffGeomColorSlot, enabled) == 0 &&
    offsetof(EffGeomColorSlot, values) == 4 ? 1 : -1];
/* The three fields after the entries. */
class Obj42072cTail {
public:
    Obj42072cTail()
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
            nn_gr_CTR_Vertex_LoadArray_DisableAll(&arrays[i].first);
            entries[i].clear();
        }
    }

    /* Starts empty: reset() and the three trailing fields. */
    Obj42072cState()
    {
        reset();
    }

    union {
        /* 0x000 */ u32 unk00;
        /* 0x000 */ u32 commandWordCount;
    };
    union {
        /* 0x004 */ u8 block[0x150];
        /* 0x004 */ u32 commands[84];
    };
    /* 0x154 */ u8 flags[12];
    /* 0x160 */ EffGeomVertexSlot arrays[12];
    /* 0x6A0 */ EffGeomColorSlot entries[12];
};


class EffGeomRecord {
public:
    EffGeomRecord();
    static void *operator new(u32 bytes, s32 arg) throw() { return asdOperatorNew(bytes, reinterpret_cast<void *>(arg)); }

    union {
        /* 0x00 */ u8 unk00[0x48];
        EffGeomState state;
    };
    /* 0x48 */ s16 *vertices;
    /* 0x04C */ Obj42072cState renderState;
    /* 0x7DC */ Obj42072cTail tail;
};

typedef char EffGeomRecordSizeCheck[sizeof(EffGeomRecord) == 0x7E8 ? 1 : -1];
typedef char EffGeomRecordRendererLayoutCheck[
    sizeof(EffGeomState) == 0x48 &&
    offsetof(EffGeomRecord, vertices) == 0x48 &&
    offsetof(EffGeomRecord, renderState) == 0x4C &&
    offsetof(Obj42072cState, commandWordCount) == 0 &&
    offsetof(Obj42072cState, commands) == 4 &&
    offsetof(Obj42072cState, flags) == 0x154 &&
    offsetof(Obj42072cState, arrays) == 0x160 &&
    offsetof(Obj42072cState, entries) == 0x6A0 &&
    sizeof(Obj42072cState) == 0x790 &&
    offsetof(EffGeomRecord, tail) == 0x7DC &&
    offsetof(Obj42072cTail, unk00) == 0 &&
    offsetof(Obj42072cTail, unk04) == 4 &&
    offsetof(Obj42072cTail, unk08) == 8 &&
    sizeof(Obj42072cTail) == 0xC ? 1 : -1];

/* The 0x58-byte handle a geometry builder returns. */
struct EffGeomHandle {
    /* 0x00 */ u16 tag;
    /* 0x02 */ u16 vertexCount;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ EffGeomRecord *record;
    /* 0x0C */ u8 unk0C[0x48];
    /* 0x54 */ u32 unk54;
};

/* The 0x5C-byte handle of a point-style geometry builder: the record, one four-float vertex per
 * point, the element counts and an identity transform. */
struct EffGeomPointHandle {
    /* 0x00 */ EffGeomRecord *record;
    /* 0x04 */ f32 *points;
    /* 0x08 */ u16 pointCount;
    /* 0x0A */ u16 rows;
    /* 0x0C */ u16 columns;
    /* 0x0E */ u16 vertexCount;
    /* 0x10 */ u16 elementCount;
    /* 0x12 */ u16 flags;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ f32 transform[16];
    /* 0x58 */ u32 unk58;
};

#endif
