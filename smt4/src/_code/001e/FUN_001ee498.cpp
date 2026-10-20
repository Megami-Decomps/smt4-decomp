#include "common.h"

extern "C" {

typedef struct Entity {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 unk28Low : 5;
    /*      */ u32 kind : 4;        /* bits 5-8 of the word at 0x28 */
    /*      */ u32 unk28High : 23;
} Entity;

/* Returns 1 for entity kinds 1, 3, 5, 6 and 8, else 0. */
u32 FUN_001ee498(Entity *entity)
{
    switch (entity->kind) {
    case 1:
    case 3:
    case 5:
    case 6:
    case 8:
        return 1;
    default:
        return 0;
    }
}

} /* extern "C" */
