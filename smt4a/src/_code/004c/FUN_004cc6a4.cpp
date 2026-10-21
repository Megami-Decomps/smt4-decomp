/* NON_MATCHING: callee-result stores use different preserved registers. */
#include "common.h"
struct ValuePair { u16 first,second; };
extern "C" {
u16 FUN_003da99c(void *owner,u32 index);
u16 FUN_003daaf8(void *owner,u32 index);
/* Reads both halfword values for the selected entry. */
void FUN_004cc6a4(void *owner,ValuePair *output,u32 index) {output->first=FUN_003da99c(owner,index);output->second=FUN_003daaf8(owner,index);}
}
