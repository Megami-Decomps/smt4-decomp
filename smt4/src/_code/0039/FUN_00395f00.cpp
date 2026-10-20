/* NON_MATCHING: after the conditional decrement the count is reloaded only on the not-decremented path (ldrle); retail always reloads it. */
#include "common.h"

extern "C" {

typedef struct Child Child;
typedef struct ChildVtbl {
    /* 0x00 */ void *unk00[3];
    /* 0x0C */ void (*update)(Child *self);
} ChildVtbl;
struct Child {
    /* 0x00 */ ChildVtbl *vtbl;
};

typedef struct Timer Timer;
typedef struct TimerVtbl {
    /* 0x00 */ void *unk00[6];
    /* 0x18 */ void (*update)(Timer *self);
} TimerVtbl;
struct Timer {
    /* 0x00 */ TimerVtbl *vtbl;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 flags;           /* bit 0: running */
    /* 0x09 */ u8 unk09[0x4F];
    /* 0x58 */ int frames;         /* frames left */
    /* 0x5C */ u8 unk5C[0xC];
    /* 0x68 */ Child *child;
};

/* Counts the timer down one frame (clearing `running` at 0), updates its child and then the timer itself via its vtable. */
void FUN_00395f00(Timer *timer)
{
    if (timer->frames > 0) {
        timer->frames--;
    }
    if (timer->frames == 0) {
        timer->flags = timer->flags & ~1;
    }
    if (timer->child != NULL) {
        timer->child->vtbl->update(timer->child);
    }
    timer->vtbl->update(timer);
}

} /* extern "C" */
