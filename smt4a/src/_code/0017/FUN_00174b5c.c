/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00174b5c` (_code @ 0x174b5c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

extern unsigned char LAB_00100ad9; /* 0x100ad9 */
extern unsigned char LAB_00100ded; /* 0x100ded */
extern unsigned char LAB_00100df3; /* 0x100df3 */
extern int nw_snd_internal_TaskThread_ThreadFunc(); /* 0x1905d0 */

/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: FUN_0019065c. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002fb0d4. */


/* WARNING: Type propagation algorithm not settling */

void FUN_00174b5c(unsigned int param_1,unsigned int param_2,int *param_3)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1 [2];
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    FUN_0019065c(param_1);
  }
  *(unsigned char *)(param_1 + 0x14) = 0;
  FUN_00188b60(param_1 + 8);
  temp_v1[1] = 4;
  temp_v2 = &LAB_00100ad9;
  temp_v3 = &LAB_00100df3;
  temp_v4 = &LAB_00100ded;
  temp_v0 = param_1;
  temp_v1[0] = param_1;
  FUN_002fb0d4(param_1,temp_v1 + 1,nw_snd_internal_TaskThread_ThreadFunc,temp_v1,
               *param_3 + param_3[1],param_2,0xfffffffe,0);
  if (((temp_v0 & 0x7e00000) != 0x600000) && ((int)temp_v0 < 0)) {
    FUN_002e3140(temp_v0);
  }
  if (-1 < (int)temp_v0) {
    *(unsigned char *)(param_1 + 0x15) = 1;
  }
  return;
}
