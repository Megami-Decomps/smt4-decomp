#include "common.h"
extern "C" {
u32 uiPointerHitsRect(u32 first, u32 second, u32 third, u32 fourth, u32 mode);
/* Forwards the operation with fixed mode 3. */
u32 FUN_004d0420(u32 first,u32 second,u32 third,u32 fourth) { return uiPointerHitsRect(first,second,third,fourth,3); }
}
