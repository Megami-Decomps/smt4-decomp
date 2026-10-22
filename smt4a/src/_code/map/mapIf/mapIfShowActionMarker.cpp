#include "common.h"

/* Where the action marker stands: a position and its yaw in degrees. */
struct MapActionMarkerPlacement {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
    /* 0x0C */ f32 yaw;
};

/* A model list as the marker uses it: its controller handle at 0x04. */
struct MapActionMarkerModel {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 controller;
};

/* The action marker block inside the map interface (0xCC5C). */
struct MapActionMarker {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ MapActionMarkerPlacement placement;
    /* 0x1C */ MapActionMarkerModel *model;
};

struct MapIfActionView {
    /* 0x0000 */ u8 unk0000[0xCC5C];
    /* 0xCC5C */ MapActionMarker marker;
};

extern "C" {

extern MapIfActionView *g_mapIf;
extern void *g_handleRegistry;

void *FUN_00178b04(u32 size, const char *file, u32 line);
void *modelListInit(void *memory);
void FUN_0040aa6c(MapActionMarkerModel *model, const char *path);
void FUN_0040aad4(MapActionMarkerModel *model, s32 arg);
void handleRegistryRegisterObject(void *registry, u32 handle);
void controllerSetDestination(u32 controller, const MapActionMarkerPlacement *destination);
void controllerSetRotationEulerDegrees(u32 controller, f32 x, f32 y, f32 z);
void FUN_003fe86c(u32 controller, s32 arg, s32 mode, f32 a, f32 b);

/* Shows the action marker model (map/all/action_up.bam) at the given placement. */
void mapIfShowActionMarker(MapActionMarkerPlacement placement)
{
    MapActionMarker *marker = &g_mapIf->marker;
    void *object;
    u32 controller;

    marker->active = 1;
    marker->unk04 = 0;
    marker->unk08 = 0;
    marker->placement = placement;
    object = FUN_00178b04(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapIf.cpp", 6329);
    if (object != NULL) {
        object = modelListInit(object);
    }
    marker->model = (MapActionMarkerModel *)object;
    FUN_0040aa6c(marker->model, "map/all/action_up.bam");
    FUN_0040aad4(marker->model, 0);
    controller = marker->model->controller;
    handleRegistryRegisterObject(g_handleRegistry, controller);
    controllerSetDestination(controller, &marker->placement);
    controllerSetRotationEulerDegrees(controller, 0.0f, marker->placement.yaw, 0.0f);
    FUN_003fe86c(controller, 0, 2, 0.0f, 0.0f);
}

} /* extern "C" */
