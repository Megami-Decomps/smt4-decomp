/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00417e08` (_code @ 0x417e08, 0x260 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001ab940(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_001ada74(unsigned int);
extern int FUN_001bd100(unsigned int);
extern int FUN_001bd118(unsigned int);
/* Supplied declaration required: FUN_004bb6d8. */
/* Supplied declaration required: FUN_0050d6e4. */
/* Supplied declaration required: FUN_0050d71c. */


unsigned int FUN_00417e08(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned short temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char *pbVar11;
  
  temp_v4 = FUN_001ab940();
  temp_v4 = temp_v4 + param_1 * 4;
  temp_v5 = FUN_001ab940();
  pbVar11 = (unsigned char *)(temp_v4 + 0x2a0);
  if (((*pbVar11 & 1) != 0) || (param_1 >= 0x15e)) {
    temp_v6 = FUN_001bd118(param_1);
    temp_v7 = FUN_001bd100(param_1);
    if ((temp_v7 != 0) ||
       (((temp_v6 == 0 || (temp_v6 == 10 || temp_v6 == 1)) || (*(short *)(temp_v5 + 0x8e0) == 0)))) {
      temp_v1 = *pbVar11;
      temp_v3 = temp_v1 & 0xfb;
      *pbVar11 = temp_v3 | 2;
      if (*(char *)(temp_v4 + 0x2a1) != '\0') {
        temp_v3 = temp_v3 | 0x42;
      }
      else {
        temp_v3 = (temp_v1 & 0xbb) | 2;
      }
      *pbVar11 = temp_v3;
      *pbVar11 = *pbVar11 & 0x7f;
      *(unsigned char *)(temp_v4 + 0x2a2) = *(unsigned char *)(temp_v4 + 0x2a2) & 0xc2;
      if ((temp_v6 == 10) && (temp_v7 = FUN_001ada74(param_1), temp_v7 != 0)) {
        *(unsigned char *)(temp_v4 + 0x2a2) = *(unsigned char *)(temp_v4 + 0x2a2) | 0x20;
      }
      temp_v4 = FUN_001bd100(param_1);
      temp_v2 = (unsigned short)param_1;
      if (temp_v4 != 0) {
        if (temp_v6 == 1) {
          temp_v4 = 0;
          do {
            if (*(short *)(temp_v5 + temp_v4 * 0xc + 0x8e4) == 0) {
              temp_v5 = temp_v5 + temp_v4 * 0xc;
              *(unsigned short *)(temp_v5 + 0x8e4) = temp_v2;
              FUN_0050d71c(temp_v5 + 0x8e8);
              return 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 4);
        }
      }
      else if (((temp_v6 != 0) && (temp_v6 != 10 && temp_v6 != 2)) && (temp_v6 != 0xb)) {
        temp_v4 = 1;
        do {
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v5 + temp_v4 * 0xc + 0x914);
          if (((temp_v8 != 0) && (FUN_001ad9b4(), temp_v8 != 0)) && (*(char *)(temp_v8 + 6) == '\x06')) {
            FUN_0050d6e4();
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x14);
        if (temp_v6 == 6 || temp_v6 == 9) {
          *(unsigned short *)(temp_v5 + 0x8e0) = temp_v2;
        }
        else {
          temp_v4 = 1;
          do {
            if (*(short *)(temp_v5 + temp_v4 * 0xc + 0x914) == 0) {
              temp_v5 = temp_v5 + temp_v4 * 0xc;
              FUN_0050d6e4(temp_v5 + 0x914);
              *(unsigned short *)(temp_v5 + 0x914) = temp_v2;
              break;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 0x14);
        }
        temp_v8 = 0x500;
        do {
          temp_v4 = FUN_001ab940();
          FUN_004bb6d8(temp_v8,0);
          temp_v9 = temp_v8 & 7;
          temp_v0 = temp_v8 >> 3;
          temp_v8 = temp_v8 + 1;
          *(unsigned char *)(temp_v4 + temp_v0) = ~(unsigned char)(1 << temp_v9) & *(unsigned char *)(temp_v4 + temp_v0);
        } while (temp_v8 < 0x520);
      }
      return 1;
    }
  }
  return 0;
}
