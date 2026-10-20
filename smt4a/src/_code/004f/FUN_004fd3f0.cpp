/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fd3f0` (_code @ 0x4fd3f0, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_004102d8(int, int, int, unsigned int);
int FUN_0047effc(int, unsigned int, unsigned int);

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003e8430(void);
/* Supplied declaration required: FUN_004102d8. */
/* Supplied declaration required: FUN_0047effc. */


unsigned int FUN_004fd3f0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  FUN_0014aa78();
  temp_v0 = FUN_003e8430();
  temp_v1 = (int)(short)param_1;
  if (temp_v0 != 0) {
    FUN_0047effc(0,param_2,param_1);
    temp_v2 = 0;
    temp_v0 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,temp_v1,0,param_2);
    *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
    *(unsigned char *)(temp_v0 + 4) = 0x2b;
    *(unsigned int *)(temp_v0 + 0x14) = param_3;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x4c) = 0;
    temp_v0 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,temp_v1,0,param_2);
  }
  else {
    FUN_0047effc(0,param_2,param_1);
    temp_v2 = 0x10;
    temp_v0 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,temp_v1,0,param_2);
    *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
    *(unsigned char *)(temp_v0 + 4) = 0x2b;
    *(unsigned int *)(temp_v0 + 0x14) = param_3;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x4c) = 0;
    temp_v0 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,temp_v1,0,param_2);
  }
  *(unsigned char *)(temp_v0 + 5) = *(unsigned char *)(temp_v0 + 5) | 4;
  *(unsigned int *)(temp_v0 + 0x14) = param_3;
  *(unsigned char *)(temp_v0 + 4) = 0x2c;
  *(unsigned int *)(temp_v0 + 0x28) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x4c) = 0;
  return 1;
}

} /* extern "C" */
