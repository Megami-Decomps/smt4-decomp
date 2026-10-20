/* True when the object exists, is enabled, and none of its blocking state bits (0x2, 0x4, 0x400) are set. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk000[0x60];   /* 0x000 */
    u16 state;         /* 0x060 */
    u8 unk062[0xce];   /* 0x062 */
    u32 flags;         /* 0x130 */
} Actor;

u32 FUN_003e4940(Actor *actor)
{
    return actor != NULL && (actor->flags & 1) != 0 && (actor->state & 2) == 0 && (actor->state & 0x400) == 0 && (actor->state & 4) == 0;
}

} /* extern "C" */
