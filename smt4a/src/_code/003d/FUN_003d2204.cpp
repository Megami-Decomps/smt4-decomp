/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2204` (_code @ 0x3d2204, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int);
int FUN_0019c364(unsigned int);
int FUN_0020b490(int, int);
int FUN_00215bd0(void);
int FUN_002c8538(int);
int FUN_00321744(void);

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0020b490. */
/* Supplied declaration required: FUN_00215bd0. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_00321744. */


unsigned int FUN_003d2204(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_0019c364(*(unsigned int *)(param_1 + 0x43ac));
  FUN_0019a5a0(*(unsigned int *)(param_1 + 0x43b0));
  FUN_00321744();
  *(unsigned char *)(param_1 + 0x7f2c) = 0;
  temp_v0 = *(int *)(param_1 + 0x74c0) + 1;
  *(int *)(param_1 + 0x74c0) = temp_v0;
  if (*(int *)(param_1 + 0x74bc) == temp_v0) {
    FUN_0020b490(param_1,0x17);
    return 0;
  }
  FUN_002c8538(1);
  FUN_00215bd0();
  FUN_0020b490(param_1,10);
  return 1;
}

} /* extern "C" */
