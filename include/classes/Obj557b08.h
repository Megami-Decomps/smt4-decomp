#ifndef CLASSES_OBJ557B08_H
#define CLASSES_OBJ557B08_H

#include "common.h"

extern "C" void asdOperatorDelete(void *block);

/* A reference-counted model resource (a unit or NPC model file) kept in a 16-entry cache; the
 * object whose vtable is at 0x557b08 (named after it until its real name is known). Slot 0 is the
 * destructor; the vtable slot 0 entry is stripped from the retail image. */
class Obj557b08 {
public:
    Obj557b08()
        : id(0), unk10(0), unk14(0), unk18(0), unk1C(0), unk20(0), unk24(0), handle(0), unk2C(0), unk30(0),
          unk3C(0), unk3D(0), unk44(0)
    {
    }
    virtual ~Obj557b08();
    static void operator delete(void *block) { asdOperatorDelete(block); }

    /* 0x04 */ s32 id;     /* the unit id, negative for an NPC */
    /* 0x08 */ s32 kind;   /* 2 = NPC, 6 = unit */
    /* 0x0C */ s32 index;  /* the id inside its table */
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ void *handle; /* the loaded file */
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34[8];
    /* 0x3C */ u8 unk3C;
    /* 0x3D */ u8 unk3D;
    /* 0x3E */ u8 unk3E[2];
    /* 0x40 */ s32 references;
    /* 0x44 */ u32 unk44;
};

typedef char Obj557b08LayoutCheck[sizeof(Obj557b08) == 0x48 ? 1 : -1];

#endif
