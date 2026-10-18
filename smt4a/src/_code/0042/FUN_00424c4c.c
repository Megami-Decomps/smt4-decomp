/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00424c4c` (_code @ 0x424c4c, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
} param_1_stack;

/* Supplied declaration required: FUN_00513ff0. */
/* Supplied declaration required: FUN_0051415c. */


void FUN_00424c4c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int temp_v4;
  unsigned int uStack_2c;
  
  FUN_00513ff0(**(unsigned int **)(param_1 + 0x18),&temp_v2);
  piVar4 = (int *)(param_1 + 0x484);
  puVar3 = (unsigned int *)(param_1 + 0x550);
  if (temp_v2 != 0) {
    temp_v1 = 0;
    do {
      FUN_0051415c(**(unsigned int **)(param_1 + 0x18),temp_v1,&temp_v3);
      if (temp_v3 != 0) {
        if (temp_v3 != 1) {
          if (temp_v3 != 2) {
            *(unsigned int *)(param_1 + 0xc) = 7;
            *puVar3 = *(unsigned int *)(param_1 + 0x550) | 0x40;
          }
          else {
            temp_v0 = *(int *)(param_1 + 0x1c4);
            if (temp_v0 != 8) {
              if (temp_v0 < 8) {
                temp_v0 = param_1 + temp_v0 * 8;
                *(unsigned int *)(temp_v0 + 0x288) = 2;
                *(unsigned int *)(temp_v0 + 0x28c) = uStack_4c;
                *(unsigned int *)(param_1 + *(int *)(param_1 + 0x1c4) * 4 + 0x2c8) = temp_v1;
              }
            }
            else {
              *(unsigned int *)(param_1 + 0xc) = 7;
              *puVar3 = *(unsigned int *)(param_1 + 0x550) | 0x20;
            }
            *(int *)(param_1 + 0x1c4) = *(int *)(param_1 + 0x1c4) + 1;
          }
        }
        else {
          temp_v0 = *(int *)(param_1 + 0x484);
          if (temp_v0 != 8) {
            if (temp_v0 < 8) {
              *(unsigned int *)(param_1 + temp_v0 * 4 + 0x488) = 0;
              temp_v0 = param_1 + *piVar4 * 0x10;
              *(unsigned int *)(temp_v0 + 0x4a8) = 1;
              *(unsigned int *)(temp_v0 + 0x4ac) = uStack_4c;
              *(unsigned int *)(temp_v0 + 0x4b0) = uStack_48;
              *(unsigned int *)(temp_v0 + 0x4b4) = uStack_44;
              *(unsigned int *)(param_1 + *piVar4 * 4 + 0x528) = temp_v1;
            }
          }
          else {
            *(unsigned int *)(param_1 + 0xc) = 7;
            *puVar3 = *(unsigned int *)(param_1 + 0x550) | 8;
          }
          *piVar4 = *(int *)(param_1 + 0x484) + 1;
        }
      }
      else {
        temp_v0 = *(int *)(param_1 + 0x2e8);
        if (temp_v0 != 8) {
          if (temp_v0 < 8) {
            *(unsigned int *)(param_1 + temp_v0 * 4 + 0x2ec) = 0;
            temp_v0 = param_1 + *(int *)(param_1 + 0x2e8) * 0x28;
            *(unsigned int *)(temp_v0 + 0x30c) = 0;
            *(unsigned int *)(temp_v0 + 0x310) = uStack_4c;
            *(unsigned int *)(temp_v0 + 0x314) = uStack_48;
            *(unsigned int *)(temp_v0 + 0x318) = uStack_44;
            *(unsigned int *)(temp_v0 + 0x31c) = uStack_40;
            *(unsigned int *)(temp_v0 + 800) = uStack_3c;
            *(unsigned int *)(temp_v0 + 0x324) = uStack_38;
            *(unsigned int *)(temp_v0 + 0x328) = uStack_34;
            *(unsigned int *)(temp_v0 + 0x32c) = temp_v4;
            *(unsigned int *)(temp_v0 + 0x330) = uStack_2c;
            *(unsigned int *)(param_1 + *(int *)(param_1 + 0x2e8) * 4 + 0x44c) = temp_v1;
          }
        }
        else {
          *(unsigned int *)(param_1 + 0xc) = 7;
          *puVar3 = *(unsigned int *)(param_1 + 0x550) | 2;
        }
        *(int *)(param_1 + 0x2e8) = *(int *)(param_1 + 0x2e8) + 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
    if (*(int *)(param_1 + 0x2e8) == 0) {
      *puVar3 = *(unsigned int *)(param_1 + 0x550) | 1;
    }
    if (*(int *)(param_1 + 0x484) == 0) {
      *puVar3 = *(unsigned int *)(param_1 + 0x550) | 4;
    }
    if (*(int *)(param_1 + 0x1c4) == 0) {
      *puVar3 = *(unsigned int *)(param_1 + 0x550) | 0x10;
    }
    *(unsigned char *)(param_1 + 0x11) = 1;
  }
  return;
}
