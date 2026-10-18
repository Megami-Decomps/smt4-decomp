/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c1cfc` (_code @ 0x3c1cfc, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_002b9024. */


void FUN_003c1cfc(unsigned int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  FUN_002b9024();
  temp_v1 = *(unsigned short *)(param_2 + 0x14);
  temp_v0 = *(unsigned char *)(param_2 + 0x28);
  temp_v2 = *(unsigned int *)(param_2 + 0x16);
  temp_v4 = (int)(short)(unsigned short)*(unsigned char *)(param_2 + 3) * (int)(short)(unsigned short)*(unsigned char *)(param_2 + 0x18)
          + (unsigned int)temp_v1;
  temp_v3 = 9999;
  temp_v5 = temp_v3;
  if (temp_v4 < 10000) {
    temp_v5 = temp_v4 & 0xffff;
  }
  temp_v4 = (((unsigned int)*(unsigned char *)(param_2 + 3) * (unsigned int)*(unsigned char *)(param_2 + 0x19) +
           (unsigned int)*(unsigned short *)(param_2 + 0x16)) * 0x2d) / 100;
  if (temp_v4 < 10000) {
    temp_v3 = temp_v4;
  }
  *param_1 = *(unsigned int *)(param_2 + 0x24);
  param_1[1] = ((unsigned int)temp_v1 << 0x10) | (unsigned int)temp_v0;
  param_1[2] = temp_v2;
  param_1[3] = temp_v5 | (temp_v3 << 0x10);
  return;
}
