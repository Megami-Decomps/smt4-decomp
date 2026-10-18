/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e3378` (_code @ 0x2e3378, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned short *FUN_00248620(unsigned int);
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_00323f5c. */


void FUN_002e3378(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned char *pbVar5;
  unsigned int temp_v3;
  
  temp_v1 = param_1;
  FUN_00323f5c();
  temp_v3 = 0;
  if (temp_v1 != 0) {
    while ((puVar3 = (unsigned short *)FUN_00248620(temp_v3 & 0xffff), puVar3 == (unsigned short *)0x0 ||
           (*puVar3 != param_1))) {
      temp_v3 = temp_v3 + 1;
      if (temp_v1 <= temp_v3) {
        return;
      }
    }
    temp_v2 = FUN_002a0d0c();
    pbVar5 = (unsigned char *)(temp_v2 + ((int)(temp_v3 + ((unsigned int)((int)temp_v3 >> 0x1f) >> 0x1d)) >> 3) + 0x35);
    temp_v0 = *pbVar5;
    temp_v1 = 1 << (((int)temp_v3 % 8) & 0xffU);
    if ((temp_v0 & temp_v1) == 0) {
      *pbVar5 = temp_v0 | (unsigned char)temp_v1;
    }
  }
  return;
}
