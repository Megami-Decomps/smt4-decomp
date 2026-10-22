#ifndef GFX_POSITIONTRANSFORM_H
#define GFX_POSITIONTRANSFORM_H

#include "common.h"

struct PositionCoordinates {
    /* 0x00 */ s32 x;
    /* 0x04 */ s32 y;
};
class PositionProvider {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual const PositionCoordinates *getPosition();
};
struct PositionTransform {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 x;
    /* 0x0C */ f32 y;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 unk14;
};

#endif
