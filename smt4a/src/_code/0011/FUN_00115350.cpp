/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00115350` (_code @ 0x115350, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010360e(unsigned int, unsigned int, unsigned int);

extern unsigned char DAT_0062d88c; /* 0x62d88c */

/* Supplied declaration required: FUN_0010360e. */
extern unsigned int FUN_00301454(unsigned char *);


void FUN_00115350(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_00301454(&DAT_0062d88c);
  FUN_0010360e(temp_v0,param_1,param_2);
  return;
}

} /* extern "C" */
