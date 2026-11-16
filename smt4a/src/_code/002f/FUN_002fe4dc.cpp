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

extern HandlerEntry g_effBehaviorTable[];

/* Calls the handler registered for the record's id. */
void FUN_002fe4dc(HandlerRecord *record)
{
    g_effBehaviorTable[record->id].handler(record);
}

} /* extern "C" */
