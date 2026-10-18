/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100fc8` (_code @ 0x100fc8, 0x9c bytes) from smt4.cxi.
 * It reads the retail function; it does not reproduce its bytes. build.py only checks that it compiles. */
#include "romwright_types.h"

extern int DAT_00101064; /* 0x101064 */
extern int DAT_00101078; /* 0x101078 */
extern unsigned int DAT_0010107c; /* 0x10107c */

extern int FUN_00100f9c(int);


unsigned int FUN_00100fc8(unsigned short *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *param_3;
  if (temp_v0 != 0) {
    temp_v2 = param_2 - 0x40;
    if ((temp_v2 < 0x3f) || (param_2 - 0x80 < 0x7d)) {
      if (temp_v0 < 0xe0) {
        temp_v1 = -0x81;
      }
      else {
        temp_v1 = -0xc1;
      }
      if (param_2 >= 0x80) {
        temp_v2 = param_2 - 0x41;
      }
      temp_v1 = FUN_00100f9c((int)(((temp_v0 + temp_v1) * 0xbc + temp_v2) * 0x10000) >> 0x10);
      if (temp_v1 != DAT_00101064) {
        *param_1 = (short)temp_v1;
        *param_3 = 0;
        return 1;
      }
    }
  }
  else {
    if ((param_2 - 0x81 < 0x1f) || (param_2 - 0xe0 < 0x10)) {
      *param_3 = param_2;
      return 0xfffffffe;
    }
    if (((param_2 < 0xf0) && (param_2 != 0x80)) && (param_2 != 0xa0)) {
      if (param_2 != 0x5c) {
        temp_v0 = DAT_0010107c;
        if ((param_2 != 0x7e) && (temp_v0 = param_2, param_2 - 0xa1 < 0x3f)) {
          temp_v0 = (param_2 + DAT_00101078) & 0xffff;
        }
      }
      else {
        temp_v0 = 0xa5;
      }
      *param_1 = (short)temp_v0;
      return 1;
    }
  }
  return 0xffffffff;
}
