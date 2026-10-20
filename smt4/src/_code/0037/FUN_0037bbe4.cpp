/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037bbe4` (_code @ 0x37bbe4, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned short DAT_004ef9a0; /* 0x4ef9a0 */
extern unsigned short DAT_004ef9a2; /* 0x4ef9a2 */


unsigned int
FUN_0037bbe4(unsigned int *param_1,unsigned short *param_2,unsigned short *param_3,int param_4,unsigned int param_5)

{
  unsigned short *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar4;
  unsigned short *puVar5;
  unsigned short *puVar6;
  
  (**(romwright_code **)(*(int *)*param_1 + 0x40))((int *)*param_1,param_5 * 4 * param_4 + param_1[3] + 8,0);
  temp_v0 = (**(romwright_code **)(*(int *)*param_1 + 0x24))((int *)*param_1,&DAT_004ef9a0,0x20);
  if (temp_v0 != 0x20) {
    temp_v1 = 0;
  }
  else {
    if (0 < (int)param_5) {
      puVar4 = (unsigned short *)0x4ef99c;
      puVar5 = param_2 + -1;
      puVar6 = param_3 + -1;
      if ((param_5 & 1) != 0) {
        *param_2 = DAT_004ef9a0;
        puVar4 = &DAT_004ef9a0;
        *param_3 = DAT_004ef9a2;
        puVar5 = param_2;
        puVar6 = param_3;
      }
      for (temp_v0 = (int)param_5 >> 1; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
        puVar5[1] = puVar4[2];
        puVar6[1] = puVar4[3];
        puVar5 = puVar5 + 2;
        *puVar5 = puVar4[4];
        puVar1 = puVar4 + 5;
        puVar4 = puVar4 + 4;
        puVar6 = puVar6 + 2;
        *puVar6 = *puVar1;
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
