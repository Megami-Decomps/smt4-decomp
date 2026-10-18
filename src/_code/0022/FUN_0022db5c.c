/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022db5c` (_code @ 0x22db5c, 0xd8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_5_stack;

extern unsigned char LAB_0022dc38; /* 0x22dc38 */

/* Supplied declaration required: FUN_00230c80. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf6c8. */


void FUN_0022db5c(int param_1,unsigned int param_2,int param_3,int param_4,unsigned long long param_5)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [44];
  
  if (param_4 != 0) {
    temp_v4 = FUN_002bf6c8(param_1 + 200,param_3 + 0x42f);
    temp_v5 = FUN_002bf6c8(param_1 + 200,0x497);
  }
  else {
    temp_v4 = FUN_002bf6c8(param_1 + 200,param_3 + 0x40e);
    temp_v5 = FUN_002bf6c8(param_1 + 200,0x489);
  }
  temp_v0 = *(short *)(temp_v5 + 8);
  temp_v1 = *(short *)(temp_v4 + 10);
  temp_v2 = *(short *)(temp_v5 + 10);
  temp_v3 = *(short *)(temp_v4 + 8);
  FUN_002be7fc(temp_v6,&LAB_0022dc38,param_2);
  FUN_00230c80(param_1 + 200,0,(int)temp_v3 + (int)temp_v0,(int)temp_v1 + (int)temp_v2,0,7,
               (int)((unsigned long long)param_5 >> 0x20),(int)param_5,temp_v6);
  return;
}
