/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035004c` (_code @ 0x35004c, 0x160 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

/* Supplied declaration required: FUN_0023a50c. */
/* Supplied declaration required: FUN_0023a54c. */
/* Supplied declaration required: FUN_0023a620. */


void FUN_0035004c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int uStack_3c;
  int temp_v2 [2];
  int temp_v3;
  unsigned int uStack_2c;
  unsigned char temp_v4 [8];
  
  if (((0 < *(int *)(param_1 + 0x484)) && (-1 < *(int *)(param_1 + 0x548))) &&
     (FUN_0023a620(**(unsigned int **)(param_1 + 0x18),
                   *(unsigned int *)(param_1 + *(int *)(param_1 + 0x548) * 4 + 0x528),temp_v2),
     temp_v2[0] != 0)) {
    do {
      FUN_0023a54c(**(unsigned int **)(param_1 + 0x18),
                   *(unsigned int *)(param_1 + *(int *)(param_1 + 0x548) * 4 + 0x528),&temp_v1,
                   &uStack_3c,temp_v4,&temp_v3);
      if (*(int *)(param_1 + 0x134) == 0 && *(int *)(param_1 + 0x130) == 0) {
        *(unsigned int *)(param_1 + 0x130) = temp_v3;
        *(unsigned int *)(param_1 + 0x134) = uStack_2c;
      }
      if ((*(int *)(param_1 + *(int *)(param_1 + 0x548) * 0x10 + 0x4ac) != 2) &&
         (piVar1 = *(int **)(param_1 + *(int *)(param_1 + 0x548) * 4 + 0x488), piVar1 != (int *)0x0)
         ) {
        if (*(char *)(param_1 + 0x54c) == '\0') {
          (**(romwright_code **)(*piVar1 + 0x10))(piVar1,temp_v1,uStack_3c);
          *(unsigned char *)(param_1 + 0x54c) = 1;
        }
        piVar1 = *(int **)(param_1 + *(int *)(param_1 + 0x548) * 4 + 0x488);
        (**(romwright_code **)(*piVar1 + 0x14))(piVar1,&temp_v1,&uStack_3c);
      }
      temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x1c0) + 8))
                        (*(int **)(param_1 + 0x1c0),temp_v1,uStack_3c);
      if (temp_v0 == 0) {
        return;
      }
      *(unsigned char *)(param_1 + 0x54c) = 0;
      FUN_0023a50c(**(unsigned int **)(param_1 + 0x18),
                   *(unsigned int *)(param_1 + *(int *)(param_1 + 0x548) * 4 + 0x528));
      temp_v2[0] = temp_v2[0] - 1;
    } while (temp_v2[0] != 0);
  }
  return;
}
