/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7bb8` (_code @ 0x2e7bb8, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: FUN_00248f70. */
/* Supplied declaration required: FUN_002a4e98. */
/* Supplied declaration required: FUN_002c2264. */
extern unsigned int FUN_002c32a0(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002e7bb8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r6;
  
  temp_v0 = param_1[0x13];
  if (temp_v0 != 0) {
    unaff_r6 = *(unsigned int *)(temp_v0 + 8);
  }
  if (temp_v0 == 0) {
    unaff_r6 = *param_1;
  }
  if (param_1[0x10] != 0) {
    temp_v0 = 0;
    if (temp_v0 < unaff_r6) {
      do {
        FUN_002c2264(*(unsigned int *)(param_1[0xf] + temp_v0 * 4));
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < unaff_r6);
    }
    FUN_002c415c(param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if (unaff_r6 << 2 != 0) {
    temp_v0 = FUN_002c32a0(0x10000,0x100,0,unaff_r6 << 2,0x10,1);
    param_1[0x10] = temp_v0;
    param_1[0xf] = temp_v0;
    FUN_002a4e98();
    temp_v0 = 1;
    *(unsigned int *)param_1[0xf] = param_2;
    if (unaff_r6 >= 2) {
      do {
        temp_v1 = *(unsigned int *)param_1[0xf];
        FUN_00248f70();
        *(unsigned int *)(param_1[0xf] + temp_v0 * 4) = temp_v1;
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < unaff_r6);
    }
  }
  return;
}
