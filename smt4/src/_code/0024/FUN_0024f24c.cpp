/* NON_MATCHING: argument grouping, reservation-base registers and contiguous floating-store grouping differ. */
#include "map/MapEffectReservation.h"

/* This request variant uses the tail of rotation storage for a two-axis direction. */
union DirectionalMapEffectReservationView {
    MapEffectReservation reservation;
    struct {
        u8 unk00[0x18];
        u32 kind;
        f32 horizontal;
        f32 vertical;
    } direction;
};
extern "C" {
extern MapEffectReservationState DAT_00447a28;
extern DirectionalMapEffectReservationView DAT_004afd64[];
extern MapEffectInstance DAT_004a1264[];
s32 FUN_0021c694(MapEffectAttachmentRequest *);
u32 mapIfSpawnEffect(u32, u32, u32, u32, f32, f32, f32, f32);

void FUN_0024f24c(u32 resource, u32 kind, u32 owner, u32 appearance, u32 spawnGroup, u32 spawnMode,
                  u8 color0, u8 color1, u8 color2, u8 color3, u8 color4, u8 color5,
                  u8 channel, u8 mode, u8 flags, u32 scaleX, u32 scaleY, u32 scaleZ, u32 spawnArgument,
                  f32 x, f32 y, f32 z, f32 vertical, f32 horizontal, f32 heading)
{
    s32 reservationIndex = DAT_00447a28.count;
    DirectionalMapEffectReservationView *request = &DAT_004afd64[reservationIndex];
    MapEffectReservation *reservation = &request->reservation;
    request->direction.kind = 1;
    request->direction.vertical = vertical;
    request->direction.horizontal = horizontal;
    reservation->appearance.resource = appearance;
    reservation->appearance.kind = 1;
    reservation->appearance.scale[0].bits = scaleX;
    reservation->appearance.scale[1].bits = scaleY;
    reservation->appearance.scale[2].bits = scaleZ;
    reservation->appearance.color[0] = color0;
    reservation->appearance.color[1] = color1;
    reservation->appearance.color[2] = color2;
    reservation->appearance.color[3] = color3;
    reservation->appearance.color[4] = color4;
    reservation->appearance.color[5] = color5;
    reservation->appearance.enabled = 1;
    reservation->rotationSource = reinterpret_cast<MapEffectRotation *>(&request->direction.kind);
    reservation->attachment.appearance = &reservation->appearance;
    reservation->attachment.transform = &reservation->transform;
    reservation->transform.x = x;
    reservation->transform.offsetX = 0.0f;
    reservation->transform.heading = heading;
    reservation->transform.offsetZ = 0.0f;
    reservation->transform.y = y;
    reservation->transform.z = z;
    reservation->attachment.owner = owner;
    s32 instanceIndex = FUN_0021c694(&reservation->attachment);
    u32 effect = mapIfSpawnEffect(resource, spawnGroup, spawnMode, spawnArgument, x, y, z, heading);
    MapEffectInstance *instance = &DAT_004a1264[instanceIndex];
    instance->effect = effect;
    instance->channel = channel;
    DAT_004a1264[reservationIndex].mode = mode;
    instance->resource = resource;
    instance->kind = kind;
    instance->target = -1;
    instance->frame = 0;
    instance->previous = -1;
    instance->active = 0;
    instance->flags = flags;
    instance->pending = 0;
    instance->first = 0;
    instance->second = 0;
    ++DAT_00447a28.count;
}
}
