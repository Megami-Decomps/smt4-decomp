/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100d1c` (_code @ 0x100d1c, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int FUN_001010d4(char, int);
extern unsigned int *FUN_002c6840(void);


unsigned int FUN_00100d1c(char *param_1,unsigned int *param_2,int param_3)

{
  unsigned char temp_v0;
  unsigned char temp_v1;
  char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  char *pcVar7;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = 0;
  temp_v2 = *param_1;
  pcVar7 = param_1 + 1;
  temp_v1 = 0;
  if (temp_v2 != '0') {
    if (param_3 == 0) {
      param_3 = 10;
    }
  }
  else {
    temp_v2 = *pcVar7;
    temp_v0 = 1;
    pcVar7 = param_1 + 2;
    if ((temp_v2 != 'x') && (temp_v2 != 'X')) {
      if (param_3 == 0) {
        param_3 = 8;
      }
    }
    else if ((param_3 == 0) || (param_3 == 0x10)) {
      temp_v2 = *pcVar7;
      temp_v0 = 0;
      param_3 = 0x10;
      pcVar7 = param_1 + 3;
    }
  }
  temp_v5 = 0;
  temp_v6 = 0;
  while (temp_v4 = FUN_001010d4(temp_v2,param_3), -1 < temp_v4) {
    temp_v0 = 1;
    temp_v3 = param_3 * temp_v6 + temp_v4;
    temp_v6 = temp_v3 & 0xffff;
    temp_v5 = temp_v5 * param_3 + (temp_v3 >> 0x10);
    if (temp_v5 >= 0x10000) {
      temp_v1 = 1;
    }
    temp_v2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  }
  if (param_2 != (unsigned int *)0x0) {
    if (temp_v0) {
      param_1 = pcVar7 + -1;
    }
    *param_2 = (unsigned int)param_1;
  }
  if (temp_v1) {
    puVar6 = (unsigned int *)FUN_002c6840();
    *puVar6 = 2;
    temp_v6 = 0xffffffff;
  }
  else {
    temp_v6 = (temp_v5 << 0x10) | temp_v6;
  }
  return temp_v6;
}
