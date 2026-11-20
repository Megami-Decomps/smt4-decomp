#include "common.h"
#include "code/Code002b.h"

extern "C" {

typedef struct Obj002b950c {
    /* 0x00 */ u8 unk00[9];
    /* 0x09 */ s8 value;
} Obj002b950c;

extern Obj002b950c *g_soundActorQueue;

/* Returns the signed byte at +9 of the object g_soundActorQueue points to. */
s8 soundActorQueueIsEnabled(void)
{
    return g_soundActorQueue->value;
}

} /* extern "C" */
