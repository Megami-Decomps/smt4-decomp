/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118c18` (_code @ 0x118c18, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_vec_dtor(unsigned char [48], unsigned char *, int, int);
int FUN_002f5020(unsigned char [48], unsigned char *, int, int);
int FUN_003050b6(...);

extern unsigned char LAB_00115c7d; /* 0x115c7d */
extern unsigned char LAB_00115cad; /* 0x115cad */

/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: FUN_002f5020. */
extern int FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003050b6. */


void FUN_00118c18(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [48];
  
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_003050b6(param_1,temp_v0);
  }
  else {
    FUN_002f5020(temp_v1,&LAB_00115c7d,0x2c,1);
    FUN_003050b6(param_1,temp_v1);
    rt_vec_dtor(temp_v1,&LAB_00115cad,0x2c,1);
  }
  return;
}

} /* extern "C" */
