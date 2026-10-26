/* NON_MATCHING: default optimization combines repeated slot/source loads and omits retail inline-getter hints (95/81 rows, six versus eight saved GPRs); O2 candidate. */
#include "ui/PartyPanelState.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "gamedata/UnitRecordAccess.h"

namespace {
struct PartyStatusWidget {
    PartyPanelWidget common;
    u8 unk28[0xc];
    s32 source;
};
struct PartyStatusUnit {
    BtlEquip equip;
    u16 flags;
    u16 id;
};
}

extern "C" {
extern PartyPanelState *g_partyPanel;
void FUN_0033c468(PartyPanelWidget* widget);
u16* FUN_0029acb0();
s32 FUN_0028dbe0(PartyPanelWidget* widget);
}

namespace {
inline s32 widgetSource(PartyPanelWidget* widget)
{
    return reinterpret_cast<const PartyStatusWidget*>(widget)->source;
}

// Keep the slot by reference: callbacks may replace its widget.
inline void pollStatusColor(PartyPanelWidget* const& widget, u32& color)
{
    FUN_0033c468(widget);
    const s16* selectedId = reinterpret_cast<const s16*>(FUN_0029acb0());
    if (widgetSource(widget) < 0) {
        if (*selectedId < 0 && FUN_0028dbe0(widget) != -1) {
            color = FUN_0028dbe0(widget);
        }
    } else if (static_cast<PartyStatusUnit *>(gameGetUnitRecord(widgetSource(widget)))->id == *selectedId
               && FUN_0028dbe0(widget) != -1) {
        color = FUN_0028dbe0(widget);
    }
}
}

extern "C" u32 partyPanelPollSelectedStatusColor()
{
    PartyPanelState* panel = g_partyPanel;
    u32 color = ~0u;
    for (s32 i = 0; i < 4; ++i) {
        pollStatusColor(panel->characters[i], color);
    }
    for (s32 i = 0; i < 24; ++i) {
        pollStatusColor(panel->demons[i], color);
    }
    return color;
}
