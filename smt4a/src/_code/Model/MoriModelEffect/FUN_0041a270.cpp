/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041a270` (_code @ 0x41a270, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryAllocTracked(...);
int FUN_00178b04(...);
int FUN_00291038(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_00291038. */


void FUN_0041a270(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  int *piVar6;
  int temp_v3;
  
  piVar6 = (int *)(param_1 + 0x14);
  temp_v2 = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 0x14) = 0;
  temp_v1 = 0;
  if (0 < *(int *)(temp_v2 + 8)) {
    do {
      if ((*(unsigned int *)(*(int *)(*(int *)(temp_v2 + 0xc) + temp_v1 * 4) + 4) & 1) != 0) {
        *piVar6 = *piVar6 + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(temp_v2 + 8));
    if (*piVar6 != 0) {
      temp_v0 = 0x100;
      asdMemoryAllocTracked(0x100,0x100,0,*piVar6 << 2,1);
      *(unsigned int *)(param_1 + 0x18) = temp_v0;
      temp_v3 = 0;
      temp_v1 = 0;
      if (temp_v1 < *(int *)(temp_v2 + 8)) {
        do {
          puVar5 = *(unsigned int **)(*(int *)(temp_v2 + 0xc) + temp_v1 * 4);
          if ((puVar5[1] & 1) != 0) {
            puVar2 = (unsigned int *)0x10;
            FUN_00178b04(0x10,"c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelEffect.cpp",0xc9);
            if (puVar2 == (unsigned int *)0x0) {
              puVar2 = (unsigned int *)0x0;
            }
            else {
              puVar2[1] = 0;
              *puVar2 = 0xffffffff;
              puVar2[2] = 0;
              puVar2[3] = 0;
            }
            *puVar2 = *puVar5;
            puVar2[1] = puVar5[1];
            puVar2[2] = puVar5[2];
            temp_v0 = puVar5[3];
            FUN_00291038();
            puVar2[3] = temp_v0;
            *(unsigned int **)(*(int *)(param_1 + 0x18) + temp_v3 * 4) = puVar2;
            temp_v3 = temp_v3 + 1;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < *(int *)(temp_v2 + 8));
      }
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x18) = 0;
  return;
}

} /* extern "C" */
