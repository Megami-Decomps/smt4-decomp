/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b61ec` (_code @ 0x3b61ec, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);

extern int DAT_0057f20c; /* 0x57f20c */
extern unsigned char DAT_0057f208; /* 0x57f208 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);


void FUN_003b61ec(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f20c;
  if (((*(unsigned int * *)((unsigned char *)&DAT_0057f208 + 0x8)) != (unsigned int *)0x0) && (temp_v1 = jobIsValid(*(*(unsigned int * *)((unsigned char *)&DAT_0057f208 + 0x8))), temp_v1 != 0)) {
    jobStop(*(*(unsigned int * *)((unsigned char *)&DAT_0057f208 + 0x8)),0);
  }
  *(unsigned int *)(temp_v0 + 8) = 3;
  *(unsigned int *)(temp_v0 + 0xc) = 1;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  return;
}

} /* extern "C" */
