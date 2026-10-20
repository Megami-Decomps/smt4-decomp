/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fdb18` (_code @ 0x4fdb18, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(int, int);
int FUN_004102d8(int, int, int, unsigned int);

extern int DAT_005712f0; /* 0x5712f0 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004102d8. */


unsigned int FUN_004fdb18(short param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = (int)(short)(param_1 + 1);
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,temp_v1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x1b;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x4c) = param_4;
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,temp_v1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 9;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x28) = param_4;
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x26;
  *(int *)(temp_v0 + 0x14) = param_3;
  *(unsigned int *)(temp_v0 + 0x28) = 1;
  *(unsigned int *)(temp_v0 + 0x4c) = param_4;
  if (param_5 != 0) {
    temp_v0 = FUN_0014aa78();
    FUN_003f0e20(temp_v0,(int)*(short *)(param_3 + 0x6a));
    if ((*(unsigned short *)(temp_v0 + 0x274) & 0x10) != 0) {
      temp_v0 = DAT_005712f0;
      FUN_004102d8(DAT_005712f0,temp_v1,0,param_2);
      *(unsigned char *)(temp_v0 + 4) = 0x26;
      *(int *)(temp_v0 + 0x14) = param_3;
      *(unsigned int *)(temp_v0 + 0x28) = 0;
      *(unsigned int *)(temp_v0 + 0x4c) = 0x10;
    }
  }
  return 1;
}

} /* extern "C" */
