#ifndef CLASSES_OBJ421774_H
#define CLASSES_OBJ421774_H

#include "classes/Obj421230.h"

struct Obj421774Res : public Obj421230Res {};

/* A fog (vtable at 0x421774; named after it until its real name is known), built from a default
 * resource that it owns once constructed. */
class Obj421774 : public Obj421230 {
public:
    Obj421774(void *owner, Obj421230ResHandle<Obj421774Res> handle);
    static Obj421774 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ Obj421230ResHandle<Obj421774Res> handle;   /* res at 0x148, its allocator at 0x14C */
    /* 0x150 */ u32 unk150;
    /* 0x154 */ u32 unk154;
    /* 0x158 */ f32 color[3];
    /* 0x164 */ u32 unk164;
    /* 0x168 */ u32 unk168;
};

typedef char Obj421774SizeCheck[sizeof(Obj421774) == 0x16c ? 1 : -1];

#endif
