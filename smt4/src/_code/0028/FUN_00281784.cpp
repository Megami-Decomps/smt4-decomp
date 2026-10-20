/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00281784` (_code @ 0x281784, 0x4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00447a28; /* 0x447a28 */
extern unsigned int DAT_00447a2c; /* 0x447a2c */
extern unsigned int DAT_0049f954; /* 0x49f954 */
extern unsigned char DAT_004a1264; /* 0x4a1264 */


void FUN_00281784(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  int temp_v5;
  
  temp_v5 = 0;
  DAT_00447a28 = 0;
  do {
    temp_v3 = 0;
    temp_v4 = 8;
    temp_v0 = temp_v5 * 0x178;
    do {
      temp_v4 = temp_v4 - 1;
      puVar6 = (unsigned int *)(&DAT_004a1264 + temp_v3 * 0xc + temp_v0);
      temp_v3 = temp_v3 + 1;
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
    } while (temp_v4 != 0);
    *(unsigned int *)(temp_v0 + 0x4a12d0) = 0;
    *(unsigned int *)(temp_v0 + 0x4a12d4) = 0;
    temp_v3 = 0;
    temp_v4 = 6;
    *(unsigned int *)(temp_v0 + 0x4a12d8) = 0;
    do {
      temp_v1 = temp_v3 * 4;
      temp_v2 = temp_v3 * 0xc + temp_v0;
      temp_v4 = temp_v4 - 1;
      *(unsigned int *)(&DAT_004a1264 + temp_v2 + 0x7c) = 0;
      *(unsigned int *)(&DAT_004a1264 + temp_v2 + 0x80) = 0;
      *(unsigned int *)(&DAT_004a1264 + temp_v2 + 0x84) = 0;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(&DAT_004a1264 + temp_v1 + temp_v0 + 0xc4) = 0;
    } while (temp_v4 != 0);
    temp_v5 = temp_v5 + 1;
    *(unsigned short *)(temp_v0 + 0x4a13d8) = 0;
    *(unsigned short *)(temp_v0 + 0x4a13da) = 0;
    *(unsigned short *)(temp_v0 + 0x4a13c0) = 0;
    *(unsigned short *)(temp_v0 + 0x4a13ca) = 0;
    *(unsigned short *)(temp_v0 + 0x4a13cc) = 0;
    *(unsigned short *)(temp_v0 + 0x4a13ce) = 0;
    *(unsigned char *)(temp_v0 + 0x4a13d0) = 0;
    *(unsigned char *)(temp_v0 + 0x4a13d1) = 0;
  } while (temp_v5 < 0xa0);
  DAT_00447a2c = 0;
  DAT_0049f954 = 0xffffffff;
  return;
}

} /* extern "C" */
