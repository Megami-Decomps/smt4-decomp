/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fa1c8` (_code @ 0x3fa1c8, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int *FUN_00111800(int);
/* Supplied declaration required: FUN_002e9afe. */
extern int FUN_002f4e86(int);
extern int FUN_00432acc(void);
/* Supplied declaration required: FUN_00442218. */


unsigned int FUN_003fa1c8(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  
  piVar4 = &temp_v2;
  temp_v2 = param_4;
  temp_v0 = FUN_00432acc();
  if (temp_v0 == 0) {
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned char *)(param_1 + 0xc) = 1;
    *(unsigned char *)(param_1 + 0xd) = 1;
    *(unsigned char *)(param_1 + 0xe) = 1;
    *(unsigned int *)(param_1 + 0x10) = 9;
    return 1;
  }
  if ((*(int **)(param_1 + 0x40) != (int *)0x0) &&
     (temp_v0 = (**(romwright_code **)(**(int **)(param_1 + 0x40) + 0x10))(), temp_v0 != 0)) {
    temp_v1 = (**(romwright_code **)(**(int **)(param_1 + 0x40) + 0xc))();
    FUN_002e9afe(param_1 + 0x1c,temp_v1);
    temp_v0 = FUN_002f4e86(param_1 + 0x1c);
    if (temp_v0 != 0) {
      temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x34) + 0x78);
      *(unsigned int *)(param_1 + 4) = 7;
      *(unsigned int *)(param_1 + 0x38) = temp_v1;
    }
    else {
      piVar3 = (int *)(**(romwright_code **)(**(int **)(param_1 + 0x40) + 0x18))();
      temp_v2 = *piVar3;
      piVar3 = (int *)(**(romwright_code **)(**(int **)(param_1 + 0x40) + 0x1c))();
      if (piVar3 == (int *)0x0) {
        if (temp_v2 < 0) {
          FUN_00442218();
          piVar3 = piVar4;
        }
        else {
          piVar3 = (int *)FUN_00111800(param_1 + 0x1c);
        }
      }
      *(int **)(param_1 + 0x28) = piVar3;
      *(unsigned char *)(param_1 + 0xc) = 1;
      *(unsigned char *)(param_1 + 0xd) = 1;
      *(unsigned char *)(param_1 + 0xe) = 1;
      *(unsigned int *)(param_1 + 0x10) = 9;
    }
    return 1;
  }
  return 0;
}
