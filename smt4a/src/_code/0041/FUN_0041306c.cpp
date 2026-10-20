/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041306c` (_code @ 0x41306c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(int, unsigned char *, int);

extern unsigned char LAB_0045b824; /* 0x45b824 */

/* Supplied declaration required: FUN_002f5020. */
extern int FUN_00467040(void);


int FUN_0041306c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00467040();
  temp_v0 = temp_v0 + 0x20;
  FUN_002f5020(temp_v0,&LAB_0045b824,4);
  return temp_v0 - 0x20;
}

} /* extern "C" */
