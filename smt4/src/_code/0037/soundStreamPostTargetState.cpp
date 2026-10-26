#include "classes/Obj421aa4Requests.h"

/* A sound stream target: its kind (0 or 1) selects how a request describes it. */
struct SoundStreamTarget {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 kind;
};

struct SoundStreamOwner {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ SoundStreamTarget *target;
};

extern "C" {
u8 FUN_0037c2d8(SoundStreamTarget *target, Obj421aa4Node *node);
u8 FUN_0037c5f8(SoundStreamTarget *target, Obj421aa4Node *node);
}

// Enqueues a type-0x2b sound request describing the stream's target, then flushes the manager.
extern "C" void soundStreamPostTargetState(SoundStreamOwner *owner)
{
    SoundStreamTarget *target = owner->target;
    Obj421aa4Manager *manager = FUN_002bae7c();
    Obj421aa4Node *node = soundRequestBegin(manager, 0x21);
    node->type = 0x2b;
    u8 value = target->kind;
    if (value == 0) {
        value = FUN_0037c2d8(target, node);
    } else if (value == 1) {
        value = FUN_0037c5f8(target, node);
    } else {
        value = 0;
    }
    node->byte = value;
    listAppendNode(manager, node);
    FUN_002bad74(manager, 1);
}
