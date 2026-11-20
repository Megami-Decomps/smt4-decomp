#ifndef CLASSES_OBJ421158_H
#define CLASSES_OBJ421158_H

#include "classes/Obj421230.h"

/* Three words copied from the resource into the light as one record. */
struct Obj421158Pair {
    u32 first;
    u32 second;
};

struct Obj421158Words {
    Obj421158Pair head;
    u32 tail;
};

extern "C" void nw_gfx_FragmentLight_DestroyResFragmentLight(AsdAllocatorObject *allocator, struct Obj421158Res *res);

/* A fragment light's resource: three words at 0x10c are copied into the light. */
struct Obj421158Res : public Obj421230Res {
    /* 0x10 */ u8 unk10[0xfc];
    /* 0x10C */ Obj421158Words unk10c;

    /* Destroyed through the fragment-light library. */
    static void destroy(AsdAllocatorObject *allocator, Obj421158Res *res)
    {
        nw_gfx_FragmentLight_DestroyResFragmentLight(allocator, res);
    }
};

/* A fragment light (vtable at 0x421158; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj421158 : public Obj421230Light {
public:
    Obj421158(AsdAllocatorObject *allocator, Obj421230ResHandle<Obj421158Res> handle, void *owner);
    static Obj421158 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x174 */ Obj421230ResHandle<Obj421158Res> handle;   /* res at 0x174, its allocator at 0x178 */
    /* 0x17C */ Obj421158Words unk17c;
};

typedef char Obj421158SizeCheck[sizeof(Obj421158) == 0x188 ? 1 : -1];

#endif
