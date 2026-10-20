/* NON_MATCHING: armcc predicates the two stores (ldrne/stmne); retail branches over them (beq) */
/* Allocates an 8-byte object from `allocator` and gives it its vtable and the allocator; returns it (NULL if the allocation failed). */
#include "common.h"

class AllocatorFUN_00172088 {
public:
    virtual void v0();
    virtual void v1();
    virtual void *alloc(u32 size, u32 align);
};

struct ObjFUN_00172088 {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ AllocatorFUN_00172088 *allocator;
};

extern "C" {

extern const u8 DAT_0055b798[];

ObjFUN_00172088 *FUN_00172088(void *unused, AllocatorFUN_00172088 *allocator)
{
    ObjFUN_00172088 *obj = (ObjFUN_00172088 *)allocator->alloc(8, 4);

    if (obj != NULL) {
        obj->vtable = DAT_0055b798;
        obj->allocator = allocator;
    }
    return obj;
}

}
