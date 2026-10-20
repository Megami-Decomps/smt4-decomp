/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00417a60` (_code @ 0x417a60, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);
int FUN_004bb6d8(unsigned int, int);

extern int FUN_001ab940(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001bd100(unsigned int);
/* Supplied declaration required: FUN_004bb6d8. */


unsigned char FUN_00417a60(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *pbVar7;
  
  temp_v2 = FUN_001ab940();
  temp_v2 = temp_v2 + param_1 * 4;
  pbVar7 = (unsigned char *)(temp_v2 + 0x2a0);
  temp_v1 = *pbVar7 & 2;
  if ((*pbVar7 & 2) != 0) {
    temp_v3 = FUN_001ab940();
    *(unsigned char *)(temp_v2 + 0x2a2) = *(unsigned char *)(temp_v2 + 0x2a2) & 0xfb;
    *pbVar7 = (*pbVar7 & 0xfd) | 0x1c;
    temp_v2 = FUN_001bd100(param_1);
    if (temp_v2 != 0) {
      temp_v5 = param_1;
      FUN_001ad9b4();
      if (*(char *)(temp_v5 + 6) == '\x01') {
        if (*(unsigned short *)(temp_v3 + 0x8e4) == param_1) {
          *(unsigned short *)(temp_v3 + 0x8e4) = 0;
        }
        if (*(unsigned short *)(temp_v3 + 0x8f0) == param_1) {
          *(unsigned short *)(temp_v3 + 0x8f0) = 0;
        }
        if (*(unsigned short *)(temp_v3 + 0x8fc) == param_1) {
          *(unsigned short *)(temp_v3 + 0x8fc) = 0;
        }
        if (*(unsigned short *)(temp_v3 + 0x908) == param_1) {
          *(unsigned short *)(temp_v3 + 0x908) = 0;
        }
      }
    }
    else {
      temp_v2 = FUN_001ab940();
      if (*(unsigned short *)(temp_v2 + 0x8e0) == param_1) {
        temp_v5 = 0x500;
        *(unsigned short *)(temp_v3 + 0x8e0) = 0;
        do {
          temp_v2 = FUN_001ab940();
          FUN_004bb6d8(temp_v5,0);
          temp_v4 = temp_v5 & 7;
          temp_v0 = temp_v5 >> 3;
          temp_v5 = temp_v5 + 1;
          *(unsigned char *)(temp_v2 + temp_v0) = ~(unsigned char)(1 << temp_v4) & *(unsigned char *)(temp_v2 + temp_v0);
        } while (temp_v5 < 0x520);
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
