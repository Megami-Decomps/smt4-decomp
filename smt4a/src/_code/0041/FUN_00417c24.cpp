/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00417c24` (_code @ 0x417c24, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004bb6d8(unsigned int, int);

extern int FUN_001ab940(void);
/* Supplied declaration required: FUN_004bb6d8. */


unsigned int FUN_00417c24(unsigned int param_1)

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
  
  temp_v2 = FUN_001ab940();
  temp_v2 = temp_v2 + param_1 * 4;
  pbVar9 = (unsigned char *)(temp_v2 + 0x2a0);
  temp_v1 = *pbVar9;
  if ((temp_v1 & 1) == 0) {
    temp_v3 = 0;
  }
  else {
    if ((temp_v1 & 4) == 0) {
      if ((temp_v1 & 2) != 0) {
        temp_v4 = FUN_001ab940();
        pbVar7 = (unsigned char *)(temp_v4 + param_1 * 4 + 0x2a0);
        if ((*pbVar7 & 2) != 0) {
          temp_v4 = FUN_001ab940();
          if (*(unsigned short *)(temp_v4 + 0x8e0) != param_1) {
            *pbVar7 = *pbVar7 & 0xf9;
          }
          else {
            *pbVar7 = *pbVar7 & 0xb9;
            temp_v4 = FUN_001ab940();
            temp_v6 = 0x500;
            *(unsigned short *)(temp_v4 + 0x8e0) = 0;
            do {
              temp_v4 = FUN_001ab940();
              FUN_004bb6d8(temp_v6,0);
              temp_v5 = temp_v6 & 7;
              temp_v0 = temp_v6 >> 3;
              temp_v6 = temp_v6 + 1;
              *(unsigned char *)(temp_v4 + temp_v0) = ~(unsigned char)(1 << temp_v5) & *(unsigned char *)(temp_v4 + temp_v0);
            } while (temp_v6 < 0x520);
          }
        }
      }
      *(unsigned char *)(temp_v2 + 0x2a1) = 0;
      *pbVar9 = *pbVar9 & 0x1c;
      *(unsigned char *)(temp_v2 + 0x2a2) = *(unsigned char *)(temp_v2 + 0x2a2) & 0xc2;
    }
    temp_v3 = 1;
  }
  return temp_v3;
}

} /* extern "C" */
