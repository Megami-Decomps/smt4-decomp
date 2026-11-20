#include "common.h"

extern "C" {

typedef struct Obj001fb4d8 {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ s8 value;
} Obj001fb4d8;

extern Obj001fb4d8 *g_soundActorQueue;

/* Returns the signed byte at +9 of the object g_soundActorQueue points to. */
s8 soundActorQueueIsEnabled(void)
{
    return g_soundActorQueue->value;
}

} /* extern "C" */
