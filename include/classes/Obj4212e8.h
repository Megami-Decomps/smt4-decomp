#ifndef CLASSES_OBJ4212E8_H
#define CLASSES_OBJ4212E8_H

#include "classes/Obj421230.h"

/* A scene object (vtable at 0x4212e8; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj4212e8 : public Obj421230Light {
public:
    Obj4212e8(AsdAllocatorObject *allocator, Obj421230ResHandle<Obj421230Res> handle, void *owner);
    static Obj4212e8 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x174 */ Obj421230ResHandle<Obj421230Res> handle;   /* res at 0x174, its allocator at 0x178 */
};

typedef char Obj4212e8SizeCheck[sizeof(Obj4212e8) == 0x17c ? 1 : -1];

#endif
