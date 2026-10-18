/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328674` (_code @ 0x328674, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004d8b40; /* 0x4d8b40 */

extern unsigned int FUN_002468e0(unsigned int, int);
/* Supplied declaration required: FUN_00323a08. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned char * FUN_00328674(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_002468e0(*(unsigned int *)(param_1 + 0x14),
                       *(int *)(param_2 + 0xc) + *(int *)(param_1 + 0xc));
  rt_memcpy_w(&DAT_004d8b40,temp_v0,0x90);
  puVar2 = &DAT_004d8b40;
  FUN_00323a08(&DAT_004d8b40,1);
  rt_memcpy_w(temp_v0,&DAT_004d8b40,0x90);
  if (((unsigned int)puVar2 & 1) != 0) {
    puVar2 = (unsigned char *)((unsigned int)puVar2 | 0x800000);
  }
  return puVar2;
}
