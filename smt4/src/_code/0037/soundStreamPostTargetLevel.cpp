#include "classes/Obj421aa4Requests.h"

/* A float passed in a one-word argument slot. */
union SoundLevel {
    s32 bits;
    f32 value;
};

/* A sound stream target: its kind (0 or 1) selects how a request describes it. */
struct SoundStreamTarget {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 id;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ u8 kind;
    /* 0x1D */ u8 unk1D[0x30];
    /* 0x4D */ u8 suppressed;
};

struct SoundStreamOwner {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u8 request[0x20];
    /* 0x3C */ u32 start;
    /* 0x40 */ SoundLevel level;
    /* 0x44 */ SoundStreamTarget *target;
};

extern "C" {
u8 FUN_0037ca00(SoundStreamTarget *target, Obj421aa4Node *node, u8 *request, u32 start, SoundLevel level);
u8 FUN_0037d1bc(SoundStreamTarget *target, Obj421aa4Node *node, u8 *request, u32 start, SoundLevel level);
}

// Enqueues a type-0x2c sound request describing the stream's target with the owner's request block,
// unless the target is suppressed, then flushes the manager.
extern "C" void soundStreamPostTargetLevel(SoundStreamOwner *owner)
{
    u8 *request = owner->request;
    SoundStreamTarget *target = owner->target;
    u32 start = owner->start;
    SoundLevel level = owner->level;
    if (target->suppressed != 0) {
        return;
    }
    Obj421aa4Manager *manager = FUN_002bae7c();
    Obj421aa4Node *node = soundRequestBegin(manager, 0x14);
    node->type = 0x2c;
    u8 value = target->kind;
    if (value == 0) {
        value = FUN_0037ca00(target, node, request, start, level);
    } else if (value == 1) {
        value = FUN_0037d1bc(target, node, request, start, level);
    } else {
        value = 0;
    }
    node->byte = value;
    node->id = target->id;
    listAppendNode(manager, node);
    FUN_002bad74(manager, 1);
}
