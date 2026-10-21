/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00342628` (_code @ 0x342630, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned char [132], unsigned char *, unsigned int);
int FUN_0015f858(unsigned int, int);
int FUN_001654f8(void);
int FUN_0023723c(unsigned int, int, unsigned int, int, int, unsigned char [132]);

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_5_stack;

extern unsigned char LAB_003426bc; /* 0x3426bc */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: FUN_001654f8. */
/* Supplied declaration required: FUN_0023723c. */


void FUN_00342628(int param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned char param_5)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [132];
  
  temp_v0 = param_3;
  FUN_0015f858(param_3,0);
  FUN_001654f8();
  textFormatBuffer(temp_v2,&LAB_003426bc,temp_v0);
  FUN_0023723c(*(unsigned int *)(param_1 + param_2 * 4),2,0xffffffff,0,0,temp_v2);
  temp_v1 = param_1 + param_2 * 4;
  *(short *)(param_1 + param_2 * 2 + 0x28) = (short)param_3;
  *(unsigned int *)(temp_v1 + 0x3c) = param_4;
  *(unsigned char *)(param_1 + param_2 + 100) = param_5;
  *(unsigned int *)(temp_v1 + 0x70) = 0;
  return;
}

} /* extern "C" */
