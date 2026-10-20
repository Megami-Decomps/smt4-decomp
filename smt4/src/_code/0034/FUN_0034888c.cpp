/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034888c` (_code @ 0x34888c, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023ddbc(unsigned int, int);
int FUN_0028eeb8(unsigned int);
int FUN_002b63c0(void);

/* Supplied declaration required: FUN_0023ddbc. */
extern int FUN_00287894(unsigned int);
/* Supplied declaration required: FUN_0028eeb8. */
extern int FUN_00298f88(unsigned int);
extern int FUN_002adc88(void);
/* Supplied declaration required: FUN_002b63c0. */


unsigned char FUN_0034888c(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char *pbVar7;
  
  temp_v2 = FUN_002adc88();
  temp_v2 = temp_v2 + param_1 * 4;
  pbVar7 = (unsigned char *)(temp_v2 + 0x200);
  temp_v1 = *pbVar7 & 2;
  if ((*pbVar7 & 2) != 0) {
    temp_v3 = FUN_002adc88();
    *(unsigned char *)(temp_v2 + 0x202) = *(unsigned char *)(temp_v2 + 0x202) & 0xfb;
    *pbVar7 = (*pbVar7 & 0xfd) | 0x1c;
    temp_v2 = FUN_00298f88(param_1);
    if (temp_v2 != 0) {
      temp_v5 = param_1;
      FUN_002b63c0();
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
      temp_v2 = FUN_002adc88();
      if (*(unsigned short *)(temp_v2 + 0x840) == param_1) {
        temp_v5 = 0x500;
        *(unsigned short *)(temp_v3 + 0x840) = 0;
        do {
          temp_v2 = FUN_002adc88();
          FUN_0023ddbc(temp_v5,0);
          temp_v4 = temp_v5 & 7;
          temp_v0 = temp_v5 >> 3;
          temp_v5 = temp_v5 + 1;
          *(unsigned char *)(temp_v2 + temp_v0) = ~(unsigned char)(1 << temp_v4) & *(unsigned char *)(temp_v2 + temp_v0);
        } while (temp_v5 < 0x520);
      }
      else {
        temp_v2 = FUN_00287894(param_1);
        if ((temp_v2 == 0) && (temp_v5 = param_1, FUN_002b63c0(), (*(unsigned char *)(temp_v5 + 7) & 2) != 0)) {
          FUN_0028eeb8(param_1);
        }
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
