#include "common.h"

extern "C" {

struct Notifier;
typedef void (*NotifierCallback)(struct Notifier *notifier, int status, u32 userData);

typedef struct Target {
    /* 0x00 */ u8 unk00[0x11];
    /* 0x11 */ u8 state;
} Target;

typedef struct Notifier {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ NotifierCallback callback;
    /* 0x10 */ u32 callbackData;
    /* 0x14 */ u8 enabled;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 pending;
    /* 0x17 */ u8 unk17;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ Target *target;
} Notifier;

/* When a pending notification's target is neither in state 1 nor 2, calls the callback and clears the flags. */
void FUN_00154e84(Notifier *notifier)
{
    u8 enabled = notifier->enabled != 0;
    u8 pending = 0;
    Target *target;

    if (enabled) {
        pending = notifier->pending;
    }
    if (enabled && pending != 0) {
        target = NULL;
        if (notifier->unk00 != 0) {
            target = notifier->target;
        }
        if ((notifier->unk00 != 0 && target != NULL) && (target->state != 1 && target->state != 2)) {
            if (notifier->callback != NULL) {
                notifier->callback(notifier, 0, notifier->callbackData);
            }
            notifier->pending = 0;
            notifier->unk15 = 0;
        }
    }
}

} /* extern "C" */
