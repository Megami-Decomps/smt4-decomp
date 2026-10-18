/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002852f0` (_code @ 0x2852f0, 0x280 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004bce8c; /* 0x4bce8c */
extern unsigned char DAT_004bce8d; /* 0x4bce8d */
extern unsigned int DAT_004bd0d0; /* 0x4bd0d0 */
extern unsigned int DAT_004bd0d8; /* 0x4bd0d8 */
extern unsigned char DAT_004bd0dc; /* 0x4bd0dc */

/* Supplied declaration required: FUN_002c09f4. */
extern int FUN_002c2950(void);


void FUN_002852f0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  
  temp_v1 = FUN_002c2950();
  if (param_1 == 0) {
    *(unsigned char *)(temp_v1 + 0xdd0) = 0xb;
    *(unsigned char *)(temp_v1 + 0xdd1) = 0xb;
  }
  *(unsigned char *)(temp_v1 + 0xdd2) = 5;
  *(unsigned char *)(temp_v1 + 0xdd3) = 5;
  DAT_004bd0d8 = 0;
  DAT_004bd0dc = 0;
  *(unsigned char *)(temp_v1 + 0xdd4) = 0;
  *(unsigned char *)(temp_v1 + 0xdd5) = 0;
  *(unsigned char *)(temp_v1 + 0xdd6) = 0;
  *(unsigned char *)(temp_v1 + 0xdd7) = 0;
  DAT_004bce8c = 5;
  DAT_004bce8d = 5;
  DAT_004bd0d0 = 1;
  temp_v3 = 0;
  if ('\0' < *(char *)(temp_v1 + 0xdd1)) {
    do {
      temp_v2 = 0;
      if ('\0' < *(char *)(temp_v1 + 0xdd0)) {
        do {
          temp_v4 = 0;
          if ((((temp_v3 == 0) || ((int)*(char *)(temp_v1 + 0xdd1) - 1U == temp_v3 || temp_v2 == 0)) ||
              ((int)*(char *)(temp_v1 + 0xdd0) - 1U == temp_v2)) || (((temp_v3 | temp_v2) & 1) == 0)) {
            temp_v4 = 1;
          }
          temp_v5 = temp_v1 + temp_v3 * 0x78 + temp_v2 * 8;
          temp_v2 = temp_v2 + 1;
          *(unsigned char *)(temp_v5 + 0x3c) = temp_v4;
          *(unsigned char *)(temp_v5 + 0x3d) = 0;
          *(unsigned char *)(temp_v5 + 0x3e) = 0;
          *(unsigned char *)(temp_v5 + 0x3f) = 0;
          *(unsigned char *)(temp_v5 + 0x41) = 0;
        } while ((int)temp_v2 < (int)*(char *)(temp_v1 + 0xdd0));
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < (int)*(char *)(temp_v1 + 0xdd1));
  }
  temp_v3 = FUN_002c09f4(100);
  if (temp_v3 >= 0x32) {
    temp_v5 = FUN_002c09f4(*(char *)(temp_v1 + 0xdd0) - 8);
    *(unsigned char *)(temp_v1 + ((temp_v5 + 4U) & 0xfffefffe) * 8 + 0xb4) = 1;
    temp_v5 = FUN_002c09f4(*(char *)(temp_v1 + 0xdd0) - 8);
    *(unsigned char *)
     (temp_v1 + (*(char *)(temp_v1 + 0xdd1) - 2) * 0x78 + ((temp_v5 + 4U) & 0xfffefffe) * 8 + 0x3c) = 1;
    temp_v5 = FUN_002c09f4(*(char *)(temp_v1 + 0xdd1) - 4);
    *(unsigned char *)(temp_v1 + ((temp_v5 + 2U) & 0xfffefffe) * 0x78 + 0x44) = 1;
    temp_v0 = *(char *)(temp_v1 + 0xdd0);
    temp_v5 = FUN_002c09f4(*(char *)(temp_v1 + 0xdd1) - 4);
    *(unsigned char *)(temp_v1 + ((temp_v5 + 2U) & 0xfffefffe) * 0x78 + (temp_v0 - 2) * 8 + 0x3c) = 1;
    return;
  }
  temp_v5 = FUN_002c09f4(*(char *)(temp_v1 + 0xdd0) - 4);
  *(unsigned char *)(temp_v1 + ((temp_v5 + 2U) & 0xfffefffe) * 8 + 0xb4) = 1;
  temp_v5 = FUN_002c09f4(*(char *)(temp_v1 + 0xdd0) - 4);
  *(unsigned char *)
   (temp_v1 + (*(char *)(temp_v1 + 0xdd1) - 2) * 0x78 + ((temp_v5 + 2U) & 0xfffefffe) * 8 + 0x3c) = 1;
  temp_v5 = FUN_002c09f4(*(char *)(temp_v1 + 0xdd1) - 8);
  *(unsigned char *)(temp_v1 + ((temp_v5 + 4U) & 0xfffefffe) * 0x78 + 0x44) = 1;
  temp_v0 = *(char *)(temp_v1 + 0xdd0);
  temp_v5 = FUN_002c09f4(*(char *)(temp_v1 + 0xdd1) - 8);
  *(unsigned char *)(temp_v1 + ((temp_v5 + 4U) & 0xfffefffe) * 0x78 + (temp_v0 - 2) * 8 + 0x3c) = 1;
  return;
}
