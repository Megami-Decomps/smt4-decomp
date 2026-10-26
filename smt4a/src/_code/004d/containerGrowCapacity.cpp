#include "common.h"
#include "code/Code004d_Smt4a.h"
extern "C" {
/* Grow capacity geometrically below one KiB and in one-KiB blocks above it. */
u32 containerGrowCapacity(u32 capacity,u32 required) { if (required<8) return 16; if (required>=1024) return (required+1023)&~1023u; return required<capacity*2 ? capacity*2 : required; }
}
