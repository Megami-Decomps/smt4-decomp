/* NON_MATCHING: instructions identical to retail; the retail object carries 4 bytes of alignment padding ahead of the literal pool. */
#include "common.h"

extern "C" {

typedef struct Child Child;
typedef struct ChildVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(Child *self);
} ChildVtbl;
struct Child {
    /* 0x00 */ ChildVtbl *vtbl;
    /* 0x04 */ u32 handle;
};

typedef struct Scene {
    /* 0x0000 */ u8 unk0000[0x920C];
    /* 0x920C */ Child *child;
} Scene;

extern u32 g_handleRegistry;

int ptrListRemoveClearOwner(u32 arg, u32 handle);

/* Unregisters the scene's child (ptrListRemoveClearOwner), releases it through its vtable and clears the pointer. */
void FUN_0035de60(Scene *scene)
{
    if (scene->child != NULL) {
        ptrListRemoveClearOwner(g_handleRegistry, scene->child->handle);
        if (scene->child != NULL) {
            scene->child->vtbl->release(scene->child);
            scene->child = NULL;
        }
    }
}

} /* extern "C" */
