/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dc684` (_code @ 0x1dc684, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_003bbb04. */


void FUN_001dc684(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  do {
    temp_v1 = param_1 + 0x420;
    FUN_002c38a4(temp_v1);
    if (*(unsigned int *)(param_1 + 0x78) - *(int *)(param_1 + 0x7c) < 0xc) {
      FUN_003bbb04(*(unsigned int *)(param_1 + 4),
                   param_1 + (*(unsigned int *)(param_1 + 0x78) % 0xc) * 0x4c + 0x80,
                   *(unsigned int *)(param_1 + 0x6c),1);
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
      temp_v0 = *(int *)(param_1 + 0x6c) + 1;
      *(int *)(param_1 + 0x6c) = temp_v0;
      if (*(int *)(param_1 + 0x70) <= temp_v0) {
        FUN_002c3820(temp_v1);
        return;
      }
    }
    FUN_002c3820(temp_v1);
  } while( 1 );
}
