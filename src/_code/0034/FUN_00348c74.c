/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348c74` (_code @ 0x348c74, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023df18. */
extern int FUN_002adf14(void);


unsigned int FUN_00348c74(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char *pbVar7;
  unsigned int temp_v6;
  unsigned char *pbVar9;
  
  temp_v2 = FUN_002adf14();
  temp_v2 = temp_v2 + param_1 * 4;
  pbVar9 = (unsigned char *)(temp_v2 + 0x200);
  temp_v1 = *pbVar9;
  if ((temp_v1 & 1) == 0) {
    temp_v3 = 0;
  }
  else {
    if ((temp_v1 & 4) == 0) {
      if ((temp_v1 & 2) != 0) {
        temp_v4 = FUN_002adf14();
        pbVar7 = (unsigned char *)(temp_v4 + param_1 * 4 + 0x200);
        if ((*pbVar7 & 2) != 0) {
          temp_v4 = FUN_002adf14();
          if (*(unsigned short *)(temp_v4 + 0x840) != param_1) {
            *pbVar7 = *pbVar7 & 0xf9;
          }
          else {
            *pbVar7 = *pbVar7 & 0xb9;
            temp_v4 = FUN_002adf14();
            temp_v6 = 0x500;
            *(unsigned short *)(temp_v4 + 0x840) = 0;
            do {
              temp_v4 = FUN_002adf14();
              FUN_0023df18(temp_v6,0);
              temp_v5 = temp_v6 & 7;
              temp_v0 = temp_v6 >> 3;
              temp_v6 = temp_v6 + 1;
              *(unsigned char *)(temp_v4 + temp_v0) = ~(unsigned char)(1 << temp_v5) & *(unsigned char *)(temp_v4 + temp_v0);
            } while (temp_v6 < 0x520);
          }
        }
      }
      *(unsigned char *)(temp_v2 + 0x201) = 0;
      *(unsigned char *)(temp_v2 + 0x202) = *(unsigned char *)(temp_v2 + 0x202) & 0xfa;
      *pbVar9 = *pbVar9 & 0x1c;
    }
    temp_v3 = 1;
  }
  return temp_v3;
}
