/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fb2f0` (_code @ 0x1fb2f0, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00288728(unsigned int);
int FUN_002a775c(void);

typedef int romwright_code(...);
extern int DAT_00447e88; /* 0x447e88 */

/* Supplied declaration required: FUN_00288728. */
/* Supplied declaration required: FUN_002a775c. */


void FUN_001fb2f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_00288728(*(unsigned int *)(DAT_00447e88 + 0x194));
  if (*(int **)(DAT_00447e88 + 0x194) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(DAT_00447e88 + 0x194) + 4))();
  }
  temp_v0 = DAT_00447e88;
  *(unsigned int *)(DAT_00447e88 + 0x194) = 0;
  if (*(int *)(temp_v0 + 0x164) != 0) {
    FUN_002a775c();
    *(unsigned int *)(DAT_00447e88 + 0x164) = 0;
  }
  if (*(int *)(DAT_00447e88 + 0x174) != 0) {
    FUN_002a775c();
    *(unsigned int *)(DAT_00447e88 + 0x174) = 0;
  }
  if (*(int *)(DAT_00447e88 + 0x178) != 0) {
    FUN_002a775c();
    *(unsigned int *)(DAT_00447e88 + 0x178) = 0;
  }
  if (*(int *)(DAT_00447e88 + 0x17c) != 0) {
    FUN_002a775c();
    *(unsigned int *)(DAT_00447e88 + 0x17c) = 0;
  }
  return;
}

} /* extern "C" */
