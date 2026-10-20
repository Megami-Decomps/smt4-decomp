/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028eeb8` (_code @ 0x28eeb8, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023ddbc(unsigned int, int);
int words3Clear(int);

/* Supplied declaration required: FUN_0023ddbc. */
extern int FUN_00287894(unsigned int);
extern int FUN_00298f88(unsigned int);
extern int gameGetFlagBlock(void);
/* Supplied declaration required: words3Clear. */


unsigned int FUN_0028eeb8(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned char *pbVar9;
  unsigned int temp_v8;
  
  temp_v3 = gameGetFlagBlock();
  temp_v3 = temp_v3 + param_1 * 4;
  temp_v4 = gameGetFlagBlock();
  pbVar9 = (unsigned char *)(temp_v3 + 0x200);
  if (((*pbVar9 & 1) != 0) || (param_1 >= 0x15e)) {
    temp_v5 = FUN_00287894(param_1);
    temp_v6 = FUN_00298f88(param_1);
    if ((temp_v6 != 0) || ((temp_v5 == 0 || (*(short *)(temp_v4 + 0x840) == 0)))) {
      temp_v1 = *pbVar9;
      temp_v2 = temp_v1 & 0xfb;
      *pbVar9 = temp_v2 | 2;
      if (*(char *)(temp_v3 + 0x201) != '\0') {
        temp_v2 = temp_v2 | 0x42;
      }
      else {
        temp_v2 = (temp_v1 & 0xbb) | 2;
      }
      *pbVar9 = temp_v2;
      *pbVar9 = *pbVar9 & 0x7f;
      *(unsigned char *)(temp_v3 + 0x202) = *(unsigned char *)(temp_v3 + 0x202) & 0xfa;
      temp_v3 = FUN_00298f88(param_1);
      if (temp_v3 != 0) {
        if (temp_v5 == 1) {
          temp_v3 = 0;
          do {
            if (*(short *)(temp_v4 + temp_v3 * 0xe + 0x842) == 0) {
              temp_v4 = temp_v4 + temp_v3 * 0xe;
              *(short *)(temp_v4 + 0x842) = (short)param_1;
              words3Clear(temp_v4 + 0x844);
              return 1;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 4);
        }
      }
      else if (temp_v5 != 0) {
        *(short *)(temp_v4 + 0x840) = (short)param_1;
        *(unsigned int *)(temp_v4 + 0x87a) = 0;
        *(unsigned int *)(temp_v4 + 0x87e) = 0;
        *(unsigned int *)(temp_v4 + 0x882) = 0;
        temp_v8 = 0x500;
        *(unsigned short *)(temp_v4 + 0x886) = 0;
        do {
          temp_v3 = gameGetFlagBlock();
          FUN_0023ddbc(temp_v8,0);
          temp_v7 = temp_v8 & 7;
          temp_v0 = temp_v8 >> 3;
          temp_v8 = temp_v8 + 1;
          *(unsigned char *)(temp_v3 + temp_v0) = ~(unsigned char)(1 << temp_v7) & *(unsigned char *)(temp_v3 + temp_v0);
        } while (temp_v8 < 0x520);
      }
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
