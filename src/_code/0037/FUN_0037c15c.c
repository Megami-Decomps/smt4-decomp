/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037c15c` (_code @ 0x37c15c, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 9 slot(s), 18 byte(s) */
typedef struct {
    unsigned char sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned char sp45; /* 0x45: local_45 */
    unsigned char sp46; /* 0x46: local_46 */
    unsigned char sp47; /* 0x47: local_47 */
    unsigned char sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

/* Supplied declaration required: FUN_00152298. */
/* Supplied declaration required: FUN_00235e08. */
/* Supplied declaration required: FUN_002a7d80. */
/* Supplied declaration required: FUN_002a7e08. */
/* Supplied declaration required: FUN_002ac614. */
/* Supplied declaration required: FUN_002ac6d0. */


void FUN_0037c15c(unsigned int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7 [2];
  char temp_v8;
  unsigned char temp_v9 [16];
  unsigned char temp_v10 [8];
  
  FUN_002ac6d0(temp_v10,param_1);
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  FUN_002ac614(temp_v10,&temp_v0,param_2,0);
  FUN_00235e08(param_4,temp_v0);
  if (param_4 != 0) {
    temp_v7[0] = 0xffffffff;
    temp_v8 = '\0';
    FUN_00152298(param_3,temp_v0,temp_v7);
    FUN_002a7e08(temp_v9,param_4,(int)temp_v8);
    FUN_002a7d80(temp_v9,temp_v1);
  }
  return;
}
