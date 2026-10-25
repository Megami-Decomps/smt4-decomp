/* NON_MATCHING: typed vector/scale stores coalesce and descriptor/instance saved-register allocation differs. */
#include "map/MapEffectReservation.h"

extern "C" {
extern MapEffectReservationState DAT_00447a28;
extern MapEffectReservation DAT_004afd64[];
extern MapEffectInstance DAT_004a1264[];
s32 FUN_0021c694(MapEffectAttachmentRequest* request);
u32 mapIfSpawnEffect(u32 resource, u32 first, u32 second, u32 option, f32 x, f32 y, f32 z, f32 heading);

s32 FUN_00263cb8(u32 resource, u32 kind, u32 owner, u32 appearanceResource,
    u32 first, u32 second, u8 red, u8 green, u8 blue, u8 secondaryRed, u8 secondaryGreen,
    u8 secondaryBlue, s8 channel, u8 mode, u8 flags, MapEffectFloatWord scaleX,
    MapEffectFloatWord scaleY, MapEffectFloatWord scaleZ, u32 option,
    f32 x, f32 y, f32 z, f32 rotationY, f32 rotationX, f32 rotationZ, f32 heading)
{
    s32 reservationIndex = DAT_00447a28.count;
    MapEffectReservation* reservation = &DAT_004afd64[reservationIndex];
    reservation->rotation.kind = 2;
    reservation->rotation.y = rotationY;
    reservation->rotation.x = rotationX;
    reservation->rotation.z = rotationZ;
    reservation->appearance.resource = appearanceResource;
    reservation->appearance.kind = 1;
    reservation->appearance.scale[0] = scaleX;
    reservation->appearance.scale[1] = scaleY;
    reservation->appearance.scale[2] = scaleZ;
    reservation->appearance.color[0] = red;
    reservation->appearance.color[1] = green;
    reservation->appearance.color[2] = blue;
    reservation->appearance.color[3] = secondaryRed;
    reservation->appearance.color[4] = secondaryGreen;
    reservation->appearance.color[5] = secondaryBlue;
    reservation->appearance.enabled = 1;
    reservation->rotationSource = &reservation->rotation;
    reservation->attachment.appearance = &reservation->appearance;
    reservation->attachment.transform = &reservation->transform;
    reservation->transform.x = x;
    reservation->transform.offsetX = 0.0f;
    reservation->transform.heading = heading;
    reservation->transform.offsetZ = 0.0f;
    reservation->transform.y = y;
    reservation->transform.z = z;
    reservation->attachment.owner = owner;
    s32 slot = FUN_0021c694(&reservation->attachment);
    u32 effect = mapIfSpawnEffect(resource, first, second, option, x, y, z, heading);
    MapEffectInstance* instance = &DAT_004a1264[slot];
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
    return slot;
}
}
