/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f73a4` (_code @ 0x2f73a4, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00249bac. */
/* Supplied declaration required: FUN_0028df54. */
/* Supplied declaration required: FUN_00296f60. */
extern int *FUN_002a8a08(void);


unsigned int FUN_002f73a4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = FUN_00296f60();
  FUN_00296f60(1);
  FUN_00249bac();
  piVar2 = (int *)FUN_002a8a08();
  FUN_0028df54(*piVar2 <= temp_v0);
  return 1;
}
