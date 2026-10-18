/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002956c0` (_code @ 0x2956c0, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00252630. */
/* Supplied declaration required: FUN_00296a18. */
/* Supplied declaration required: FUN_0029ea28. */
/* Supplied declaration required: FUN_0029eb14. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_002956c0(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  
  FUN_002a755c(*(unsigned int *)(param_1 + 0x3574));
  FUN_002c4360(*(unsigned int *)(param_1 + 0x3578));
  FUN_00252630();
  *(unsigned char *)(param_1 + 0xd640) = 0;
  temp_v0 = *(int *)(param_1 + 0xcf78) + 1;
  *(int *)(param_1 + 0xcf78) = temp_v0;
  if (*(int *)(param_1 + 0xcf74) == temp_v0) {
    FUN_00296a18(param_1,0x14);
    return 0;
  }
  FUN_0029eb14(1);
  FUN_0029ea28();
  FUN_00296a18(param_1,9);
  return 1;
}
