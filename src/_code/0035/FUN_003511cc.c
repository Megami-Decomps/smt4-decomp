/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003511cc` (_code @ 0x3511cc, 0x2bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

/* Supplied declaration required: FUN_001395ec. */
/* Supplied declaration required: FUN_0023a2e0. */
/* Supplied declaration required: FUN_0023a34c. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */
/* Supplied declaration required: FUN_0034fe3c. */
/* Supplied declaration required: FUN_0034ff9c. */
/* Supplied declaration required: FUN_003503d0. */
/* Supplied declaration required: FUN_00350634. */
/* Supplied declaration required: FUN_003508b4. */


void FUN_003511cc(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  
  temp_v5 = param_4;
  FUN_002c38a4();
  if ((*(int *)(param_1 + 0xc) != 7) && (*(int *)(param_1 + 0xc) != 6)) {
    if (*(int *)(param_1 + 0xc) == 0) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        FUN_00350634(param_1);
      }
      if (*(char *)(param_1 + 0x11) == '\x01') {
        FUN_003508b4(param_1);
      }
      if (*(int *)(param_1 + 0xc) == 7) {
        FUN_002c3820(param_1);
        return;
      }
    }
    if (*(int *)(param_1 + 0xc) == 8) {
      *(unsigned int *)(param_1 + 0xc) = 2;
    }
    if (*(int *)(param_1 + 0xc) == 2) {
      *(unsigned char *)(param_1 + 0x54c) = 0;
      *(unsigned int *)(param_1 + 0x130) = 0;
      *(unsigned int *)(param_1 + 0x134) = 0;
      *(unsigned int *)(param_1 + 0x140) = 0;
      *(unsigned int *)(param_1 + 0x144) = 0;
      *(unsigned int *)(param_1 + 0x150) = 0;
      *(unsigned int *)(param_1 + 0x154) = 0;
      *(unsigned int *)(param_1 + 0xc) = 1;
    }
    if (*(int *)(param_1 + 0xc) != 1) {
      if (((*(int *)(param_1 + 0xc) == 5) &&
          (*(int *)(param_1 + 0x154) == 0 && *(int *)(param_1 + 0x150) == 0)) &&
         (*(int *)(param_1 + 0x134) != 0 || *(int *)(param_1 + 0x130) != 0)) {
        temp_v2 = 0;
        do {
          temp_v1 = param_1 + temp_v2 * 4;
          if (-1 < *(int *)(temp_v1 + 0x46c)) {
            temp_v3 = *(int *)(temp_v1 + 0x474) - *(int *)(temp_v1 + 0x47c);
            if (0 < temp_v3) {
              do {
                temp_v0 = param_1 + temp_v2 * 0x80 + (*(int *)(temp_v1 + 0x47c) % 0x10) * 8;
                if (-1 < (int)(*(int *)(temp_v0 + 0x34) -
                              (*(int *)(param_1 + 0x134) +
                              (unsigned int)(*(unsigned int *)(temp_v0 + 0x30) < *(unsigned int *)(param_1 + 0x130))))) break;
                (**(romwright_code **)(**(int **)(param_1 + *(int *)(temp_v1 + 0x46c) * 4 + 0x2ec) + 0x1c))();
                temp_v3 = temp_v3 - 1;
                *(int *)(temp_v1 + 0x47c) = *(int *)(temp_v1 + 0x47c) + 1;
              } while (0 < temp_v3);
            }
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 2);
      }
      FUN_0023a34c(**(unsigned int **)(param_1 + 0x18),&temp_v5);
      if (temp_v5 != 0) {
        temp_v2 = 0;
        if (temp_v2 < *(int *)(param_1 + 0x484)) {
          do {
            if (*(int *)(param_1 + 0x548) != temp_v2) {
              FUN_0023a2e0(**(unsigned int **)(param_1 + 0x18),
                           *(unsigned int *)(param_1 + temp_v2 * 4 + 0x528));
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < *(int *)(param_1 + 0x484));
        }
        temp_v2 = 0;
        if (temp_v2 < *(int *)(param_1 + 0x2e8)) {
          do {
            temp_v1 = *(int *)(param_1 + 0x46c);
            temp_v4 = temp_v1 != temp_v2;
            if (temp_v4) {
              temp_v1 = *(int *)(param_1 + 0x470);
            }
            if (temp_v4 && temp_v1 != temp_v2) {
              FUN_0023a2e0(**(unsigned int **)(param_1 + 0x18),
                           *(unsigned int *)(param_1 + temp_v2 * 4 + 0x44c));
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < *(int *)(param_1 + 0x2e8));
        }
        temp_v2 = 0;
        if (temp_v2 < *(int *)(param_1 + 0x1c4)) {
          do {
            FUN_0023a2e0(**(unsigned int **)(param_1 + 0x18),
                         *(unsigned int *)(param_1 + temp_v2 * 4 + 0x2c8));
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < *(int *)(param_1 + 0x1c4));
        }
      }
      if (*(int *)(param_1 + 0xc) != 4) {
        FUN_0034fe3c(param_1);
      }
      FUN_0034ff9c(param_1);
      FUN_003503d0(param_1);
      FUN_002c3820(param_1);
      return;
    }
  }
  FUN_001395ec(param_1 + 0x20);
  FUN_002c3820(param_1);
  return;
}
