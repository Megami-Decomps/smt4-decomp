/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00258c04` (_code @ 0x258c04, 0x194 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00298d50(int);
int FUN_002bc644(int, int, int, int);
int FUN_002c1568(int);
int FUN_002c159c(int);
int FUN_002c1e30(int, int);
int FUN_002c1edc(int, float *, float *, int *);
int FUN_002c2044(int, int);
int memClear(void);
int asdMemAlloc(int, int, int, int, int);

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

extern int g_statusCamera; /* 0x44e178 */

/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_002bc644. */
/* Supplied declaration required: FUN_002c1568. */
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */


void FUN_00258c04(float *param_1,float *param_2,unsigned int *param_3)

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
    asdMemAlloc(0x100,0x100,0,0x53c,1);
    g_statusCamera = temp_v0;
  }
  temp_v0 = g_statusCamera;
  memClear();
  *(unsigned int *)(temp_v0 + 0x530) = in_s2;
  *(unsigned int *)(temp_v0 + 0x534) = in_s0;
  *(unsigned int *)(temp_v0 + 0x538) = in_s1;
  temp_v1 = param_2[1];
  temp_v2 = param_2[2];
  pfVar5 = (float *)(temp_v0 + 0x508);
  *(float *)(temp_v0 + 0x514) = *param_2;
  *(float *)(temp_v0 + 0x518) = temp_v1;
  *(float *)(temp_v0 + 0x51c) = temp_v2;
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  *pfVar5 = *param_1;
  *(float *)(temp_v0 + 0x50c) = temp_v1;
  *(float *)(temp_v0 + 0x510) = temp_v2;
  temp_v3 = param_3[1];
  temp_v4 = param_3[2];
  *(unsigned int *)(temp_v0 + 0x520) = *param_3;
  *(unsigned int *)(temp_v0 + 0x524) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x528) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x52c) = in_s3;
  temp_v8 = 0;
  temp_v9 = 0x3f800000;
  temp_v10 = 0;
  temp_v1 = *(float *)(temp_v0 + 0x52c);
  temp_v5 = *pfVar5 + *(float *)(temp_v0 + 0x514) * temp_v1;
  temp_v6 = *(float *)(temp_v0 + 0x50c) + *(float *)(temp_v0 + 0x518) * temp_v1;
  temp_v7 = *(float *)(temp_v0 + 0x510) + *(float *)(temp_v0 + 0x51c) * temp_v1;
  FUN_002bc644(200,0,200,0xf0);
  FUN_002c2044(temp_v0,1);
  FUN_002c1edc(temp_v0,pfVar5,&temp_v5,&temp_v8);
  FUN_002c1e30(temp_v0,1);
  FUN_00298d50(temp_v0);
  FUN_002c1568(temp_v0);
  FUN_002c159c(temp_v0);
  return;
}

} /* extern "C" */
