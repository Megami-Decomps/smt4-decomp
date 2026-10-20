/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119fce` (_code @ 0x119fce, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(int, unsigned int);
int FUN_002ea43c(int);
int FUN_002ec738(void);

typedef int romwright_code(...);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002ec738. */


void FUN_00119fce(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  (**(romwright_code **)(**(int **)(param_1 + 0x6c) + 8))();
  FUN_002ea43c(param_1);
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    FUN_002ec738();
  }
  return;
}

} /* extern "C" */
