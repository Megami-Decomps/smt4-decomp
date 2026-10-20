/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003306cc` (_code @ 0x3306cc, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);

extern int DAT_0057f20c; /* 0x57f20c */
extern unsigned char DAT_0057f208; /* 0x57f208 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


void FUN_003306cc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f20c;
  if (((*(unsigned int * *)((unsigned char *)&DAT_0057f208 + 0x8)) != (unsigned int *)0x0) && (temp_v1 = FUN_00163e40(*(*(unsigned int * *)((unsigned char *)&DAT_0057f208 + 0x8))), temp_v1 != 0)) {
    FUN_001631d0(*(*(unsigned int * *)((unsigned char *)&DAT_0057f208 + 0x8)),0);
  }
  *(unsigned int *)(temp_v0 + 8) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  return;
}

} /* extern "C" */
