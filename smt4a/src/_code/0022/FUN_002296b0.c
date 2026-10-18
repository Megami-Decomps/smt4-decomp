/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002296b0` (_code @ 0x2296b0, 0x298 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0060fc08; /* 0x60fc08 */
extern unsigned char DAT_0060fc09; /* 0x60fc09 */
extern unsigned int DAT_0060ff8c; /* 0x60ff8c */
extern unsigned int DAT_0060ff94; /* 0x60ff94 */
extern unsigned int DAT_0060ff98; /* 0x60ff98 */
extern unsigned char DAT_0060ff9c; /* 0x60ff9c */
extern unsigned int DAT_0060ffa0; /* 0x60ffa0 */
extern unsigned int DAT_006105e4; /* 0x6105e4 */

/* Supplied declaration required: FUN_0014bef4. */
extern int FUN_00162e8c(void);


void FUN_002296b0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  
  temp_v1 = FUN_00162e8c();
  if (param_1 == 0) {
    *(unsigned char *)(temp_v1 + 0xe04) = 0xb;
    *(unsigned char *)(temp_v1 + 0xe05) = 0xb;
  }
  *(unsigned char *)(temp_v1 + 0xe06) = 5;
  *(unsigned char *)(temp_v1 + 0xe07) = 5;
  DAT_0060ff94 = 0;
  DAT_0060ff98 = 0;
  DAT_0060ffa0 = 0;
  DAT_0060ff9c = 0;
  *(unsigned char *)(temp_v1 + 0xe08) = 0;
  *(unsigned char *)(temp_v1 + 0xe09) = 0;
  *(unsigned char *)(temp_v1 + 0xe0a) = 0;
  *(unsigned char *)(temp_v1 + 0xe0b) = 0;
  DAT_006105e4 = 0;
  DAT_0060fc08 = *(unsigned char *)(temp_v1 + 0xe06);
  DAT_0060fc09 = *(unsigned char *)(temp_v1 + 0xe07);
  temp_v3 = 0;
  DAT_0060ff8c = 1;
  if ('\0' < *(char *)(temp_v1 + 0xe05)) {
    do {
      temp_v2 = 0;
      if ('\0' < *(char *)(temp_v1 + 0xe04)) {
        do {
          temp_v4 = 0;
          if ((((temp_v3 == 0) || ((int)*(char *)(temp_v1 + 0xe05) - 1U == temp_v3 || temp_v2 == 0)) ||
              ((int)*(char *)(temp_v1 + 0xe04) - 1U == temp_v2)) || (((temp_v3 | temp_v2) & 1) == 0)) {
            temp_v4 = 1;
          }
          temp_v5 = temp_v1 + temp_v3 * 0x78 + temp_v2 * 8;
          temp_v2 = temp_v2 + 1;
          *(unsigned char *)(temp_v5 + 0x3c) = temp_v4;
          *(unsigned char *)(temp_v5 + 0x3d) = 0;
          *(unsigned char *)(temp_v5 + 0x3e) = 0;
          *(unsigned char *)(temp_v5 + 0x3f) = 0;
          *(unsigned char *)(temp_v5 + 0x41) = 0;
        } while ((int)temp_v2 < (int)*(char *)(temp_v1 + 0xe04));
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 < (int)*(char *)(temp_v1 + 0xe05));
  }
  temp_v3 = FUN_0014bef4(100);
  if (temp_v3 >= 0x32) {
    temp_v5 = FUN_0014bef4(*(char *)(temp_v1 + 0xe04) - 8);
    *(unsigned char *)(temp_v1 + ((temp_v5 + 4U) & 0xfffefffe) * 8 + 0xb4) = 1;
    temp_v5 = FUN_0014bef4(*(char *)(temp_v1 + 0xe04) - 8);
    *(unsigned char *)
     (temp_v1 + (*(char *)(temp_v1 + 0xe05) - 2) * 0x78 + ((temp_v5 + 4U) & 0xfffefffe) * 8 + 0x3c) = 1;
    temp_v5 = FUN_0014bef4(*(char *)(temp_v1 + 0xe05) - 4);
    *(unsigned char *)(temp_v1 + ((temp_v5 + 2U) & 0xfffefffe) * 0x78 + 0x44) = 1;
    temp_v0 = *(char *)(temp_v1 + 0xe04);
    temp_v5 = FUN_0014bef4(*(char *)(temp_v1 + 0xe05) - 4);
    *(unsigned char *)(temp_v1 + ((temp_v5 + 2U) & 0xfffefffe) * 0x78 + (temp_v0 - 2) * 8 + 0x3c) = 1;
    return;
  }
  temp_v5 = FUN_0014bef4(*(char *)(temp_v1 + 0xe04) - 4);
  *(unsigned char *)(temp_v1 + ((temp_v5 + 2U) & 0xfffefffe) * 8 + 0xb4) = 1;
  temp_v5 = FUN_0014bef4(*(char *)(temp_v1 + 0xe04) - 4);
  *(unsigned char *)
   (temp_v1 + (*(char *)(temp_v1 + 0xe05) - 2) * 0x78 + ((temp_v5 + 2U) & 0xfffefffe) * 8 + 0x3c) = 1;
  temp_v5 = FUN_0014bef4(*(char *)(temp_v1 + 0xe05) - 8);
  *(unsigned char *)(temp_v1 + ((temp_v5 + 4U) & 0xfffefffe) * 0x78 + 0x44) = 1;
  temp_v0 = *(char *)(temp_v1 + 0xe04);
  temp_v5 = FUN_0014bef4(*(char *)(temp_v1 + 0xe05) - 8);
  *(unsigned char *)(temp_v1 + ((temp_v5 + 4U) & 0xfffefffe) * 0x78 + (temp_v0 - 2) * 8 + 0x3c) = 1;
  return;
}
