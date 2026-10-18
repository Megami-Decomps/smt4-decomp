/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00327d24` (_code @ 0x327d24, 0x68 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00255198. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_00338294. */
/* Supplied declaration required: FUN_003af2d0. */


unsigned int FUN_00327d24(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = FUN_00293c98();
  *(unsigned short *)(temp_v0 + 0x4968) = *(unsigned short *)(temp_v0 + 0x4970);
  *(unsigned short *)(temp_v0 + 0x496a) = *(unsigned short *)(temp_v0 + 0x4972);
  FUN_003af2d0(DAT_00439ca8);
  puVar2 = (unsigned int *)(temp_v0 + 0x44a0);
  if ((*puVar2 & 0x1000) != 0) {
    *puVar2 = *puVar2 & 0xffffefff;
    FUN_00255198(temp_v0);
  }
  FUN_00338294(temp_v0,1);
  return 1;
}
