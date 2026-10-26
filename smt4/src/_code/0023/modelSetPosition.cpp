#include "common.h"
extern "C" {
struct Position { u32 x,y,z; };
struct ResourcePosition { u8 unk00[0x7C]; Position position; u32 flags; };
struct PositionOwner { u8 unk00[0x2C]; ResourcePosition *resource; };
/* Replace the resource position and mark its position dirty. */
void modelSetPosition(PositionOwner *owner,u32 unused,const Position *position)
{
    Position value = *position;
    ResourcePosition *resource = owner->resource;
    resource->position.x = value.x;
    resource->position.y = value.y;
    resource->position.z = value.z;
    resource->flags |= 0x800;
}
}
