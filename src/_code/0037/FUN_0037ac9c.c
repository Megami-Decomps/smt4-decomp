/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037ac9c` (_code @ 0x37ac9c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


void FUN_0037ac9c(int param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002baed8();
  temp_v1 = temp_v0;
  FUN_002b4f64(temp_v0,6);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x12;
  *(int *)(temp_v1 + 0x10) = param_1 + 0xf4;
  *(unsigned char *)(temp_v1 + 0x14) = param_2;
  FUN_002b4f40(temp_v0,temp_v1);
  return;
}
