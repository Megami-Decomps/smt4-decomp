/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001407a0` (_code @ 0x1407a0, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(int, unsigned char *, int, int);

extern unsigned char LAB_0014e648; /* 0x14e648 */
extern unsigned char DAT_00421af0; /* 0x421af0 */

extern unsigned int *_ZN9Obj421a98C1Ev(void);
extern int FUN_0014c888(int);
extern int FUN_0014c964(unsigned int *);
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_001407a0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)_ZN9Obj421a98C1Ev();
  *puVar1 = (unsigned int)&DAT_00421af0;
  temp_v0 = FUN_0014c964(puVar1 + 0x3d);
  temp_v0 = FUN_0014c888(temp_v0 + 0x1c5c);
  *(unsigned int *)(temp_v0 + 0xc30) = param_2;
  temp_v0 = temp_v0 + 0xc34;
  __aeabi_vec_ctor_nocookie_nodtor(temp_v0,&LAB_0014e648,0x10,4);
  *(unsigned char *)(temp_v0 + 0x246) = 0;
  *(unsigned int *)(temp_v0 + 0x248) = 0;
  *(unsigned int *)(temp_v0 + 0x24c) = 0;
  return;
}

} /* extern "C" */
