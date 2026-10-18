/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d684` (_code @ 0x27d684, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00248fa4. */
extern int FUN_00248ffc(void);
extern int FUN_002c2b1c(void);


void FUN_0027d684(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00248ffc();
  if (temp_v0 != -1) {
    temp_v1 = FUN_002c2b1c();
    if (-1 < temp_v0) {
      temp_v1 = temp_v1 + ((int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x1b)) >> 5) * 4;
      *(unsigned int *)(temp_v1 + 0x7d4) = *(unsigned int *)(temp_v1 + 0x7d4) | (1 << ((temp_v0 % 0x20) & 0xffU));
    }
    FUN_00248fa4(param_1);
    return;
  }
  return;
}
