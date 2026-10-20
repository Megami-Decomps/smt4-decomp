/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cd1d8` (_code @ 0x3cd1d8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003c0780(unsigned char *, int);
int rt_memcpy_w(...);

extern unsigned char DAT_00634bc0; /* 0x634bc0 */

extern unsigned int FUN_00300778(unsigned int, int);
/* Supplied declaration required: FUN_003c0780. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned char * FUN_003cd1d8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_00300778(*(unsigned int *)(param_1 + 0x14),
                       *(int *)(param_2 + 0xc) + *(int *)(param_1 + 0xc));
  rt_memcpy_w(&DAT_00634bc0,temp_v0,0x90);
  puVar2 = &DAT_00634bc0;
  FUN_003c0780(&DAT_00634bc0,1);
  rt_memcpy_w(temp_v0,&DAT_00634bc0,0x90);
  if (((unsigned int)puVar2 & 1) != 0) {
    puVar2 = (unsigned char *)((unsigned int)puVar2 | 0x800000);
  }
  return puVar2;
}

} /* extern "C" */
