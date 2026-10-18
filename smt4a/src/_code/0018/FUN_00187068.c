/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187068` (_code @ 0x187068, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0019d4a4; /* 0x19d4a4 */

/* Supplied declaration required: FUN_0010063a. */
extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
extern int FUN_001ab888(void);


int FUN_00187068(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3 [2];
  unsigned int temp_v4 [35];
  
  if (param_1 < 0xc) {
    temp_v2 = 0;
    do {
      if ((temp_v2 & 0xffff) < 0xc) {
        temp_v0 = FUN_001ab888();
        temp_v0 = temp_v0 + (temp_v2 & 0xffff) * 0x134;
        if ((temp_v0 != -0x1ddc) && (*(short *)(temp_v0 + 0x1f08) != 0)) {
          temp_v3[temp_v2 * 3] = temp_v2;
          *(unsigned short *)(temp_v4 + temp_v2 * 3) = *(unsigned short *)(temp_v0 + 0x1f08);
          temp_v1 = FUN_0019acdc(*(unsigned short *)(temp_v0 + 0x1f08),0);
          temp_v4[temp_v2 * 3 - 1] = temp_v1;
        }
        else {
          temp_v3[temp_v2 * 3] = temp_v2;
          *(unsigned short *)(temp_v4 + temp_v2 * 3) = 0;
          temp_v4[temp_v2 * 3 - 1] = 99;
        }
      }
      else {
        temp_v3[temp_v2 * 3] = temp_v2;
        *(unsigned short *)(temp_v4 + temp_v2 * 3) = 0;
        temp_v4[temp_v2 * 3 - 1] = 99;
      }
      temp_v2 = temp_v2 + 1;
    } while ((int)temp_v2 < 0xc);
    FUN_0010063a(temp_v3,0xc,0xc,&LAB_0019d4a4);
    temp_v2 = temp_v3[param_1 * 3];
    if ((temp_v2 & 0xffff) < 0xc) {
      temp_v0 = FUN_001ab888();
      return temp_v0 + (temp_v2 & 0xffff) * 0x134 + 0x1ddc;
    }
  }
  return 0;
}
