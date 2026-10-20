/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a348` (_code @ 0x26a348, 0x40 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bee58(int, int);

extern unsigned char DAT_0043e188; /* 0x43e188 */

/* Supplied declaration required: FUN_002bee58. */
extern int FUN_002c09bc(void);


unsigned int FUN_0026a348(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0043e188 + 0x8));
  temp_v1 = FUN_002c09bc();
  if (*(int *)(temp_v1 + 0x1f454) != 0) {
    FUN_002bee58(temp_v0 + 0x754,7);
  }
  return 1;
}

} /* extern "C" */
