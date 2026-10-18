/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002246d0` (_code @ 0x2246d0, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void FUN_002246d0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int *puVar7;
  unsigned int temp_v4;
  unsigned int *puVar9;
  int temp_v5;
  int temp_v6;
  int *piVar12;
  int temp_v7;
  
  temp_v5 = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    temp_v1 = 0;
    do {
      temp_v6 = *(int *)(*(int *)(param_1 + 0x24) + temp_v5 * 4);
      temp_v2 = *(int *)(param_2 + 0xc);
      if (((temp_v2 == 0) ||
          ((temp_v2 != temp_v6 && (nw_gfx_SceneNode_IsCircularReference(), temp_v2 == 0)))) &&
         (*(int *)(temp_v6 + 0xc) == 0)) {
        temp_v4 = *(unsigned int *)(param_2 + 0x20);
        piVar12 = (int *)(param_2 + 0x14);
        temp_v3 = temp_v4 & 0x3fffffff;
        if ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) >> 2 >= (int)temp_v3) {
          if (temp_v3 != 0) {
            temp_v3 = temp_v3 << 1;
          }
          else {
            temp_v3 = 1;
          }
          if (temp_v3 > (temp_v4 & 0x3fffffff)) {
            temp_v0 = temp_v1;
            if (((*piVar12 != 0) && ((temp_v4 & 0xc0000000) == 0x40000000)) &&
               (puVar4 = (unsigned int *)
                         (**(romwright_code **)(*(int *)*piVar12 + 8))((int *)*piVar12,temp_v3 << 2,0x20),
               puVar4 != (unsigned int *)0x0)) {
              puVar5 = *(unsigned int **)(param_2 + 0x18);
              puVar9 = *(unsigned int **)(param_2 + 0x1c);
              temp_v7 = 0;
              puVar7 = puVar4;
              if (puVar5 != puVar9) {
                do {
                  if (puVar7 != (unsigned int *)0x0) {
                    *puVar7 = *puVar5;
                  }
                  puVar5 = puVar5 + 1;
                  puVar7 = puVar7 + 1;
                } while (puVar5 != puVar9);
                temp_v7 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) >> 2;
              }
              if (*(int *)(param_2 + 0x18) != 0) {
                *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x18);
                (**(romwright_code **)(*(int *)*piVar12 + 0xc))();
              }
              *(unsigned int **)(param_2 + 0x18) = puVar4;
              *(unsigned int **)(param_2 + 0x1c) = puVar4 + temp_v7;
              *(unsigned int *)(param_2 + 0x20) = (*(unsigned int *)(param_2 + 0x20) & 0xc0000000) | temp_v3;
              if (*(int **)(param_2 + 0x1c) != (int *)0x0) {
                **(int **)(param_2 + 0x1c) = temp_v6;
              }
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
              temp_v0 = 1;
            }
          }
          else {
            if (*(int **)(param_2 + 0x1c) != (int *)0x0) {
              **(int **)(param_2 + 0x1c) = temp_v6;
            }
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
            temp_v0 = 1;
          }
        }
        else {
          if (*(int **)(param_2 + 0x1c) != (int *)0x0) {
            **(int **)(param_2 + 0x1c) = temp_v6;
          }
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
          temp_v0 = 1;
        }
        if (temp_v0) {
          *(unsigned int *)(temp_v6 + 0xc) = *(unsigned int *)(param_2 + 0x10);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(param_1 + 0x28));
  }
  return;
}
