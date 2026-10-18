/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4414` (_code @ 0x2b4414, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_2_0_DEFINED
#define romwright_subpiece_4_2_0(value, offset) ((unsigned short)(unsigned int)(value))
#endif


/* WARNING: Control flow encountered bad instruction data */

unsigned int FUN_002b4414(unsigned int *param_1,unsigned int *param_2,unsigned short *param_3)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if ((((unsigned int)param_1 | (unsigned int)param_2) & 3) == 0) {
    while ((unsigned short *)0x3 < param_3) {
      temp_v6 = *param_1;
      temp_v7 = *param_2;
      param_3 = param_3 + -2;
      temp_v0 = UnsignedSaturate('\x01' - (char)temp_v6,0x10);
      temp_v1 = UnsignedSaturate('\x01' - (char)(temp_v6 >> 8),0x10);
      temp_v2 = UnsignedSaturate('\x01' - (char)(temp_v6 >> 0x10),0x10);
      temp_v3 = UnsignedSaturate('\x01' - (char)(temp_v6 >> 0x18),0x10);
      if ((((temp_v3 & 0xff) != 0 || temp_v2 != 0) || temp_v1 != 0) || temp_v0 != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (temp_v6 != temp_v7) {
        if (((temp_v7 << 0x18) | (((temp_v7 >> 8) & 0xff) << 0x10) | (((temp_v7 >> 0x10) & 0xff) << 8) |
            (temp_v7 >> 0x18)) <
            ((temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) | (((temp_v6 >> 0x10) & 0xff) << 8) |
            (temp_v6 >> 0x18))) {
          temp_v5 = 1;
        }
        else {
          temp_v5 = 0xffffffff;
        }
        return temp_v5;
      }
    }
  }
  temp_v4 = romwright_subpiece_4_2_0(param_1,0);
  if (param_3 == (unsigned short *)0x0) {
    temp_v4 = 0;
  }
  *param_3 = temp_v4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
