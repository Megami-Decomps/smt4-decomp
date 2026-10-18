/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041a0fc` (_code @ 0x41a0fc, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00291038. */
/* Supplied declaration required: FUN_0041a080. */


void FUN_0041a0fc(int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned int unaff_r4;
  int temp_v3;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned int *puVar7;
  int *piVar8;
  int temp_v4;
  unsigned char temp_v5;
  
  *(unsigned int *)(param_1 + 0x10) = param_2;
  FUN_0041a080(param_1 + 0x1c);
  piVar8 = (int *)(param_1 + 0x1c);
  temp_v3 = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  temp_v2 = 0;
  if (0 < *(int *)(temp_v3 + 8)) {
    do {
      piVar1 = *(int **)(*(int *)(temp_v3 + 0xc) + temp_v2 * 4);
      temp_v5 = (piVar1[1] & 1U) == 0;
      if (temp_v5) {
        piVar1 = (int *)*piVar1;
      }
      if (temp_v5 && piVar1 == (int *)param_2) {
        *piVar8 = *piVar8 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(temp_v3 + 8));
    if (*piVar8 != 0) {
      temp_v0 = 0x100;
      FUN_00163060(0x100,0x100,0,*piVar8 << 2,1,unaff_r4,unaff_r5,unaff_r6);
      *(unsigned int *)(param_1 + 0x20) = temp_v0;
      temp_v4 = 0;
      temp_v2 = 0;
      if (temp_v2 < *(int *)(temp_v3 + 8)) {
        do {
          puVar7 = *(unsigned int **)(*(int *)(temp_v3 + 0xc) + temp_v2 * 4);
          temp_v1 = puVar7[1];
          temp_v5 = (temp_v1 & 1) == 0;
          if (temp_v5) {
            temp_v1 = *puVar7;
          }
          if (temp_v5 && temp_v1 == param_2) {
            puVar4 = (unsigned int *)0x10;
            FUN_00178b04(0x10,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelEffect.cpp",0xf0);
            if (puVar4 != (unsigned int *)0x0) {
              *puVar4 = 0xffffffff;
              puVar4[1] = 0;
              puVar4[2] = 0;
              puVar4[3] = 0;
            }
            *puVar4 = *puVar7;
            puVar4[1] = puVar7[1];
            puVar4[2] = puVar7[2];
            temp_v1 = puVar7[3];
            FUN_00291038();
            puVar4[3] = temp_v1;
            *(unsigned int **)(*(int *)(param_1 + 0x20) + temp_v4 * 4) = puVar4;
            temp_v4 = temp_v4 + 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < *(int *)(temp_v3 + 8));
      }
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x20) = 0;
  return;
}
