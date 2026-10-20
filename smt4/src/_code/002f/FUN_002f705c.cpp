/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f705c` (_code @ 0x2f705c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);
int FUN_002939f4(void);

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_00296cc8(void);
extern int aeabi_idivmod(int, int);


unsigned int FUN_002f705c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  FUN_002939f4();
  temp_v1 = FUN_002499b4();
  if ((temp_v1 != 0) &&
     (temp_v1 = aeabi_idivmod(*(short *)(temp_v1 + 0x1b4) * 100,(int)*(short *)(temp_v1 + 0x1b6)),
     temp_v1 <= temp_v0)) {
    FUN_0028dcb0(1);
    return 1;
  }
  FUN_0028dcb0(0);
  return 1;
}

} /* extern "C" */
