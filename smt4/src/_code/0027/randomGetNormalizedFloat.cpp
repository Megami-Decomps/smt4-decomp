/* NON_MATCHING: compiler selects r2 instead of r0 for the shifted random word before float conversion. */
#include "common.h"
extern "C" {
extern u32 DAT_004651c0;
/* Advance the linear-congruential generator and scale its high halfword. */
f32 randomGetNormalizedFloat(void) { DAT_004651c0=DAT_004651c0*0x41C64E6D+12345; return (f32)(DAT_004651c0>>16)*1.5259021893143654e-05f; }
}
