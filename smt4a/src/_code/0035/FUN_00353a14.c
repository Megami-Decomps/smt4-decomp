/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00353a14` (_code @ 0x353a14, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_00353a14(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(int *)(*(int *)(temp_v0 + 0xcc9c) + 4) != 0) {
    FUN_001aea28(DAT_0056fcc0);
  }
  if (*(int *)(*(int *)(temp_v0 + 0xccc0) + 4) != 0) {
    FUN_001aea28(DAT_0056fcc0);
  }
  if (*(int *)(*(int *)(temp_v0 + 0xcce4) + 4) == 0) {
    return;
  }
  FUN_001aea28(DAT_0056fcc0);
  return;
}
