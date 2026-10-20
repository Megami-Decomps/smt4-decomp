/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041f9e4` (_code @ 0x41f9e4, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0041b360(int, int, unsigned int, int, int, unsigned int);
int FUN_0041c45c(int, unsigned int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_0041b360. */
/* Supplied declaration required: FUN_0041c45c. */


void FUN_0041f9e4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v4 = 0x51;
  temp_v2 = 0;
  if (*(int *)(param_1 + 0x18) < 2) {
    temp_v4 = 0x83;
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      temp_v3 = *(int *)(param_1 + 0x300) + *(int *)(param_1 + 0x304) + temp_v2;
      temp_v0 = FUN_001834a4(0x2b,temp_v4 + temp_v2);
      if (*(char *)(param_1 + temp_v3 + 0x2ec) != '\0') {
        temp_v5 = 1;
        temp_v1 = param_1 + temp_v3 * 0x80 + 0x6c;
      }
      else {
        if ((*(char *)(param_1 + 0x13) == '\0') && (0 < temp_v3)) {
          temp_v5 = 0;
        }
        else {
          temp_v5 = 1;
        }
        temp_v1 = 0;
      }
      FUN_0041b360(param_1 + temp_v2 * 0x44 + 0x664,temp_v1,temp_v0,temp_v3 + 1,
                   *(int *)(param_1 + 0x308) == temp_v2,temp_v5);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x18));
  }
  temp_v0 = FUN_001834a4(0x2b,*(int *)(param_1 + 0x308) + temp_v4);
  FUN_0041c45c(param_1 + 0x6ec,temp_v0);
  return;
}

} /* extern "C" */
