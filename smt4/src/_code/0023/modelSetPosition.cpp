/* NON_MATCHING: compiler selects floating multiple loads for the position copy rather than retail integer loads. */
#include "common.h"
extern "C" {
struct Position { u32 x,y,z; };
struct ResourcePosition { u8 unk00[0x7C]; Position position; u32 flags; };
struct PositionOwner { u8 unk00[0x2C]; ResourcePosition *resource; };
/* Replace the resource position and mark its position dirty. */
void modelSetPosition(PositionOwner *owner,u32 unused,const Position *position) { owner->resource->position=*position; owner->resource->flags|=0x800; }
}
