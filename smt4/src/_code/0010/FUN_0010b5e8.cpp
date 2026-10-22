/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b5e8` (_code @ 0x10b5e8, 0x234 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00107934(void);
int FUN_00108b6c(void);
int _ZN2nn3hid3CTR19AccelerometerReaderC1EPv(unsigned char *, unsigned int);
int FUN_002bd808(unsigned char *);
int SUB42(double, int);
int VectorSignedToFloat(int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int _ZGVreader; /* 0x4729f8 */
extern unsigned char reader; /* 0x4eaa88 */
extern unsigned short DAT_004eaa8c; /* 0x4eaa8c */
extern unsigned short DAT_004eaa8e; /* 0x4eaa8e */
extern unsigned short g_accelerometerState; /* 0x4eaae0 */
extern unsigned short DAT_004eaae2; /* 0x4eaae2 */
extern signed char DAT_004eaae5; /* 0x4eaae5 */
extern int DAT_004eaae8; /* 0x4eaae8 */
extern short DAT_004eaaec; /* 0x4eaaec */
extern short DAT_004eaaee; /* 0x4eaaee */
extern short DAT_004eaaf0; /* 0x4eaaf0 */
extern unsigned char DAT_004eaaf2; /* 0x4eaaf2 */
extern unsigned int DAT_004eaaf8; /* 0x4eaaf8 */
extern unsigned int DAT_004eaafc; /* 0x4eaafc */
extern unsigned int DAT_004eab00; /* 0x4eab00 */
extern unsigned int DAT_004eab04; /* 0x4eab04 */
extern unsigned int DAT_004eab08; /* 0x4eab08 */
extern unsigned int DAT_004eab0c; /* 0x4eab0c */
extern float DAT_004eab10; /* 0x4eab10 */
extern float DAT_004eab14; /* 0x4eab14 */
extern float DAT_004eab18; /* 0x4eab18 */
extern float DAT_004eab20; /* 0x4eab20 */
extern float DAT_004eab24; /* 0x4eab24 */
extern float DAT_004eab28; /* 0x4eab28 */
extern float DAT_004eab30; /* 0x4eab30 */
extern float DAT_004eab34; /* 0x4eab34 */
extern float DAT_004eab38; /* 0x4eab38 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SQRT_4_DEFINED
#define ROMWRIGHT_SQRT_4_DEFINED
double sqrt(double);
static float romwright_sqrt_4(float value)
{
    return (float)sqrt((double)value);
}
#endif
/* Unsupported intrinsic, declaration required: SUB42 (SUBPIECE). */
/* Supplied declaration required: FUN_00107934. */
/* Supplied declaration required: FUN_00108b6c. */
extern unsigned int FUN_0011c454(void);
/* Supplied declaration required: _ZN2nn3hid3CTR19AccelerometerReaderC1EPv. */
/* Supplied declaration required: FUN_002bd808. */
extern int __cxa_guard_acquire(unsigned int *);
extern void nn_hid_CTR_AccelerometerReader_ConvertToAcceleration(unsigned int, unsigned int, int, unsigned int);
extern unsigned char nn_hid_CTR_AccelerometerReader_ReadLatest(unsigned int, unsigned int);


unsigned int FUN_0010b5e8(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  
  FUN_00107934();
  FUN_00108b6c();
  if (((_ZGVreader & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&_ZGVreader), temp_v0 != 0)) {
    temp_v1 = FUN_0011c454();
    _ZN2nn3hid3CTR19AccelerometerReaderC1EPv(&reader,temp_v1);
  }
  if (DAT_004eaae8 != 0) {
    DAT_004eaa8c = g_accelerometerState;
    DAT_004eaa8e = DAT_004eaae2;
    DAT_004eaae8 = 0;
  }
  FUN_002bd808(&DAT_004eaaf2);
  DAT_004eab04 = DAT_004eaaf8;
  DAT_004eab08 = DAT_004eaafc;
  DAT_004eab0c = DAT_004eab00;
  nn_hid_CTR_AccelerometerReader_ReadLatest((unsigned int)&reader,(unsigned int)&DAT_004eaaec);
  if (DAT_004eaae5 == '\x01') {
    temp_v5 = (float)VectorSignedToFloat((int)DAT_004eaaec,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorSignedToFloat((int)DAT_004eaaee,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat((int)DAT_004eaaf0,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = romwright_sqrt_4(temp_v5 * temp_v5 + temp_v9 * temp_v9 + temp_v8 * temp_v8);
    temp_v10 = 1.0f / temp_v4;
    temp_v5 = temp_v5 * temp_v10;
    temp_v9 = temp_v9 * temp_v10;
    temp_v8 = temp_v8 * temp_v10;
    temp_v10 = -930.0f;
    temp_v11 = 930.0f;
    temp_v6 = (float)(int)((DAT_004eab30 * temp_v5 + DAT_004eab34 * temp_v9 + DAT_004eab38 * temp_v8) *
                        temp_v4);
    temp_v0 = (int)(short)(int)((DAT_004eab10 * temp_v5 + DAT_004eab14 * temp_v9 + DAT_004eab18 * temp_v8)
                             * temp_v4);
    temp_v7 = temp_v6;
    if (temp_v0 < -0x3a1) {
      temp_v7 = temp_v10;
    }
    temp_v2 = (int)(short)(int)((DAT_004eab20 * temp_v5 + DAT_004eab24 * temp_v9 + DAT_004eab28 * temp_v8)
                             * temp_v4);
    temp_v3 = (int)SUB42(temp_v6,0);
    if ((-0x3a2 < temp_v0) && (temp_v7 = temp_v11, temp_v0 < 0x3a2)) {
      temp_v7 = (float)VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    DAT_004eaaec = (short)(int)temp_v7;
    temp_v7 = temp_v10;
    if ((-0x3a2 < temp_v2) && (temp_v7 = temp_v11, temp_v2 < 0x3a2)) {
      temp_v7 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    DAT_004eaaee = (short)(int)temp_v7;
    if ((-0x3a2 < temp_v3) && (temp_v10 = temp_v11, temp_v3 < 0x3a2)) {
      temp_v10 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    DAT_004eaaf0 = (short)(int)temp_v10;
  }
  nn_hid_CTR_AccelerometerReader_ConvertToAcceleration((unsigned int)&reader,(unsigned int)&DAT_004eaaf8,1,(unsigned int)&DAT_004eaaec);
  return 1;
}

} /* extern "C" */
