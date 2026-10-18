/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045fd14` (_code @ 0x45fd14, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: FUN_0017572c. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_0045fd14(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,10);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x29;
  *(int *)(temp_v1 + 0x10) = param_1 + 0x118;
  *(unsigned int *)(temp_v1 + 0x24) = param_2;
  temp_v2 = param_3[1];
  temp_v3 = param_3[2];
  temp_v4 = param_3[3];
  *(unsigned int *)(temp_v1 + 0x14) = *param_3;
  *(unsigned int *)(temp_v1 + 0x18) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x1c) = temp_v3;
  *(unsigned int *)(temp_v1 + 0x20) = temp_v4;
  FUN_0017572c(temp_v0,temp_v1);
  return;
}
