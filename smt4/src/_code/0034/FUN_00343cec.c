/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00343cec` (_code @ 0x343cec, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
} param_3_stack;

extern unsigned char LAB_00343df8; /* 0x343df8 */
extern unsigned char LAB_00343e14; /* 0x343e14 */
extern unsigned char LAB_00343e30; /* 0x343e30 */

/* Supplied declaration required: FUN_0023cef0. */
/* Supplied declaration required: FUN_0023f2e4. */
/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002be624. */


void FUN_00343cec(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [64];
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 6);
  FUN_002b45e8();
  temp_v1 = FUN_0023cef0(param_1,0,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be624(temp_v2,&LAB_00343df8,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),
               temp_v1);
  FUN_0023f2e4(param_1,0,temp_v2,param_3);
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 8);
  FUN_002b45e8();
  FUN_0023cef0(param_1,0,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be624(temp_v2,&LAB_00343e14,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72))
  ;
  FUN_0023f2e4(param_1,1,temp_v2,param_3);
  temp_v0 = (unsigned int)*(unsigned short *)(param_2 + 10);
  FUN_002b45e8();
  temp_v1 = FUN_0023cef0(param_1,2,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),0);
  FUN_002be624(temp_v2,&LAB_00343e30,*(unsigned short *)(temp_v0 + 0x70),*(unsigned short *)(temp_v0 + 0x72),
               temp_v1);
  FUN_0023f2e4(param_1,2,temp_v2,param_3);
  return;
}
