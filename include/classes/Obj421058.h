#ifndef CLASSES_OBJ421058_H
#define CLASSES_OBJ421058_H

#include "classes/Obj421230.h"

/* Three words the light copies out of its resource: a pair, then one more word. */
struct Obj421058Pair {
    u32 first;
    u32 second;
};

struct Obj421058Words {
    Obj421058Pair head;
    u32 tail;
};

/* The resource of an Obj421058: the record at 0xdc is copied into the object. */
struct Obj421058Res : public Obj421230Res {
    /* 0x10 */ u8 unk10[0xcc];
    /* 0xDC */ Obj421058Words words;
};

/* A scene object (vtable at 0x421058; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj421058 : public Obj421230 {
public:
    Obj421058(void *owner, Obj421230ResHandle<Obj421058Res> handle);
    static Obj421058 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ u32 unk148;
    /* 0x14C */ u8 unk14c[0x24];
    /* 0x170 */ u32 unk170;
    /* 0x174 */ Obj421230ResHandle<Obj421058Res> handle;   /* res at 0x174, its allocator at 0x178 */
    /* 0x17C */ Obj421058Words words;
};

typedef char Obj421058SizeCheck[sizeof(Obj421058) == 0x188 ? 1 : -1];

#endif
