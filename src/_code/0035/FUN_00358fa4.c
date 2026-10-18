/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358fa4` (_code @ 0x358fa4, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;


int FUN_00358fa4(unsigned int *param_1)

{
  int temp_v0;
  unsigned char *pbVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  pbVar2 = (unsigned char *)&temp_v3;
  temp_v6 = 0;
  temp_v3 = *param_1;
  (*(unsigned char *)((unsigned char *)&temp_v3 + 0)) = (unsigned char)*param_1;
  temp_v4 = param_1[1];
  temp_v5 = (unsigned int)*(unsigned char *)(param_1 + 2);
  temp_v0 = 0;
  while ((unsigned char)temp_v3 != 0) {
    temp_v1 = (unsigned int)*pbVar2;
    temp_v0 = temp_v0 * 0x10;
    if (temp_v1 - 0x30 < 10) {
      temp_v2 = temp_v1 - 0x30;
    }
    else {
      temp_v2 = temp_v1 - 0x57;
    }
    if (temp_v2 - 1U < 0xf) {
      temp_v0 = temp_v0 + temp_v2;
    }
    pbVar2 = pbVar2 + 1;
    (*(unsigned char *)((unsigned char *)&temp_v3 + 0)) = *pbVar2;
  }
  return temp_v0;
}
