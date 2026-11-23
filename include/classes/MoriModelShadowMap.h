#ifndef CLASSES_MORIMODELSHADOWMAP_H
#define CLASSES_MORIMODELSHADOWMAP_H

#include "common.h"

struct TexSetup;

/* Four state bytes of an MoriModelShadowMap (0x20-0x23), constructed as three cleared bytes and 0x66. */
struct MoriModelShadowMapState {
    MoriModelShadowMapState() : unk00(0), unk01(0), unk02(0), unk03(0x66) {}
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ u8 unk02;
    /* 0x03 */ u8 unk03;
};

/* The six tuning values of an MoriModelShadowMap (0x24-0x3B), constructed with their defaults. */
struct MoriModelShadowMapTuning {
    MoriModelShadowMapTuning()
        : nearClip(3.0f), farClip(20000.0f), fovy(0.6597344f), depthScale(1.7f), aspect(1.6666666f), unk14(250.0f) {}
    /* 0x00 */ f32 nearClip;
    /* 0x04 */ f32 farClip;
    /* 0x08 */ f32 fovy;        /* about 37.8 degrees in radians */
    /* 0x0C */ f32 depthScale;
    /* 0x10 */ f32 aspect;
    /* 0x14 */ f32 unk14;
};

/* The object whose vtable is at 0x557b28 (named after it until its real name is known): a model
 * motion tuning block, constructed with its defaults. Slots 0/1 are the destructor, 2-9 its
 * other virtual methods. */
class MoriModelShadowMap {
public:
    MoriModelShadowMap();
    virtual ~MoriModelShadowMap();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();

    /* 0x00: vtable pointer */
    /* 0x04 */ TexSetup *target;        /* the shadow texture's setup (FUN_00156ea8 allocates it) */
    /* 0x08 */ u32 *textureCommands;    /* the command blocks FUN_0045af48 writes for the texture */
    /* 0x0C */ void *pixels;            /* the texture's pixel memory */
    /* 0x10 */ u32 *commands;           /* the command list that binds the shadow map as the render target */
    /* 0x14 */ s32 commandCount;        /* in words */
    /* 0x18 */ u32 *commandBuffer;
    /* 0x1C */ u32 *targetLists;        /* target->lists */
    /* 0x20 */ MoriModelShadowMapState state;
    /* 0x24 */ MoriModelShadowMapTuning tuning;
    /* 0x3C */ u8 unk3c[0x70];
    /* 0xAC */ f32 unkAc;
    /* 0xB0 */ f32 unkB0;
    /* 0xB4 */ f32 unkB4;
    /* 0xB8 */ f32 unkB8;
    /* 0xBC */ f32 unkBc;
    /* 0xC0 */ f32 unkC0;
    /* 0xC4 */ u8 ready;                /* set by the constructor and again once the commands are built */
    /* 0xC5 */ u8 unkC5[3];
};

typedef char MoriModelShadowMapLayoutCheck[sizeof(MoriModelShadowMap) == 0xc8 && sizeof(MoriModelShadowMapState) == 4 &&
    sizeof(MoriModelShadowMapTuning) == 0x18 ? 1 : -1];

#endif
