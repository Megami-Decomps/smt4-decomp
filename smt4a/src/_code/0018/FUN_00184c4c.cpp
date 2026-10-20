/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00184c4c` (_code @ 0x184c4c, 0x4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001acf18(unsigned int *, unsigned int *, unsigned int *);

extern int DAT_0063f744; /* 0x63f744 */

/* Supplied declaration required: FUN_001acf18. */


void FUN_00184c4c(unsigned int param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3, in_s4; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned int in_s4;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_8;
  
  if ((in_s0 & 0x7fffffff) == 0) {
    uStack_40 = (in_s0 >> 0x1f) << 0x17;
  }
  else {
    uStack_40 = *(unsigned int *)(((in_s0 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
                ((in_s0 & 0x7fffff) >> 7) | ((in_s0 >> 0x1f) << 0x17);
  }
  if ((in_s1 & 0x7fffffff) == 0) {
    temp_v0 = (in_s1 >> 0x1f) << 0x17;
  }
  else {
    temp_v0 = ((in_s1 & 0x7fffff) >> 7) | ((in_s1 >> 0x1f) << 0x17) |
            *(unsigned int *)(((in_s1 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  if ((in_s2 & 0x7fffffff) == 0) {
    temp_v1 = (in_s2 >> 0x1f) << 0x17;
  }
  else {
    temp_v1 = ((in_s2 & 0x7fffff) >> 7) | ((in_s2 >> 0x1f) << 0x17) |
            *(unsigned int *)(((in_s2 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  uStack_40 = uStack_40 | (temp_v0 << 0x18);
  uStack_38 = (DAT_0063f744 << 8) | (temp_v1 >> 0x10);
  uStack_3c = (temp_v1 << 0x10) | (temp_v0 >> 8);
  if ((in_s3 & 0x7fffffff) == 0) {
    uStack_28 = (in_s3 >> 0x1f) << 0x17;
  }
  else {
    uStack_28 = *(unsigned int *)(((in_s3 & 0x7fffffff) >> 0x17) * 4 + 0x63f548) |
                ((in_s3 & 0x7fffff) >> 7) | ((in_s3 >> 0x1f) << 0x17);
  }
  if ((in_s4 & 0x7fffffff) == 0) {
    uStack_24 = (in_s4 >> 0x1f) << 0x17;
  }
  else {
    uStack_24 = ((in_s4 & 0x7fffff) >> 7) | ((in_s4 >> 0x1f) << 0x17) |
                *(unsigned int *)(((in_s4 & 0x7fffffff) >> 0x17) * 4 + 0x63f548);
  }
  uStack_28 = uStack_28 | (uStack_24 << 0x18);
  uStack_24 = uStack_24 >> 8;
  temp_v0 = *(unsigned int *)(((param_1 >> 0x10) & 0xff) * 4 + 0x63f948);
  uStack_34 = *(unsigned int *)((param_1 >> 0x18) * 4 + 0x63f948) | (temp_v0 << 0x18);
  temp_v1 = *(unsigned int *)(((param_1 >> 8) & 0xff) * 4 + 0x63f948);
  uStack_30 = (temp_v1 << 0x10) | (temp_v0 >> 8);
  uStack_2c = (*(int *)((param_1 & 0xff) * 4 + 0x63f948) << 8) | (temp_v1 >> 0x10);
  uStack_8 = param_1;
  FUN_001acf18(&uStack_40,&uStack_34,&uStack_28);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
