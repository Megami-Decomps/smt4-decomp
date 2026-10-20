/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a34c` (_code @ 0x10a34c, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010a12c(int, unsigned int, int, int, unsigned int);
int FUN_0010a20c(int, unsigned int, int, int);
int FUN_0010a2ee(int);

extern unsigned int DAT_00594adc; /* 0x594adc */
extern unsigned int DAT_00594ae0; /* 0x594ae0 */

/* Supplied declaration required: FUN_0010a12c. */
/* Supplied declaration required: FUN_0010a20c. */
/* Supplied declaration required: FUN_0010a2ee. */


void FUN_0010a34c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (((*(char *)(param_1 + 0x10c) == '\0') &&
      (temp_v0 = param_1, FUN_0010a12c(param_1,DAT_00594adc,0x2729,0x278d,param_4), temp_v0 != 0)) &&
     (temp_v0 = param_1, FUN_0010a20c(param_1,DAT_00594ae0,0x2729,0x278d), temp_v0 != 0)) {
    FUN_0010a2ee(param_1);
  }
  return;
}

} /* extern "C" */
