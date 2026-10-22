/* NON_MATCHING: controller setup, kind stores and track/sequence stores use different registers and scheduling. */
#include "shard/W6_W6Match6_ActionController.h"
#include "battle/btlMain.h"

struct ActionControllerRequestedIds {
    /* 0x0000 */ u8 unk0000[0x303a];
    /* 0x303a */ s16 kind;
    /* 0x303c */ s16 firstId;
    /* 0x303e */ s16 secondId;
};
struct ActionControllerEffects {
    union {
        /* 0x0000 */ ActionController controller;
        /* 0x0000 */ ActionControllerRequestedIds ids;
    };
    /* 0x3058 */ u32 firstShake;
    /* 0x305c */ u32 secondShake;
};

extern "C" {
void FUN_0022708c();
BtlMainState *btlGetMainState();
ActionSequence *FUN_00337ba0(BtlMainState *battle, u32 firstId, u32 secondId);
ActionTrack *FUN_003383a4(BtlMainState *battle, s16 kind);
u32 shakeEffectAlloc();

void FUN_003d9eb4(ActionControllerEffects *work, u32 firstId, u32 secondId)
{
    FUN_0022708c();
    work->ids.firstId = firstId;
    work->ids.secondId = secondId;
    work->controller.flags |= 0x4000;
    BtlMainState *battle = btlGetMainState();
    ActionSequence *sequence = FUN_00337ba0(battle, firstId, secondId);
    if (!sequence) {
        work->controller.state = 13;
        return;
    }
    work->controller.state = 1;
    work->ids.kind = sequence->kind;
    work->controller.tracks = FUN_003383a4(battle, sequence->kind);
    work->controller.sequence = sequence;
    if (sequence->flags & 2) {
        work->firstShake = shakeEffectAlloc();
    }
    if (work->controller.sequence->flags & 4) {
        work->secondShake = shakeEffectAlloc();
    }
}
}
