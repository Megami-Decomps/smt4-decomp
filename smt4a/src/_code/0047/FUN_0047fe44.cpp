#include "common.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/ConsumableRecordA.h"

extern "C" {

typedef struct Command {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 kind;
    /* 0x09 */ u8 status;
} Command;

Command *itemCategoryFindByItemId(void);

/* Returns the actor's flag for the current command's kind (bit 3 of flags at 0x42 or bit 1 of flags at 0x72); 1 when the command is not active. */
u32 FUN_0047fe44(u32 actor)
{
    Command *command = itemCategoryFindByItemId();

    if (command == NULL) {
        return 0;
    }
    if (command->status != 0 && command->status == 1) {
        switch (command->kind) {
        default:
            return 1;
        case 1:
        case 0xC: {
            ConsumableRecordA *a = itemTableGetItemRecord(actor);

            if (a == NULL) {
                return 0;
            }
            return (a->useFlags & 8) >> 3;
        }
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8: {
            EquipmentRecordA *b = itemTableGetEquipmentRecord(actor);

            if (b == NULL) {
                return 0;
            }
            return (b->flags & 2) >> 1;
        }
        }
    }
    return 1;
}

} /* extern "C" */
