/* NON_MATCHING: text-pointer load precedes slot resets, and projected-coordinate updates reuse the X sum instead of retail's store/reload sequence; message-debug hooks are restored. */
#include "ui/AnimatedMessageSlots.h"
#include "battle/btlMain.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "util/CalleeContracts.h"

struct PartnerMessageOwnerView {
    AnimatedMessageSlot slots[12];
    UiSpriteSource source;
};
struct PartnerMessageOffset {
    f32 x, y;
};
// The message directory is beyond the shared battle-state prefix.
struct PartnerMessageBattleView {
    BtlMainStateA prefix;
    u8 unk4CF0[0x74];
    void *directory;
};
typedef char PartnerMessageViewOffsets[offsetof(PartnerMessageOwnerView, source) == 0x840 &&
    offsetof(PartnerMessageBattleView, directory) == 0x4D64 ? 1 : -1];

extern "C" {
void asdMemFreeSlot(void **object);
void FUN_0014e188(UiSpriteState *sprite, u32 kind, u32 color, const UiSpriteSource *source, u16 priority, f32 scale);
void pairSetFirstResetSecond(UiSpriteState *sprite, s32 image);
void uiSpriteSetImageKeyframe(UiSpriteState *sprite, s32 image, s32 frame);
void FUN_0019e330(UiSpriteState *sprite, s32 mode, s32 state);
void FUN_002a1850(f32 *screen, s32 display, const ProjectionMatrices *camera, const f32 *world);
PartnerMessageOffset FUN_00416388(PartnerMessageOwnerView *owner, s32 index, UiSpriteState *sprite);
void pairSetHalves(UiSpriteState *sprite, s32 x, s32 y);
BtlMainStateA *btlGetMainState(void);
TextMeasureState *spriteHandleCreate(u32 kind);
void FUN_001527d8(TextMeasureState *text, u32 color);
void positionStateSet(TextMeasureState *text, u32 first, u32 second, f32 scale);
void objFlagsSetBits(TextMeasureState *text, u32 flags);
void asdTextDrawDirectoryEntry(TextMeasureState *text, s32 type, u32 color, s32 first, s32 second, void *directory, u32 entry);
s32 textMeasureLineWidth(TextMeasureState *text, s32 line);

void FUN_00416960(PartnerMessageOwnerView *owner, s32 index, u32 message, Vector4 world)
{
    AnimatedMessageSlot *slot = &owner->slots[index];
    slot->messageId = 0;
    slot->frame = 0;
    slot->active = 0;
    slot->state = 0;
    slot->position.y = 0.0f;
    slot->position.x = 0.0f;
    slot->position.z = 0.0f;
    if (slot->text != NULL) {
        asdMemFreeSlot(reinterpret_cast<void **>(slot->text));
        slot->text = NULL;
    }
    slot->width = 0;
    slot->active = 1;
    slot->state = 1;
    slot->messageId = message;
    slot->frame = 0;
    FUN_0014e188(&slot->sprite, 8, ~0u, &owner->source, 11, 1.0f);
    pairSetFirstResetSecond(&slot->sprite, 139);
    uiSpriteSetImageKeyframe(&slot->sprite, 4, 0);
    FUN_0019e330(&slot->sprite, 6, 0);
    FUN_002a1850(&slot->position.x, 0, reinterpret_cast<const ProjectionMatrices *>(FUN_00152f54()), &world.x);
    PartnerMessageOffset offset = FUN_00416388(owner, index, &slot->sprite);
    slot->position.x += offset.x;
    slot->position.y += offset.y;
    pairSetHalves(&slot->sprite, (s16)(s32)slot->position.x, (s16)(s32)slot->position.y);
    PartnerMessageBattleView *battle = (PartnerMessageBattleView *)btlGetMainState();
    if (slot->text == NULL)
        slot->text = spriteHandleCreate(0);
    FUN_001527d8(slot->text, 0x320202FF);
    positionStateSet(slot->text, 0, 0x646464FF, 0.0f);
    objFlagsSetBits(slot->text, 8);
    objFlagsSetBits(slot->text, 0x100);
    asdDebugHookPtr("btlPartnerMessage");
    asdTextDrawDirectoryEntry(slot->text, 3, ~0u, 0, 3, battle->directory, slot->messageId);
    asdDebugHookVoid();
    slot->width = textMeasureLineWidth(slot->text, 0);
}
}
