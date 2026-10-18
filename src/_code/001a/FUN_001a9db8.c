/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9db8` (_code @ 0x1a9db8, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int DAT_00464fac; /* 0x464fac */

/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4360. */
extern unsigned int FUN_00357ac8(void);


unsigned char FUN_001a9db8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_00464fac != 0) {
    FUN_002b2520(*(unsigned int *)(DAT_00464fac + 0xc));
    if (*(int **)(DAT_00464fac + 0x18) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(DAT_00464fac + 0x18) + 4))();
    }
    FUN_002c4360(DAT_00464fac);
    DAT_00464fac = 0;
  }
  temp_v0 = FUN_00357ac8();
  return (temp_v0 & 0x80000000) == 0;
}
