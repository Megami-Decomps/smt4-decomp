#include "common.h"
extern "C" {
u32 FUN_002bff6c(u32 first,u32 second,u32 third,u32 fourth,u32 mode);
/* Forward four arguments with mode one. */
u32 effectForwardModeOne(u32 first,u32 second,u32 third,u32 fourth) { return FUN_002bff6c(first,second,third,fourth,1); }
}
