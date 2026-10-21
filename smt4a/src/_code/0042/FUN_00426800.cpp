/* NON_MATCHING: stack argument forwarding uses VFP copies instead of retail integer ldm/stm. */
#include "common.h"
extern "C" {
u32 FUN_00426a1c(u32 first, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth, u32 seventh);
/* Forwards the complete service request. */
u32 FUN_00426800(u32 first, u32 second, u32 third, u32 fourth, u32 fifth, u32 sixth, u32 seventh) { return FUN_00426a1c(first, second, third, fourth, fifth, sixth, seventh); }
}
