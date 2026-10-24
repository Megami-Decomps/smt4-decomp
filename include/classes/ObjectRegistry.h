#ifndef CLASSES_OBJECTREGISTRY_H
#define CLASSES_OBJECTREGISTRY_H

#include "classes/Obj558d20.h"

struct ObjectRegistry;

/* The object the registry is reached through. */
struct RegistryOwner {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ ObjectRegistry *registry;
};

/* What the registry owner is looked up from. */
struct RegistryHolder {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ RegistryOwner *owner;
};

extern "C" {
u32 FUN_002eb56c(void);
RegistryHolder *FUN_002ecedc(u32 size, u32 id);
/* The registry owner of the current context, or NULL. */
RegistryOwner *FUN_002ecf28(void);
void FUN_00110654(ObjectRegistry *registry, Obj558d20 *object);
/* Tags an object with its id and enters it in the registry. */
void FUN_002f3b58(ObjectRegistry *registry, u32 id, Obj558d20 *object);
}

#endif
