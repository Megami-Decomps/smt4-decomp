/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ea88` (_code @ 0x38ea88, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023392c(...);
int FUN_0027e9c0(int);
int FUN_0027ea28(int, int, int, int);
int FUN_0027eb30(int);
int FUN_002bc01c(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0023392c. */
extern int FUN_002762e0(void);
/* Supplied declaration required: FUN_0027e9c0. */
/* Supplied declaration required: FUN_0027ea28. */
/* Supplied declaration required: FUN_0027eb30. */
extern int FUN_0027ee9c(void);
/* Supplied declaration required: FUN_002bc01c. */


void FUN_0038ea88(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 8);
  temp_v2 = param_1 + 0x11b0;
  if (temp_v1 == 0) {
    FUN_0027ea28(temp_v2,100,1,0);
    FUN_0023392c(param_1,0,1);
    temp_v0 = 1;
    *(unsigned int *)(param_1 + 8) = temp_v0;
    return;
  }
  if (temp_v1 != 1) {
    if ((temp_v1 == 2) && (*(char *)(param_1 + 0x167a) != '\0')) {
      FUN_0027eb30(temp_v2);
      *(unsigned int *)(param_1 + 4) = 3;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
    }
  }
  else if (*(char *)(param_1 + 0x167a) != '\0') {
    temp_v1 = FUN_0027ee9c();
    if (temp_v1 != 0) {
      FUN_002bc01c(0x100016d);
      FUN_0023392c(param_1,0xffffffff,0);
      FUN_0027e9c0(temp_v2);
      temp_v0 = 2;
      *(unsigned int *)(param_1 + 8) = temp_v0;
      return;
    }
    temp_v1 = FUN_002762e0();
    if (temp_v1 != 0) {
      FUN_002bc01c(0x100016d);
      *(unsigned int *)(param_1 + 4) = 0xf;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
      FUN_0027e9c0(temp_v2);
      return;
    }
  }
  return;
}

} /* extern "C" */
