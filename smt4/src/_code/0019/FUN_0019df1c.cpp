/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019df1c` (_code @ 0x19df1c, 0x1a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nw_gfx_SceneNode_IsCircularReference(void);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


void FUN_0019df1c(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v3;
  unsigned int *puVar8;
  int temp_v4;
  int temp_v5;
  int *piVar11;
  int temp_v6;
  
  temp_v4 = 0;
  if (temp_v4 < *(int *)(param_1 + 0x28)) {
    do {
      temp_v5 = *(int *)(*(int *)(param_1 + 0x24) + temp_v4 * 4);
      temp_v1 = *(int *)(param_2 + 0xc);
      if (((temp_v1 == 0) ||
          ((temp_v1 != temp_v5 && (nw_gfx_SceneNode_IsCircularReference(), temp_v1 == 0)))) &&
         (*(int *)(temp_v5 + 0xc) == 0)) {
        temp_v3 = *(unsigned int *)(param_2 + 0x20);
        piVar11 = (int *)(param_2 + 0x14);
        temp_v2 = temp_v3 & 0x3fffffff;
        if ((*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) >> 2 >= (int)temp_v2) {
          if (temp_v2 != 0) {
            temp_v2 = temp_v2 << 1;
          }
          else {
            temp_v2 = 1;
          }
          if (temp_v2 > (temp_v3 & 0x3fffffff)) {
            temp_v0 = 0;
            if ((*piVar11 != 0) && ((temp_v3 & 0xc0000000) == 0x40000000)) {
              puVar4 = (unsigned int *)
                       (**(romwright_code **)(*(int *)*piVar11 + 8))((int *)*piVar11,temp_v2 << 2,0x20);
              puVar5 = *(unsigned int **)(param_2 + 0x18);
              puVar8 = *(unsigned int **)(param_2 + 0x1c);
              temp_v6 = 0;
              puVar6 = puVar4;
              if (puVar5 != puVar8) {
                do {
                  if (puVar6 != (unsigned int *)0x0) {
                    *puVar6 = *puVar5;
                  }
                  puVar5 = puVar5 + 1;
                  puVar6 = puVar6 + 1;
                } while (puVar5 != puVar8);
                temp_v6 = (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18)) >> 2;
              }
              if (*(int *)(param_2 + 0x18) != 0) {
                (**(romwright_code **)(*(int *)*piVar11 + 0xc))();
              }
              *(unsigned int **)(param_2 + 0x18) = puVar4;
              *(unsigned int **)(param_2 + 0x1c) = puVar4 + temp_v6;
              *(unsigned int *)(param_2 + 0x20) = (*(unsigned int *)(param_2 + 0x20) & 0xc0000000) | temp_v2;
              if (*(int **)(param_2 + 0x1c) != (int *)0x0) {
                **(int **)(param_2 + 0x1c) = temp_v5;
              }
              *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
              temp_v0 = 1;
            }
          }
          else {
            if (*(int **)(param_2 + 0x1c) != (int *)0x0) {
              **(int **)(param_2 + 0x1c) = temp_v5;
            }
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
            temp_v0 = 1;
          }
        }
        else {
          if (*(int **)(param_2 + 0x1c) != (int *)0x0) {
            **(int **)(param_2 + 0x1c) = temp_v5;
          }
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 4;
          temp_v0 = 1;
        }
        if (temp_v0) {
          *(unsigned int *)(temp_v5 + 0xc) = *(unsigned int *)(param_2 + 0x10);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(param_1 + 0x28));
  }
  return;
}

} /* extern "C" */
