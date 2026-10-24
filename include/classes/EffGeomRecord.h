#ifndef CLASSES_EFFGEOMRECORD_H
#define CLASSES_EFFGEOMRECORD_H

#include "common.h"

extern "C" void *asdOperatorNew(u32 bytes, s32 arg);

/* An effect geometry record (0x7E8 bytes): active-record state followed by the vertex data the
 * geometry builders fill in. Its constructor clears the draw state out of line. */
/* The record's leading draw state. */
struct EffGeomState {
    /* 0x00 */ u8 flag00;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
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
    /* 0x00 */ u8 data[0x70];
};

/* One color slot of a record (0x14 bytes; its constructor is out of line). */
class EffGeomColorSlot {
public:
    EffGeomColorSlot();
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ f32 values[4];
};

class EffGeomRecord {
public:
    EffGeomRecord();
    static void *operator new(u32 bytes, s32 arg) throw() { return asdOperatorNew(bytes, arg); }

    union {
        /* 0x00 */ u8 unk00[0x48];
        EffGeomState state;
    };
    /* 0x48 */ s16 *vertices;
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u8 unk50[0x150];
    /* 0x1A0 */ u8 slotFlags[12];
    /* 0x1AC */ EffGeomVertexSlot vertexSlots[12];
    /* 0x6EC */ EffGeomColorSlot colorSlots[12];
    /* 0x7DC */ u32 unk7DC;
    /* 0x7E0 */ u32 unk7E0;
    /* 0x7E4 */ u8 unk7E4;
    /* 0x7E5 */ u8 unk7E5[3];
};

typedef char EffGeomRecordSizeCheck[sizeof(EffGeomRecord) == 0x7E8 ? 1 : -1];

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
