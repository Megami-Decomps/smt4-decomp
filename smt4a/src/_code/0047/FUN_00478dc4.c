/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00478dc4` (_code @ 0x478dc4, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_001641b4. */
extern int FUN_002e1a18(unsigned int);
/* Supplied declaration required: FUN_00472514. */
/* Supplied declaration required: FUN_0047306c. */
/* Supplied declaration required: FUN_0047314c. */
/* Supplied declaration required: FUN_00477d10. */
/* Supplied declaration required: FUN_0047daf4. */


void FUN_00478dc4(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [20];
  
  FUN_0047daf4(temp_v3);
  temp_v1 = *(int *)(param_1 + 8);
  temp_v2 = param_1 + 0x11b0;
  if (temp_v1 == 0) {
    FUN_0047306c(temp_v2,0x67,0);
    FUN_00477d10(param_1,3,1);
    temp_v0 = 1;
    *(unsigned int *)(param_1 + 8) = temp_v0;
    return;
  }
  if (temp_v1 != 1) {
    if ((temp_v1 == 2) && (*(char *)(param_1 + 0x167a) != '\0')) {
      FUN_0047314c(temp_v2);
      *(unsigned int *)(param_1 + 4) = 0xf;
      *(unsigned int *)(param_1 + 8) = 0;
      if (*(int **)(param_1 + 0x208) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
        *(unsigned int *)(param_1 + 0x208) = 0;
      }
    }
  }
  else if ((*(char *)(param_1 + 0x167a) != '\0') && (temp_v1 = FUN_002e1a18(0x10), temp_v1 != 0)) {
    FUN_001641b4(0x100020e);
    FUN_00472514(temp_v2);
    FUN_00477d10(param_1,0xffffffff,0);
    temp_v0 = 2;
    *(unsigned int *)(param_1 + 8) = temp_v0;
    return;
  }
  return;
}
