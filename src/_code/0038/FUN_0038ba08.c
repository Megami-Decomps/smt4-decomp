/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038ba08` (_code @ 0x38ba08, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char LAB_0038ba78; /* 0x38ba78 */
extern unsigned char LAB_0038ba88; /* 0x38ba88 */
extern unsigned int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_0038a364. */


void FUN_0038ba08(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [128];
  
  FUN_002c4b30(temp_v0,0x80);
  *(unsigned int *)(param_1 + 0x38) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = 0;
  *(unsigned char *)(param_1 + 0x44) = 0;
  *(unsigned char *)(param_1 + 0x45) = 0;
  FUN_002be7fc(temp_v0,&LAB_0038ba88,param_1 + 0x24,&LAB_0038ba78);
  FUN_0038a364(DAT_00433130,temp_v0,param_1 + 0x48,1,0x80,param_1 + 0x38);
  return;
}
