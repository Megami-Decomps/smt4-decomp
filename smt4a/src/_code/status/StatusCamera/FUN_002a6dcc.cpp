/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6dcc` (_code @ 0x2a6dcc, 0x1a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c884(int, int);
int FUN_00140e38(int);
int uiSetFloatPair(int);
int FUN_0014f0dc(int, float *, float *, int *);
int FUN_001523b8(int, int);
int FUN_00154180(int, int, int, int);
int asdMemoryAllocTracked(int, int, int, int, int);
int sysMemClear(void);
int FUN_0036b824(int);

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern int g_handleRegistry; /* 0x56fcc0 */
extern int g_statusCamera; /* 0x588fe4 */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_00140e38. */
/* Supplied declaration required: uiSetFloatPair. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00154180. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0036b824. */


void FUN_002a6dcc(float *param_1,float *param_2,unsigned int *param_3)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 9 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  float *pfVar5;
  unsigned int temp_v4;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  if (g_statusCamera == 0) {
    temp_v0 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x540,1);
    g_statusCamera = temp_v0;
  }
  temp_v0 = g_statusCamera;
  sysMemClear();
  *(unsigned int *)(temp_v0 + 0x534) = in_s2;
  *(unsigned int *)(temp_v0 + 0x538) = in_s0;
  *(unsigned int *)(temp_v0 + 0x53c) = in_s1;
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  pfVar5 = (float *)(temp_v0 + 0x50c);
  *(float *)(temp_v0 + 0x518) = *param_2;
  *(float *)(temp_v0 + 0x51c) = temp_v1;
  *(float *)(temp_v0 + 0x520) = temp_v2;
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  *pfVar5 = *param_1;
  *(float *)(temp_v0 + 0x510) = temp_v1;
  *(float *)(temp_v0 + 0x514) = temp_v2;
  temp_v3 = param_3[1];
  temp_v4 = param_3[2];
  *(unsigned int *)(temp_v0 + 0x524) = *param_3;
  *(unsigned int *)(temp_v0 + 0x528) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x52c) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x530) = in_s3;
  temp_v8 = 0;
  temp_v9 = 0x3f800000;
  temp_v10 = 0;
  temp_v1 = *(float *)(temp_v0 + 0x530);
  temp_v5 = *pfVar5 + *(float *)(temp_v0 + 0x518) * temp_v1;
  temp_v6 = *(float *)(temp_v0 + 0x510) + *(float *)(temp_v0 + 0x51c) * temp_v1;
  temp_v7 = *(float *)(temp_v0 + 0x514) + *(float *)(temp_v0 + 0x520) * temp_v1;
  FUN_00154180(200,0,200,0xf0);
  FUN_0013c884(temp_v0,1);
  FUN_0014f0dc(temp_v0,pfVar5,&temp_v5,&temp_v8);
  FUN_001523b8(temp_v0,1);
  FUN_0036b824(temp_v0);
  FUN_00140e38(temp_v0);
  uiSetFloatPair(temp_v0);
  *(int *)(g_handleRegistry + 0xc) = temp_v0;
  return;
}

} /* extern "C" */
