/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00121c68` (_code @ 0x121c68, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f6c32(unsigned int, unsigned char *, int);

extern int DAT_00594a08; /* 0x594a08 */
extern unsigned char DAT_00594e7c; /* 0x594e7c */
extern unsigned char DAT_006302d0; /* 0x6302d0 */

/* Supplied declaration required: FUN_002f6c32. */


void FUN_00121c68(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  
  if (DAT_00594a08 != 0) {
    puVar1 = &DAT_006302d0;
    temp_v0 = DAT_00594a08;
  }
  else {
    puVar1 = &DAT_00594e7c;
    temp_v0 = 0x10;
  }
  FUN_002f6c32(*(unsigned int *)(param_1 + 800),puVar1,temp_v0);
  return;
}

} /* extern "C" */
