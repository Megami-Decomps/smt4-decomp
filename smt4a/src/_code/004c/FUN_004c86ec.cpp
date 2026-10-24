#include "common.h"

extern "C" {

struct DataTable04Record {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ s8 effects[4];
};

DataTable04Record *dataTable04FindById(u32 id);

/* Returns whether any of the record's four effect slots holds -5 or -7. */
u32 FUN_004c86ec(u32 id)
{
    DataTable04Record *record;
    s32 i;

    if (id != 0) {
        record = dataTable04FindById(id);
        if (record != NULL) {
            for (i = 0; i < 4; i++) {
                if (record->effects[i] == -5 || record->effects[i] == -7) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
