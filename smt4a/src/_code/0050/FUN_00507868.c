/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00507868` (_code @ 0x507868, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

/* Supplied declaration required: FUN_0045b4d0. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_00507868(int *param_1,int param_2,unsigned int *param_3,int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [3];
  
  temp_v2 = *(int *)(param_5 + 0xc) + param_4;
  temp_v1 = param_4;
  FUN_0045b4d0(temp_v3,&temp_v1,*(unsigned int *)(param_5 + 0x4c),4);
  temp_v0 = *(unsigned int *)(param_2 + 0x80);
  *param_3 = temp_v3[0];
  param_3[1] = temp_v0;
  nnnstdMemCpy(temp_v3[0],*(unsigned int *)(param_2 + 0x7c),(*(int *)(param_2 + 0x80) + 7U) >> 3);
  *(unsigned char *)(param_3 + 2) = 1;
  *param_1 = temp_v1;
  param_1[1] = 0;
  return;
}
