/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011888c` (_code @ 0x11888c, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_vec_dtor(unsigned char [32], unsigned char *, int, int);
int __aeabi_vec_ctor_nocookie_nodtor(unsigned char [32], unsigned char *, int, int);
int FUN_00304dfc(...);

extern unsigned char LAB_00115cb5; /* 0x115cb5 */
extern unsigned char LAB_00432cf8; /* 0x432cf8 */

/* Supplied declaration required: rt_vec_dtor. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
extern int FUN_00304d10(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00304dfc. */


void FUN_0011888c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [32];
  
  temp_v0 = FUN_00304d10(param_2,0);
  if (temp_v0 != 0) {
    FUN_00304dfc(param_1,temp_v0);
  }
  else {
    __aeabi_vec_ctor_nocookie_nodtor(temp_v1,&LAB_00115cb5,0x1c,1);
    FUN_00304dfc(param_1,temp_v1);
    rt_vec_dtor(temp_v1,&LAB_00432cf8,0x1c,1);
  }
  return;
}

} /* extern "C" */
