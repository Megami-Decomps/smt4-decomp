#include "common.h"

extern "C" {

typedef struct Handler {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ void (*run)(u32 arg);
    /* 0x0C */ u8 unk0C[0x38];
} Handler;                        /* 0x44 bytes */

typedef struct Event {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 type;          /* index into the handler table */
    /* 0x06 */ u16 unk06;
    /* 0x08 */ u32 arg;
} Event;

extern Handler g_handlerTable[];

/* Dispatches the event to the handler registered for its type. */
void FUN_00222160(Event *event)
{
    g_handlerTable[event->type].run(event->arg);
}

} /* extern "C" */
