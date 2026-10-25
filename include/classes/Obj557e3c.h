#ifndef CLASSES_OBJ557E3C_H
#define CLASSES_OBJ557E3C_H

#include "common.h"

extern "C" void asdOperatorDelete(void *block);

/* The object whose vtable is at 0x557e3c (named after it until its real name is known): a 0x730-byte
 * state object with five 0x80-byte slots. Slots 0/1 are its concrete destructor variants;
 * slot 2 starts an operation with a mode and argument, followed by four other virtual methods. */
class Obj557e3c {
public:
    Obj557e3c();
    virtual ~Obj557e3c();
    static void operator delete(void *block) { asdOperatorDelete(block); }
    virtual void slot2(u32 mode, u32 argument);
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();

protected:
    /* 0x000: vtable pointer */
    /* 0x004 */ u8 unk04;
    /* 0x005 */ u8 unk05;
    /* 0x006 */ u8 unk06;
    /* 0x007 */ u8 unk07[0xc];
    /* 0x013 */ u8 unk13;
    /* 0x014 */ u8 unk14;
    /* 0x015 */ u8 unk15;
    /* 0x016 */ u8 unk16[2];
    /* 0x018 */ u32 unk18;
    /* 0x01c */ u32 unk1c;
    /* 0x020 */ u32 unk20;
    /* 0x024 */ u32 unk24;
    /* 0x028 */ u8 unk28[0x10];
    /* 0x038 */ u32 unk38;
    /* 0x03c */ u32 unk3c;
    /* 0x040 */ u32 unk40;
    /* 0x044 */ u8 unk44[0x10];
    /* 0x054 */ u32 unk54;
    /* 0x058 */ u32 unk58;
    /* 0x05c */ u8 unk5c;
    /* 0x05d */ u8 unk5d[3];
    /* 0x060 */ u32 unk60;
    /* 0x064 */ u32 unk64;
    /* 0x068 */ u8 unk68[4];
    /* 0x06c */ u8 slots[5][0x80];
    /* 0x2ec */ u8 slotUsed[5];
    /* 0x2f1 */ u8 unk2f1[3];
    /* 0x2f4 */ u32 unk2f4;
    /* 0x2f8 */ u32 unk2f8;
    /* 0x2fc */ u8 unk2fc[0xc];
    /* 0x308 */ u32 unk308;
    /* 0x30c */ u8 unk30c;
    /* 0x30d */ u8 unk30d[0x423];
};

typedef char Obj557e3cLayoutCheck[sizeof(Obj557e3c) == 0x730 ? 1 : -1];

#endif
