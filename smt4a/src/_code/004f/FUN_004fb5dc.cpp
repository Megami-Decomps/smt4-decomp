/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fb5dc` (_code @ 0x4fb5dc, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f0e20(int, int);
int FUN_004102d8(int, int, int, unsigned int);

extern int DAT_005712f0; /* 0x5712f0 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004102d8. */


unsigned int
FUN_004fb5dc(short param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5,int param_6
            )

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 0x35;
  *(int *)(temp_v0 + 0x14) = param_4;
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  temp_v0 = FUN_0014aa78();
  FUN_003f0e20(temp_v0,(int)*(short *)(param_4 + 0x6a));
  if (((-1 < param_5) && (temp_v0 != 0)) && (-1 < param_6)) {
    temp_v1 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,(int)(short)param_5,0,param_2);
    *(unsigned char *)(temp_v1 + 4) = 7;
    *(int *)(temp_v1 + 0x18) = temp_v0;
    *(int *)(temp_v1 + 0x28) = param_6;
  }
  return 1;
}

} /* extern "C" */
