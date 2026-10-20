/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a0b48` (_code @ 0x2a0b48, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001db388(int, int);
int FUN_002c1edc(int, int, float *, int *);

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_0044e178; /* 0x44e178 */

/* Supplied declaration required: FUN_001db388. */
/* Supplied declaration required: FUN_002c1edc. */


void FUN_002a0b48(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_14;
  
  temp_v0 = DAT_0044e178;
  if (DAT_0044e178 != 0) {
    temp_v1 = *(float *)(DAT_0044e178 + 0x52c);
    temp_v2 = *(float *)(DAT_0044e178 + 0x508) + *(float *)(DAT_0044e178 + 0x514) * temp_v1;
    temp_v3 = *(float *)(DAT_0044e178 + 0x50c) + *(float *)(DAT_0044e178 + 0x518) * temp_v1;
    temp_v4 = *(float *)(DAT_0044e178 + 0x510) + *(float *)(DAT_0044e178 + 0x51c) * temp_v1;
    temp_v5 = 0;
    temp_v6 = 0x3f800000;
    uStack_14 = 0;
    FUN_002c1edc(DAT_0044e178,DAT_0044e178 + 0x508,&temp_v2,&temp_v5);
    FUN_001db388(temp_v0,0);
  }
  return;
}

} /* extern "C" */
