#include "common.h"

extern "C" {

/* Record queried here: a flag halfword at 0x44 and a count halfword at 0x2a. */
typedef struct {
    u8 unk00[0x2a];
    u16 count;          /* 0x2a */
    u8 unk2c[0x18];
    u16 flags;          /* 0x44 */
} Record;

Record *gameGetOptions(void);
int FUN_002b6b38(void);

/* True when the mode is 2 and the current record has flag 2 set or an empty count. */
u32 FUN_00287800(void)
{
    int mode = FUN_002b6b38();

    if (mode == 0) {
        return 0;
    }
    if (mode == 1) {
        return 0;
    }
    if (mode == 2) {
        Record *record = gameGetOptions();

        if ((record->flags & 2) != 0 || record->count == 0) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
