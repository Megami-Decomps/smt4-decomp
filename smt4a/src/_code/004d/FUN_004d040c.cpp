#include "common.h"
extern "C" {
u32 FUN_00152cf8(u32 first, u32 second, u32 third, u32 fourth, u32 mode);
/* Forwards the operation with fixed mode 1. */
u32 FUN_004d040c(u32 first,u32 second,u32 third,u32 fourth) { return FUN_00152cf8(first,second,third,fourth,1); }
}
