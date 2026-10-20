/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f73e0` (_code @ 0x2f73e0, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00249a54(void);
int FUN_0028dcb0(int);
int FUN_00296cc8(...);

/* Supplied declaration required: FUN_00249a54. */
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_00296cc8. */
extern int *FUN_002a8764(void);


unsigned int FUN_002f73e0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  temp_v0 = FUN_00296cc8();
  FUN_00296cc8(1);
  FUN_00249a54();
  piVar2 = (int *)FUN_002a8764();
  FUN_0028dcb0(*piVar2 <= temp_v0);
  return 1;
}

} /* extern "C" */
