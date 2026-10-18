/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8004` (_code @ 0x3a8004, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002356d4. */
/* Supplied declaration required: FUN_00295ea8. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_0029c468. */
extern int FUN_0029c49c(void);
extern int FUN_0029c68c(void);
/* Supplied declaration required: FUN_0029d100. */
/* Supplied declaration required: FUN_002a0f68. */
extern int FUN_002e3118(void);


void FUN_003a8004(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = FUN_0029c68c();
  if ((temp_v1 == 1) && (temp_v1 = FUN_002e3118(), temp_v1 != 0)) {
    FUN_002356d4(0);
    temp_v1 = FUN_002337a0(param_1 + 0x20);
    temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac);
    temp_v1 = FUN_0029c49c();
    if (temp_v1 != -1) {
      FUN_0029c468(temp_v1,temp_v0);
    }
    temp_v2 = (unsigned int)temp_v0;
    FUN_0029d100(temp_v2,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_00295ea8(-temp_v2);
    FUN_0029c0fc(0x28,temp_v2);
    FUN_002a0f68(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
