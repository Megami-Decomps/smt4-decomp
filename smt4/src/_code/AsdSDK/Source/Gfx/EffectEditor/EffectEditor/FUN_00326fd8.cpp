/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00326fd8` (_code @ 0x326fd8, 0x41c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int asdDebugLog(int, int, int, unsigned char *);
int FUN_0024dd80(int);
int padIsButtonRepeat(...);
int padIsButtonPressed(...);
int FUN_003f6cd8(void);

extern unsigned char LAB_003272bc; /* 0x3272bc */
extern unsigned char LAB_003272d4; /* 0x3272d4 */
extern unsigned char LAB_003272e8; /* 0x3272e8 */
extern float DAT_0044fea0; /* 0x44fea0 */
extern float DAT_0044fea4; /* 0x44fea4 */
extern float DAT_0044fea8; /* 0x44fea8 */
extern float DAT_0044feac; /* 0x44feac */
extern float DAT_004d9270; /* 0x4d9270 */
extern float DAT_004d9274; /* 0x4d9274 */
extern float DAT_004d9278; /* 0x4d9278 */
extern float DAT_004ea91c; /* 0x4ea91c */
extern float DAT_004ea920; /* 0x4ea920 */
extern float DAT_004ea924; /* 0x4ea924 */
extern float DAT_004ea928; /* 0x4ea928 */
extern float DAT_004ea95c; /* 0x4ea95c */
extern float DAT_004ea960; /* 0x4ea960 */
extern float DAT_004ea964; /* 0x4ea964 */
extern float DAT_004ea968; /* 0x4ea968 */
extern float DAT_004ea96c; /* 0x4ea96c */
extern float DAT_004ea970; /* 0x4ea970 */
extern float DAT_004ea974; /* 0x4ea974 */
extern float DAT_004ea978; /* 0x4ea978 */
extern float DAT_004ea97c; /* 0x4ea97c */
extern float DAT_004ea980; /* 0x4ea980 */
extern float DAT_004ea984; /* 0x4ea984 */
extern float DAT_004ea988; /* 0x4ea988 */

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
/* Supplied declaration required: asdDebugLog. */
/* Supplied declaration required: FUN_0024dd80. */
/* Supplied declaration required: padIsButtonRepeat. */
/* Supplied declaration required: padIsButtonPressed. */
/* Supplied declaration required: FUN_003f6cd8. */


unsigned int FUN_00326fd8(void)

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
  asdDebugLog(8,8,0,&LAB_003272bc);
  asdDebugLog(8,0x14,0,&LAB_003272d4);
  asdDebugLog(8,0x20,0,&LAB_003272e8);
  temp_v2 = padIsButtonRepeat(5);
  temp_v5 = 10.0f;
  if (temp_v2 == 0) {
    FUN_0024dd80(5);
    temp_v2 = padIsButtonRepeat();
    if (temp_v2 != 0) {
      DAT_004d9274 = DAT_004d9274 - temp_v5;
      temp_v3 = 3;
    }
    else {
      temp_v2 = padIsButtonRepeat(6);
      if (temp_v2 == 0) {
        FUN_0024dd80(6);
        temp_v2 = padIsButtonRepeat();
        if (temp_v2 != 0) {
          DAT_004d9274 = DAT_004d9274 + temp_v5;
          temp_v3 = 3;
        }
      }
      else {
        DAT_004d9274 = DAT_004d9274 + temp_v5;
        temp_v3 = 3;
      }
    }
  }
  else {
    DAT_004d9274 = DAT_004d9274 - temp_v5;
    temp_v3 = 3;
  }
  temp_v2 = padIsButtonRepeat(7);
  temp_v6 = (unsigned long long)(unsigned int)temp_v5 << 0x20;
  if (temp_v2 == 0) {
    FUN_0024dd80(7);
    temp_v2 = padIsButtonRepeat();
    if (temp_v2 != 0) {
      temp_v3 = temp_v3 | 2;
      temp_v6 = romwright_piece_4_4(0xc1200000,(int)temp_v6);
    }
    else {
      temp_v2 = padIsButtonRepeat(8);
      if (temp_v2 == 0) {
        FUN_0024dd80(8);
        temp_v2 = padIsButtonRepeat();
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
  if (!(DAT_004d9270 == temp_v5 && DAT_004d9278 == temp_v5)) {
    DAT_004ea91c = DAT_004d9270;
    DAT_004ea924 = DAT_004d9278;
    temp_v9 = CONCAT44(romwright_sqrt_4(DAT_004d9270 * DAT_004d9270 + temp_v5 * temp_v5 + DAT_004d9278 * DAT_004d9278
                          ),temp_v5);
    temp_v4 = DAT_004d9270;
    temp_v7 = DAT_004d9278;
    DAT_004ea920 = temp_v5;
    DAT_004ea928 = temp_v5;
    temp_v2 = padIsButtonRepeat(3);
    temp_v10 = 100.0f;
    if (temp_v2 == 0) {
      FUN_0024dd80(3);
      temp_v2 = padIsButtonRepeat();
      if (temp_v2 != 0) {
        temp_v3 = temp_v3 | 2;
        temp_v6 = CONCAT44((int)((unsigned long long)temp_v6 >> 0x20),
                         (temp_v10 / (float)((unsigned long long)temp_v9 >> 0x20)) * 0.08726646f);
      }
      else {
        temp_v2 = padIsButtonRepeat(4);
        if (temp_v2 == 0) {
          FUN_0024dd80(4);
          temp_v2 = padIsButtonRepeat();
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
      FUN_003f6cd8();
      temp_v10 = temp_v4 * DAT_004ea95c + temp_v8 * DAT_004ea96c + temp_v7 * DAT_004ea97c;
      temp_v0 = temp_v4 * DAT_004ea964 + temp_v8 * DAT_004ea974 + temp_v7 * DAT_004ea984;
      temp_v1 = temp_v4 * DAT_004ea960 + temp_v8 * DAT_004ea970 + temp_v7 * DAT_004ea980;
      temp_v8 = temp_v4 * DAT_004ea968 + temp_v8 * DAT_004ea978 + temp_v7 * DAT_004ea988;
    }
    DAT_004ea928 = temp_v8;
    DAT_004ea920 = temp_v1;
    DAT_004d9278 = temp_v0;
    DAT_004d9270 = temp_v10;
    temp_v4 = romwright_sqrt_4(DAT_004d9270 * DAT_004d9270 + DAT_004ea920 * DAT_004ea920 +
                 DAT_004d9278 * DAT_004d9278);
    DAT_004ea91c = DAT_004d9270;
    DAT_004ea924 = DAT_004d9278;
    if (temp_v5 < temp_v4) {
      DAT_004ea91c = DAT_004d9270 / temp_v4;
      DAT_004ea920 = DAT_004ea920 / temp_v4;
      DAT_004ea924 = DAT_004d9278 / temp_v4;
    }
    DAT_0044feac = DAT_004ea928;
    DAT_0044fea0 = DAT_004ea91c;
    DAT_0044fea4 = DAT_004ea920;
    DAT_0044fea8 = DAT_004ea924;
  }
  temp_v5 = (float)((unsigned long long)temp_v6 >> 0x20);
  DAT_004d9270 = DAT_004d9270 + DAT_0044fea0 * temp_v5;
  DAT_004d9278 = DAT_004d9278 + DAT_0044fea8 * temp_v5;
  temp_v2 = padIsButtonPressed(1);
  if (temp_v2 == 0) {
    FUN_0024dd80(1);
    temp_v2 = padIsButtonPressed();
    if (temp_v2 == 0) {
      return temp_v3 | 0x200000;
    }
  }
  return temp_v3 & 0xfffffffe;
}

} /* extern "C" */
