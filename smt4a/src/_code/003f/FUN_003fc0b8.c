/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fc0b8` (_code @ 0x3fc0b8, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00570280; /* 0x570280 */

extern int FUN_001a6508(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_003a4958. */
/* Supplied declaration required: FUN_003a496c. */


void FUN_003fc0b8(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((param_2 & 8) != 0) {
      temp_v0 = FUN_001a6508(DAT_00570280,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                           1);
      if (temp_v0 != 0) {
        FUN_001a6568(DAT_00570280,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                     0x20000);
        return;
      }
      FUN_003a4958(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
      return;
    }
    if ((param_2 & 0x40) != 0) {
      temp_v0 = FUN_001a6508(DAT_00570280,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                           1);
      if (temp_v0 != 0) {
        FUN_001a6568(DAT_00570280,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                     0x30000);
        return;
      }
      FUN_003a496c(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
      return;
    }
    if ((param_2 & 1) != 0) {
      temp_v0 = FUN_001a6508(DAT_00570280,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                           1);
      if (temp_v0 != 0) {
        FUN_001a6568(DAT_00570280,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                     0x10000);
        return;
      }
      FUN_001acf98(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
      return;
    }
  }
  return;
}
