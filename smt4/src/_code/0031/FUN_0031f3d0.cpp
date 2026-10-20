/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f3d0` (_code @ 0x31f3d0, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_002b06c4(void);

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_00296cc8(void);
/* Supplied declaration required: FUN_002b06c4. */


unsigned int FUN_0031f3d0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  
  temp_v0 = FUN_00296cc8();
  FUN_002b06c4();
  FUN_0028dcb0((*(unsigned char *)(temp_v0 + 0xa5) & 3) >> 1);
  return 1;
}

} /* extern "C" */
