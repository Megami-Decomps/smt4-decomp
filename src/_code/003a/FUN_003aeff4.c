/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aeff4` (_code @ 0x3aeff4, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_4_stack;

extern int DAT_00439ca8; /* 0x439ca8 */


void FUN_003aeff4(unsigned int param_1,unsigned char *param_2,unsigned int *param_3,unsigned int *param_4)

{
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = DAT_00439ca8;
  puVar2 = (unsigned int *)(DAT_00439ca8 + 0x7e28);
  *param_2 = *(unsigned char *)(DAT_00439ca8 + 0x7e49);
  temp_v1 = *(unsigned int *)(temp_v0 + 0x7e2c);
  *param_3 = *puVar2;
  param_3[1] = temp_v1;
  temp_v1 = *(unsigned int *)(temp_v0 + 0x7e34);
  *param_4 = *(unsigned int *)(temp_v0 + 0x7e30);
  param_4[1] = temp_v1;
  return;
}
