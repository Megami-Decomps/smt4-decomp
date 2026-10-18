/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028f2ec` (_code @ 0x28f2ec, 0x16c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
} param_5_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

extern int FUN_002487e4(unsigned int, unsigned int, unsigned int);
extern int FUN_002a63f8(unsigned int);
/* Supplied declaration required: FUN_002aec80. */
/* Supplied declaration required: FUN_002b087c. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_003890c4. */


void FUN_0028f2ec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v5 = 0x17;
  temp_v3 = param_1;
  temp_v6 = param_1;
  temp_v7 = param_3;
  temp_v8 = param_4;
  if (param_5 != 0) {
    if ((int)param_1 < 0) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = param_1 & 0xffff;
      FUN_002b9364();
      if (temp_v3 == 0) {
        return;
      }
      temp_v0 = param_1;
      FUN_002b087c();
      if ((*(unsigned char *)(temp_v0 + 3) & 1) != 0) {
        temp_v3 = (unsigned int)*(short *)(temp_v0 + 0x88);
        temp_v5 = 0x23;
        if ((int)temp_v3 >= 0x81) {
          return;
        }
      }
      else {
        temp_v3 = *(unsigned short *)(temp_v3 + 0x90) + 1;
        if (temp_v3 >= 0x266) {
          return;
        }
      }
    }
  }
  temp_v4 = 0x17;
  if ((param_5 != 0) && (-1 < (int)param_1)) {
    temp_v0 = param_1;
    FUN_002b9364(temp_v0,param_1);
    if (temp_v0 == 0) {
      return;
    }
    temp_v1 = param_1;
    FUN_002b087c();
    if ((*(unsigned char *)(temp_v1 + 3) & 1) != 0) {
      temp_v4 = 0x23;
      if (*(short *)(temp_v1 + 0x88) >= 0x81) {
        return;
      }
    }
    else if (*(unsigned short *)(temp_v0 + 0x90) + 1 >= 0x266) {
      return;
    }
  }
  temp_v2 = FUN_002a63f8(temp_v4);
  if (temp_v2 != 0) {
    temp_v2 = FUN_002487e4(DAT_00433158,temp_v5,temp_v3);
    if (temp_v2 == 0) {
      FUN_002aec80(2,temp_v5,temp_v3 * 1000 + 1,param_2,param_3,param_4);
      return;
    }
    FUN_003890c4(DAT_00433158,param_1,2,temp_v3,param_2,param_3,param_4,temp_v6,param_2,temp_v7,temp_v8);
  }
  return;
}
