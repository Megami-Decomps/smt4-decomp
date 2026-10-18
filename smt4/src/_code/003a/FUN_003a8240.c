/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8240` (_code @ 0x3a8240, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_0019e0c0(unsigned int);
extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_0023553c. */
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_0029c43c. */
/* Supplied declaration required: FUN_0029ce60. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002e3150. */


void FUN_003a8240(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 != 2) {
    return;
  }
  temp_v0 = FUN_002973d8();
  if (temp_v0 == 0) {
    temp_v0 = FUN_0023360c(param_1 + 0x20);
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac);
    FUN_0029ce60(temp_v1,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_0029c43c(-temp_v1,0);
    FUN_002a0cc8(1);
    *(unsigned int *)(param_1 + 0x14) = 4;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_002e3150();
    FUN_002b8838(0x2d);
    return;
  }
  FUN_0023553c(0);
  FUN_002a0cc8(0);
  *(unsigned int *)(param_1 + 0x14) = 2;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_002b8838(0x2d);
  return;
}
