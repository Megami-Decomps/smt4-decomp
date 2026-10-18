/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041e2d8` (_code @ 0x41e2d8, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int FUN_001801a4(void);
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002f0384. */
/* Supplied declaration required: FUN_0038b5fc. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041e2d8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 0x2f8);
  if (((*(int *)(param_1 + 0x60) != temp_v0) && (*(char *)(param_1 + 0x30c) == '\0')) &&
     (*(char *)(param_1 + 0x5c) == '\0')) {
    *(int *)(param_1 + 0x60) = temp_v0;
    if (*(char *)(temp_v0 + param_1 + 0x2ec) != '\0') {
      *(unsigned char *)(param_1 + 0x5c) = 1;
      FUN_002f0384(0);
      *(unsigned char *)(param_1 + 0x68) = 0;
      temp_v1 = FUN_001801a4();
      rt_memcpy_w(temp_v1,*(unsigned int *)(param_1 + 0x54),0xe);
      FUN_0038b5fc(1,*(unsigned short *)(*(int *)(param_1 + 0x54) + 8));
      FUN_0038b5fc(2,*(unsigned short *)(*(int *)(param_1 + 0x54) + 10));
      FUN_0038b5fc(0,*(unsigned short *)(*(int *)(param_1 + 0x54) + 6));
      return;
    }
    FUN_0023b45c(0);
    FUN_002c8538(1);
    FUN_002f0384(0);
    *(unsigned char *)(param_1 + 0x68) = 0;
  }
  return;
}
