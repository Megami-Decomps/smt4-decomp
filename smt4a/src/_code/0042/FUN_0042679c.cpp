/* NON_MATCHING: stack argument forwarding uses VFP copies instead of retail integer ldm/stm. */
#include "common.h"
extern "C" {
u32 FUN_00426820(u32 first, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth);
/* Forwards the complete service request. */
u32 FUN_0042679c(u32 first, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth) { return FUN_00426820(first, second, third, fourth, fifth, sixth); }
}
