/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119c28` (_code @ 0x119c28, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int phaseCosInterpolate(void);
int FUN_002b70cc(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern float fRam004e3068; /* 0x4e3068 */
extern float fRam004e306c; /* 0x4e306c */
extern float fRam004e3070; /* 0x4e3070 */
extern float fRam004e3074; /* 0x4e3074 */
extern float fRam004e3078; /* 0x4e3078 */
extern float fRam004e307c; /* 0x4e307c */
extern float fRam004e3080; /* 0x4e3080 */
extern float fRam004e3084; /* 0x4e3084 */
extern float fRam004e3088; /* 0x4e3088 */
extern float fRam004e308c; /* 0x4e308c */
extern float fRam004e3090; /* 0x4e3090 */
extern float fRam004e3094; /* 0x4e3094 */
extern float fRam004e3098; /* 0x4e3098 */
extern float fRam004e309c; /* 0x4e309c */
extern float fRam004e30a0; /* 0x4e30a0 */
extern float fRam004e30a4; /* 0x4e30a4 */
extern float fRam004e30a8; /* 0x4e30a8 */
extern float fRam004e30ac; /* 0x4e30ac */
extern signed char cRam004e30c8; /* 0x4e30c8 */
extern float DAT_004e30d4; /* 0x4e30d4 */
extern float DAT_004e30d8; /* 0x4e30d8 */
extern float DAT_004e30dc; /* 0x4e30dc */
extern float DAT_004e30e0; /* 0x4e30e0 */
extern float DAT_004e30e4; /* 0x4e30e4 */
extern float DAT_004e30e8; /* 0x4e30e8 */
extern float DAT_004e30ec; /* 0x4e30ec */
extern float DAT_004e30f0; /* 0x4e30f0 */
extern float DAT_004e30f4; /* 0x4e30f4 */
extern float DAT_004e30f8; /* 0x4e30f8 */
extern float DAT_004e30fc; /* 0x4e30fc */
extern float DAT_004e3100; /* 0x4e3100 */
extern float DAT_004e3104; /* 0x4e3104 */
extern float DAT_004e3108; /* 0x4e3108 */
extern float DAT_004e310c; /* 0x4e310c */
extern float DAT_004e3110; /* 0x4e3110 */
#ifndef ROMWRIGHT_STORAGE_DAT_004e3114_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004e3114_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004e3114_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_004e3114_4_4_size_check[(sizeof(union romwright_storage_DAT_004e3114_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3114_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_004e3114_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3114_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_004e3114_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004e3114_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_004e3114_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3114_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_004e3114_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_004e3114_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_004e3114_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3114_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_004e3114_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_004e3114_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_004e3114_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004e3114_4_4 DAT_004e3114; /* 0x4e3114 */
extern float DAT_004e311c; /* 0x4e311c */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: phaseCosInterpolate. */
/* Supplied declaration required: FUN_002b70cc. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00119c28(float *param_1)

{
/* irregular: irregular input(s): in_s0; 4 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  float temp_v2;
  float in_s0;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  unsigned long long temp_v9;
  float temp_v10;
  
  temp_v5 = *param_1;
  temp_v6 = param_1[1];
  temp_v7 = param_1[2];
  temp_v3 = in_s0 * 0.7111111f;
  temp_v9 = DAT_004e3114.whole;
  temp_v4 = temp_v3;
  temp_v8 = DAT_004e3110;
  DAT_004e3104 = temp_v5;
  DAT_004e3108 = temp_v6;
  DAT_004e310c = temp_v7;
  DAT_004e311c = in_s0;
  FUN_002b70cc();
  temp_v3 = -temp_v3;
  temp_v10 = 0.0f;
  phaseCosInterpolate();
  temp_v2 = fRam004e30a0;
  temp_v1 = fRam004e309c;
  temp_v0 = fRam004e3098;
  DAT_004e30f4 = temp_v5 - (temp_v5 + temp_v3);
  DAT_004e30f8 = temp_v6 - (temp_v6 + temp_v10);
  DAT_004e30fc = temp_v7 - (temp_v7 + -temp_v4);
  temp_v4 = 1.0f / romwright_sqrt_4(DAT_004e30f4 * DAT_004e30f4 + DAT_004e30f8 * DAT_004e30f8 +
                     DAT_004e30fc * DAT_004e30fc);
  DAT_004e30fc = DAT_004e30fc * temp_v4;
  DAT_004e30f4 = DAT_004e30f4 * temp_v4;
  DAT_004e30f8 = DAT_004e30f8 * temp_v4;
  temp_v4 = (float)((unsigned long long)temp_v9 >> 0x20);
  DAT_004e30d4 = (float)temp_v9 * DAT_004e30fc - temp_v4 * DAT_004e30f8;
  DAT_004e30d8 = temp_v4 * DAT_004e30f4 - temp_v8 * DAT_004e30fc;
  DAT_004e30dc = temp_v8 * DAT_004e30f8 - (float)temp_v9 * DAT_004e30f4;
  temp_v4 = 1.0f / romwright_sqrt_4(DAT_004e30d4 * DAT_004e30d4 + DAT_004e30d8 * DAT_004e30d8 +
                     DAT_004e30dc * DAT_004e30dc);
  DAT_004e30dc = DAT_004e30dc * temp_v4;
  DAT_004e30d4 = DAT_004e30d4 * temp_v4;
  DAT_004e30d8 = DAT_004e30d8 * temp_v4;
  DAT_004e30e4 = DAT_004e30f8 * DAT_004e30dc - DAT_004e30fc * DAT_004e30d8;
  DAT_004e30e8 = DAT_004e30fc * DAT_004e30d4 - DAT_004e30f4 * DAT_004e30dc;
  DAT_004e30ec = DAT_004e30f4 * DAT_004e30d8 - DAT_004e30f8 * DAT_004e30d4;
  DAT_004e3100 = -(temp_v5 * DAT_004e30f4 + temp_v6 * DAT_004e30f8 + temp_v7 * DAT_004e30fc);
  DAT_004e30e0 = -(temp_v5 * DAT_004e30d4 + temp_v6 * DAT_004e30d8 + temp_v7 * DAT_004e30dc);
  DAT_004e30f0 = -(temp_v5 * DAT_004e30e4 + temp_v6 * DAT_004e30e8 + temp_v7 * DAT_004e30ec);
  fRam004e3098 = -(DAT_004e30d4 * DAT_004e30e0 + DAT_004e30e4 * DAT_004e30f0) +
                 -(DAT_004e30f4 * DAT_004e3100);
  fRam004e309c = -(DAT_004e30d8 * DAT_004e30e0 + DAT_004e30e8 * DAT_004e30f0) +
                 -(DAT_004e30f8 * DAT_004e3100);
  fRam004e30a0 = -(DAT_004e30dc * DAT_004e30e0 + DAT_004e30ec * DAT_004e30f0) +
                 -(DAT_004e30fc * DAT_004e3100);
  if (cRam004e30c8 != '\0') {
    fRam004e3068 = DAT_004e30d4;
    fRam004e306c = DAT_004e30d8;
    fRam004e3070 = DAT_004e30dc;
    fRam004e3074 = DAT_004e30e0;
    fRam004e3078 = DAT_004e30e4;
    fRam004e307c = DAT_004e30e8;
    fRam004e3080 = DAT_004e30ec;
    fRam004e3084 = DAT_004e30f0;
    fRam004e3088 = DAT_004e30f4;
    fRam004e308c = DAT_004e30f8;
    fRam004e3090 = DAT_004e30fc;
    fRam004e3094 = DAT_004e3100;
    cRam004e30c8 = 0;
    return;
  }
  fRam004e3068 = DAT_004e30d4;
  fRam004e306c = DAT_004e30d8;
  fRam004e3070 = DAT_004e30dc;
  fRam004e3074 = DAT_004e30e0;
  fRam004e3078 = DAT_004e30e4;
  fRam004e307c = DAT_004e30e8;
  fRam004e3080 = DAT_004e30ec;
  fRam004e3084 = DAT_004e30f0;
  fRam004e30a4 = fRam004e3098 - temp_v0;
  fRam004e3088 = DAT_004e30f4;
  fRam004e308c = DAT_004e30f8;
  fRam004e3090 = DAT_004e30fc;
  fRam004e3094 = DAT_004e3100;
  fRam004e30a8 = fRam004e309c - temp_v1;
  fRam004e30ac = fRam004e30a0 - temp_v2;
  return;
}

} /* extern "C" */
