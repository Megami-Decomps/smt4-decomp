#include "shard/Shard0048.h"

/* Fills a spatial marker from the category at the given position, or clears the unused slot. */
extern "C" void naviSetSpatialMarkerSlot(Block66Owner *owner, s32 slot, s32 active, s32 mapId,
                             f32 x, f32 y, f32 z, s32 section, s32 enabled)
{
    if (active != 0) {
        const MapNaviCategoryRecord *category = mapNaviFindCategoryAtPosition(owner, mapId, section, x, y, z);
        const MapNaviMarkerIcon *icon = dataTable2BFindType1Entry(owner, mapId, category->category);
        owner->spatialMarkers[slot].mapId = mapId;
        owner->spatialMarkers[slot].section = section;
        owner->spatialMarkers[slot].category = category->category;
        owner->spatialMarkers[slot].icon = icon->icon;
        if (enabled != 0) {
            owner->spatialMarkers[slot].enabled = 1;
        } else {
            owner->spatialMarkers[slot].enabled = 0;
        }
        owner->spatialMarkers[slot].x = (s32)x;
        owner->spatialMarkers[slot].y = (s32)z;
    } else {
        owner->spatialMarkers[slot].mapId = 0;
        owner->spatialMarkers[slot].section = 0;
        owner->spatialMarkers[slot].category = 0;
        owner->spatialMarkers[slot].icon = 0;
        owner->spatialMarkers[slot].enabled = 0;
        owner->spatialMarkers[slot].x = 0;
        owner->spatialMarkers[slot].y = 0;
        owner->spatialMarkers[slot].state = 0;
    }
}
