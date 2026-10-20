/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048d358` (_code @ 0x48d358, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00168980(int);
int FUN_00184528(int, int);
int FUN_004935b0(int, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_005f15fc; /* 0x5f15fc */

extern int FUN_00163aa4(int);
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_00168980. */
/* Supplied declaration required: FUN_00184528. */
extern int FUN_002e19f8(void);
/* Supplied declaration required: FUN_004935b0. */


void FUN_0048d358(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 8) == 1) {
      temp_v3 = param_1 + 0x590;
      temp_v0 = FUN_00163aa4(temp_v3);
      if ((temp_v0 != 0) && (temp_v0 = FUN_002e19f8(), temp_v0 != 0)) {
        *(unsigned int *)(param_1 + 8) = 2;
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 2;
      }
      temp_v1 = FUN_001654e4(temp_v3);
      temp_v2 = FUN_001654d8(temp_v3);
      FUN_004935b0(param_1 + 0x4d0,temp_v2,temp_v1);
      return;
    }
  }
  else {
    FUN_00184528(param_1 + 0x4e4,1);
    if ((*(signed char *)((unsigned char *)&DAT_005f15fc + 0x295)) == '\0') {
      FUN_00168980(0x1b);
    }
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 0x1000000;
    *(unsigned int *)(param_1 + 8) = 1;
  }
  return;
}

} /* extern "C" */
