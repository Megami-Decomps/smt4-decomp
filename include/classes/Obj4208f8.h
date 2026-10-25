#ifndef CLASSES_OBJ4208F8_H
#define CLASSES_OBJ4208F8_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" int asdMemFreeNonNull(void *block);

/* A three-component vector (position / velocity / axis). */
struct Obj4208f8Vec3 {
    Obj4208f8Vec3() {}
    Obj4208f8Vec3(f32 sx, f32 sy, f32 sz) : x(sx), y(sy), z(sz) {}
    void set(f32 sx, f32 sy, f32 sz)
    {
        x = sx;
        y = sy;
        z = sz;
    }
    void operator=(const Obj4208f8Vec3 &other)
    {
        x = other.x;
        y = other.y;
        z = other.z;
    }
    f32 x, y, z;
};

/* The per-model effect state: starts at the model's position, tracks it in the same frame
 * (vtable at 0x4208f8, named after it until its real name is known). The model's own position
 * following is switched off while the effect holds it. */
class Obj4208f8 {
public:
    Obj4208f8(AsdMdlObject *model);
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    virtual ~Obj4208f8();
    static void operator delete(void *block) { asdMemFreeNonNull(block); }

    /* 0x04 */ AsdMdlObject *model;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ Obj4208f8Vec3 unk0C;
    /* 0x18 */ Obj4208f8Vec3 unk18;      /* the model's first component column */
    /* 0x24 */ Obj4208f8Vec3 unk24;
    /* 0x30 */ Obj4208f8Vec3 unk30;      /* the model's position */
    /* 0x3C */ Obj4208f8Vec3 unk3C[3];
    /* 0x60 */ u8 unk60[0x30];
    /* 0x90 */ Obj4208f8Vec3 unk90;      /* copy of unk18 */
    /* 0x9C */ Obj4208f8Vec3 unk9C;
    /* 0xA8 */ Obj4208f8Vec3 unkA8;      /* copy of unk30 */
};

#endif
