/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d76c` (_code @ 0x35d76c, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275bc8(int, unsigned int);
int FUN_00275f44(int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_005e2108; /* 0x5e2108 */
extern unsigned int DAT_005e210c; /* 0x5e210c */
extern int DAT_005e2110; /* 0x5e2110 */

/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
extern unsigned int FUN_00357bc8(int, unsigned int);


void FUN_0035d76c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (DAT_005e2110 == 0) {
    temp_v0 = DAT_005e2108;
    FUN_00275bc8(DAT_005e2108,DAT_005e210c);
    DAT_005e2110 = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
  }
  temp_v1 = FUN_00357bc8(DAT_005e2108,param_1);
  FUN_00275f44(DAT_005e2110,temp_v1);
  return;
}

} /* extern "C" */
