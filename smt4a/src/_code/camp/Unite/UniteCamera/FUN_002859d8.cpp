/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002859d8` (_code @ 0x2859d8, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013c884(int, int);
int FUN_00140e38(int);
int uiSetFloatPair(int);
int FUN_0014f0dc(int, int, float *, int);
int FUN_001523b8(int, int);
int FUN_00154180(int, int, int, int);
int asdMemoryAllocTracked(int, int, int, int, int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int sysMemClear(void);
int FUN_0036b824(int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int g_handleRegistry; /* 0x56fcc0 */
extern int g_uniteCamera; /* 0x57f294 */

/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_00140e38. */
/* Supplied declaration required: uiSetFloatPair. */
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
/* Supplied declaration required: FUN_00154180. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_0036b824. */


void FUN_002859d8(unsigned int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  float *pfVar2;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  
  if (g_uniteCamera == 0) {
    temp_v0 = 0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x510,1);
    g_uniteCamera = temp_v0;
  }
  temp_v0 = g_uniteCamera;
  sysMemClear();
  *(unsigned int *)(temp_v0 + 0x50c) = param_1;
  FUN_00154180(0,0,400,0xf0);
  pfVar2 = *(float **)(temp_v0 + 0x50c);
  temp_v2 = *pfVar2;
  temp_v3 = pfVar2[1];
  temp_v4 = pfVar2[2];
  temp_v1 = *(float *)(*(int *)(temp_v0 + 0x50c) + 0x3c);
  FUN_001bc124();
  temp_v2 = temp_v2 - temp_v1;
  temp_v1 = *(float *)(*(int *)(temp_v0 + 0x50c) + 0x38);
  FUN_001bc124();
  temp_v3 = temp_v1 + temp_v3;
  temp_v1 = *(float *)(*(int *)(temp_v0 + 0x50c) + 0x3c);
  FUN_001bbf0c();
  temp_v4 = temp_v4 - temp_v1;
  FUN_0013c884(temp_v0,1);
  FUN_0014f0dc(temp_v0,*(int *)(temp_v0 + 0x50c),&temp_v2,*(int *)(temp_v0 + 0x50c) + 0x18);
  FUN_001523b8(temp_v0,1);
  FUN_0036b824(temp_v0);
  FUN_00140e38(temp_v0);
  uiSetFloatPair(temp_v0);
  *(int *)(g_handleRegistry + 0xc) = temp_v0;
  return;
}

} /* extern "C" */
