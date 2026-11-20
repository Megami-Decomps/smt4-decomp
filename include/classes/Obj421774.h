#ifndef CLASSES_OBJ421774_H
#define CLASSES_OBJ421774_H

#include "classes/Obj421230.h"

extern "C" void nw_gfx_Fog_DestroyResFog(AsdAllocatorObject *allocator, struct Obj421774Res *res);

/* The fog's resource, destroyed through the fog library. */
struct Obj421774Res : public Obj421230Res {
    static void destroy(AsdAllocatorObject *allocator, Obj421774Res *res)
    {
        nw_gfx_Fog_DestroyResFog(allocator, res);
    }
};

/* A fog (vtable at 0x421774; named after it until its real name is known), built from a default
 * resource that it owns once constructed. */
class Obj421774 : public Obj421230 {
public:
    Obj421774(AsdAllocatorObject *allocator, Obj421230ResHandle<Obj421774Res> handle, void *owner);
    static Obj421774 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ Obj421230ResHandle<Obj421774Res> handle;   /* res at 0x148, its allocator at 0x14C */
    /* 0x150 */ Obj421230ResHandle<Obj421230Res> unk150;   /* an owning pointer the fog starts empty; what it holds is not known */
    /* 0x158 */ f32 color[3];
    /* 0x164 */ u32 unk164;
    /* 0x168 */ u32 unk168;
};

typedef char Obj421774SizeCheck[sizeof(Obj421774) == 0x16c ? 1 : -1];

#endif
