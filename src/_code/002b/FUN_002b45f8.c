/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b45f8` (_code @ 0x2b45f8, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002b4670) overlaps instruction at (ram,0x002b466e)
    */

int FUN_002b45f8(unsigned int *param_1,unsigned int *param_2,short *param_3)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  short temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  if ((((unsigned int)param_1 | (unsigned int)param_2) & 3) == 0) {
    while ((short *)0x3 < param_3) {
      temp_v9 = *param_1;
      temp_v10 = *param_2;
      param_3 = param_3 + -2;
      temp_v0 = UnsignedSaturate('\x01' - (char)temp_v9,0x10);
      temp_v1 = UnsignedSaturate('\x01' - (char)(temp_v9 >> 8),0x10);
      temp_v2 = UnsignedSaturate('\x01' - (char)(temp_v9 >> 0x10),0x10);
      temp_v3 = UnsignedSaturate('\x01' - (char)(temp_v9 >> 0x18),0x10);
      if ((((temp_v3 & 0xff) != 0 || temp_v2 != 0) || temp_v1 != 0) || temp_v0 != '\0') {
        temp_v7 = (temp_v9 & 0xff) - (temp_v10 & 0xff);
        if (temp_v7 != 0 || temp_v0 != '\0') {
          return temp_v7;
        }
        temp_v7 = (temp_v9 & 0xffff) - (temp_v10 & 0xffff);
        if (temp_v7 != 0 || ((temp_v1 & 0xff) != 0 || temp_v0 != '\0')) {
          return temp_v7;
        }
        temp_v8 = (temp_v9 & 0xffffff) - (temp_v10 & 0xffffff);
        temp_v4 = temp_v8 == 0;
        temp_v5 = (temp_v2 & 0xff) == 0;
        if (temp_v4 && ((temp_v5 && temp_v1 == 0) && temp_v0 == '\0')) {
          temp_v8 = temp_v9 >> 0x18;
        }
        temp_v6 = (short)temp_v8;
        if (temp_v4 && ((temp_v5 && temp_v1 == 0) && temp_v0 == '\0')) {
          temp_v6 = temp_v6 - (unsigned short)(unsigned char)(temp_v10 >> 0x18);
        }
        *param_3 = temp_v6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (temp_v9 != temp_v10) {
        if (((temp_v10 << 0x18) | (((temp_v10 >> 8) & 0xff) << 0x10) | (((temp_v10 >> 0x10) & 0xff) << 8)
            | (temp_v10 >> 0x18)) <
            ((temp_v9 << 0x18) | (((temp_v9 >> 8) & 0xff) << 0x10) | (((temp_v9 >> 0x10) & 0xff) << 8)
            | (temp_v9 >> 0x18))) {
          temp_v7 = 1;
        }
        else {
          temp_v7 = -1;
        }
        return temp_v7;
      }
    }
  }
  temp_v6 = (short)param_1;
  if (param_3 == (short *)0x0) {
    temp_v6 = 0;
  }
  *param_3 = temp_v6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
