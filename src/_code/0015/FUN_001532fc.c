/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001532fc` (_code @ 0x1532fc, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_004ead10; /* 0x4ead10 */

/* Supplied declaration required: FUN_0015d65c. */
/* Supplied declaration required: FUN_0015d6a8. */
/* Supplied declaration required: FUN_002a2ab0. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_001532fc(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_002c38a4(param_1 + 0x44);
  temp_v0 = param_1 + param_2 * 8;
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_0015d65c();
  }
  if (*(int *)(temp_v0 + 0x38) != 0) {
    FUN_0015d6a8();
  }
  *(unsigned int *)(temp_v0 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0;
  FUN_002a2ab0(&DAT_004ead10,param_2,0);
  FUN_002c3820(param_1 + 0x44);
  return;
}
