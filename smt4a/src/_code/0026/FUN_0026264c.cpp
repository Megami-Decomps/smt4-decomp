/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026264c` (_code @ 0x26264c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019cac4(void);

extern unsigned char DAT_0057f698; /* 0x57f698 */

/* Supplied declaration required: FUN_0019cac4. */


unsigned short FUN_0026264c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  if (param_1 >= 0x501) {
    return 0;
  }
  temp_v2 = param_1;
  FUN_0019cac4();
  temp_v1 = *(unsigned short *)(temp_v2 + 0x16) & 1;
  if ((*(unsigned short *)(temp_v2 + 0x16) & 1) != 0) {
    temp_v0 = *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + param_1 * 0x50 + 0x5f22);
    temp_v3 = temp_v0 & 2;
    if ((temp_v0 & 2) == 0) {
      while ((temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + temp_v3 * 2 + 0x80), temp_v4 == 0 ||
             ((*(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + temp_v4 * 0x50 + 0x5f22) & 2) == 0))) {
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 3) {
          return 0;
        }
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
