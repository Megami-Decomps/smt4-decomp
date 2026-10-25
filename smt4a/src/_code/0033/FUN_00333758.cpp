/* Returns 1 if the object's kind (bits 5-8 of its mode word) is 0, 1, 5 or 6. */
#include "common.h"
#include "gamedata/Table04Record.h"

extern "C" {

u32 FUN_00333758(Table04Record *record)
{
    u32 kind = record->itemProperties.category;

    if (kind == 0 || kind == 1 || kind == 5 || kind == 6) {
        return 1;
    }
    return 0;
}

}
