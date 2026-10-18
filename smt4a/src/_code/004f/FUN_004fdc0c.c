/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fdc0c` (_code @ 0x4fdc0c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_004102d8. */


void FUN_004fdc0c(short param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5
                 )

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
  if (param_5 != 0) {
    temp_v1 = *(int *)(DAT_005712f0 + 8);
    do {
      if (temp_v1 == 0) {
        *(unsigned int *)(temp_v0 + 0x28) = param_3;
        *(unsigned char *)(temp_v0 + 4) = 0x13;
        *(unsigned int *)(temp_v0 + 0x18) = param_4;
        return;
      }
      piVar1 = (int *)(temp_v1 + 0xc);
      temp_v2 = *(char *)(temp_v1 + 4) == '\x13';
      if (temp_v2) {
        temp_v1 = *(int *)(temp_v1 + 0x28);
      }
      temp_v3 = temp_v1 != 0;
      temp_v1 = *piVar1;
    } while ((!temp_v2 || temp_v3) || (*(short *)(temp_v0 + 2) < 0));
    *(unsigned short *)(temp_v0 + 2) = 0xffff;
  }
  *(unsigned int *)(temp_v0 + 0x28) = param_3;
  *(unsigned char *)(temp_v0 + 4) = 0x13;
  *(unsigned int *)(temp_v0 + 0x18) = param_4;
  return;
}
