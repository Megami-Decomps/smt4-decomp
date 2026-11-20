#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match6_ActionController.h"
#include "battle/btlMain.h"

struct ScreenOwner;
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
void screenFadeResetAndRelease(ScreenOwner *owner);
ActionSequence *tableFileFindByKeyPair(BtlMainState *battle, u32 firstId, u32 secondId);
ActionTrack *tableFileGetSlotEntry(BtlMainState *battle, s16 kind);
u32 shakeEffectAlloc();

void btlActionControllerStartSequence(ActionControllerEffects *work, u32 firstId, u32 secondId)
{
    screenFadeResetAndRelease(reinterpret_cast<ScreenOwner *>(work));
    work->ids.firstId = firstId;
    work->ids.secondId = secondId;
    work->controller.flags |= 0x4000;
    BtlMainState *battle = btlGetMainState();
    ActionSequence *sequence = tableFileFindByKeyPair(battle, firstId, secondId);
    if (!sequence) {
        work->controller.state = 13;
        return;
    }
    work->controller.state = 1;
    s16 kind = sequence->kind;
    work->ids.kind = kind;
    work->controller.tracks = tableFileGetSlotEntry(battle, kind);
    work->controller.sequence = sequence;
    if (sequence->flags & 2) {
        work->firstShake = shakeEffectAlloc();
    }
    if (work->controller.sequence->flags & 4) {
        work->secondShake = shakeEffectAlloc();
    }
}
}
