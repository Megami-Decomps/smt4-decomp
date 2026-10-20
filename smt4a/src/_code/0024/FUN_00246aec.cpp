#include "common.h"

extern "C" {

#define SLOT_COUNT 64

typedef struct Resource Resource;
typedef struct ResourceVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*release)(Resource *self);
} ResourceVtbl;
struct Resource {
    /* 0x00 */ ResourceVtbl *vtbl;
};

typedef struct Slot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Resource *resource;
    /* 0x08 */ u8 unk08[0x34];
} Slot;                          /* 0x3C bytes */

typedef struct Pool {
    /* 0x00 */ u8 unk00[0x3C];
    /* 0x3C */ Slot slots[SLOT_COUNT];
} Pool;

extern Pool *DAT_00581280;

int FUN_0020ef94(void);
int FUN_00353d1c(void);

/* Releases the resource of every pool slot (highest first), then runs FUN_00353d1c and FUN_0020ef94. */
void FUN_00246aec(void)
{
    int i;

    for (i = SLOT_COUNT - 1; i >= 0; i--) {
        Resource *resource = DAT_00581280->slots[i].resource;

        if (resource != NULL) {
            resource->vtbl->release(resource);
            DAT_00581280->slots[i].resource = NULL;
        }
    }
    FUN_00353d1c();
    FUN_0020ef94();
}

} /* extern "C" */
