#ifndef CLASSES_OBJ55BB90_H
#define CLASSES_OBJ55BB90_H

#include "classes/Obj55b680.h"

struct Obj55bb90Res : public Obj55b680Res {};

/* A fog (vtable at 0x55bb90; named after it until its real name is known), built from a default
 * resource that it owns once constructed. */
class Obj55bb90 : public Obj55b680 {
public:
    Obj55bb90(void *owner, Obj55b680ResHandle<Obj55bb90Res> handle);
    static Obj55bb90 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ Obj55b680ResHandle<Obj55bb90Res> handle;   /* res at 0x148, its allocator at 0x14C */
    /* 0x150 */ u32 unk150;
    /* 0x154 */ u32 unk154;
    /* 0x158 */ f32 color[3];
    /* 0x164 */ u32 unk164;
    /* 0x168 */ u32 unk168;
};

typedef char Obj55bb90SizeCheck[sizeof(Obj55bb90) == 0x16c ? 1 : -1];

#endif
