/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc0a8` (_code @ 0x1fc0a8, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00287aec(void);

extern int g_lmapScene; /* 0x447e88 */
extern int DAT_0044cd88; /* 0x44cd88 */

/* Supplied declaration required: FUN_00287aec. */


void FUN_001fc0a8(void)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  float temp_v11;
  
  if (*(short *)(DAT_0044cd88 + 4) == 0x65) {
    temp_v3 = 0;
    do {
      temp_v5 = DAT_0044cd88 + temp_v3 * 0x4c;
      temp_v8 = *(char *)(temp_v5 + 0x58) != '\0';
      temp_v0 = '\0';
      if (temp_v8) {
        temp_v0 = *(char *)(temp_v5 + 0x94);
      }
      if (temp_v8 && temp_v0 != '\0') {
        temp_v10 = *(unsigned int *)(g_lmapScene + 0x1c);
        FUN_00287aec();
        *(unsigned int *)(temp_v5 + 0x9c) = temp_v10;
        *(unsigned int *)(temp_v5 + 0xa0) = 999;
      }
      temp_v5 = DAT_0044cd88;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x20);
    temp_v3 = 0;
    do {
      temp_v4 = -1;
      temp_v1 = 0;
      temp_v11 = 90000.0f;
      do {
        temp_v2 = temp_v5 + temp_v1 * 0x4c;
        temp_v8 = *(char *)(temp_v2 + 0x58) != '\0';
        temp_v6 = 0;
        if (temp_v8) {
          temp_v6 = *(unsigned int *)(temp_v2 + 0x5c);
        }
        temp_v9 = temp_v6 != 0;
        if (temp_v8 && temp_v9) {
          temp_v6 = (unsigned int)*(unsigned char *)(temp_v2 + 0x94);
        }
        if ((((temp_v8 && temp_v9) && temp_v6 != 0) && (*(int *)(temp_v2 + 0xa0) == 999)) &&
           (*(float *)(temp_v2 + 0x9c) < temp_v11)) {
          temp_v4 = temp_v1;
          temp_v11 = *(float *)(temp_v2 + 0x9c);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x20);
      temp_v4 = temp_v5 + temp_v4 * 0x4c;
      *(int *)(temp_v4 + 0xa0) = temp_v3;
      *(int *)(temp_v4 + 0x98) = temp_v3;
      temp_v10 = *(unsigned int *)(temp_v4 + 0x68);
      temp_v7 = *(unsigned int *)(temp_v4 + 0x6c);
      temp_v1 = temp_v5 + temp_v3 * 0x4c;
      temp_v3 = temp_v3 + 1;
      *(unsigned int *)(temp_v1 + 0x9e4) = *(unsigned int *)(temp_v4 + 100);
      *(unsigned int *)(temp_v1 + 0x9e8) = temp_v10;
      *(unsigned int *)(temp_v1 + 0x9ec) = temp_v7;
      *(unsigned int *)(temp_v1 + 0x9f0) = *(unsigned int *)(temp_v4 + 0x70);
      *(unsigned int *)(temp_v1 + 0x9f4) = *(unsigned int *)(temp_v4 + 0x74);
      *(unsigned char *)(temp_v1 + 0x9f8) = 1;
    } while (temp_v3 < 3);
    temp_v3 = 0;
    do {
      temp_v4 = temp_v5 + temp_v3 * 0x4c;
      temp_v8 = *(char *)(temp_v4 + 0x58) != '\0';
      temp_v6 = 0;
      if (temp_v8) {
        temp_v6 = *(unsigned int *)(temp_v4 + 0x5c);
      }
      temp_v9 = temp_v6 != 0;
      if (temp_v8 && temp_v9) {
        temp_v6 = (unsigned int)*(unsigned char *)(temp_v4 + 0x94);
      }
      if ((((temp_v8 && temp_v9) && temp_v6 != 0) && (*(int *)(temp_v4 + 0xa0) == 999)) &&
         (*(int *)(temp_v4 + 0x98) != -1)) {
        *(unsigned int *)(temp_v4 + 0x98) = 0xffffffff;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x20);
  }
  return;
}

} /* extern "C" */
