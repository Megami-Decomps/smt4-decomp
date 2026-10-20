/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f78e0` (_code @ 0x2f78e0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(void);


unsigned int FUN_002f78e0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002939f4();
  temp_v0 = 1 << (temp_v0 & 0xff);
  FUN_0028dcb0((*(unsigned int *)(temp_v1 + 0x49d4) & ((int)temp_v0 >> 0x1f)) != 0 ||
               (*(unsigned int *)(temp_v1 + 0x49d0) & temp_v0) != 0);
  return 1;
}

} /* extern "C" */
