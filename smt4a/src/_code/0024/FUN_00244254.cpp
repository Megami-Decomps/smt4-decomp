/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00244254` (_code @ 0x244254, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aea28(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058069c; /* 0x58069c */

/* Supplied declaration required: FUN_001aea28. */


void FUN_00244254(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(DAT_0058069c + 0xc);
  if (temp_v0 != 0) {
    param_2 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 != 0 && param_2 != 0) {
    FUN_001aea28(DAT_0056fcc0,param_2);
  }
  temp_v0 = *(int *)(DAT_0058069c + 0x10);
  if (temp_v0 != 0) {
    param_2 = *(int *)(temp_v0 + 4);
  }
  if (temp_v0 == 0 || param_2 == 0) {
    return;
  }
  FUN_001aea28(DAT_0056fcc0,param_2);
  return;
}

} /* extern "C" */
