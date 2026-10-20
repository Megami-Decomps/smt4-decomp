/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035dfc0` (_code @ 0x35dfc0, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003c3f74(void);

extern int FUN_0026140c(void);
extern unsigned short *FUN_003b7348(unsigned int);
/* Supplied declaration required: FUN_003c3f74. */


void FUN_0035dfc0(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned char *pbVar5;
  unsigned int temp_v3;
  
  temp_v1 = param_1;
  FUN_003c3f74();
  temp_v3 = 0;
  if (temp_v1 != 0) {
    while ((puVar3 = (unsigned short *)FUN_003b7348(temp_v3 & 0xffff), puVar3 == (unsigned short *)0x0 ||
           (*puVar3 != param_1))) {
      temp_v3 = temp_v3 + 1;
      if (temp_v1 <= temp_v3) {
        return;
      }
    }
    temp_v2 = FUN_0026140c();
    pbVar5 = (unsigned char *)(temp_v2 + ((int)(temp_v3 + ((unsigned int)((int)temp_v3 >> 0x1f) >> 0x1d)) >> 3) + 0x39);
    temp_v0 = *pbVar5;
    temp_v1 = 1 << (((int)temp_v3 % 8) & 0xffU);
    if ((temp_v0 & temp_v1) == 0) {
      *pbVar5 = temp_v0 | (unsigned char)temp_v1;
    }
  }
  return;
}

} /* extern "C" */
