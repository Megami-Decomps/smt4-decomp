/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00358664` (_code @ 0x358664, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_004e62a8; /* 0x4e62a8 */

/* Supplied declaration required: FUN_00239148. */
/* Supplied declaration required: FUN_002393cc. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


int FUN_00358664(int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2 [2];
  
  FUN_002c38a4();
  temp_v1 = param_1[1];
  if (temp_v1 != 0) {
    temp_v2[0] = 0;
    if (param_2 != 1) {
      temp_v1 = (**(romwright_code **)(*param_1 + 0x24))(param_1,temp_v1,0xc,param_2,0);
      if (-1 < temp_v1) {
        (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0xc,8,temp_v2);
        FUN_002393cc(param_1,0,param_1 + 0x7f,param_1 + 0x87);
      }
    }
    else {
      temp_v1 = (**(romwright_code **)(*param_1 + 0x24))(param_1,temp_v1,0xd,1,0);
      if (-1 < temp_v1) {
        (**(romwright_code **)(*param_1 + 8))(param_1,param_1[1],0xd,8,temp_v2);
        FUN_002393cc(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
        temp_v0 = (**(romwright_code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0);
        if ((temp_v0 & 0x80000000) == 0) {
          FUN_00239148(param_1);
        }
      }
    }
    FUN_002c3820(&DAT_004e62a8);
    return temp_v1;
  }
  FUN_002c3820(&DAT_004e62a8);
  return -0x377ef416;
}
