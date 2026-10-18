/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111c08` (_code @ 0x111c08, 0x2f4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern romwright_code *DAT_0044e334; /* 0x44e334 */
extern int DAT_004652b4; /* 0x4652b4 */


void FUN_00111c08(void)

{
/* irregular: 2 unstructured edge(s); 1 goto(s); irregular input(s): in_r12 */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  unsigned int temp_v1;
  int *piVar5;
  int *piVar6;
  romwright_code *in_r12;
  unsigned char temp_v2;
  
  if (DAT_004652b4 == 0) {
    return;
  }
  piVar6 = *(int **)(DAT_004652b4 + 0x1008);
  do {
    piVar1 = piVar6;
    if (piVar1 == (int *)0x0) {
      temp_v1 = 0;
      do {
        temp_v0 = *(int *)(DAT_004652b4 + temp_v1 * 4 + 0x808);
        while (temp_v0 != 0) {
          temp_v0 = *(int *)(temp_v0 + 0x18);
          in_r12 = DAT_0044e334;
          if (DAT_0044e334 != (romwright_code *)0x0) {
            (*DAT_0044e334)(0x10000,0x100,0);
          }
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x200);
      temp_v1 = 0;
      do {
        piVar6 = (int *)*(int *)(DAT_004652b4 + temp_v1 * 4 + 8);
        while (piVar1 = piVar6, piVar1 != (int *)0x0) {
          piVar6 = (int *)*piVar1;
          if (piVar1[0xb] != 0) {
            in_r12 = DAT_0044e334;
          }
          if (piVar1[0xb] != 0 && in_r12 != (romwright_code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          if (piVar1[0x70] != 0) {
            in_r12 = DAT_0044e334;
          }
          if (piVar1[0x70] != 0 && in_r12 != (romwright_code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          if (piVar1[7] != 0) {
            in_r12 = DAT_0044e334;
          }
          if (piVar1[7] != 0 && in_r12 != (romwright_code *)0x0) {
            (*in_r12)(0x10000,0x100,0);
          }
          piVar5 = (int *)piVar1[6];
joined_r0x00111e64:
          piVar2 = piVar5;
          if (piVar2 != (int *)0x0) {
            piVar5 = (int *)piVar2[2];
            if (*piVar2 != 0) {
              if (DAT_0044e334 != (romwright_code *)0x0) {
                (*DAT_0044e334)(0x10000,0x100,0);
                if (DAT_0044e334 != (romwright_code *)0x0) {
                  (*DAT_0044e334)(0x10000,0x100,0,piVar2);
                }
              }
            }
            else if (DAT_0044e334 != (romwright_code *)0x0) {
              (*DAT_0044e334)(0x10000,0x100,0,piVar2);
            }
            goto joined_r0x00111e64;
          }
          in_r12 = DAT_0044e334;
          if (DAT_0044e334 != (romwright_code *)0x0) {
            (*DAT_0044e334)(0x10000,0x100,0,piVar1);
          }
        }
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 0x200) {
          DAT_004652b4 = 0;
          return;
        }
      } while( 1 );
    }
    piVar6 = (int *)piVar1[8];
    if (*piVar1 != 0) {
      in_r12 = DAT_0044e334;
    }
    if (*piVar1 != 0 && in_r12 != (romwright_code *)0x0) {
      (*in_r12)(0x10000,0x100,0);
    }
    if (piVar1[2] != 0) {
      in_r12 = DAT_0044e334;
    }
    if (piVar1[2] != 0 && in_r12 != (romwright_code *)0x0) {
      (*in_r12)(0x10000,0x100,0);
    }
    temp_v1 = 0;
    if (temp_v1 < (unsigned int)piVar1[5]) {
      do {
        temp_v2 = *(int *)(piVar1[4] + temp_v1 * 0xe8 + 0x30) != 0;
        if (temp_v2) {
          in_r12 = DAT_0044e334;
        }
        if (temp_v2 && in_r12 != (romwright_code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        temp_v2 = *(int *)(piVar1[4] + temp_v1 * 0xe8 + 0xe0) != 0;
        if (temp_v2) {
          in_r12 = DAT_0044e334;
        }
        if (temp_v2 && in_r12 != (romwright_code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        temp_v2 = *(int *)(piVar1[4] + temp_v1 * 0xe8 + 0x58) != 0;
        if (temp_v2) {
          in_r12 = DAT_0044e334;
        }
        if (temp_v2 && in_r12 != (romwright_code *)0x0) {
          (*in_r12)(0x10000,0x100,0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (unsigned int)piVar1[5]);
    }
    if (piVar1[4] != 0) {
      in_r12 = (romwright_code *)0x0;
      if (DAT_0044e334 == (romwright_code *)0x0) continue;
      (*DAT_0044e334)(0x10000,0x100,0);
    }
    in_r12 = DAT_0044e334;
    if (DAT_0044e334 != (romwright_code *)0x0) {
      (*DAT_0044e334)(0x10000,0x100,0,piVar1);
    }
  } while( 1 );
}
