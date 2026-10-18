/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df7f8` (_code @ 0x2df7f8, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0049f9c0; /* 0x49f9c0 */
extern unsigned int DAT_0049f9c4; /* 0x49f9c4 */

extern int FUN_0027636c(unsigned int);
extern int FUN_00287b10(unsigned int);
extern int FUN_002c2b1c(void);
extern int FUN_00316fc4(unsigned int);


void FUN_002df7f8(void)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = FUN_002c2b1c();
  *(unsigned char *)(temp_v1 + 0x792) = 0;
  if (DAT_0049f9c0 != 1) {
    if (DAT_0049f9c0 != 2) {
      if (DAT_0049f9c0 == 3) {
        temp_v2 = FUN_00316fc4(DAT_0049f9c4);
        *(char *)(temp_v1 + 0x3a) = (char)*(unsigned short *)(temp_v2 + 0xc);
        *(char *)(temp_v1 + 0x3b) = (char)*(unsigned short *)(temp_v2 + 0xe);
        *(char *)(temp_v1 + 0x791) = (char)*(unsigned short *)(temp_v2 + 8);
      }
    }
    else {
      temp_v2 = FUN_00287b10(DAT_0049f9c4);
      *(char *)(temp_v1 + 0x3a) = (char)*(unsigned short *)(temp_v2 + 0xc);
      *(char *)(temp_v1 + 0x3b) = (char)*(unsigned short *)(temp_v2 + 0xe);
      *(char *)(temp_v1 + 0x791) = (char)*(unsigned short *)(temp_v2 + 10);
      temp_v0 = (unsigned char)*(unsigned short *)(temp_v2 + 0x16);
      *(unsigned char *)(temp_v1 + 0x792) = temp_v0;
    }
  }
  else {
    temp_v2 = FUN_0027636c(DAT_0049f9c4);
    *(char *)(temp_v1 + 0x3a) = (char)*(unsigned short *)(temp_v2 + 0xc);
    *(char *)(temp_v1 + 0x3b) = (char)*(unsigned short *)(temp_v2 + 0xe);
    *(char *)(temp_v1 + 0x791) = (char)*(unsigned short *)(temp_v2 + 10);
    temp_v0 = (unsigned char)*(unsigned short *)(temp_v2 + 0x10);
    *(unsigned char *)(temp_v1 + 0x792) = temp_v0;
  }
  if (*(char *)(temp_v1 + 0x791) == '\0') {
    temp_v0 = 0xff;
  }
  else {
    if (*(char *)(temp_v1 + 0x791) < '\x10') {
      return;
    }
    temp_v0 = 0xf;
  }
  *(unsigned char *)(temp_v1 + 0x791) = temp_v0;
  return;
}
