/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004aa020` (_code @ 0x4aa020, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ccde8(int, int, int);

extern int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_002cccf8(void);
/* Supplied declaration required: FUN_002ccde8. */


int FUN_004aa020(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v0 = DAT_0057a9c8;
  puVar5 = (unsigned int *)(DAT_0057a9c8 + 0x74a0);
  if (*puVar5 == 0xf) {
    temp_v1 = 0;
  }
  else {
    temp_v2 = DAT_0057a9c8 + 0x28c4;
    temp_v1 = FUN_002cccf8();
    if (temp_v1 != 0) {
      FUN_002ccde8(temp_v2,temp_v0 + 0x74b6,temp_v0 + 0x74b8);
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x74b6);
      if (temp_v3 != 0xe) {
        temp_v3 = 0;
      }
      *puVar5 = temp_v3;
    }
  }
  return temp_v1;
}

} /* extern "C" */
