/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f8fa0` (_code @ 0x4f8fa0, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, unsigned int);

typedef int romwright_code(...);
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_004f8fa0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 0x10;
    if (*(int **)(temp_v1 + 0x968) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v1 + 0x968) + 4))();
      *(unsigned int *)(temp_v1 + 0x968) = 0;
    }
    if (*(int *)(temp_v1 + 0x960) != 0) {
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v1 + 0x960) + 4));
      if (*(int **)(temp_v1 + 0x960) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v1 + 0x960) + 4))();
        *(unsigned int *)(temp_v1 + 0x960) = 0;
      }
    }
    temp_v0 = temp_v0 + 1;
    *(unsigned int *)(temp_v1 + 0x96c) = 0;
  } while (temp_v0 < 0x6d);
  return;
}

} /* extern "C" */
