#include "common.h"

extern "C" {

struct Table08Record {
    /* 0x00 */ u8 unk00[0x6e];
    /* 0x6e */ u8 flags;
};

Table08Record *dataTable08Sub1GetRecord(s32 id);
s32 FUN_00232b68(s32 owner, Table08Record *record, s32 flag, s32 arg3, s32 arg4);
void FUN_00250d84(s32 id, s32 flag);

/* Applies the table-08 record `id` to `owner`; returns 1 when the record is missing, otherwise the apply result (and queues FUN_00250d84 for a plain no-op apply). */
s32 FUN_0026c710(s32 owner, s32 id, s32 flag)
{
    Table08Record *record = dataTable08Sub1GetRecord(id);
    s32 result;

    if (record == NULL) {
        return 1;
    }
    result = FUN_00232b68(owner, record, flag, 0, 0);
    if (result == 0) {
        if (flag == 0 && (record->flags & 1) == 0) {
            FUN_00250d84(id, 1);
        }
    }
    return result;
}

} /* extern "C" */
