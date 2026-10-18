/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ee84` (_code @ 0x15ee84, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Memory_Barrier (CALLOTHER). */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_0015ee84(int param_1,int param_2,unsigned short *param_3)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int *piVar1;
  unsigned short temp_v0;
  unsigned short temp_v1;
  short temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  short *psVar7;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int aiStack_30 [5];
  
  temp_v4 = *(int *)(*(int *)(param_1 + param_2 * 4 + 0x15dc) + 0x68);
  if ((param_3[1] == *(unsigned short *)(temp_v4 + 4)) &&
     (*(unsigned int *)(temp_v4 + 8) = (*(unsigned int *)(param_3 + 2) >> 0x10) | (*(unsigned int *)(param_3 + 2) << 0x10),
     (*param_3 & 0xff00) != 0)) {
    temp_v8 = temp_v4 + 0x70;
    temp_v0 = param_3[4];
    temp_v1 = param_3[5];
    FUN_002c38a4(temp_v8);
    temp_v7 = *(int *)(temp_v4 + 0x30);
    if (temp_v7 != 0) {
      psVar7 = (short *)(temp_v4 + 0x34);
      temp_v6 = 0;
      if (*(short *)(temp_v4 + 0x34) != 0) {
        while (*(unsigned short *)(temp_v7 + 0x12) != temp_v0) {
          temp_v2 = *psVar7;
          *psVar7 = temp_v2 - 1;
          aiStack_30[temp_v6] = temp_v7;
          temp_v6 = temp_v6 + 1;
          if ((temp_v0 == 0) && (*(unsigned short *)(temp_v7 + 0x12) == temp_v1 || temp_v1 == 0)) {
            temp_v3 = 1;
          }
          else {
            temp_v3 = 0;
          }
          temp_v7 = *(int *)(temp_v7 + 0x14);
          if ((temp_v3) || ((short)(temp_v2 - 1) == 0)) goto LAB_0015ef90;
        }
        *(unsigned char *)(temp_v7 + 0x11) = 2;
      }
LAB_0015ef90:
      if (temp_v0 == 0) {
        *psVar7 = 0;
      }
      coproc_moveto_Data_Memory_Barrier(0);
      temp_v5 = 0;
      if (temp_v5 < temp_v6) {
        do {
          piVar1 = aiStack_30 + temp_v5;
          temp_v5 = temp_v5 + 1;
          *(unsigned char *)(*piVar1 + 0x11) = 3;
        } while (temp_v5 < temp_v6);
      }
      *(int *)(temp_v4 + 0x30) = temp_v7;
      FUN_002c3820(temp_v8);
    }
    else {
      FUN_002c3820(temp_v8);
    }
  }
  *(unsigned char *)(temp_v4 + 0xc) = (*param_3 & 0xff) == 1;
  return;
}
