#include "common.h"
extern "C" {
struct Coordinates { u32 x,y,z; };
struct CoordinateOwner { u8 unk00[0x28]; Coordinates position; };
/* Copy the supplied three coordinate words. */
void recordSetOrigin(CoordinateOwner *owner,const Coordinates *position) { owner->position=*position; }
}
