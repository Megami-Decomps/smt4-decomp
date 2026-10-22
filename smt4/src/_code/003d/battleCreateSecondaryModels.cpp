/* NON_MATCHING: duplicate-search exit checks, source-ID registers and merged flag tests differ from retail. */
#include "common.h"

struct BattleAttachmentValues { u32 first, second, third; };
struct BattleAttachmentSource {
    /* 0x00 */ s32 firstId;
    /* 0x04 */ s32 secondId;
    /* 0x08 */ u32 parameter;
    /* 0x0C */ BattleAttachmentValues values;
    /* 0x18 */ u32 extra;
};
struct BattleAttachmentSlot {
    /* 0x00 */ void *model;
    /* 0x04 */ s32 firstId;
    /* 0x08 */ s32 secondId;
    /* 0x0C */ u32 parameter;
    /* 0x10 */ BattleAttachmentValues values;
    /* 0x1C */ u32 extra;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 flags;
};
struct BattleAttachmentOwner {
    /* 0x0000 */ u8 unk0000[0x190];
    /* 0x0190 */ BattleAttachmentSlot slots[50];
    /* 0x0960 */ u8 unk0960[0x26cc];
    /* 0x302C */ s32 kind;
};
struct BattleAttachmentMainState {
    /* 0x0000 */ u8 unk0000[0x2318];
    /* 0x2318 */ BattleAttachmentSource sources[109];
};

extern "C" const char DAT_004008dc[];
extern "C" void memClear(void *destination, u32 size);
extern "C" void textFormatBuffer(char *destination, const char *format, ...);
extern "C" BattleAttachmentMainState *btlGetMainState(void);
extern "C" void *asdMdlManagerCreateSecondList(const char *name, s32 kind);

/* Create secondary models for valid battle attachments not already present in the owner. */
extern "C" void battleCreateSecondaryModels(BattleAttachmentOwner *owner, s32 kind)
{
    if (kind == 0 || kind == 22)
        return;
    owner->kind = kind;
    char name[128];
    memClear(name, sizeof(name));
    textFormatBuffer(name, DAT_004008dc, kind);
    BattleAttachmentMainState *main = btlGetMainState();
    for (s32 sourceIndex = 0; sourceIndex < 109; ++sourceIndex) {
        BattleAttachmentSource *source = &main->sources[sourceIndex];
        if (source->firstId < 0 || source->secondId < 0)
            continue;
        s32 slotIndex;
        for (slotIndex = 0; slotIndex < 50; ++slotIndex) {
            BattleAttachmentSlot *slot = &owner->slots[slotIndex];
            if (slot->firstId >= 0 && slot->secondId >= 0 &&
                slot->firstId == source->firstId && slot->secondId == source->secondId)
                break;
        }
        if (slotIndex < 50)
            continue;
        for (slotIndex = 0; slotIndex < 50; ++slotIndex) {
            BattleAttachmentSlot *slot = &owner->slots[slotIndex];
            if (!(slot->flags & 2) && !(slot->flags & 4)) {
                slot->model = asdMdlManagerCreateSecondList(name, 7);
                slot->firstId = source->firstId;
                slot->secondId = source->secondId;
                slot->parameter = source->parameter;
                slot->values = source->values;
                slot->extra = source->extra;
                slot->flags |= 2;
                break;
            }
        }
    }
}
