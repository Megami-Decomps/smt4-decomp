/* NON_MATCHING: retail keeps the two target words in r5/r7 and ORs them once after the early checks, then repeats the slot/player test inside every effect case (jump table layout differs); the build hoists the OR and merges the cases */
#include "common.h"
#include "code/Code0033.h"

/* The seven stats the preview tracks, as the current and maximum value of each (0xe bytes each). */
struct PartyStatPair {
    /* 0x00 */ s16 current[7];
    /* 0x0e */ s16 maximum[7];
};

/* The party panel: the item being previewed and the copies of the player and slot records the
   preview edits. */
struct PartyPanelPreview {
    /* 0x0000 */ u8 unk0000[0x36];
    /* 0x0036 */ u16 item;
    /* 0x0038 */ u8 unk0038[0x1056];
    /* 0x108e */ PartyStatPair playerStats;
    /* 0x10aa */ u8 unk10aa[0x3a];
    /* 0x10e4 */ PartyStatPair slotStats;
    /* 0x1100 */ u8 unk1100[0x1c];
};

/* An item record of data table 8. */
struct ItemRecord {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ u16 effect;
    /* 0x32 */ u8 unk32[0x10];
    /* 0x42 */ u8 flags;
};

extern "C" {
extern PartyPanelPreview *g_partyPanel;
ItemRecord *dataTable8FindRecord(s32 item);
u32 gameGetPlayerData(void);
u32 gameGetSlotRecord(s32 slot);
void statusDisplayBindUnitRecord(u32 record, s32 a, s32 b);
void objBInitBlock19D0(void *block, s32 value);
void gameGlobalsQueueValues(u32 player, s32 value);
void FUN_00372100(void *block, s32 value);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
s16 FUN_00480b10(u32 effect, s32 slot);

/* Adds `gain` to stat `stat` of the slot copy (when a target was given) or of the player copy. */
static void addGain(PartyPanelPreview *panel, u32 hasTarget, s32 stat, s16 gain)
{
    PartyStatPair *stats = hasTarget != 0 ? &panel->slotStats : &panel->playerStats;
    stats->current[stat] = stats->current[stat] + gain;
    stats->maximum[stat] = stats->maximum[stat] + gain;
}

/* Previews the stat change of the party panel's item on `slot` (or the player when both
   target words are zero): copies the record into the panel, adds the item's gain to the stats
   its effect names and binds the result for display. */
void FUN_002cbca8(s32 slot, u32 targetLow, u32 targetHigh)
{
    PartyPanelPreview *panel = g_partyPanel;
    if (panel->item == 0) {
        return;
    }
    if (slot < 0 && (targetLow != 0 || targetHigh != 0)) {
        return;
    }
    ItemRecord *item = dataTable8FindRecord(panel->item);
    if ((item->flags & 2) == 0) {
        FUN_0033449c(0);
        return;
    }
    u32 hasTarget = targetLow | targetHigh;
    s32 effectSlot;
    if (hasTarget != 0) {
        __aeabi_memcpy4(&panel->slotStats, (void *)gameGetSlotRecord(slot), 300);
        effectSlot = slot;
    } else {
        __aeabi_memcpy4(&panel->playerStats, (void *)gameGetPlayerData(), 100);
        effectSlot = -1;
    }
    s16 gain = FUN_00480b10(item->effect, effectSlot);
    switch (item->effect) {
    case 0x1f:
    case 0x7a0:
        addGain(panel, hasTarget, 2, gain);
        break;
    case 0x20:
    case 0x7a1:
        addGain(panel, hasTarget, 4, gain);
        break;
    case 0x21:
    case 0x7a2:
        addGain(panel, hasTarget, 3, gain);
        break;
    case 0x22:
    case 0x7a3:
        addGain(panel, hasTarget, 5, gain);
        break;
    case 0x23:
    case 0x7a4:
        addGain(panel, hasTarget, 6, gain);
        break;
    case 0x7a5:
        addGain(panel, hasTarget, 0, gain);
        break;
    case 0x7a6:
        addGain(panel, hasTarget, 1, gain);
        break;
    case 0x7b7:
    case 0x7b8:
    case 0x7b9:
    case 0x7ba:
    case 0x7bb:
    case 0x7bc:
    case 0x7bd:
    case 0x7be:
    case 0x7bf:
    case 0x7c0:
    case 0x7c1:
    case 0x7c2:
        FUN_0033449c(0);
        if (hasTarget != 0) {
            statusDisplayBindUnitRecord(gameGetSlotRecord(slot), 0, 0);
        } else {
            gameGlobalsQueueValues(gameGetPlayerData(), 0);
        }
        return;
    default:
        break;
    }
    FUN_0033449c(1);
    if (hasTarget != 0) {
        statusDisplayBindUnitRecord(gameGetSlotRecord(slot), 0, 0);
        objBInitBlock19D0(&panel->slotStats, 0);
    } else {
        gameGlobalsQueueValues(gameGetPlayerData(), 0);
        FUN_00372100(&panel->playerStats, 0);
    }
}
}
