/* NON_MATCHING: touch-count base address is hoisted before cleanup and the first-page population branch is laid out earlier. */
#include "ui/PartyPanelState.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;
GameSlotTable *gameGetSlotTable(void);
void ifTouchRegionRemove(void);
u16 FUN_001643b4(u32, s32);
void __aeabi_memset4(void *, u32, s32);

void FUN_0023e908(void)
{
    // These aligned touch fields lie inside the canonical panel's byte-aligned animation padding.
    struct TouchPanelView {
        u8 prefix[0x2C];
        s32 page;
        u8 unk30[0x12];
        u8 alternate;
        u8 unk43[0x981];
        u16 handles[30];
        s32 count;
    };
    struct RosterCountView { u8 prefix[0x1CA3]; u8 count; };
    typedef char TouchPanelOffsets[offsetof(TouchPanelView, handles) == 0x9C4 &&
        offsetof(TouchPanelView, count) == 0xA00 ? 1 : -1];
    TouchPanelView *panel = reinterpret_cast<TouchPanelView *>(g_partyPanel);
    for (s32 i = 0; i < panel->count; ++i)
        ifTouchRegionRemove();
    panel->count = 0;
    __aeabi_memset4(panel->handles, sizeof(panel->handles), -1);
    if (panel->alternate) {
        for (s32 i = 0; i < 4; ++i) {
            panel->handles[i] = FUN_001643b4(0x11, i + 0x57);
            ++panel->count;
        }
        for (s32 i = 0; i < reinterpret_cast<RosterCountView *>(gameGetSlotTable())->count; ++i) {
            panel->handles[i + 4] = FUN_001643b4(0x11, i + 0x5B);
            ++panel->count;
        }
    } else {
        for (s32 i = 0; i < 4; ++i) {
            panel->handles[i] = FUN_001643b4(0x11, i + 0x2D);
            ++panel->count;
        }
        s32 visibleCount = 12;
        if (panel->page != 0)
            visibleCount = reinterpret_cast<RosterCountView *>(gameGetSlotTable())->count - 12;
        else if (reinterpret_cast<RosterCountView *>(gameGetSlotTable())->count < 12)
            visibleCount = reinterpret_cast<RosterCountView *>(gameGetSlotTable())->count;
        for (s32 i = 0; i < visibleCount; ++i) {
            panel->handles[i + 4] = FUN_001643b4(0x11, i + 0x31);
            ++panel->count;
        }
        panel->handles[28] = FUN_001643b4(0x11, 0x24);
        panel->handles[29] = FUN_001643b4(0x11, 0x25);
        panel->count += 2;
    }
}
}
