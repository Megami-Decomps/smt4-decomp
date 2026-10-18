/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025715c` (_code @ 0x25715c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c0894. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_0025715c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *param_1;
  temp_v0 = *(int *)(temp_v1 + 0x10) - 1;
  *(int *)(temp_v1 + 0x10) = temp_v0;
  if (temp_v0 == 0) {
    temp_v0 = 0;
    if (temp_v0 < *(int *)(temp_v1 + 0xc)) {
      do {
        FUN_002c0894(*(unsigned int *)(*(int *)(temp_v1 + 0x14) + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < *(int *)(temp_v1 + 0xc));
    }
    FUN_002c415c(*(unsigned int *)(temp_v1 + 0x18));
  }
  FUN_002c415c(param_1);
  return;
}
