#ifndef CLASSES_OBJ55B5A8_H
#define CLASSES_OBJ55B5A8_H

#include "classes/Obj55b680.h"

/* Three words copied from the resource into the light as one record. */
struct Obj55b5a8Pair {
    u32 first;
    u32 second;
};

struct Obj55b5a8Words {
    Obj55b5a8Pair head;
    u32 tail;
};

/* A fragment light's resource: three words at 0x10c are copied into the light. */
struct Obj55b5a8Res : public Obj55b680Res {
    /* 0x10 */ u8 unk10[0xfc];
    /* 0x10C */ Obj55b5a8Words unk10c;
};

/* A fragment light (vtable at 0x55b5a8; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj55b5a8 : public Obj55b680 {
public:
    Obj55b5a8(void *owner, Obj55b680ResHandle<Obj55b5a8Res> handle);
    static Obj55b5a8 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ u32 unk148;
    /* 0x14C */ u8 unk14c[0x20];
    /* 0x16C */ u8 unk16c[4];
    /* 0x170 */ u32 unk170;
    /* 0x174 */ Obj55b680ResHandle<Obj55b5a8Res> handle;   /* res at 0x174, its allocator at 0x178 */
    /* 0x17C */ Obj55b5a8Words unk17c;
};

typedef char Obj55b5a8SizeCheck[sizeof(Obj55b5a8) == 0x188 ? 1 : -1];

#endif
