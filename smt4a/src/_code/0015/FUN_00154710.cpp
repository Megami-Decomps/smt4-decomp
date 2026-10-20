/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00154710` (_code @ 0x154710, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1ee0(void);
int FUN_001b63b0(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern float fRam0063f3f8; /* 0x63f3f8 */
extern float fRam0063f3fc; /* 0x63f3fc */
extern float fRam0063f400; /* 0x63f400 */
extern float fRam0063f404; /* 0x63f404 */
extern float fRam0063f408; /* 0x63f408 */
extern float fRam0063f40c; /* 0x63f40c */
extern float fRam0063f410; /* 0x63f410 */
extern float fRam0063f414; /* 0x63f414 */
extern float fRam0063f418; /* 0x63f418 */
extern float fRam0063f41c; /* 0x63f41c */
extern float fRam0063f420; /* 0x63f420 */
extern float fRam0063f424; /* 0x63f424 */
extern float fRam0063f428; /* 0x63f428 */
extern float fRam0063f42c; /* 0x63f42c */
extern float fRam0063f430; /* 0x63f430 */
extern float fRam0063f434; /* 0x63f434 */
extern float fRam0063f438; /* 0x63f438 */
extern float fRam0063f43c; /* 0x63f43c */
extern signed char cRam0063f458; /* 0x63f458 */
extern float DAT_0063f464; /* 0x63f464 */
extern float DAT_0063f468; /* 0x63f468 */
extern float DAT_0063f46c; /* 0x63f46c */
extern float DAT_0063f470; /* 0x63f470 */
extern float DAT_0063f474; /* 0x63f474 */
extern float DAT_0063f478; /* 0x63f478 */
extern float DAT_0063f47c; /* 0x63f47c */
extern float DAT_0063f480; /* 0x63f480 */
extern float DAT_0063f484; /* 0x63f484 */
extern float DAT_0063f488; /* 0x63f488 */
extern float DAT_0063f48c; /* 0x63f48c */
extern float DAT_0063f490; /* 0x63f490 */
extern float DAT_0063f494; /* 0x63f494 */
extern float DAT_0063f498; /* 0x63f498 */
extern float DAT_0063f49c; /* 0x63f49c */
extern float DAT_0063f4a0; /* 0x63f4a0 */
#ifndef ROMWRIGHT_STORAGE_DAT_0063f4a4_4_4_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0063f4a4_4_4_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0063f4a4_4_4 {
    unsigned int whole;
    unsigned char u1[4];
    signed char s1[4];
    unsigned short u2[2];
    short s2[2];
    unsigned int u4[1];
    int s4[1];
    float f4[1];
};
typedef char romwright_storage_DAT_0063f4a4_4_4_size_check[(sizeof(union romwright_storage_DAT_0063f4a4_4_4) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0063f4a4_4_4_u1_width_check[(sizeof(((union romwright_storage_DAT_0063f4a4_4_4 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0063f4a4_4_4_s1_width_check[(sizeof(((union romwright_storage_DAT_0063f4a4_4_4 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0063f4a4_4_4_u2_width_check[(sizeof(((union romwright_storage_DAT_0063f4a4_4_4 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0063f4a4_4_4_s2_width_check[(sizeof(((union romwright_storage_DAT_0063f4a4_4_4 *)0)->s2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0063f4a4_4_4_u4_width_check[(sizeof(((union romwright_storage_DAT_0063f4a4_4_4 *)0)->u4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0063f4a4_4_4_s4_width_check[(sizeof(((union romwright_storage_DAT_0063f4a4_4_4 *)0)->s4[0]) == 4) ? 1 : -1];
typedef char romwright_storage_DAT_0063f4a4_4_4_f4_width_check[(sizeof(((union romwright_storage_DAT_0063f4a4_4_4 *)0)->f4[0]) == 4) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0063f4a4_4_4 DAT_0063f4a4; /* 0x63f4a4 */
extern float DAT_0063f4ac; /* 0x63f4ac */

#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Supplied declaration required: FUN_001a1ee0. */
/* Supplied declaration required: FUN_001b63b0. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00154710(float *param_1)

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
  temp_v9 = DAT_0063f4a4.whole;
  temp_v4 = temp_v3;
  temp_v8 = DAT_0063f4a0;
  DAT_0063f494 = temp_v5;
  DAT_0063f498 = temp_v6;
  DAT_0063f49c = temp_v7;
  DAT_0063f4ac = in_s0;
  FUN_001a1ee0();
  temp_v3 = -temp_v3;
  temp_v10 = 0.0f;
  FUN_001b63b0();
  temp_v2 = fRam0063f430;
  temp_v1 = fRam0063f42c;
  temp_v0 = fRam0063f428;
  DAT_0063f484 = temp_v5 - (temp_v5 + temp_v3);
  DAT_0063f488 = temp_v6 - (temp_v6 + temp_v10);
  DAT_0063f48c = temp_v7 - (temp_v7 + -temp_v4);
  temp_v4 = 1.0f / romwright_sqrt_4(DAT_0063f484 * DAT_0063f484 + DAT_0063f488 * DAT_0063f488 +
                     DAT_0063f48c * DAT_0063f48c);
  DAT_0063f48c = DAT_0063f48c * temp_v4;
  DAT_0063f484 = DAT_0063f484 * temp_v4;
  DAT_0063f488 = DAT_0063f488 * temp_v4;
  temp_v4 = (float)((unsigned long long)temp_v9 >> 0x20);
  DAT_0063f464 = (float)temp_v9 * DAT_0063f48c - temp_v4 * DAT_0063f488;
  DAT_0063f468 = temp_v4 * DAT_0063f484 - temp_v8 * DAT_0063f48c;
  DAT_0063f46c = temp_v8 * DAT_0063f488 - (float)temp_v9 * DAT_0063f484;
  temp_v4 = 1.0f / romwright_sqrt_4(DAT_0063f464 * DAT_0063f464 + DAT_0063f468 * DAT_0063f468 +
                     DAT_0063f46c * DAT_0063f46c);
  DAT_0063f46c = DAT_0063f46c * temp_v4;
  DAT_0063f464 = DAT_0063f464 * temp_v4;
  DAT_0063f468 = DAT_0063f468 * temp_v4;
  DAT_0063f474 = DAT_0063f488 * DAT_0063f46c - DAT_0063f48c * DAT_0063f468;
  DAT_0063f478 = DAT_0063f48c * DAT_0063f464 - DAT_0063f484 * DAT_0063f46c;
  DAT_0063f47c = DAT_0063f484 * DAT_0063f468 - DAT_0063f488 * DAT_0063f464;
  DAT_0063f490 = -(temp_v5 * DAT_0063f484 + temp_v6 * DAT_0063f488 + temp_v7 * DAT_0063f48c);
  DAT_0063f470 = -(temp_v5 * DAT_0063f464 + temp_v6 * DAT_0063f468 + temp_v7 * DAT_0063f46c);
  DAT_0063f480 = -(temp_v5 * DAT_0063f474 + temp_v6 * DAT_0063f478 + temp_v7 * DAT_0063f47c);
  fRam0063f428 = -(DAT_0063f464 * DAT_0063f470 + DAT_0063f474 * DAT_0063f480) +
                 -(DAT_0063f484 * DAT_0063f490);
  fRam0063f42c = -(DAT_0063f468 * DAT_0063f470 + DAT_0063f478 * DAT_0063f480) +
                 -(DAT_0063f488 * DAT_0063f490);
  fRam0063f430 = -(DAT_0063f46c * DAT_0063f470 + DAT_0063f47c * DAT_0063f480) +
                 -(DAT_0063f48c * DAT_0063f490);
  if (cRam0063f458 != '\0') {
    fRam0063f3f8 = DAT_0063f464;
    fRam0063f3fc = DAT_0063f468;
    fRam0063f400 = DAT_0063f46c;
    fRam0063f404 = DAT_0063f470;
    fRam0063f408 = DAT_0063f474;
    fRam0063f40c = DAT_0063f478;
    fRam0063f410 = DAT_0063f47c;
    fRam0063f414 = DAT_0063f480;
    fRam0063f418 = DAT_0063f484;
    fRam0063f41c = DAT_0063f488;
    fRam0063f420 = DAT_0063f48c;
    fRam0063f424 = DAT_0063f490;
    cRam0063f458 = 0;
    return;
  }
  fRam0063f3f8 = DAT_0063f464;
  fRam0063f3fc = DAT_0063f468;
  fRam0063f400 = DAT_0063f46c;
  fRam0063f404 = DAT_0063f470;
  fRam0063f408 = DAT_0063f474;
  fRam0063f40c = DAT_0063f478;
  fRam0063f410 = DAT_0063f47c;
  fRam0063f414 = DAT_0063f480;
  fRam0063f434 = fRam0063f428 - temp_v0;
  fRam0063f418 = DAT_0063f484;
  fRam0063f41c = DAT_0063f488;
  fRam0063f420 = DAT_0063f48c;
  fRam0063f424 = DAT_0063f490;
  fRam0063f438 = fRam0063f42c - temp_v1;
  fRam0063f43c = fRam0063f430 - temp_v2;
  return;
}

} /* extern "C" */
