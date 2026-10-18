/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015bfa8` (_code @ 0x15bfa8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_001395ec. */
/* Supplied declaration required: FUN_00152608. */
/* Supplied declaration required: FUN_002bf59c. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_0015bfa8(int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_002c38a4(param_1 + 0x2c);
  FUN_001395ec(param_2 + 0xc);
  *(unsigned char *)(param_2 + 0x14) = 1;
  temp_v0 = param_1 + param_3 * 0xc;
  FUN_002bf59c(temp_v0,temp_v0 + 4,param_2 + 4);
  FUN_00152608(param_1 + 0x38,0);
  FUN_002c3820(param_1 + 0x2c);
  return;
}
