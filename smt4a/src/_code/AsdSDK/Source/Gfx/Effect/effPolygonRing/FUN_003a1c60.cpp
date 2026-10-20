/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1c60` (_code @ 0x3a1c60, 0x1f4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, unsigned int, int, int);
int FUN_002b3b58(double, int, int, unsigned char *, int);
int FUN_00323ce0(int, int);
int FUN_00514540(int);
int rt_memcpy_w(int, int, int);

#ifndef ROMWRIGHT_FLOAT_BITS_DEFINED
#define ROMWRIGHT_FLOAT_BITS_DEFINED
static unsigned int romwright_f2u(float value)
{
    union { float f; unsigned int u; } bits;
    bits.f = value;
    return bits.u;
}
static float romwright_u2f(unsigned int value)
{
    union { float f; unsigned int u; } bits;
    bits.u = value;
    return bits.f;
}
#endif
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char DAT_005c1f1c; /* 0x5c1f1c */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_002b3b58. */
/* Supplied declaration required: FUN_00323ce0. */
/* Supplied declaration required: FUN_00514540. */
/* Supplied declaration required: rt_memcpy_w. */


float * FUN_003a1c60(int param_1)

{
/* irregular: irregular input(s): in_s0; 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  float *pfVar5;
  float temp_v4;
  int temp_v5;
  unsigned char *puVar8;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float in_s0;
  unsigned long long temp_v9;
  float *pfVar13;
  
  temp_v8 = *(unsigned int *)(param_1 + 0x38);
  if (temp_v8 < 4) {
    temp_v8 = 3;
  }
  *(unsigned int *)(param_1 + 0x38) = temp_v8;
  pfVar5 = (float *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,temp_v8 * 4 + 0x10,0x10,1);
  pfVar13 = pfVar5 + temp_v8;
  *pfVar13 = romwright_u2f((unsigned int)(pfVar5));
  pfVar13[3] = romwright_u2f((unsigned int)(pfVar5));
  rt_memcpy_w(param_1 + 0x5c,param_1,0x5c);
  temp_v4 = 1.4013e-45f;
  FUN_00323ce0(1,param_1 + 0x5c);
  pfVar13[1] = temp_v4;
  temp_v4 = (float)(temp_v8 & 0xffff);
  FUN_002b3b58(temp_v4,2,4,&DAT_005c1f1c,0x48);
  temp_v7 = 0;
  pfVar13[2] = temp_v4;
  puVar8 = *(unsigned char **)(*(int *)((int)temp_v4 + 8) + 0x38);
  *(unsigned int *)((int)temp_v4 + 0x54) = *(unsigned int *)((int)temp_v4 + 0x54) | 0x20;
  temp_v6 = *(unsigned int *)(param_1 + 0x44);
  if (temp_v8 != 0) {
    temp_v9 = 0x3f800000;
    temp_v5 = (*(unsigned int *)(param_1 + 0x48) & temp_v6) +
            (((temp_v6 ^ *(unsigned int *)(param_1 + 0x48)) & 0xfefefeff) >> 1);
    do {
      temp_v2 = (unsigned char)(temp_v6 >> 8);
      temp_v3 = (unsigned char)(temp_v6 >> 0x10);
      temp_v0 = (unsigned char)temp_v6;
      *puVar8 = temp_v0;
      puVar8[1] = temp_v2;
      puVar8[2] = temp_v3;
      temp_v1 = (unsigned char)(temp_v6 >> 0x18);
      puVar8[3] = temp_v1;
      puVar8[4] = temp_v0;
      puVar8[5] = temp_v2;
      puVar8[6] = temp_v3;
      puVar8[7] = temp_v1;
      puVar8[8] = (char)temp_v5;
      puVar8[9] = (char)((unsigned int)temp_v5 >> 8);
      puVar8[10] = (char)((unsigned int)temp_v5 >> 0x10);
      puVar8[0xb] = (char)((unsigned int)temp_v5 >> 0x18);
      puVar8[0xc] = temp_v0;
      puVar8[0xd] = temp_v2;
      puVar8[0xe] = temp_v3;
      puVar8[0xf] = temp_v1;
      FUN_00514540(0);
      temp_v7 = temp_v7 + 1;
      puVar8 = puVar8 + 0x10;
      in_s0 = (((float)temp_v9 - *(float *)(param_1 + 0xcc)) + in_s0 * *(float *)(param_1 + 0xcc)) *
              *(float *)(param_1 + 200);
      *pfVar5 = in_s0;
      pfVar5 = pfVar5 + 1;
    } while (temp_v7 < temp_v8);
  }
  return pfVar13;
}

} /* extern "C" */
