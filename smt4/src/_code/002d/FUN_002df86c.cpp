/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002df86c` (_code @ 0x2df86c, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0049f9c0; /* 0x49f9c0 */
extern unsigned int DAT_0049f9c4; /* 0x49f9c4 */

extern int dataTable2fSub0GetRecord(unsigned int);
extern int dataTable2fSub1GetRecord(unsigned int);
extern int gameGetMapBlock(void);
extern int dataTable2fSub2GetRecord(unsigned int);


void FUN_002df86c(void)

{
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = gameGetMapBlock();
  *(unsigned char *)(temp_v1 + 0x792) = 0;
  if (DAT_0049f9c0 != 1) {
    if (DAT_0049f9c0 != 2) {
      if (DAT_0049f9c0 == 3) {
        temp_v2 = dataTable2fSub2GetRecord(DAT_0049f9c4);
        *(char *)(temp_v1 + 0x3a) = (char)*(unsigned short *)(temp_v2 + 0xc);
        *(char *)(temp_v1 + 0x3b) = (char)*(unsigned short *)(temp_v2 + 0xe);
        *(char *)(temp_v1 + 0x791) = (char)*(unsigned short *)(temp_v2 + 8);
      }
    }
    else {
      temp_v2 = dataTable2fSub1GetRecord(DAT_0049f9c4);
      *(char *)(temp_v1 + 0x3a) = (char)*(unsigned short *)(temp_v2 + 0xc);
      *(char *)(temp_v1 + 0x3b) = (char)*(unsigned short *)(temp_v2 + 0xe);
      *(char *)(temp_v1 + 0x791) = (char)*(unsigned short *)(temp_v2 + 10);
      temp_v0 = (unsigned char)*(unsigned short *)(temp_v2 + 0x16);
      *(unsigned char *)(temp_v1 + 0x792) = temp_v0;
    }
  }
  else {
    temp_v2 = dataTable2fSub0GetRecord(DAT_0049f9c4);
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

} /* extern "C" */
