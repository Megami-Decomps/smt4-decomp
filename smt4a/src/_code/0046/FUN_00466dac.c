/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466dac` (_code @ 0x466dac, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: FUN_0017572c. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_00466dac(int param_1,unsigned char param_2,unsigned char param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,6);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x25;
  *(int *)(temp_v1 + 0x10) = param_1 + 0x124;
  *(unsigned char *)(temp_v1 + 0x14) = param_2;
  *(unsigned char *)(temp_v1 + 0x15) = param_3;
  FUN_0017572c(temp_v0,temp_v1);
  return;
}
