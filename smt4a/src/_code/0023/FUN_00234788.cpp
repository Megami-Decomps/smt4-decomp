/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234788` (_code @ 0x234788, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

float FUN_004a00f4(int);

extern int *DAT_0058104c; /* 0x58104c */

extern int FUN_0014bef4(unsigned int);
extern int FUN_0015688c(void);
extern int FUN_0015fa74(unsigned int, unsigned int);
extern int FUN_0018719c(unsigned int);
extern int FUN_00213b5c(void);
extern int FUN_002d8b58(unsigned int, unsigned short);
/* Supplied declaration required: FUN_004a00f4. */


void FUN_00234788(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  float in_s0;
  
  if (*DAT_0058104c == 0) {
    temp_v1 = 0;
    temp_v0 = FUN_00213b5c();
    if (temp_v0 == 1) {
      temp_v1 = -0xc;
    }
    else if (temp_v0 == 2) {
      temp_v1 = 0xc;
    }
    else if (temp_v0 == 3) {
      temp_v1 = -0x14;
    }
    else if (temp_v0 == 4) {
      temp_v1 = 0x10;
    }
    temp_v0 = FUN_0015fa74(param_1,param_2);
    in_s0 = FUN_004a00f4(2);
    if ((((int)in_s0 < (int)((unsigned int)*(unsigned short *)(temp_v0 + 8) + temp_v1)) &&
        (temp_v0 = FUN_0015688c(), temp_v0 != 0)) &&
       ((temp_v1 = FUN_0018719c(0x1a2), temp_v1 == 0 || (temp_v1 = FUN_0014bef4(99), temp_v1 + 1 > 0x32))))
    {
      piVar1 = DAT_0058104c;
      *DAT_0058104c = 10;
      piVar1[1] = 0;
      piVar1[6] = (unsigned int)*(unsigned short *)(temp_v0 + 300);
      temp_v0 = FUN_002d8b58(3,*(unsigned short *)(temp_v0 + 300));
      DAT_0058104c[5] = temp_v0;
    }
  }
  return;
}

} /* extern "C" */
