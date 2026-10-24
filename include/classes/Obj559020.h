#ifndef CLASSES_OBJ559020_H
#define CLASSES_OBJ559020_H

#include "common.h"
#include "classes/Obj559010.h"
#include "classes/Obj5584c8.h"
#include "classes/OnlineResult.h"

/* The object whose vtable is at 0x559020 (named after it until its real name is known): a
 * configuration block built around an embedded Obj559010, 0xd8 bytes. Slots 0 and 1 are the
 * destructors. */
class Obj559020 {
public:
    Obj559020();
    Obj559020(const Obj559020 &other);
    virtual ~Obj559020();

    /* Each stores its value (the field named in the method) and returns a success result. */
    OnlineResult setValue6c(s32 value);
    OnlineResult setValue74(s32 value);

protected:
    /* 0x00: vtable pointer */
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8 unk08;
    /* 0x0C */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ Obj559010 base18;
    /* 0x68 */ u32 unk68;
    /* 0x6C */ u32 unk6c;
    /* 0x70 */ u8 unk70;
    /* 0x74 */ u32 unk74;
    /* 0x78 */ u32 unk78;
    /* 0x7C */ u32 unk7c;
    /* 0x80 */ f32 unk80;
    /* 0x84 */ f32 unk84;
    /* 0x88 */ u32 unk88;
    /* 0x8C */ u32 unk8c;
    /* 0x90 */ u32 unk90;
    /* 0x94 */ u32 unk94;
    /* 0x98 */ u32 unk98;
    /* 0x9C */ u8 unk9c;
    /* 0x9D */ u8 unk9d;
    /* 0x9E */ u8 unk9e;
    /* 0x9F */ u8 unk9f;
    /* 0xA0 */ u8 unka0;
    /* 0xA1 */ u8 unka1;
    /* 0xA4 */ u32 unka4;
    /* 0xA8 */ u8 unka8;
    /* 0xAC */ Obj5584c8 unkac;
    /* 0xD4 */ u32 unkd4;
};

typedef char Obj559020SizeCheck[sizeof(Obj559020) == 0xD8 ? 1 : -1];

#endif
