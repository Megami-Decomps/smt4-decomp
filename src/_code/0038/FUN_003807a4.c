/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003807a4` (_code @ 0x3807a4, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b5124. */
/* Supplied declaration required: FUN_002b5148. */
extern int FUN_002bb218(void);


void FUN_003807a4(int param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002bb218();
  temp_v1 = temp_v0;
  FUN_002b5148(temp_v0,6);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x27;
  *(int *)(temp_v1 + 0x10) = param_1 + 0xf4;
  *(unsigned char *)(temp_v1 + 0x14) = param_2;
  FUN_002b5124(temp_v0,temp_v1);
  return;
}
