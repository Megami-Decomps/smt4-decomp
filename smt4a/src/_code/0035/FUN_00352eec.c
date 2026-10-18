/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00352eec` (_code @ 0x352eec, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_005f16d0; /* 0x5f16d0 */
extern unsigned int DAT_005f16d4; /* 0x5f16d4 */

extern int FUN_00162e8c(void);
extern int FUN_00376f94(void);
extern int FUN_003a338c(unsigned int);
extern int FUN_003a33c8(unsigned int);
extern int FUN_003ae5e4(unsigned int);


void FUN_00352eec(void)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_00162e8c();
  temp_v2 = FUN_00376f94();
  if (temp_v2 < 100) {
    *(unsigned char *)(temp_v1 + 0x7c6) = 0;
  }
  if (DAT_005f16d0 != 1) {
    if (DAT_005f16d0 != 2) {
      if (DAT_005f16d0 == 3) {
        temp_v2 = FUN_003ae5e4(DAT_005f16d4);
        *(char *)(temp_v1 + 0x3a) = (char)*(unsigned short *)(temp_v2 + 0xc);
        *(char *)(temp_v1 + 0x3b) = (char)*(unsigned short *)(temp_v2 + 0xe);
        *(char *)(temp_v1 + 0x7c5) = (char)*(unsigned short *)(temp_v2 + 8);
        *(unsigned int *)(temp_v1 + 0x1520) = 0;
      }
    }
    else {
      temp_v2 = FUN_003a33c8(DAT_005f16d4);
      *(char *)(temp_v1 + 0x3a) = (char)*(unsigned short *)(temp_v2 + 0xc);
      *(char *)(temp_v1 + 0x3b) = (char)*(unsigned short *)(temp_v2 + 0xe);
      *(char *)(temp_v1 + 0x7c5) = (char)*(unsigned short *)(temp_v2 + 10);
      *(char *)(temp_v1 + 0x7c6) = (char)*(unsigned short *)(temp_v2 + 0x16);
      *(unsigned int *)(temp_v1 + 0x1520) = *(unsigned int *)(temp_v2 + 0x18);
    }
  }
  else {
    temp_v2 = FUN_003a338c(DAT_005f16d4);
    *(char *)(temp_v1 + 0x3a) = (char)*(unsigned short *)(temp_v2 + 0xc);
    *(char *)(temp_v1 + 0x3b) = (char)*(unsigned short *)(temp_v2 + 0xe);
    *(char *)(temp_v1 + 0x7c5) = (char)*(unsigned short *)(temp_v2 + 10);
    *(char *)(temp_v1 + 0x7c6) = (char)*(unsigned short *)(temp_v2 + 0x10);
    *(unsigned int *)(temp_v1 + 0x1520) = 0;
  }
  if (*(char *)(temp_v1 + 0x7c5) == '\0') {
    temp_v0 = 0xff;
  }
  else {
    if (*(char *)(temp_v1 + 0x7c5) < '\x10') {
      return;
    }
    temp_v0 = 0xf;
  }
  *(unsigned char *)(temp_v1 + 0x7c5) = temp_v0;
  return;
}
