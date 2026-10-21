#include "common.h"
extern "C" {
u32 FUN_0042ddac(u32 first, u32 second, u32 third, u32 fourth, u32 mode);
/* Forwards the operation with fixed mode 1. */
u32 FUN_0042dd98(u32 first,u32 second,u32 third,u32 fourth) { return FUN_0042ddac(first,second,third,fourth,1); }
}
