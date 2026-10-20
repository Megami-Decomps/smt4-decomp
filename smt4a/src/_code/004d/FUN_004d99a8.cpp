/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d99a8` (_code @ 0x4d99a8, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e3328(int);
int FUN_002e9ef8(unsigned int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_0055ca64; /* 0x55ca64 */

/* Supplied declaration required: FUN_002e3328. */
extern int FUN_002e9318(unsigned int *);
/* Supplied declaration required: FUN_002e9ef8. */


void FUN_004d99a8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055ca64;
  if (param_1[10] != 0) {
    FUN_002e9ef8(param_1[10],4);
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0xb] + 4))();
  }
  temp_v0 = FUN_002e9318(param_1 + 7);
  FUN_002e3328(temp_v0 - 0x1c);
  return;
}

} /* extern "C" */
