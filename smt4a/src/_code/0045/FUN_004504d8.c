/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004504d8` (_code @ 0x4504d8, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern romwright_code *DAT_0058918c; /* 0x58918c */

/* Supplied declaration required: FUN_0017cf74. */
/* Supplied declaration required: FUN_001c4598. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_004504d8(unsigned int param_1,int *param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = param_2[2];
  temp_v0 = param_3 & 0xffff0000;
  if (temp_v3 == 0) {
    temp_v3 = (unsigned int)(param_2[1] * *param_2 * param_2[5]) >> 3;
  }
  temp_v1 = 0;
  if (temp_v0 != 0x2010000) {
    if ((int)temp_v0 < 0x2010000) {
      if (temp_v0 == 0x1010000) {
        temp_v1 = (*DAT_0058918c)(0x10000,0x101,param_1,temp_v3);
        if ((param_2[3] != 0) && (temp_v2 = (int)param_2 + param_2[3] + 0xc, temp_v2 != 0)) {
          nnnstdMemCpy(temp_v1,temp_v2,temp_v3);
          FUN_001c4598(temp_v1,temp_v3);
        }
        param_2[6] = temp_v1;
        param_2[7] = 0x10000;
      }
    }
    else if (temp_v0 == 0x2020000 || temp_v0 == 0x2030000) {
      temp_v1 = (*DAT_0058918c)(param_3 & 0x30000,0x101,param_1,temp_v3);
      piVar3 = param_2 + 3;
      temp_v4 = param_2[3] == 0;
      if (!temp_v4) {
        piVar3 = (int *)((int)piVar3 + param_2[3]);
        temp_v4 = piVar3 == (int *)0x0;
      }
      if (!temp_v4) {
        FUN_0017cf74(piVar3,temp_v1,temp_v3);
      }
      param_2[6] = temp_v1;
      param_2[7] = param_3 & 0x30000;
      return;
    }
    return;
  }
  temp_v2 = param_2[3];
  if (temp_v2 != 0) {
    temp_v1 = temp_v2 + (int)(param_2 + 3);
  }
  FUN_001c4598(temp_v1,temp_v3);
  return;
}
