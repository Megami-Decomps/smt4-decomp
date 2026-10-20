/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039b648` (_code @ 0x39b648, 0x3d4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231420(int, unsigned int, int, int);
int FUN_00231434(int, int, int [4], unsigned int [2]);
int FUN_002319c0(void);
int FUN_0039ac64(...);
int NaviMain_GetCursorPos(int);
int NaviMain_SetCursorPos(int, unsigned int **);

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
/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

extern unsigned char DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_00231420. */
/* Supplied declaration required: FUN_00231434. */
/* Supplied declaration required: FUN_002319c0. */
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_0039ac64. */
/* Supplied declaration required: NaviMain_GetCursorPos. */
/* Supplied declaration required: NaviMain_SetCursorPos. */


unsigned int FUN_0039b648(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  float *pfVar4;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *puVar8;
  unsigned char *puVar9;
  unsigned int *temp_v6;
  unsigned int *temp_v7;
  int temp_v8;
  int uStack_4c;
  unsigned int temp_v9 [2];
  int temp_v10 [4];
  int temp_v11;
  int temp_v12;
  
  temp_v0 = FUN_002c2950();
  temp_v1 = *(unsigned int *)(param_1 + 0x10);
  if (((temp_v1 & 0x2000000) != 0) && ((FUN_002319c0(), temp_v1 == 0 || ((*(signed char *)((unsigned char *)&DAT_0049f91c + 0x18)) != '\0')))) {
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfdffffff;
  }
  temp_v12 = temp_v0 + 0xd00;
  temp_v11 = param_1 + 0x162;
  temp_v5 = 0;
  puVar8 = (unsigned char *)(param_1 + 0x5a8c);
  puVar9 = (unsigned char *)(param_1 + 0x5a8d);
  do {
    temp_v6 = (unsigned int *)&temp_v8;
    temp_v7 = (unsigned int *)&uStack_4c;
    FUN_00231434(0x1c,temp_v5 + 0xfb5,temp_v10,temp_v9);
    temp_v2 = temp_v10[0];
    FUN_00231420(temp_v10[0],temp_v9[0],temp_v8,uStack_4c);
    if ((temp_v2 == 0) || ((*(signed char *)((unsigned char *)&DAT_0049f91c + 0x18)) != '\0')) {
      temp_v5 = temp_v5 + 1;
      if (temp_v5 >= 5) {
        return 0;
      }
      continue;
    }
    temp_v2 = param_1;
    switch(temp_v5) {
    case 0:
      temp_v0 = 0;
      if (*(int *)(param_1 + 0x12264) < 1) {
        return 1;
      }
      while ((temp_v3 = param_1 + temp_v0 * 4, *(short *)(temp_v3 + 0x121e4) == 0 ||
             ((int)*(short *)(temp_v3 + 0x121e6) != (int)*(char *)(param_1 + 0x60)))) {
        temp_v0 = temp_v0 + 1;
        if (*(int *)(param_1 + 0x12264) <= temp_v0) {
          return 1;
        }
      }
      if (temp_v0 - 1 < 0) {
        return 1;
      }
      if (*(short *)(param_1 + temp_v0 * 4 + 0x121e2) == 0) {
        return 1;
      }
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
      FUN_0039ac64(param_1,1);
      if (temp_v2 != 0) {
        *(char *)(param_1 + 0x60) = (char)temp_v2;
      }
      *(unsigned char *)(param_1 + temp_v5 + 0x56) = 5;
      *puVar8 = 1;
      *puVar9 = 1;
      return 1;
    case 1:
      if (*(char *)(temp_v12 + 0x5a) == '\x06') {
        *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffcffff) | 0x2000000;
        *puVar8 = 1;
        *puVar9 = 1;
        pfVar4 = (float *)NaviMain_GetCursorPos(temp_v11);
        temp_v6 = (unsigned int *)romwright_f2u((float)((*pfVar4 * 2.0f)));
        temp_v7 = (unsigned int *)romwright_f2u((float)((pfVar4[1] * 2.0f)));
        NaviMain_SetCursorPos(temp_v11,&temp_v6);
        *(unsigned char *)(temp_v0 + 0xd5a) = 0xc;
        *(unsigned char *)(param_1 + 0x57) = 5;
        *(unsigned char *)(param_1 + 0x59) = 0;
        return 1;
      }
      break;
    case 2:
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
      FUN_00231420(temp_v10[0],temp_v9[0],temp_v8,uStack_4c);
      if (temp_v10[0] == 0) {
        return 1;
      }
      NaviMain_GetCursorPos(temp_v11);
      temp_v6 = (unsigned int *)0x0;
      temp_v7 = (unsigned int *)0x0;
      NaviMain_SetCursorPos(temp_v11,&temp_v6);
      *(char *)(param_1 + 0x60) = (char)*(unsigned int *)(param_1 + 0x121cc);
      *(unsigned char *)(param_1 + 0x58) = 5;
      *puVar8 = 1;
      *puVar9 = 1;
      return 1;
    case 3:
      if (*(char *)(temp_v12 + 0x5a) != '\x06') {
        *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffcffff) | 0x2000000;
        *puVar8 = 1;
        *puVar9 = 1;
        pfVar4 = (float *)NaviMain_GetCursorPos(temp_v11);
        temp_v6 = (unsigned int *)romwright_f2u((float)((*pfVar4 * 0.5f)));
        temp_v7 = (unsigned int *)romwright_f2u((float)((pfVar4[1] * 0.5f)));
        NaviMain_SetCursorPos(temp_v11,&temp_v6);
        *(unsigned char *)(temp_v0 + 0xd5a) = 6;
        *(unsigned char *)(param_1 + 0x59) = 5;
        *(unsigned char *)(param_1 + 0x57) = 0;
        return 1;
      }
      break;
    case 4:
      temp_v3 = *(int *)(param_1 + 0x12264);
      temp_v0 = 0;
      if (temp_v3 < 1) {
        return 1;
      }
      while ((temp_v4 = param_1 + temp_v0 * 4, *(short *)(temp_v4 + 0x121e4) == 0 ||
             ((int)*(short *)(temp_v4 + 0x121e6) != (int)*(char *)(param_1 + 0x60)))) {
        temp_v0 = temp_v0 + 1;
        if (temp_v3 <= temp_v0) {
          return 1;
        }
      }
      if (temp_v3 <= temp_v0 + 1) {
        return 1;
      }
      if (*(short *)(param_1 + temp_v0 * 4 + 0x121ea) == 0) {
        return 1;
      }
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x2000000;
      FUN_0039ac64(param_1,0xffffffff);
      if (temp_v2 != 0) {
        *(char *)(param_1 + 0x60) = (char)temp_v2;
      }
      *(unsigned char *)(param_1 + temp_v5 + 0x56) = 5;
      *puVar8 = 1;
      *puVar9 = 1;
      return 1;
    default:
      return 1;
    }
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 5) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
