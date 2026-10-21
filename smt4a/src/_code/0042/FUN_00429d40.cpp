#include "common.h"
struct OperationOwner { u8 unk00[8]; u8 operation; };
extern "C" {
u32 FUN_0042c2f4(void *operation,u32 second,u32 third,u32 fourth,u32 fifth);
/* Forwards to the embedded operation. */
u32 FUN_00429d40(OperationOwner *owner,u32 second,u32 third,u32 fourth,u32 fifth) { return FUN_0042c2f4(&owner->operation,second,third,fourth,fifth); }
}
