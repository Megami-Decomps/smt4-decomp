/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030034c` (_code @ 0x30034c, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246454(int, unsigned int, int);
int FUN_00282924(int, unsigned int);

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00246454. */
extern unsigned int FUN_0027e928(unsigned int);
/* Supplied declaration required: FUN_00282924. */
extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_0030034c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_002939f4();
  temp_v2 = FUN_0027e928(DAT_0043427c);
  temp_v3 = temp_v1;
  FUN_00282924(temp_v1,temp_v0);
  FUN_00246454(0,temp_v2,temp_v3);
  *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x10000;
  return 1;
}

} /* extern "C" */
