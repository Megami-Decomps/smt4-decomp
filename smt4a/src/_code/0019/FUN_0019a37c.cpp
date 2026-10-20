/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a37c` (_code @ 0x19a37c, 0xec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int UnsignedSaturate(int, int);

/* Unsupported intrinsic, declaration required: UnsignedSaturate (CALLOTHER). */


unsigned int FUN_0019a37c(unsigned int *param_1,unsigned int *param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int temp_v6;
  unsigned char *pbVar8;
  unsigned char *pbVar9;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  if ((((unsigned int)param_1 | (unsigned int)param_2) & 3) == 0) {
    while (param_3 >= 4) {
      temp_v7 = *param_1;
      temp_v8 = *param_2;
      param_3 = param_3 - 4;
      temp_v0 = UnsignedSaturate('\x01' - (char)temp_v7,0x10);
      temp_v1 = UnsignedSaturate('\x01' - (char)(temp_v7 >> 8),0x10);
      temp_v2 = UnsignedSaturate('\x01' - (char)(temp_v7 >> 0x10),0x10);
      temp_v3 = UnsignedSaturate('\x01' - (char)(temp_v7 >> 0x18),0x10);
      if ((((temp_v3 & 0xff) != 0 || temp_v2 != 0) || temp_v1 != 0) || temp_v0 != '\0') {
        temp_v6 = (temp_v7 & 0xff) - (temp_v8 & 0xff);
        if (temp_v6 != 0 || temp_v0 != '\0') {
          return temp_v6;
        }
        temp_v6 = (temp_v7 & 0xffff) - (temp_v8 & 0xffff);
        if (temp_v6 != 0 || ((temp_v1 & 0xff) != 0 || temp_v0 != '\0')) {
          return temp_v6;
        }
        temp_v6 = (temp_v7 & 0xffffff) - (temp_v8 & 0xffffff);
        temp_v4 = temp_v6 == 0;
        temp_v5 = (temp_v2 & 0xff) == 0;
        if (temp_v4 && ((temp_v5 && temp_v1 == 0) && temp_v0 == '\0')) {
          temp_v6 = temp_v7 >> 0x18;
        }
        if (temp_v4 && ((temp_v5 && temp_v1 == 0) && temp_v0 == '\0')) {
          temp_v6 = temp_v6 - (temp_v8 >> 0x18);
        }
        return temp_v6;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (temp_v7 != temp_v8) {
        if (((temp_v8 << 0x18) | (((temp_v8 >> 8) & 0xff) << 0x10) | (((temp_v8 >> 0x10) & 0xff) << 8)
            | (temp_v8 >> 0x18)) <
            ((temp_v7 << 0x18) | (((temp_v7 >> 8) & 0xff) << 0x10) | (((temp_v7 >> 0x10) & 0xff) << 8)
            | (temp_v7 >> 0x18))) {
          temp_v7 = 1;
        }
        else {
          temp_v7 = 0xffffffff;
        }
        return temp_v7;
      }
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  while( 1 ) {
    pbVar8 = (unsigned char *)((int)param_1 + 1);
    temp_v7 = (unsigned int)(unsigned char)*param_1;
    pbVar9 = (unsigned char *)((int)param_2 + 1);
    temp_v8 = (unsigned int)(unsigned char)*param_2;
    if (((temp_v7 == 0) || (temp_v7 != temp_v8)) || (param_3 == 1)) break;
    param_1 = (unsigned int *)((int)param_1 + 2);
    temp_v7 = (unsigned int)*pbVar8;
    param_2 = (unsigned int *)((int)param_2 + 2);
    temp_v8 = (unsigned int)*pbVar9;
    if (((temp_v7 == 0) || (temp_v7 != temp_v8)) || (param_3 = param_3 - 2, param_3 == 0)) break;
  }
  return temp_v7 - temp_v8;
}

} /* extern "C" */
