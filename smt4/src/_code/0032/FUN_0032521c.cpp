/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032521c` (_code @ 0x32521c, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002451ac(unsigned int, int);
int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_002451ac. */
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);
extern int FUN_00296cc8(void);
extern int FUN_002c0cc4(void);


unsigned int FUN_0032521c(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8();
  temp_v1 = FUN_002939f4();
  FUN_002451ac(temp_v1,4);
  temp_v2 = FUN_002c0cc4();
  FUN_0028dcb0(*(unsigned short *)(temp_v2 + temp_v0 * 4 + 2));
  return 1;
}

} /* extern "C" */
