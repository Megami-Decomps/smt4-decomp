/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00264368` (_code @ 0x264368, 0x2d8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447060; /* 0x447060 */
extern int DAT_004474f4; /* 0x4474f4 */
extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern signed char DAT_0049f934; /* 0x49f934 */
extern unsigned int *DAT_0049f938; /* 0x49f938 */

extern int FUN_00276550(void);
/* Supplied declaration required: FUN_0027f150. */
/* Supplied declaration required: FUN_00287d74. */
extern int FUN_002bffbc(unsigned int);
extern int FUN_002c17d4(unsigned int);


void FUN_00264368(void)

{
/* irregular: 2 unstructured edge(s); 2 goto(s); 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v2 = DAT_004474f4;
  temp_v1 = DAT_00447060;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v0 = 0;
  temp_v7 = 3.0f;
  temp_v9 = 0x43340000;
  temp_v8 = 0x3f800000;
  temp_v6 = 0.0f;
  *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_00447060 + 0x50);
  if (*(char *)(temp_v1 + 0x94) != '\0') {
    *(unsigned char *)(temp_v2 + 0xb0) = 0;
    *(unsigned char *)(temp_v2 + 0xb1) = 0;
    *(unsigned short *)(temp_v2 + 0xb2) = 10;
    *(unsigned short *)(temp_v2 + 0xb4) = 0;
    *(unsigned int *)(temp_v2 + 0xb8) = 0;
    *(unsigned int *)(temp_v2 + 0xbc) = 0;
    *(unsigned int *)(temp_v2 + 0xc0) = 0x3f800000;
  }
  if (0 < *(short *)(temp_v2 + 0xb2)) {
    *(short *)(temp_v2 + 0xb2) = *(short *)(temp_v2 + 0xb2) - 1;
  }
  puVar2 = &DAT_0049f91c;
  if (DAT_0049f934 == '\0') {
    puVar2 = DAT_0049f938;
  }
  if (!(DAT_0049f934 != '\0' || puVar2 != (unsigned int *)0x0)) {
    if (*(char *)(temp_v2 + 0xb0) != '\0') goto LAB_0026455c;
    if (((*(char *)(temp_v2 + 0xb1) != '\0') && (temp_v2 = FUN_002c17d4(8), temp_v2 == 0)) &&
       (temp_v2 = FUN_002c17d4(7), temp_v2 == 0)) {
      *(unsigned char *)(DAT_004474f4 + 0xb1) = 0;
    }
    if (*(short *)(DAT_004474f4 + 0xb2) < 7) {
      temp_v2 = FUN_002c17d4(8);
      temp_v3 = temp_v2 != 0;
      temp_v2 = FUN_002c17d4(7);
      temp_v4 = temp_v2 != 0;
      if ((*(short *)(DAT_004474f4 + 0xb2) == 0) &&
         ((temp_v2 = FUN_00276550(), temp_v2 != 0 ||
          (((temp_v2 = FUN_002c17d4(8), temp_v2 != 0 && (temp_v2 = FUN_002c17d4(7), temp_v2 != 0)) &&
           ((temp_v2 = FUN_002bffbc(8), temp_v2 == 0 &&
            ((temp_v2 = FUN_002bffbc(7), temp_v2 == 0 && (*(char *)(DAT_004474f4 + 0xb1) == '\0'))))))))
         )) {
        temp_v3 = 0;
        temp_v4 = 0;
        temp_v0 = 1;
      }
    }
  }
  temp_v2 = DAT_004474f4;
  if (*(char *)(DAT_004474f4 + 0xb0) == '\0') {
    if (temp_v0) {
      *(unsigned char *)(DAT_004474f4 + 0xb0) = 1;
      temp_v5 = *(float *)(temp_v2 + 0x18);
      *(float *)(temp_v2 + 0x20c) = temp_v6;
      *(float *)(temp_v2 + 0x210) = temp_v6;
      *(float *)(temp_v2 + 0xb8) = temp_v5;
      *(unsigned int *)(temp_v2 + 0xbc) = temp_v9;
      FUN_00287d74();
      temp_v2 = DAT_004474f4;
      *(unsigned short *)(DAT_004474f4 + 0xb4) = 0;
      if (temp_v5 < temp_v6) {
        *(unsigned int *)(temp_v2 + 0xc0) = 0xbf800000;
      }
      else {
        *(unsigned int *)(temp_v2 + 0xc0) = temp_v8;
      }
      if (*(char *)(temp_v2 + 0xb0) != '\0') goto LAB_0026455c;
    }
    if (temp_v3) {
      temp_v7 = *(float *)(DAT_004474f4 + 0x18) + temp_v7;
      *(float *)(DAT_004474f4 + 0x18) = temp_v7;
    }
    else if (temp_v4) {
      temp_v7 = *(float *)(DAT_004474f4 + 0x18) - temp_v7;
      *(float *)(DAT_004474f4 + 0x18) = temp_v7;
    }
  }
  else {
LAB_0026455c:
    temp_v5 = 15.0f;
    temp_v7 = *(float *)(DAT_004474f4 + 0x18);
    FUN_0027f150();
    temp_v2 = DAT_004474f4;
    if (15.5f >= temp_v7) {
      *(unsigned int *)(DAT_004474f4 + 0x18) = *(unsigned int *)(DAT_004474f4 + 0xbc);
      *(unsigned char *)(temp_v2 + 0xb0) = 0;
      *(unsigned short *)(temp_v2 + 0xb2) = 10;
      *(unsigned char *)(temp_v2 + 0xb1) = 1;
    }
    else {
      if (temp_v6 <= *(float *)(DAT_004474f4 + 0xc0)) {
        temp_v5 = *(float *)(DAT_004474f4 + 0x18) + temp_v5;
      }
      else {
        temp_v5 = *(float *)(DAT_004474f4 + 0x18) - temp_v5;
      }
      *(float *)(DAT_004474f4 + 0x18) = temp_v5;
    }
    if (*(char *)(DAT_004474f4 + 0xb0) != '\0') {
      *(unsigned int *)(temp_v1 + 0x50) = *(unsigned int *)(DAT_004474f4 + 0x18);
      return;
    }
  }
  temp_v2 = DAT_004474f4;
  temp_v7 = *(float *)(DAT_004474f4 + 0x18);
  if (temp_v7 < temp_v6) {
    temp_v7 = temp_v7 + 360.0f;
    *(float *)(DAT_004474f4 + 0x18) = temp_v7;
  }
  if ((int)temp_v7 >= 0x43b40000) {
    *(float *)(temp_v2 + 0x18) = temp_v7 - 360.0f;
  }
  *(unsigned int *)(temp_v1 + 0x50) = *(unsigned int *)(DAT_004474f4 + 0x18);
  return;
}
