/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387ad8` (_code @ 0x387ad8, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int FUN_002e1c94(int, unsigned int, unsigned int);
extern unsigned int FUN_00318e08(int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned char FUN_00387ad8(int param_1,int param_2)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_2 != 0) {
    temp_v0 = FUN_00318e08(param_1 + 0x3c,4,0x1e,0,*(unsigned int *)(param_1 + 0x44));
    temp_v1 = FUN_002e1c94(param_1 + 0x38,4,*(unsigned int *)(param_1 + 0x44));
    temp_v1 = temp_v1 & temp_v0;
  }
  else {
    temp_v0 = FUN_00318e08(param_1 + 0x3c,3,0,0xffffffe2,*(unsigned int *)(param_1 + 0x44));
    temp_v1 = FUN_002e1c94(param_1 + 0x38,3,*(unsigned int *)(param_1 + 0x44));
    temp_v1 = temp_v1 & temp_v0;
  }
  if (temp_v1 != 0) {
    *(unsigned char *)(param_1 + 0x48) = 1;
  }
  else {
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  }
  return *(char *)(param_1 + 0x48) == '\x01';
}

} /* extern "C" */
