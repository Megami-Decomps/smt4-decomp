/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00261984` (_code @ 0x261984, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int);
int FUN_00184c00(int, int);

extern int DAT_0057f574; /* 0x57f574 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_00261984(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f574;
  temp_v1 = DAT_0057f574 + 0x54;
  *(unsigned int *)(DAT_0057f574 + 8) = 1;
  FUN_00184758(temp_v1,0);
  FUN_00184c00(temp_v0 + 0x54,0);
  *(unsigned char *)(temp_v0 + 0x33) = 1;
  *(unsigned char *)(temp_v0 + 0x30) = 1;
  *(unsigned int *)(temp_v0 + 0x20) = 3;
  *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  *(unsigned char *)(temp_v0 + 0x32d) = 0;
  return;
}

} /* extern "C" */
