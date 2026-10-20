/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e36f8` (_code @ 0x2e36f8, 0x194 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c424c(unsigned char *, int, int);

extern int DAT_0043dcf0; /* 0x43dcf0 */

extern int FUN_002a8740(void);
extern int FUN_002a8764(void);
extern int FUN_002b066c(unsigned int);
/* Supplied declaration required: FUN_002c424c. */


void FUN_002e36f8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v0 = DAT_0043dcf0;
  temp_v1 = FUN_002a8764();
  temp_v7 = 0;
  do {
    *(unsigned char *)(temp_v0 + temp_v7 + 0x678) = 0;
    *(unsigned char *)(*(int *)(temp_v0 + temp_v7 * 4 + 0x6c8) + 0x28) = 0;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 4);
  temp_v7 = 0;
  do {
    *(unsigned short *)(temp_v0 + temp_v7 * 8 + 0x73c) = 0;
    *(unsigned char *)(*(int *)(temp_v0 + temp_v7 * 4 + 0x6d8) + 0x28) = 0;
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 0x18);
  FUN_002c424c((unsigned char *)(temp_v0 + 0x678),4,1);
  temp_v5 = 0;
  temp_v7 = 0x18;
  *(unsigned char *)(temp_v0 + 0x678) = 0;
  do {
    temp_v6 = temp_v0 + temp_v5 * 8;
    temp_v5 = temp_v5 + 1;
    if (*(int *)(temp_v6 + 0x738) < 0) {
      *(unsigned short *)(temp_v6 + 0x73c) = 1;
    }
    temp_v7 = temp_v7 - 1;
  } while (temp_v7 != 0);
  temp_v7 = 0;
  if (temp_v7 < *(int *)(temp_v0 + 0xb3c)) {
    do {
      temp_v2 = *(unsigned int *)(temp_v0 + temp_v7 * 4 + 0xb34);
      if ((-1 < (int)temp_v2) && (temp_v5 = FUN_002b066c(temp_v2 & 0xffff), temp_v5 != 0)) {
        temp_v6 = 0;
        do {
          if ((-1 < *(char *)(temp_v1 + temp_v6 + 0x9108)) &&
             (temp_v3 = FUN_002a8740(), *(short *)(temp_v3 + 0x46) == *(short *)(temp_v5 + 0x46))) {
            *(unsigned char *)(temp_v0 + temp_v6 + 0x679) = 1;
            *(unsigned char *)(*(int *)(temp_v0 + temp_v6 * 4 + 0x6cc) + 0x28) = 1;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 3);
        temp_v6 = 0;
        do {
          temp_v3 = temp_v0 + temp_v6 * 8;
          if ((-1 < *(int *)(temp_v3 + 0x738)) &&
             (temp_v4 = FUN_002a8740(), *(short *)(temp_v4 + 0x46) == *(short *)(temp_v5 + 0x46))) {
            *(unsigned short *)(temp_v3 + 0x73c) = 1;
            *(unsigned char *)(*(int *)(temp_v0 + temp_v6 * 4 + 0x6d8) + 0x28) = 1;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 0x18);
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < *(int *)(temp_v0 + 0xb3c));
  }
  return;
}

} /* extern "C" */
