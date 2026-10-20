#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[0x52];
    /* 0x52 */ u8 kind;
    /* 0x53 */ u8 unk53[0xD];
    /* 0x60 */ u8 directions;  /* bits 0-2: stick directions that select it */
} Record;

s32 padGetStickHorizontalDirection(void);
Record *dataTable08Sub2GetRecord(u32 id);
u16 *gameGetPlayerData(void);

/* Stores record `id` in the player's slot for its kind when the stick direction matches the record's allowed directions. */
void FUN_00394e08(u32 id)
{
    s32 direction = padGetStickHorizontalDirection();
    Record *record = dataTable08Sub2GetRecord(id);
    u16 *slots;

    if (record != NULL) {
        u8 directions = record->directions;

        if (((directions & 1) != 0 && direction == 4) || ((directions & 4) != 0 && direction == 5) ||
            ((directions & 2) != 0 && direction == 1)) {
            slots = gameGetPlayerData();
            switch (dataTable08Sub2GetRecord(id)->kind) {
            case 2:
                slots[0] = id;
                break;
            case 3:
                slots[1] = id;
                break;
            case 4:
                slots[3] = id;
                break;
            case 5:
                slots[4] = id;
                break;
            case 6:
                slots[5] = id;
                break;
            case 7:
                slots[6] = id;
                break;
            case 8:
                slots[2] = id;
                break;
            }
        }
    }
}

} /* extern "C" */
