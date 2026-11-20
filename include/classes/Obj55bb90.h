#ifndef CLASSES_OBJ55BB90_H
#define CLASSES_OBJ55BB90_H

#include "classes/Obj55b680.h"

extern "C" void nw_gfx_Fog_DestroyResFog(AsdAllocatorObject *allocator, struct Obj55bb90Res *res);

/* The fog's resource, destroyed through the fog library. */
struct Obj55bb90Res : public Obj55b680Res {
    static void destroy(AsdAllocatorObject *allocator, Obj55bb90Res *res)
    {
        nw_gfx_Fog_DestroyResFog(allocator, res);
    }
};

/* A fog (vtable at 0x55bb90; named after it until its real name is known), built from a default
 * resource that it owns once constructed. */
class Obj55bb90 : public Obj55b680 {
public:
    Obj55bb90(AsdAllocatorObject *allocator, Obj55b680ResHandle<Obj55bb90Res> handle, void *owner);
    static Obj55bb90 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ Obj55b680ResHandle<Obj55bb90Res> handle;   /* res at 0x148, its allocator at 0x14C */
    /* 0x150 */ Obj55b680ResHandle<Obj55b680Res> unk150;   /* an owning pointer the fog starts empty; what it holds is not known */
    /* 0x158 */ f32 color[3];
    /* 0x164 */ u32 unk164;
    /* 0x168 */ u32 unk168;
};

typedef char Obj55bb90SizeCheck[sizeof(Obj55bb90) == 0x16c ? 1 : -1];

#endif
