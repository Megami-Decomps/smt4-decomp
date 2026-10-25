#ifndef CLASSES_OBJ557D90_H
#define CLASSES_OBJ557D90_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "shard/W5_W5Match7_ControllerPose.h"
#include <stddef.h>

extern "C" void asdOperatorDelete(void *block);

struct ParticleVec3 : MapVector {
    ParticleVec3() {}
    void set(f32 sx, f32 sy, f32 sz) { x = sx; y = sy; z = sz; }
};

// A model-backed particle, including the transform restored when it is released.
class Obj557d90 {
public:
    Obj557d90(AsdMdlObject *model);
    virtual ~Obj557d90();
    static void operator delete(void *block) { asdOperatorDelete(block); }
    /* 0x04 */ AsdMdlObject *owner;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ ParticleVec3 unk0C;
    /* 0x18 */ ParticleVec3 position;
    /* 0x24 */ ParticleVec3 rotation;
    /* 0x30 */ ParticleVec3 unk30;
    /* 0x3c */ ParticleVec3 unk3C[3];
    /* 0x60 */ u8 unk60[0x30];
    /* 0x90 */ ParticleVec3 originalPosition;
    /* 0x9c */ ParticleVec3 originalRotation;
    /* 0xa8 */ ParticleVec3 originalScale;
};
typedef char Obj557d90LayoutCheck[
    sizeof(Obj557d90) == 0xb4 && offsetof(Obj557d90, owner) == 4 &&
    offsetof(Obj557d90, position) == 0x18 && offsetof(Obj557d90, unk30) == 0x30 &&
    offsetof(Obj557d90, unk3C) == 0x3c && offsetof(Obj557d90, originalPosition) == 0x90 &&
    offsetof(Obj557d90, originalScale) == 0xa8 ? 1 : -1];

#endif
