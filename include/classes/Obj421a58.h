#ifndef CLASSES_OBJ421A58_H
#define CLASSES_OBJ421A58_H

#include "common.h"

/* The three words every smoothing state starts with, right after the vtable pointer. */
class Obj421a58Base {
public:
    Obj421a58Base() : unk04(0), unk08(0), unk0c(250) {}

    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0c;
};

/* The object whose vtable is at 0x421a58 (named after it until its real name is known): a
 * smoothing state with a fixed number of tracked channels (up to four). Slot 0 is the destructor
 * (retail has no deleting variant), slots 2-4 are its other virtual methods. */
class Obj421a58 : public Obj421a58Base {
public:
    Obj421a58();
    virtual ~Obj421a58();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();

protected:
    /* 0x00: vtable pointer */
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
    /* 0x18 */ u8 unk18;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 channelA[4];
    /* 0x34 */ u32 channelB[4];
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 unk48;
    /* 0x4C */ u32 unk4c;
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u32 unk54;
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u8 unk5c;
    /* 0x5D */ u8 channelCount;
    /* 0x5E */ u8 unk5e;
    /* 0x5F */ u8 unk5f;
};

typedef char Obj421a58LayoutCheck[sizeof(Obj421a58) == 0x60 ? 1 : -1];

#endif
