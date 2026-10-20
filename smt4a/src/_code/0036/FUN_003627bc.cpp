/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003627bc` (_code @ 0x3627bc, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);
int FUN_002b2f08(void);
int FUN_0036bc10(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_00636e00; /* 0x636e00 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002b2f08. */
/* Supplied declaration required: FUN_0036bc10. */


void FUN_003627bc(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int *piVar5;
  int temp_v2;
  unsigned int temp_v3;
  int unaff_r8;
  int *piVar8;
  
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_002b2f08();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_0036bc10(1);
    piVar8 = *(int **)(param_1 + 0xa0);
    temp_v3 = 0;
    if (*(int *)(*(int *)(param_1 + 0x9c) + 8) != 0) {
      do {
        temp_v1 = *piVar8;
        temp_v0 = *(int *)(temp_v1 + 0xc);
        piVar2 = *(int **)(temp_v0 + 0x18);
        piVar5 = *(int **)(temp_v0 + 0x1c);
        while( 1 ) {
          if (piVar2 != piVar5) {
            unaff_r8 = *piVar2;
          }
          if (piVar2 == piVar5 || unaff_r8 == temp_v1) break;
          piVar2 = piVar2 + 1;
        }
        if (piVar2 != piVar5) {
          piVar3 = piVar2 + 1;
          temp_v2 = (int)piVar5 - (int)piVar3;
          unaff_r8 = temp_v2 >> 2;
          if (0 < unaff_r8) {
            unaff_r8 = temp_v2 * 0x20000000;
            piVar5 = piVar2;
            if (unaff_r8 < 0) {
              unaff_r8 = *piVar3;
              piVar3 = piVar2 + 2;
              if (unaff_r8 != temp_v1) {
                piVar5 = piVar2 + 1;
                *piVar2 = unaff_r8;
              }
            }
            piVar2 = piVar5;
            for (temp_v2 = temp_v2 >> 3; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
              piVar5 = piVar2;
              if (*piVar3 != temp_v1) {
                piVar5 = piVar2 + 1;
                *piVar2 = *piVar3;
              }
              unaff_r8 = piVar3[1];
              piVar3 = piVar3 + 2;
              piVar2 = piVar5;
              if (unaff_r8 != temp_v1) {
                piVar2 = piVar5 + 1;
                *piVar5 = unaff_r8;
              }
            }
          }
        }
        piVar5 = *(int **)(temp_v0 + 0x1c);
        *(int **)(temp_v0 + 0x1c) = piVar2;
        temp_v3 = temp_v3 + 1;
        if (piVar5 != piVar2) {
          *(unsigned int *)(temp_v1 + 0xc) = 0;
        }
        piVar8 = piVar8 + 7;
        DAT_00636e00 = DAT_00636e00 - 1;
      } while (temp_v3 < *(unsigned int *)(*(int *)(param_1 + 0x9c) + 8));
    }
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_0019a5a0();
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    *(unsigned int *)(param_1 + 0x54) = 0;
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
