/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034a3b4` (_code @ 0x34a3b4, 0x160 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c884(int, int);
int FUN_001418fc(int);
int FUN_0014f0dc(int, float *, float *, float [7]);
int FUN_001523b8(int, int);
int FUN_00154180(int, int, int, int);
int sysMemClear(int, int);
int FUN_0036b824(int);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_0056fcc0; /* 0x56fcc0 */
extern int g_statusCamera; /* 0x588fe4 */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_001418fc. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00154180. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0036b824. */


void FUN_0034a3b4(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  float temp_v1;
  float temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9 [7];
  
  temp_v0 = g_statusCamera;
  if (g_statusCamera != 0) {
    temp_v2 = 0.0f;
    temp_v3 = 0x40900000;
    temp_v4 = 0x40c9999a;
    temp_v5 = 0xbf800000;
    sysMemClear(g_statusCamera,0x540);
    *(unsigned int *)(temp_v0 + 0x534) = 0x420c0000;
    *(unsigned int *)(temp_v0 + 0x538) = 0x3dcccccd;
    *(unsigned int *)(temp_v0 + 0x53c) = 0x46c80000;
    *(float *)(temp_v0 + 0x518) = temp_v2;
    *(float *)(temp_v0 + 0x51c) = temp_v2;
    pfVar2 = (float *)(temp_v0 + 0x50c);
    *(unsigned int *)(temp_v0 + 0x520) = temp_v5;
    *pfVar2 = temp_v2;
    *(unsigned int *)(temp_v0 + 0x510) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x514) = temp_v3;
    *(float *)(temp_v0 + 0x524) = temp_v2;
    *(float *)(temp_v0 + 0x528) = temp_v2;
    *(float *)(temp_v0 + 0x52c) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x530) = temp_v3;
    temp_v9[1] = 1.0f;
    temp_v1 = *(float *)(temp_v0 + 0x530);
    temp_v6 = *pfVar2 + *(float *)(temp_v0 + 0x518) * temp_v1;
    temp_v7 = *(float *)(temp_v0 + 0x510) + *(float *)(temp_v0 + 0x51c) * temp_v1;
    temp_v8 = *(float *)(temp_v0 + 0x514) + *(float *)(temp_v0 + 0x520) * temp_v1;
    temp_v9[0] = temp_v2;
    temp_v9[2] = temp_v2;
    FUN_00154180(200,0,200,0xf0);
    FUN_0013c884(temp_v0,1);
    FUN_0014f0dc(temp_v0,pfVar2,&temp_v6,temp_v9);
    FUN_001523b8(temp_v0,1);
    FUN_0036b824(temp_v0);
    *(int *)(DAT_0056fcc0 + 0xc) = temp_v0;
    FUN_001418fc(temp_v0);
  }
  return;
}

} /* extern "C" */
