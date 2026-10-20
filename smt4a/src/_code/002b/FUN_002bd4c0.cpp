#include "common.h"

extern "C" {

typedef struct Entity {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 kind;
    /* 0x06 */ u8 unk06[0x12];
    /* 0x18 */ void *child;
} Entity;

typedef struct EntityRef {
    /* 0x0 */ Entity *entity;
} EntityRef;

int FUN_004990e4(void *child);

/* Runs FUN_004990e4 on the child of the referenced entity when its kind is 0, 1 or 2; always returns 0. */
u32 FUN_002bd4c0(EntityRef *ref)
{
    Entity *entity = ref->entity;

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
