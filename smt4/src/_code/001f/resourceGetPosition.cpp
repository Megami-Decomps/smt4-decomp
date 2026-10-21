#include "common.h"
extern "C" {
struct ThreeWords { u32 first,second,third; };
struct ResourceValues { u8 unk00[0x7C]; ThreeWords values; };
struct ResourceOwner { u8 unk00[0x2C]; ResourceValues *resource; };
/* Copy all three resource values to the supplied output. */
void resourceGetPosition(const ResourceOwner *owner,u32 unused,ThreeWords *output) { *output=owner->resource->values; }
}
