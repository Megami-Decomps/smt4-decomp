/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229a3c` (_code @ 0x229a3c, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_0022699c. */


void FUN_00229a3c(short param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  
  temp_v1 = DAT_00434290;
  FUN_0022699c(DAT_00434290,(int)param_1,0,param_2);
  if (param_5 != 0) {
    temp_v0 = *(int *)(DAT_00434290 + 8);
    do {
      if (temp_v0 == 0) {
        *(unsigned int *)(temp_v1 + 0x28) = param_3;
        *(unsigned char *)(temp_v1 + 4) = 0xe;
        *(int *)(temp_v1 + 0x4c) = param_4;
        return;
      }
      temp_v2 = (unsigned int)*(unsigned char *)(temp_v0 + 4);
      piVar1 = (int *)(temp_v0 + 0xc);
      temp_v3 = temp_v2 == 0xe;
      if (temp_v3) {
        temp_v2 = *(unsigned int *)(temp_v0 + 0x28);
      }
      temp_v4 = temp_v3 && temp_v2 == 0;
      if (temp_v3 && temp_v2 == 0) {
        temp_v4 = *(int *)(temp_v0 + 0x4c) == param_4;
      }
      temp_v0 = *piVar1;
    } while ((!temp_v4) || (*(short *)(temp_v1 + 2) < 0));
    *(unsigned short *)(temp_v1 + 2) = 0xffff;
  }
  *(unsigned int *)(temp_v1 + 0x28) = param_3;
  *(unsigned char *)(temp_v1 + 4) = 0xe;
  *(int *)(temp_v1 + 0x4c) = param_4;
  return;
}

} /* extern "C" */
