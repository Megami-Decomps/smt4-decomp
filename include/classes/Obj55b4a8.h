#ifndef CLASSES_OBJ55B4A8_H
#define CLASSES_OBJ55B4A8_H

#include "classes/Obj55b680.h"

/* Three words the light copies out of its resource: a pair, then one more word. */
struct Obj55b4a8Pair {
    u32 first;
    u32 second;
};

struct Obj55b4a8Words {
    Obj55b4a8Pair head;
    u32 tail;
};

/* The resource of an Obj55b4a8: the record at 0xdc is copied into the object. */
struct Obj55b4a8Res : public Obj55b680Res {
    /* 0x10 */ u8 unk10[0xcc];
    /* 0xDC */ Obj55b4a8Words words;
};

/* A scene object (vtable at 0x55b4a8; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj55b4a8 : public Obj55b680 {
public:
    Obj55b4a8(void *owner, Obj55b680ResHandle<Obj55b4a8Res> handle);
    static Obj55b4a8 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ u32 unk148;
    /* 0x14C */ u8 unk14c[0x24];
    /* 0x170 */ u32 unk170;
    /* 0x174 */ Obj55b680ResHandle<Obj55b4a8Res> handle;   /* res at 0x174, its allocator at 0x178 */
    /* 0x17C */ Obj55b4a8Words words;
};

typedef char Obj55b4a8SizeCheck[sizeof(Obj55b4a8) == 0x188 ? 1 : -1];

#endif
