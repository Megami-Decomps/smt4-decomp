/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df43c` (_code @ 0x3df43c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_001ab940(void);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_00418584(int);


void FUN_003df43c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  temp_v1 = param_1;
  FUN_001ad9b4();
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = *(short *)(temp_v1 + 0xde);
  }
  if ((temp_v1 != 0 && temp_v0 != 0) && (temp_v1 = FUN_00418584(param_1), temp_v1 != 0)) {
    temp_v1 = FUN_001ab940();
    temp_v1 = temp_v1 + param_1 * 4;
    *(unsigned char *)(temp_v1 + 0x2a2) = *(unsigned char *)(temp_v1 + 0x2a2) | 8;
    return;
  }
  return;
}

} /* extern "C" */
