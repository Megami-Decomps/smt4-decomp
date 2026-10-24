#ifndef CLASSES_OBJ4212E8_H
#define CLASSES_OBJ4212E8_H

#include "classes/Obj421230.h"

/* A scene object (vtable at 0x4212e8; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj4212e8 : public Obj421230 {
public:
    Obj4212e8(void *owner, Obj421230ResHandle<Obj421230Res> handle);
    static Obj4212e8 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x148 */ u32 unk148;
    /* 0x14C */ u8 unk14c[0x24];
    /* 0x170 */ u32 unk170;
    /* 0x174 */ Obj421230ResHandle<Obj421230Res> handle;   /* res at 0x174, its allocator at 0x178 */
};

typedef char Obj4212e8SizeCheck[sizeof(Obj4212e8) == 0x17c ? 1 : -1];

#endif
