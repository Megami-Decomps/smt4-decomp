/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348ae4` (_code @ 0x348ae4, 0x13c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023df18. */
extern int FUN_00287afc(unsigned int);
/* Supplied declaration required: FUN_0028f15c. */
extern int FUN_00299224(unsigned int);
extern int FUN_002adf14(void);
/* Supplied declaration required: FUN_002b6700. */


unsigned char FUN_00348ae4(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *pbVar7;
  
  temp_v2 = FUN_002adf14();
  temp_v2 = temp_v2 + param_1 * 4;
  pbVar7 = (unsigned char *)(temp_v2 + 0x200);
  temp_v1 = *pbVar7 & 2;
  if ((*pbVar7 & 2) != 0) {
    temp_v3 = FUN_002adf14();
    *(unsigned char *)(temp_v2 + 0x202) = *(unsigned char *)(temp_v2 + 0x202) & 0xfb;
    *pbVar7 = (*pbVar7 & 0xfd) | 0x1c;
    temp_v2 = FUN_00299224(param_1);
    if (temp_v2 != 0) {
      temp_v5 = param_1;
      FUN_002b6700();
      if (*(char *)(temp_v5 + 6) == '\x01') {
        if (*(unsigned short *)(temp_v3 + 0x842) == param_1) {
          *(unsigned short *)(temp_v3 + 0x842) = 0;
        }
        if (*(unsigned short *)(temp_v3 + 0x850) == param_1) {
          *(unsigned short *)(temp_v3 + 0x850) = 0;
        }
        if (*(unsigned short *)(temp_v3 + 0x85e) == param_1) {
          *(unsigned short *)(temp_v3 + 0x85e) = 0;
        }
        if (*(unsigned short *)(temp_v3 + 0x86c) == param_1) {
          *(unsigned short *)(temp_v3 + 0x86c) = 0;
        }
      }
    }
    else {
      temp_v2 = FUN_002adf14();
      if (*(unsigned short *)(temp_v2 + 0x840) == param_1) {
        temp_v5 = 0x500;
        *(unsigned short *)(temp_v3 + 0x840) = 0;
        do {
          temp_v2 = FUN_002adf14();
          FUN_0023df18(temp_v5,0);
          temp_v4 = temp_v5 & 7;
          temp_v0 = temp_v5 >> 3;
          temp_v5 = temp_v5 + 1;
          *(unsigned char *)(temp_v2 + temp_v0) = ~(unsigned char)(1 << temp_v4) & *(unsigned char *)(temp_v2 + temp_v0);
        } while (temp_v5 < 0x520);
      }
      else {
        temp_v2 = FUN_00287afc(param_1);
        if ((temp_v2 == 0) && (temp_v5 = param_1, FUN_002b6700(), (*(unsigned char *)(temp_v5 + 7) & 2) != 0)) {
          FUN_0028f15c(param_1);
        }
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
