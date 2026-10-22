/* NON_MATCHING: the zero marker mask is initialized after the visibility guard instead of before it. */
#include "shard/Shard0034.h"
#include "shard/W6_W6Match6_PartyPanel.h"

extern "C" {
PlayerData *gameGetPlayerData(void);
PlayerData *gameGetSlotRecord(s32 slot);
PlayerData *btlMainGetUnk14(void);
u32 markerKindGetColor(u32 kind);

// Return the color of the selected marker among the subject's enabled marker kinds.
u32 FUN_003f3f08(const PartyPanelWidget *widget)
{
    // The subject selector is beyond the recovered PartyPanelWidget prefix.
    struct MarkerWidgetView {
        u8 unk00[0x1C];
        s32 markerOrdinal;
        u8 unk20[3];
        u8 markerHidden;
        u8 unk24[0x10];
        s32 sourceSelector;
    };
    const MarkerWidgetView *entry = (const MarkerWidgetView *)widget;
    u32 color = 0xFFFFFFFF;
    if (entry->markerHidden) {
        return color;
    }
    u32 markerMask = 0;
    s32 selector = entry->sourceSelector;
    if (selector == -1) {
        markerMask = gameGetPlayerData()->unk5E;
    } else if (selector == -2) {
        const PlayerData *subject = btlMainGetUnk14();
        if (subject != NULL) {
            markerMask = (u16)subject->unk60;
        }
    } else if (selector >= 0) {
        markerMask = (u16)gameGetSlotRecord(selector)->unk60;
    }
    s32 ordinal = 0;
    for (s32 kind = 1; kind < 14; ++kind) {
        if (kind == 2) {
            continue;
        }
        if ((markerMask & (1u << kind)) != 0) {
            if (entry->markerOrdinal == ordinal) {
                color = markerKindGetColor((s16)kind);
                break;
            }
            ++ordinal;
        }
    }
    return color;
}
}
