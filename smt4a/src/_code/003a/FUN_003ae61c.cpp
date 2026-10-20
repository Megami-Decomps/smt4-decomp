/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae61c` (_code @ 0x3ae61c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00490484(int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_00587f28; /* 0x587f28 */

extern int FUN_00162e8c(void);
/* Supplied declaration required: FUN_00490484. */


void FUN_003ae61c(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0, in_s1; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  float in_s0;
  float in_s1;
  
  temp_v0 = DAT_00587f28;
  temp_v1 = FUN_00162e8c();
  if (temp_v0 != 0) {
    FUN_00490484(temp_v0 + 0x68,param_1,param_3,param_2);
    return;
  }
  *(unsigned int *)(temp_v1 + 0x1688) = 1;
  *(unsigned int *)(temp_v1 + 0x168c) = param_1;
  *(unsigned int *)(temp_v1 + 0x1690) = param_3;
  *(int *)(temp_v1 + 0x1694) = (int)in_s0;
  *(int *)(temp_v1 + 0x1698) = (int)in_s1;
  *(unsigned int *)(temp_v1 + 0x169c) = param_2;
  return;
}

} /* extern "C" */
