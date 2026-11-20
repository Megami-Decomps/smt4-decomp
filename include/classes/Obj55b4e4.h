#ifndef CLASSES_OBJ55B4E4_H
#define CLASSES_OBJ55B4E4_H

#include "classes/Obj55b680.h"

/* A scene object (vtable at 0x55b4e4; named after it until its real name is known), built from a
 * default resource that it owns once constructed. */
class Obj55b4e4 : public Obj55b680Light {
public:
    Obj55b4e4(AsdAllocatorObject *allocator, Obj55b680ResHandle<Obj55b680Res> handle, void *owner);
    static Obj55b4e4 *create(void *owner, AsdAllocatorObject *allocator);

    /* 0x174 */ Obj55b680ResHandle<Obj55b680Res> handle;   /* res at 0x174, its allocator at 0x178 */
};

typedef char Obj55b4e4SizeCheck[sizeof(Obj55b4e4) == 0x17c ? 1 : -1];

#endif
