#include "common.h"

extern "C" {

int dataTable08Sub2GetRecord(int id);
extern int padGetStickHorizontalDirection(void);

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 directions;   /* bit 0: right (4), bit 1: neutral (1), bit 2: left (5) */
} Entry;

/* 1 when the stick direction padGetStickHorizontalDirection reports is one the entry accepts. */
u32 FUN_002995d8(int id)
{
    u8 directions;
    int direction;
    Entry *entry;

    direction = padGetStickHorizontalDirection();
    entry = (Entry *)dataTable08Sub2GetRecord(id);
    if (entry == NULL) {
        return 0;
    }
    directions = entry->directions;
    if ((((directions & 1) != 0 && (direction == 4)) ||
         (((directions & 4) != 0 && (direction == 5)))) || (((directions & 2) != 0 && (direction == 1)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
