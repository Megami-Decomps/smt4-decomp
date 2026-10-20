/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001869ec` (_code @ 0x1869ec, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017cff0(unsigned int);
int FUN_0017d920(int, unsigned int *);
int FUN_0019eafc(void);

extern int DAT_005b3fec; /* 0x5b3fec */
extern unsigned int DAT_005b3ff8; /* 0x5b3ff8 */

/* Supplied declaration required: FUN_0017cff0. */
/* Supplied declaration required: FUN_0017d920. */
extern unsigned int FUN_001960f0(void);
/* Supplied declaration required: FUN_0019eafc. */


void FUN_001869ec(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0017d920(0x207,param_1 + 2);
  FUN_0017cff0((&DAT_005b3ff8)[DAT_005b3fec]);
  param_1[3] = 1;
  FUN_0019eafc();
  temp_v0 = FUN_001960f0();
  FUN_0019eafc();
  *param_1 = temp_v0;
  return;
}

} /* extern "C" */
