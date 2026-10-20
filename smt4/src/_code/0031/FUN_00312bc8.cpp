/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00312bc8` (_code @ 0x312bc8, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002451ac(unsigned int, int);
int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_002451ac. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);
extern int FUN_00296cc8(unsigned int);
extern int FUN_002c0cc4(void);


unsigned int FUN_00312bc8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_002939f4();
  FUN_002451ac(temp_v2,9);
  temp_v3 = FUN_002c0cc4();
  FUN_0028dcb0(*(unsigned short *)(temp_v3 + temp_v0 * 0xc + temp_v1 * 2));
  return 1;
}

} /* extern "C" */
