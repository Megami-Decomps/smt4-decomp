#include "common.h"

extern "C" {

typedef struct Entity {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 kind;
    /* 0x06 */ u8 unk06[0x12];
    /* 0x18 */ void *child;
} Entity;

extern Entity *g_shop;

int FUN_004990e4(void *child);

/* Runs FUN_004990e4 on the shop entity's child when its kind is 0, 1 or 2; always returns 0. */
u32 FUN_002bd4bc(void)
{
    Entity *entity = g_shop;

    switch (entity->kind) {
    case 0:
    case 1:
    case 2:
        if (entity != NULL && entity->child != NULL) {
            FUN_004990e4(entity->child);
        }
        break;
    }
    return 0;
}

} /* extern "C" */
