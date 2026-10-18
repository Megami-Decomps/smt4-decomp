/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c468` (_code @ 0x33c468, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0023e434. */
extern int FUN_002a8740(void);
extern int FUN_002b63ac(void);
/* Supplied declaration required: aeabi_idivmod. */


void FUN_0033c468(int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7 [2];
  
  if (*param_1 != 0) {
    if (*param_1 == 1) {
      temp_v2 = param_1[4];
      temp_v4 = param_1[5];
      param_1[4] = temp_v2 + param_1[2];
      param_1[5] = temp_v4 + param_1[3];
      param_1[0xb] = (temp_v2 + param_1[2]) >> 0xc;
      param_1[0xc] = (temp_v4 + param_1[3]) >> 0xc;
      if (param_1[1] >= 8) {
        temp_v6 = 0;
        temp_v7[0] = 0;
        FUN_0023e434(param_1,&temp_v6,temp_v7);
        param_1[0xb] = temp_v6;
        param_1[0xc] = temp_v7[0];
        *param_1 = 0;
      }
    }
  }
  else {
    temp_v2 = 0;
    if (param_1[0xd] < 0) {
      temp_v4 = FUN_002b63ac();
      temp_v0 = *(unsigned short *)(temp_v4 + 0x72);
    }
    else {
      temp_v4 = FUN_002a8740();
      temp_v0 = *(unsigned short *)(temp_v4 + 0x44);
    }
    temp_v1 = 1;
    temp_v4 = 0;
    temp_v5 = 5;
    do {
      if (((unsigned int)temp_v0 & (1 << (temp_v1 & 0xff))) != 0) {
        temp_v2 = temp_v2 + 1;
      }
      if (((unsigned int)temp_v0 & (1 << ((temp_v1 + 1) & 0xff))) != 0) {
        temp_v4 = temp_v4 + 1;
      }
      temp_v5 = temp_v5 - 1;
      temp_v1 = temp_v1 + 2;
    } while (temp_v5 != 0);
    if ((temp_v2 + temp_v4 >= 2) && (temp_v2 = param_1[6], param_1[6] = temp_v2 + 1, temp_v2 + 1 >= 0x18)) {
      aeabi_idivmod(param_1[7] + 1);
      param_1[7] = temp_v3;
      param_1[6] = 0;
    }
  }
  if (((char)param_1[0x12] != '\0') &&
     (temp_v2 = param_1[0x14], param_1[0x14] = temp_v2 + 1, temp_v2 + 1 >= 0xe)) {
    *(unsigned char *)(param_1 + 0x12) = 0;
  }
  param_1[1] = param_1[1] + 1;
  return;
}
