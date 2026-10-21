#include "common.h"
extern "C" {
extern const u8 _ZTV9Obj558c90[];
struct Object { const void *vtable; u32 value; u32 option; u8 active; };
void *FUN_002ecf28(void);
void sharedRefAddRef(void *reference);
void FUN_002f3d88(void);
/* Initializes a shared owner, acquiring a reference when available. */
Object *FUN_00300ae8(Object *object, u32 value) {
    object->vtable = _ZTV9Obj558c90 + 8;
    object->value = value; object->option = 0; object->active = 0;
    if (FUN_002ecf28() != NULL) sharedRefAddRef(FUN_002ecf28());
    else FUN_002f3d88();
    return object;
}
}
