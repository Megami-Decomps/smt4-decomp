/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a55a8` (_code @ 0x2a55a8, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020fff4(unsigned int);
int FUN_00287098(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0020fff4. */
/* Supplied declaration required: FUN_00287098. */


void FUN_002a55a8(int param_1,int param_2)

{
/* irregular: irregular input(s): in_d8, in_lr, in_s0; 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int unaff_r4;
  int *piVar4;
  unsigned int unaff_r5;
  unsigned int unaff_r6;
  unsigned int in_lr;
  float in_s0;
  unsigned long long in_d8;
  
  FUN_0020fff4(*(unsigned int *)(param_1 + 8));
  FUN_00287098(*(unsigned int *)(param_1 + 8),param_2);
  temp_v0 = *(int *)(param_1 + 8);
  *(unsigned int *)(temp_v0 + 0x80) = 0x3f800000;
  temp_v1 = param_2;
  temp_v2 = temp_v0;
  if (-1 < param_2) {
    temp_v1 = *(int *)(temp_v0 + 0x68);
    temp_v2 = temp_v1;
  }
  if (((temp_v1 != 0 && (-1 < param_2 && -1 < temp_v2)) && (param_2 < temp_v2)) &&
     (temp_v1 = *(int *)(temp_v0 + 0x2c), *(int *)(temp_v1 + 0x150) != 0)) {
    temp_v2 = *(int *)(*(int *)(temp_v1 + 0x28) + 0x28);
    piVar4 = *(int **)(*(int *)(*(int *)(temp_v1 + 0x28) + 0x1c) + *(int *)(temp_v1 + 0x154) * temp_v2 * 4
                      );
    if (piVar4 != (int *)0x0) {
      (**(romwright_code **)(*piVar4 + 0x24))
                (piVar4,*(unsigned int *)(*(int *)(temp_v0 + 100) + param_2 * 4),
                 *(romwright_code **)(*piVar4 + 0x24),temp_v2,in_d8,unaff_r4,unaff_r5,unaff_r6,in_lr);
      *(int *)(temp_v0 + 0x6c) = param_2;
      if (in_s0 != 0.0f) {
        temp_v2 = piVar4[0x11];
        (*(romwright_code *)piVar4[0x13])(piVar4[0x14]);
        temp_v1 = piVar4[0xe];
        piVar4[0xe] = temp_v2;
        piVar4[0xf] = temp_v1;
        *(unsigned char *)(piVar4 + 0x16) = 1;
      }
    }
  }
  return;
}

} /* extern "C" */
