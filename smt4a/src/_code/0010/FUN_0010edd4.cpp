/* NON_MATCHING: the switch predicates are equivalent, but armcc materializes true in r2 and emits per-case result moves instead of retail's shared true/false exits. */
#include "classes/Obj55a178.h"

/* Determine which transition events the current online state accepts. */
extern "C" s32 FUN_0010edd4(const Obj55a178ClassifierView *object, u32 event)
{
    if (event == 128 || event == 256) {
        return 1;
    }
    switch (object->state) {
    case 1:
        return event == 2 || event == 16 || event == 64;
    case 2:
        return event == 4;
    case 4:
        return event == 8 || event == 16;
    case 8:
        return event == 4 || event == 32;
    case 16:
        return event == 64;
    case 32:
        return object->flags == 0 && event == 16;
    case 64:
        return event == 1 || event == 2;
    case 128:
    case 256:
        return 1;
    }
    return 0;
}
