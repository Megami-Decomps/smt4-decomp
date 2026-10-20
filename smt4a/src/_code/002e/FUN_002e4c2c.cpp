/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e4c2c` (_code @ 0x2e4c2c, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001028b8(int, int, unsigned char *, unsigned int);
int sysMemClear(unsigned char *, int);

extern unsigned char LAB_002e4d80; /* 0x2e4d80 */
extern unsigned int g_keyedRecordCount; /* 0x5702f8 */
extern unsigned char g_keyedRecords; /* 0x5c6000 */

extern unsigned char *FUN_00100d60(int, unsigned int);
/* Supplied declaration required: FUN_001028b8. */
/* Supplied declaration required: sysMemClear. */


unsigned int FUN_002e4c2c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  unsigned char temp_v0;
  int temp_v1;
  
  sysMemClear(&g_keyedRecords + g_keyedRecordCount * 0x148,0x148);
  temp_v1 = g_keyedRecordCount * 0x148 + 0x5c6001;
  FUN_001028b8(temp_v1,0x1f,&LAB_002e4d80,param_1);
  puVar1 = (unsigned char *)FUN_00100d60(temp_v1,0x2e);
  if (puVar1 != (unsigned char *)0x0) {
    *puVar1 = 0;
  }
  temp_v0 = g_keyedRecordCount;
  temp_v1 = g_keyedRecordCount * 0x148;
  *(unsigned char *)(temp_v1 + 0x5c6136) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6135) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6134) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c612e) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c612d) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c612c) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6126) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6125) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6124) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c611e) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c611d) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c611c) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6116) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6115) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6114) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c610e) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c610d) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c610c) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6106) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6105) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c6104) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60fe) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60fd) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60fc) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60f6) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60f5) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60f4) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60ee) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60ed) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60ec) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60e6) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60e5) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60e4) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60de) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60dd) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60dc) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60d6) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60d5) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60d4) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60ce) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60cd) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60cc) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60c6) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60c5) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60c4) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60be) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60bd) = 0xff;
  *(unsigned char *)(temp_v1 + 0x5c60bc) = 0xff;
  g_keyedRecordCount = g_keyedRecordCount + 1;
  return temp_v0;
}

} /* extern "C" */
