/* NON_MATCHING: if-conversion only: retail branches over the two stores (`beq`), built predicates them (`ldrne`/`stmne`); needs the real class so the compiler emits the vptr store. */
/* Allocates an 8-byte object from `allocator` and gives it its vtable and the allocator; returns it (NULL if the allocation failed). */
#include "common.h"

class AllocatorFUN_0012d1c4 {
public:
    virtual void v0();
    virtual void v1();
    virtual void *alloc(u32 size, u32 align);
};

struct ObjFUN_0012d1c4 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ AllocatorFUN_0012d1c4 *allocator;
};

extern "C" {

extern const u8 DAT_004214f4[];

ObjFUN_0012d1c4 *FUN_0012d1c4(void *unused, AllocatorFUN_0012d1c4 *allocator)
{
    ObjFUN_0012d1c4 *obj = (ObjFUN_0012d1c4 *)allocator->alloc(8, 4);

    if (obj != NULL) {
        obj->vtable = DAT_004214f4;
        obj->allocator = allocator;
    }
    return obj;
}

}
