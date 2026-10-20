/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041b8e0` (_code @ 0x41b8e0, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00180310(...);
int FUN_00183bb0(void);
int drawSetColorFromRGBA8(unsigned int);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned char LAB_0041bb20; /* 0x41bb20 */
extern unsigned char LAB_0041bb24; /* 0x41bb24 */

/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: drawSetColorFromRGBA8. */


void FUN_0041b8e0(unsigned int param_1,int param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = FUN_001834a4(0x2b,0x23);
  temp_v3 = *(unsigned int *)(param_2 + 0x50);
  drawSetColorFromRGBA8(0xb9d7d7ff);
  temp_v5 = (int)(((long long)(int)temp_v3 * -0x6e5d4c3b + ((unsigned long long)temp_v3 << 0x20)) >> 0x20);
  temp_v1 = (int)(((long long)(int)temp_v3 * -0x6e5d4c3b + ((unsigned long long)temp_v3 << 0x20)) >> 0x20);
  temp_v3 = temp_v3 + ((temp_v1 >> 0xb) - (temp_v1 >> 0x1f)) * -0xe10;
  temp_v1 = (int)(((long long)(int)temp_v3 * -0x77777777 + ((unsigned long long)temp_v3 << 0x20)) >> 0x20);
  temp_v4 = (temp_v1 >> 5) - (temp_v1 >> 0x1f);
  temp_v1 = (int)(((long long)(int)temp_v3 * -0x77777777 + ((unsigned long long)temp_v3 << 0x20)) >> 0x20);
  temp_v1 = temp_v3 + ((temp_v1 >> 5) - (temp_v1 >> 0x1f)) * -0x3c;
  temp_v2 = *param_3 + (int)*(short *)(temp_v0 + 8) + (int)**(short **)(temp_v0 + 0xc);
  temp_v0 = param_3[1] + (int)*(short *)(temp_v0 + 10);
  FUN_00180310(0,temp_v2 - 7,temp_v0,1,1,2,&LAB_0041bb20,temp_v1 % 10);
  FUN_00180310(0,temp_v2 - 0xe,temp_v0,1,1,2,&LAB_0041bb20,temp_v1 / 10);
  FUN_00180310(0,temp_v2 - 0x12,temp_v0,1,1,2,&LAB_0041bb24);
  FUN_00180310(0,temp_v2 - 0x19,temp_v0,1,1,2,&LAB_0041bb20,temp_v4 % 10);
  FUN_00180310(0,temp_v2 - 0x20,temp_v0,1,1,2,&LAB_0041bb20,temp_v4 / 10);
  FUN_00180310(0,temp_v2 - 0x24,temp_v0,1,1,2,&LAB_0041bb24);
  FUN_00180310(0,temp_v2 - 0x40,temp_v0,1,4,2,&LAB_0041bb20,(temp_v5 >> 0xb) - (temp_v5 >> 0x1f));
  FUN_00183bb0();
  return;
}

} /* extern "C" */
