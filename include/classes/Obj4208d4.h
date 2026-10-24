#ifndef CLASSES_OBJ4208D4_H
#define CLASSES_OBJ4208D4_H

#include "common.h"

struct Obj4208d4Vec2 {
    f32 x, y;
    Obj4208d4Vec2() {}
    Obj4208d4Vec2(f32 ax, f32 ay) : x(ax), y(ay) {}
};

struct Obj4208d4Vec3 {
    f32 x, y, z;
    Obj4208d4Vec3() {}
    Obj4208d4Vec3(f32 ax, f32 ay, f32 az) : x(ax), y(ay), z(az) {}
};

/* A tunable motion/camera parameter block (vtable at 0x4208d4, named after it until its real name is known). */
class Obj4208d4 {
public:
    Obj4208d4();
    virtual ~Obj4208d4();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();

    /* 0x04 */ u32 kind;
    /* 0x08 */ f32 param08;
    /* 0x0C */ f32 param0c;
    /* 0x10 */ f32 param10;
    /* 0x14 */ Obj4208d4Vec2 size;
    /* 0x1C */ f32 param1c;
    /* 0x20 */ f32 param20;
    /* 0x24 */ f32 param24;
    /* 0x28 */ f32 param28;
    /* 0x2C */ Obj4208d4Vec2 offset;
    /* 0x34 */ Obj4208d4Vec3 rotation;
};

#endif
