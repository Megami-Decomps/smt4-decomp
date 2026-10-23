/* NON_MATCHING: boolean returns and selection-sign test are folded, reducing the save set; active-grid pointer lifetimes differ, 96 versus retail 98 instructions. */
#include "ui/PartyPanelState.h"
#include "ui/GridNavigation.h"

extern "C" {
extern PartyPanelStateA *g_partyPanel;
s32 FUN_002a4894(const GridNavigation *navigation);
s32 FUN_002a4878(const GridNavigation *navigation);
}
static __inline bool gridAtOrigin(const GridNavigation *navigation)
{
    return !FUN_002a4894(navigation) && !FUN_002a4878(navigation);
}

// Allow an empty/origin selection only in the party modes that support it.
extern "C" u32 FUN_002cad18()
{
    // These navigation blocks are beyond the documented shared party-panel prefix.
    struct NavigationView {
        u8 prefix[0xc24];
        GridNavigation primary;
        u8 unkC88[0xc8];
        GridNavigation first;
        GridNavigation second;
    };
    typedef char NavigationViewOffsets[offsetof(NavigationView, primary) == 0xc24 && offsetof(NavigationView, first) == 0xd50 && offsetof(NavigationView, second) == 0xdb4 ? 1 : -1];
    PartyPanelStateA *panel = g_partyPanel;
    s32 mode = panel->unk20;
    if (mode == 6 || panel->state == 6)
        return 0;
    if (mode == 4 || panel->state == 4)
        return gridAtOrigin(&reinterpret_cast<NavigationView *>(panel)->primary);
    NavigationView *navigation = reinterpret_cast<NavigationView *>(g_partyPanel);
    if (mode == 8 || panel->state == 8) {
        if (panel->activeGrid.alternate)
            return gridAtOrigin(&navigation->second);
        return gridAtOrigin(&reinterpret_cast<NavigationView *>(panel)->first);
    }
    if (mode == 10 || panel->state == 10)
        return panel->preview.selection < 0;
    if (mode == 20 || panel->state == 20) {
        if (panel->activeGrid.alternate)
            return gridAtOrigin(&navigation->second);
        return gridAtOrigin(&reinterpret_cast<NavigationView *>(panel)->first);
    }
    return 0;
}
