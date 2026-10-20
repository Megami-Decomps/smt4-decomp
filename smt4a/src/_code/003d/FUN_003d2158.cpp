/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2158` (_code @ 0x3d2158, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001742e4(int, unsigned int, int, int, unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_0063f500; /* 0x63f500 */
extern int DAT_0063f50c; /* 0x63f50c */

/* Supplied declaration required: FUN_001742e4. */
extern int jyoucyuGetTableEntry(unsigned int);


unsigned int FUN_003d2158(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 != 0) {
    return 0;
  }
  if ((int)param_1 >= 100000) {
    if ((param_1 - 100000 < 4) && (DAT_0063f50c != 0)) {
      temp_v0 = *(int *)(DAT_0063f50c + (param_1 - 100000) * 4 + 0x20);
      if (temp_v0 != 0) {
        FUN_001742e4(temp_v0,param_2,DAT_0063f50c,0,unaff_r4,in_lr);
      }
      return 1;
    }
    return 0;
  }
  if ((param_1 < 0x10) && (DAT_0063f500 != 0)) {
    temp_v0 = *(int *)(DAT_0063f500 + param_1 * 4 + 0x20);
    if (temp_v0 != 0) {
      FUN_001742e4(temp_v0,param_2,DAT_0063f500,0,unaff_r4,in_lr);
    }
    return 1;
  }
  return 0;
}

} /* extern "C" */
