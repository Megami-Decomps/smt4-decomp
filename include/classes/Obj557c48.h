#ifndef CLASSES_OBJ557C48_H
#define CLASSES_OBJ557C48_H

#include "common.h"
#include <vector>
#include <utility>

class Obj557b68;
class Obj557c28;
class Obj557b28;
/* Polymorphic base holding one word (vtable at 0x557c38 region; no separate symbol). */
class Obj557c48Base {
public:
    Obj557c48Base() : unk04(0) {}
    virtual ~Obj557c48Base() {}

    /* 0x00: vtable pointer */
    /* 0x04 */ u32 unk04;
};

/* A polymorphic table owner (vtable at 0x557c48; named after it until its real name is known):
 * two vectors, a word table and a 1.0 scale, with room for 0x100 entries reserved up front. */
class Obj557c48 : public Obj557c48Base {
public:
    Obj557c48();
    virtual ~Obj557c48();

    Obj557b68 *scene() const { return reinterpret_cast<Obj557b68 *>(unk04); }
    void setScene(Obj557b68 *value) { unk04 = reinterpret_cast<u32>(value); }
    void setShader(void *value) { unk08 = reinterpret_cast<u32>(value); }
    Obj557c28 *commands() const { return reinterpret_cast<Obj557c28 *>(unk10); }
    void setCommands(Obj557c28 *value) { unk10 = reinterpret_cast<u32>(value); }
    Obj557b28 *shadowMap() const { return reinterpret_cast<Obj557b28 *>(unk14); }
    void setShadowMap(Obj557b28 *value) { unk14 = reinterpret_cast<u32>(value); }
    void *sceneResource() const { return reinterpret_cast<void *>(unk38); }
    void setScratch(void *value) { unk3C = reinterpret_cast<u32>(value); }

private:
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ std::vector<u32> words;
    /* 0x24 */ std::vector<std::pair<u32, u32> > entries;
    /* 0x30 */ f32 scale;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
};

typedef char Obj557c48SizeCheck[sizeof(Obj557c48) == 0x40 ? 1 : -1];

#endif
