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

/* A fragment light's resource: three words at 0x10c are copied into the light. */
struct Obj421158Res : public Obj421230Res {
    /* 0x10 */ u8 unk10[0xfc];
    /* 0x10C */ Obj421158Words unk10c;
};

/* A fragment light (vtable at 0x421158; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj421158 : public Obj421230 {
public:
    Obj421158(void *owner, Obj421230ResHandle<Obj421158Res> handle);
    static Obj421158 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ u32 unk148;
    /* 0x14C */ u8 unk14c[0x20];
    /* 0x16C */ u8 unk16c[4];
    /* 0x170 */ u32 unk170;
    /* 0x174 */ Obj421230ResHandle<Obj421158Res> handle;   /* res at 0x174, its allocator at 0x178 */
    /* 0x17C */ Obj421158Words unk17c;
};

typedef char Obj421158SizeCheck[sizeof(Obj421158) == 0x188 ? 1 : -1];

#endif
