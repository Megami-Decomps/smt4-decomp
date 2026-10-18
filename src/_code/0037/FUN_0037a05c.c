/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a05c` (_code @ 0x37a05c, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_7_stack;

/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


void FUN_0037a05c(int param_1,unsigned int param_2,unsigned int param_3,unsigned short param_4,
                 unsigned char param_5,unsigned char param_6,unsigned long long param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned short *)(param_1 + 0x2bc8) = param_4;
  temp_v0 = FUN_002baed8();
  temp_v1 = temp_v0;
  FUN_002b4f64(temp_v0,10);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x28;
  *(int *)(temp_v1 + 0x10) = param_1 + 0xf4;
  *(unsigned int *)(temp_v1 + 0x14) = param_2;
  *(unsigned int *)(temp_v1 + 0x18) = param_3;
  *(unsigned short *)(temp_v1 + 0x1c) = param_4;
  *(unsigned char *)(temp_v1 + 0x1e) = param_5;
  *(unsigned char *)(temp_v1 + 0x1f) = param_6;
  *(int *)(temp_v1 + 0x20) = (int)param_7;
  *(int *)(temp_v1 + 0x24) = (int)((unsigned long long)param_7 >> 0x20);
  FUN_002b4f40(temp_v0);
  return;
}
