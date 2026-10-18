/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fd54` (_code @ 0x22fd54, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_00230ae8. */
/* Supplied declaration required: FUN_002334d8. */
extern int FUN_00233538(int, unsigned int);
extern unsigned int FUN_00233584(int);
/* Supplied declaration required: FUN_002335a4. */


unsigned int FUN_0022fd54(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x880;
  FUN_00230ae8(param_1 + 0x828,temp_v2);
  (**(romwright_code **)(**(int **)(param_1 + 0x85c) + 0xc))(*(int **)(param_1 + 0x85c),temp_v2);
  FUN_002335a4(temp_v2);
  FUN_002334d8(param_1 + 0x3a8,2);
  FUN_002334d8(param_1 + 0x3a8,3);
  temp_v1 = 0;
  if (*(char *)(param_1 + 0x83a) != '\0') {
    temp_v0 = FUN_00233584(param_1 + 0x828);
    temp_v2 = FUN_00233538(temp_v2,temp_v0);
    if (temp_v2 != 0) {
      temp_v1 = 1;
    }
  }
  return temp_v1;
}
