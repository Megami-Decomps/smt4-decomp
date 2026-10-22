#include "common.h"
#include "battle/btlMain.h"
#include "battle/btlAction.h"

extern "C" {

typedef struct BtlContext {
    /* 0x00 */ BtlMainState *state;
} BtlContext;

typedef struct BtlSceneSlot {
    /* 0x00 */ u16 unk00;
    /* 0x02 */ u16 messageId;
    /* 0x04 */ u8 unk04[6];
} BtlSceneSlot;

typedef struct BtlScene {
    /* 0x000 */ u8 unk000[0x9D0];
    /* 0x9D0 */ BtlSceneSlot slots[1]; // one per listed combatant
} BtlScene;

typedef struct BtlListedEntry {
    /* 0x00 */ u32 flags; // 0x40: gone, 0x10: has a partner
} BtlListedEntry;

typedef struct BtlPartner {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ s16 id;
} BtlPartner;

BtlListedEntry *btlMainFindEntryByListedId(BtlMainState *state, s32 id);
BtlPartner *FUN_0027da30(BtlMainState *state, s32 id);
void FUN_003be7d0(BtlListedEntry *entry);
void FUN_00336b98(BtlMainState *state, s32 partnerId);
s32 FUN_00293230(BtlMainState *state);
void FUN_00250680(s32 messageId, BtlScene *scene, BtlActionRecord *action, s32 arg);

/* Shows the action message of a listed combatant that is still in the battle. */
void btlShowListedActionMessage(BtlContext *context, BtlScene *scene, s32 id, u32 unused, s32 baseMessageId)
{
    BtlListedEntry *entry = btlMainFindEntryByListedId(context->state, id);
    s32 messageId;

    if (entry == NULL || (entry->flags & 0x40)) {
        return;
    }
    messageId = scene->slots[id].messageId;
    if (entry->flags & 0x10) {
        BtlPartner *partner = FUN_0027da30(context->state, id);
        if (partner != NULL) {
            FUN_003be7d0(entry);
            FUN_00336b98(context->state, partner->id);
        }
    }
    if (FUN_00293230(context->state)) {
        messageId = baseMessageId + 15;
    }
    FUN_00250680(messageId, scene, &context->state->actions[id], 0);
}

} /* extern "C" */
