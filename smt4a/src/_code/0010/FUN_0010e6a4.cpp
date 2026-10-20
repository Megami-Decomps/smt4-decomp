/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010e6a4` (_code @ 0x10e6a4, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e26(void);
int FUN_002e7232(unsigned int);
int FUN_002f4ab0(int, unsigned int);
int FUN_002f8e58(unsigned int, unsigned int);

typedef int romwright_code(...);
extern signed char DAT_0059496a; /* 0x59496a */

/* Supplied declaration required: FUN_002e6e26. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: FUN_002f4ab0. */
/* Supplied declaration required: FUN_002f8e58. */


unsigned int FUN_0010e6a4(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *(unsigned char *)(param_1 + 0x1c8) = 1;
  temp_v0 = *(int *)(param_1 + 0x14c);
  if ((temp_v0 != 0) && (*(char *)(temp_v0 + 0x1c) != '\0')) {
    FUN_002f4ab0(temp_v0,0xffffffff);
    if (*(int **)(param_1 + 0x14c) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x14c) + 4))();
    }
    *(unsigned int *)(param_1 + 0x14c) = 0;
  }
  if ((DAT_0059496a != '\0') && (*(int **)(param_1 + 0x150) != (int *)0x0)) {
    (**(romwright_code **)(**(int **)(param_1 + 0x150) + 0xc))();
    if (*(int **)(param_1 + 0x150) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x150) + 4))();
    }
    *(unsigned int *)(param_1 + 0x150) = 0;
  }
  if ((*(int *)(param_1 + 0x154) != 0) && (temp_v0 = FUN_002e6e26(), temp_v0 != 0)) {
    temp_v1 = FUN_002e6e26();
    FUN_002f8e58(temp_v1,*(unsigned int *)(param_1 + 0x154));
    FUN_002e7232(*(unsigned int *)(param_1 + 0x154));
    *(unsigned int *)(param_1 + 0x154) = 0;
  }
  return 1;
}

} /* extern "C" */
