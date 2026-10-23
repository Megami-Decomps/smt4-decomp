/* NON_MATCHING: selected-slot base is retained separately from its parent, changing registers and one address add; distance arguments schedule differently. */
#include "map/MapStateSlots.h"
#include "map/lmapMain.h"

extern "C" {
extern MapStateSlots *g_mapStateSlots;
extern LmapScene *g_lmapScene;
f32 mathDistanceBetweenPoints(f32 firstX, f32 firstY, f32 firstZ, f32 secondX, f32 secondY, f32 secondZ);

// Rank the three nearest active eligible map slots and publish their scene positions.
void FUN_001fc0a8(void)
{
    if (g_mapStateSlots->unk04 != 101) {
        return;
    }
    for (s32 i = 0; i < 32; ++i) {
        MapStateSlot *slot = &g_mapStateSlots->slots[i];
        if (slot->active != 0 && slot->ranking.eligible != 0) {
            slot->ranking.distance = mathDistanceBetweenPoints(
                g_lmapScene->transform.position[0], g_lmapScene->transform.position[1], g_lmapScene->transform.position[2],
                slot->motion.position[0], slot->motion.position[1], slot->motion.position[2]);
            slot->ranking.pendingRank = 999;
        }
    }
    MapStateSlots *work = g_mapStateSlots;
    // Published nearest-slot records follow the canonical work prefix; do not enlarge it.
    struct SelectedSlotsView {
        u8 unk000[0x9D8];
        MapStateSlot selected[3];
    };
    typedef char SelectedSlotsOffsetCheck[offsetof(SelectedSlotsView, selected) == 0x9D8 ? 1 : -1];
    for (s32 rank = 0; rank < 3; ++rank) {
        s32 nearest = -1;
        f32 minimum = 90000.0f;
        for (s32 i = 0; i < 32; ++i) {
            MapStateSlot *slot = &work->slots[i];
            if (slot->active != 0 && slot->state != 0 && slot->ranking.eligible != 0 &&
                slot->ranking.pendingRank == 999 && slot->ranking.distance < minimum) {
                nearest = i;
                minimum = slot->ranking.distance;
            }
        }
        MapStateSlot *slot = &work->slots[nearest];
        slot->ranking.pendingRank = rank;
        slot->ranking.rank = rank;
        MapStateSlot *selected = &((SelectedSlotsView *)work)->selected[rank];
        selected->motion.point = slot->motion.point;
        selected->motion.heading = slot->motion.heading;
        selected->motion.elapsed = slot->motion.elapsed;
        selected->motion.mode = 1;
    }
    for (s32 i = 0; i < 32; ++i) {
        MapStateSlot *slot = &work->slots[i];
        if (slot->active != 0 && slot->state != 0 && slot->ranking.eligible != 0 &&
            slot->ranking.pendingRank == 999 && slot->ranking.rank != -1) {
            slot->ranking.rank = -1;
        }
    }
}
}
