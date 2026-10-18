/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00511854` (_code @ 0x511854, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int FUN_0016df14(unsigned int *);
/* Supplied declaration required: FUN_002f4370. */


void FUN_00511854(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_2;
  param_1[1] = 0;
  temp_v0 = FUN_0016df14(param_1 + 2);
  *(unsigned char *)(temp_v0 + 0x128e8) = 0;
  *(unsigned char *)(temp_v0 + 0x128e9) = 2;
  *(unsigned char *)(temp_v0 + 0x128ea) = 0xff;
  *(unsigned char *)(temp_v0 + 0x128eb) = 0xff;
  *(unsigned int *)(temp_v0 + 0x128ec) = 0;
  *(unsigned char *)(temp_v0 + 0x128f0) = 0;
  *(unsigned char *)(temp_v0 + 0x128f1) = 2;
  *(unsigned char *)(temp_v0 + 0x128f2) = 0xff;
  *(unsigned char *)(temp_v0 + 0x128f3) = 0xff;
  *(unsigned int *)(temp_v0 + 0x128f4) = 0;
  FUN_002f4370(temp_v0 - 8,0x422180,0x100000);
  return;
}
