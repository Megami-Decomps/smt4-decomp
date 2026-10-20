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

extern u32 DAT_0056fcc0;

int FUN_001aea28(u32 arg, u32 handle);

/* Unregisters the scene's child (FUN_001aea28), releases it through its vtable and clears the pointer. */
void FUN_0035de60(Scene *scene)
{
    if (scene->child != NULL) {
        FUN_001aea28(DAT_0056fcc0, scene->child->handle);
        if (scene->child != NULL) {
            scene->child->vtbl->release(scene->child);
            scene->child = NULL;
        }
    }
}

} /* extern "C" */
