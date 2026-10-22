#ifndef CLASSES_OBJ4222AC_H
#define CLASSES_OBJ4222AC_H

#include "classes/Obj422318.h"

/* An Obj422318 (vtable at 0x4222ac, named after it until its real name is known) with nothing of its own
 * to destroy. */
class Obj4222ac : public Obj422318 {
public:
    virtual ~Obj4222ac();
    virtual void start(); /* +0x08 */
    virtual void updateMotion(); /* +0x18 */

    /* 0x74 */ f32 position[3];
};

typedef char Obj4222acSizeCheck[sizeof(Obj4222ac) == 0x80 ? 1 : -1];

struct Obj4222acMotion {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ f32 position[3];
    /* 0x34 */ u8 unk34[0x2c];
    /* 0x60 */ u32 handle;
};

struct EffectGamePauseFlags {
    /* 0x000 */ u8 unk000[0x18];
    /* 0x018 */ u8 paused18;
    /* 0x019 */ u8 unk019[0x32f];
    /* 0x348 */ u8 paused348;
};

typedef char Obj4222acMotionSizeCheck[sizeof(Obj4222acMotion) == 0x64 ? 1 : -1];
typedef char EffectGamePauseFlagsSizeCheck[sizeof(EffectGamePauseFlags) == 0x349 ? 1 : -1];

#endif
