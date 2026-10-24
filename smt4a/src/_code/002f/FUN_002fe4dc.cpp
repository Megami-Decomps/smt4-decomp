#include "common.h"

struct HandlerRecord {
    /* 0x00 */ u16 id;
};

struct HandlerEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void (*handler)(HandlerRecord *record);
    /* 0x08 */ u32 unk08[3];
};

extern "C" {

extern HandlerEntry DAT_005c1d60[];

/* Calls the handler registered for the record's id. */
void FUN_002fe4dc(HandlerRecord *record)
{
    DAT_005c1d60[record->id].handler(record);
}

} /* extern "C" */
