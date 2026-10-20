#include "common.h"

extern "C" {

int FUN_002916ac(void *item);

typedef struct Item {
    /* 0x000 */ u8 unk000[0x384];
    /* 0x384 */ u32 *unk384;
} Item;

void FUN_00291414(Item *item)
{
    if (item == NULL) {
        return;
    }
    if (item->unk384 != NULL) {
        *item->unk384 = 0;
    }
    FUN_002916ac(item);
}

} /* extern "C" */
