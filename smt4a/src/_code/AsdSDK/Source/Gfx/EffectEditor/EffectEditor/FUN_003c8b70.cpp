/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c8b70` (_code @ 0x3c8b70, 0x41c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_00164af0(...);
int FUN_001656a0(...);
int FUN_00202178(int);
int FUN_00243ce8(int, int, int, unsigned char *);
int FUN_00514878(void);

extern unsigned char LAB_003c8e54; /* 0x3c8e54 */
extern unsigned char LAB_003c8e6c; /* 0x3c8e6c */
extern unsigned char LAB_003c8e80; /* 0x3c8e80 */
extern float DAT_0059f020; /* 0x59f020 */
extern float DAT_0059f024; /* 0x59f024 */
extern float DAT_0059f028; /* 0x59f028 */
extern float DAT_0059f02c; /* 0x59f02c */
extern float DAT_006352f0; /* 0x6352f0 */
extern float DAT_006352f4; /* 0x6352f4 */
extern float DAT_006352f8; /* 0x6352f8 */
extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern float DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern float DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern float DAT_00647348; /* 0x647348 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_00164af0. */
/* Supplied declaration required: FUN_001656a0. */
/* Supplied declaration required: FUN_00202178. */
/* Supplied declaration required: FUN_00243ce8. */
/* Supplied declaration required: FUN_00514878. */


unsigned int FUN_003c8b70(void)

{
/* irregular: 6 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  long long temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  
  temp_v3 = 1;
  FUN_00243ce8(8,8,0,&LAB_003c8e54);
  FUN_00243ce8(8,0x14,0,&LAB_003c8e6c);
  FUN_00243ce8(8,0x20,0,&LAB_003c8e80);
  temp_v2 = FUN_00164af0(5);
  temp_v5 = 10.0f;
  if (temp_v2 == 0) {
    FUN_00202178(5);
    temp_v2 = FUN_00164af0();
    if (temp_v2 != 0) {
      DAT_006352f4 = DAT_006352f4 - temp_v5;
      temp_v3 = 3;
    }
    else {
      temp_v2 = FUN_00164af0(6);
      if (temp_v2 == 0) {
        FUN_00202178(6);
        temp_v2 = FUN_00164af0();
        if (temp_v2 != 0) {
          DAT_006352f4 = DAT_006352f4 + temp_v5;
          temp_v3 = 3;
        }
      }
      else {
        DAT_006352f4 = DAT_006352f4 + temp_v5;
        temp_v3 = 3;
      }
    }
  }
  else {
    DAT_006352f4 = DAT_006352f4 - temp_v5;
    temp_v3 = 3;
  }
  temp_v2 = FUN_00164af0(7);
  temp_v6 = (unsigned long long)(unsigned int)temp_v5 << 0x20;
  if (temp_v2 == 0) {
    FUN_00202178(7);
    temp_v2 = FUN_00164af0();
    if (temp_v2 != 0) {
      temp_v3 = temp_v3 | 2;
      temp_v6 = romwright_piece_4_4(0xc1200000,(int)temp_v6);
    }
    else {
      temp_v2 = FUN_00164af0(8);
      if (temp_v2 == 0) {
        FUN_00202178(8);
        temp_v2 = FUN_00164af0();
        if (temp_v2 == 0) {
          temp_v6 = romwright_piece_4_4((int)temp_v6,(int)temp_v6);
        }
        else {
          temp_v3 = temp_v3 | 2;
        }
      }
      else {
        temp_v3 = temp_v3 | 2;
      }
    }
  }
  else {
    temp_v3 = temp_v3 | 2;
    temp_v6 = romwright_piece_4_4(0xc1200000,(int)temp_v6);
  }
  temp_v5 = (float)temp_v6;
  if (!(DAT_006352f0 == temp_v5 && DAT_006352f8 == temp_v5)) {
    DAT_006472dc = DAT_006352f0;
    DAT_006472e4 = DAT_006352f8;
    temp_v9 = CONCAT44(romwright_sqrt_4(DAT_006352f0 * DAT_006352f0 + temp_v5 * temp_v5 + DAT_006352f8 * DAT_006352f8
                          ),temp_v5);
    temp_v4 = DAT_006352f0;
    temp_v7 = DAT_006352f8;
    DAT_006472e0 = temp_v5;
    DAT_006472e8 = temp_v5;
    temp_v2 = FUN_00164af0(3);
    temp_v10 = 100.0f;
    if (temp_v2 == 0) {
      FUN_00202178(3);
      temp_v2 = FUN_00164af0();
      if (temp_v2 != 0) {
        temp_v3 = temp_v3 | 2;
        temp_v6 = CONCAT44((int)((unsigned long long)temp_v6 >> 0x20),
                         (temp_v10 / (float)((unsigned long long)temp_v9 >> 0x20)) * 0.08726646f);
      }
      else {
        temp_v2 = FUN_00164af0(4);
        if (temp_v2 == 0) {
          FUN_00202178(4);
          temp_v2 = FUN_00164af0();
          if (temp_v2 != 0) {
            temp_v3 = temp_v3 | 2;
            temp_v6 = CONCAT44((int)((unsigned long long)temp_v6 >> 0x20),
                             (temp_v10 / (float)((unsigned long long)temp_v9 >> 0x20)) * -0.08726646f);
          }
        }
        else {
          temp_v3 = temp_v3 | 2;
          temp_v6 = CONCAT44((int)((unsigned long long)temp_v6 >> 0x20),
                           (temp_v10 / (float)((unsigned long long)temp_v9 >> 0x20)) * -0.08726646f);
        }
      }
    }
    else {
      temp_v3 = temp_v3 | 2;
      temp_v6 = CONCAT44((int)((unsigned long long)temp_v6 >> 0x20),
                       (temp_v10 / (float)((unsigned long long)temp_v9 >> 0x20)) * 0.08726646f);
    }
    temp_v8 = (float)temp_v9;
    temp_v10 = temp_v4;
    temp_v0 = temp_v7;
    temp_v1 = temp_v8;
    if ((float)temp_v6 != temp_v5) {
      FUN_00514878();
      temp_v10 = temp_v4 * DAT_0064731c + temp_v8 * DAT_0064732c + temp_v7 * DAT_0064733c;
      temp_v0 = temp_v4 * DAT_00647324 + temp_v8 * DAT_00647334 + temp_v7 * DAT_00647344;
      temp_v1 = temp_v4 * DAT_00647320 + temp_v8 * DAT_00647330 + temp_v7 * DAT_00647340;
      temp_v8 = temp_v4 * DAT_00647328 + temp_v8 * DAT_00647338 + temp_v7 * DAT_00647348;
    }
    DAT_006472e8 = temp_v8;
    DAT_006472e0 = temp_v1;
    DAT_006352f8 = temp_v0;
    DAT_006352f0 = temp_v10;
    temp_v4 = romwright_sqrt_4(DAT_006352f0 * DAT_006352f0 + DAT_006472e0 * DAT_006472e0 +
                 DAT_006352f8 * DAT_006352f8);
    DAT_006472dc = DAT_006352f0;
    DAT_006472e4 = DAT_006352f8;
    if (temp_v5 < temp_v4) {
      DAT_006472dc = DAT_006352f0 / temp_v4;
      DAT_006472e0 = DAT_006472e0 / temp_v4;
      DAT_006472e4 = DAT_006352f8 / temp_v4;
    }
    DAT_0059f02c = DAT_006472e8;
    DAT_0059f020 = DAT_006472dc;
    DAT_0059f024 = DAT_006472e0;
    DAT_0059f028 = DAT_006472e4;
  }
  temp_v5 = (float)((unsigned long long)temp_v6 >> 0x20);
  DAT_006352f0 = DAT_006352f0 + DAT_0059f020 * temp_v5;
  DAT_006352f8 = DAT_006352f8 + DAT_0059f028 * temp_v5;
  temp_v2 = FUN_001656a0(1);
  if (temp_v2 == 0) {
    FUN_00202178(1);
    temp_v2 = FUN_001656a0();
    if (temp_v2 == 0) {
      return temp_v3 | 0x200000;
    }
  }
  return temp_v3 & 0xfffffffe;
}

} /* extern "C" */
