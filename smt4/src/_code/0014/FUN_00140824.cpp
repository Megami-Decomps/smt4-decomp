/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00140824` (_code @ 0x140824, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4e74(void);
int rt_vec_dtor(int, unsigned char *, int, int);

extern unsigned char LAB_0014851c; /* 0x14851c */

extern int FUN_0014dcac(unsigned int);
/* Supplied declaration required: FUN_002b4e74. */
/* Supplied declaration required: rt_vec_dtor. */


int FUN_00140824(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_002b4e74();
  temp_v0 = FUN_0014dcac(param_1);
  rt_vec_dtor(temp_v0 - 0x38,&LAB_0014851c,0xc,3);
  return temp_v0 - 0x38;
}

} /* extern "C" */
