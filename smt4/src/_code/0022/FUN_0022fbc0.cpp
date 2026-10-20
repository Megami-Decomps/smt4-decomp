/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fbc0` (_code @ 0x22fbc0, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230954(int, int);
int FUN_00233344(int, int);
int FUN_00233410(int);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00230954. */
/* Supplied declaration required: FUN_00233344. */
extern int FUN_002333a4(int, unsigned int);
extern unsigned int FUN_002333f0(int);
/* Supplied declaration required: FUN_00233410. */


unsigned int FUN_0022fbc0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x880;
  FUN_00230954(param_1 + 0x828,temp_v2);
  (**(romwright_code **)(**(int **)(param_1 + 0x85c) + 0xc))(*(int **)(param_1 + 0x85c),temp_v2);
  FUN_00233410(temp_v2);
  FUN_00233344(param_1 + 0x3a8,2);
  FUN_00233344(param_1 + 0x3a8,3);
  temp_v1 = 0;
  if (*(char *)(param_1 + 0x83a) != '\0') {
    temp_v0 = FUN_002333f0(param_1 + 0x828);
    temp_v2 = FUN_002333a4(temp_v2,temp_v0);
    if (temp_v2 != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
