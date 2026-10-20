#include "common.h"

extern "C" {

typedef struct Manager Manager;

typedef struct ManagerVtable {
    /* 0x00 */ void (*unk00[3])(Manager *manager);
    /* 0x0C */ void (*remove)(Manager *manager, u32 handle);
} ManagerVtable;

struct Manager {
    /* 0x0 */ ManagerVtable *vtable;
};

typedef struct Owner {
    /* 0x000 */ u8 unk000[0x0D];
    /* 0x00D */ u8 pending;
    /* 0x00E */ u8 unk00E[0x42];
    /* 0x050 */ u8 list[0x34];
    /* 0x084 */ Manager *manager;
    /* 0x088 */ u8 unk088[8];
    /* 0x090 */ u32 handles[16];
    /* 0x0D0 */ u8 unk0D0[0x96];
    /* 0x166 */ u8 listDirty;
} Owner;

u32 FUN_001b1f04(void);
s32 FUN_001d0b28(u32 value, u8 *list);
s32 FUN_001d0b34(void);

static void releaseHandle(Owner *owner, s32 index)
{
    if (index <= 15) {
        if (owner->handles[index] != 0) {
            FUN_001d0b34();
            owner->manager->vtable->remove(owner->manager, owner->handles[index]);
            owner->handles[index] = 0;
        }
    }
}

/* Clears the owner's dirty flags and releases all of its handles. */
void FUN_001cc644(Owner *owner)
{
    s32 i;

    if (owner->listDirty != 0) {
        FUN_001d0b28(FUN_001b1f04(), owner->list);
        owner->listDirty = 0;
    }
    if (owner->pending != 0) {
        owner->pending = 0;
    }
    for (i = 0; i < 16; i++) {
        releaseHandle(owner, i);
    }
}

} /* extern "C" */
