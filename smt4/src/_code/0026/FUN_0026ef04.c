/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ef04` (_code @ 0x26ef04, 0x8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0026efd0; /* 0x26efd0 */
extern unsigned char LAB_0026efd8; /* 0x26efd8 */

/* Supplied declaration required: FUN_0024ee4c. */
/* Supplied declaration required: FUN_00296b3c. */
/* Supplied declaration required: FUN_002bcfc0. */
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0026ef04(unsigned int *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0 [68];
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  FUN_00296b3c(*param_1,2,0xffffffff,0,0,param_2 + 0xe);
  if (*(short *)(param_2 + 0x48) != 0) {
    FUN_002bd06c();
    FUN_002bcfc0();
  }
  else {
    FUN_0024ee4c(temp_v0,&LAB_0026efd0);
  }
  FUN_00296b3c(param_1[1],2,0xffffffff,0,0,temp_v0);
  if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
    rt_memcpy_w(temp_v0,&LAB_0026efd8,0x13);
    FUN_00296b3c(param_1[2],2,0xffffffff,0,0,temp_v0);
  }
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}
