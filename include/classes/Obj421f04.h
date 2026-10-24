#ifndef CLASSES_OBJ421F04_H
#define CLASSES_OBJ421F04_H

#include "common.h"
#include "classes/Obj421d10.h"
#include "classes/Obj421cd4.h"

/* An index that starts out invalid. */
struct Obj421f04Id {
    Obj421f04Id() : value(-1) {}
    /* 0x00 */ s32 value;
};

/* A word that starts cleared, followed by one that is left alone. */
struct Obj421f04Handle {
    Obj421f04Handle() : value(0) {}
    /* 0x00 */ u32 value;
    /* 0x04 */ u32 unk04;
};

/* The signalling object the owner embeds (vtable 0x421f04), 0x2B8 bytes. */
class Obj421f04 : public Obj421d10 {
public:
    Obj421f04()
        : unk1C(0), unk20(0), unk24(0), unk28(0)
    {
    }
    virtual void vfunc08();
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ Obj421f04Id id;
    /* 0x38 */ Obj421f04Handle handle;
    /* 0x40 */ Obj421cd4 child;
};

typedef char Obj421f04SizeCheck[sizeof(Obj421f04) == 0x2B8 ? 1 : -1];

#endif
