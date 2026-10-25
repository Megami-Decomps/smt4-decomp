#ifndef CLASSES_OBJ557AF8_H
#define CLASSES_OBJ557AF8_H

#include "common.h"
#include <stddef.h>

/* AsdSDK/Source/Gfx/Camera/AsdAnimCamera.cpp: an animated camera built from a resource. */

/* The camera animation resource: relative table offsets (valid when the matching flag is set)
 * and the sizes of the two work buffers. */
struct AsdAnimCameraResource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 tableOffset[6];
    /* 0x20 */ s32 tablePresent[6];
    /* 0x38 */ u32 workBytes;
    /* 0x3C */ u32 streamBytes;
};

/* What the animation initializer is given: the resolved tables and the work buffers. */
struct AsdAnimCameraSetup {
    /* 0x00 */ const void *tables[6];
    /* 0x18 */ void *workBuffer;
    /* 0x1C */ void *streamBuffer;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ void *streamBufferAlias;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
};

/* The animation state embedded in the camera (0x34 bytes); its initializer validates the
 * resource against the setup. */
class AsdAnimCameraState {
public:
    AsdAnimCameraState() : unk20(0), unk24(0), unk28(0), unk2c(0), unk30(0) {}
    u32 Initialize(const AsdAnimCameraResource *resource, AsdAnimCameraSetup *setup);

    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u32 unk30;
};

/* The object whose vtable is at 0x557af8 (named after it until its real name is known). Its
 * destructor releases the three buffers at +0x3C/+0x40/+0x44. */
class Obj557af8 : public AsdAnimCameraState {
public:
    Obj557af8(const AsdAnimCameraResource *resource);
    virtual ~Obj557af8();

    /* 0x00: vtable pointer */
    /* 0x04: AsdAnimCameraState */
    /* 0x38 */ f32 unk38;
    /* 0x3C */ void *workBuffer;
    /* 0x40 */ void *streamBuffer;
    /* 0x44 */ const AsdAnimCameraResource *resource;
};

typedef char Obj557af8LayoutCheck[sizeof(AsdAnimCameraState) == 0x34 &&
    sizeof(AsdAnimCameraSetup) == 0x30 && offsetof(Obj557af8, unk38) == 0x38 &&
    offsetof(Obj557af8, workBuffer) == 0x3C && sizeof(Obj557af8) == 0x48 ? 1 : -1];

#endif
