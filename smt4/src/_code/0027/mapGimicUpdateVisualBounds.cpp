#include "map/MapGimicVisualIV.h"
extern "C" {
extern MapGimicVisualStateIV *g_mapGimic;
void FUN_002671f4(s32 handle, f32 x, f32 y, f32 z, f32 w, f32 range, f32 height, f32 radius);
}
static inline void updateGimicVisualBounds(const MapGimicVisualRecordIV *record, f32 range, f32 height, f32 radius)
{
    FUN_002671f4(static_cast<s16>(record->handle), record->position[0], record->position[1], record->position[2], record->position[3], range, height, radius);
}
extern "C" void mapGimicUpdateVisualBounds(void)
{
    for (s32 i = 0; i < 24; ++i) {
        MapGimicVisualRecordIV *record = &g_mapGimic->records[i];
        if (record->active) {
            if (record->kind == 16)
                updateGimicVisualBounds(record, 500.0f, 300.0f, 15.0f);
            if (record->kind == 10)
                updateGimicVisualBounds(record, 1000.0f, 300.0f, 15.0f);
            if (record->kind == 11)
                updateGimicVisualBounds(record, 500.0f, 300.0f, 15.0f);
            if (record->kind == 12)
                updateGimicVisualBounds(record, 600.0f, 350.0f, 160.0f);
            if (record->kind == 23)
                updateGimicVisualBounds(record, 1100.0f, 600.0f, 60.0f);
            if (record->kind == 21)
                updateGimicVisualBounds(record, 600.0f, 600.0f, 60.0f);
            if (record->kind == 20)
                updateGimicVisualBounds(record, 600.0f, 600.0f, 80.0f);
        }
    }
}
