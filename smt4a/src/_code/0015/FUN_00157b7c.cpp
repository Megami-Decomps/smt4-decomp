/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157b7c` (_code @ 0x157b7c, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016d338(int *, unsigned int);
int FUN_0017d7c4(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0016d338. */
/* Supplied declaration required: FUN_0017d7c4. */
extern unsigned int FUN_0017db04(int);
extern int FUN_0017dd70(int);


void FUN_00157b7c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  
  piVar4 = *(int **)(param_1 + 0xa8);
  if (((*piVar4 - piVar4[1]) & 0xfffffffcU) != 0) {
    temp_v3 = param_1 + *(int *)(param_1 + 0x9c) * 0x4c + 4;
    temp_v0 = FUN_0017dd70(temp_v3);
    temp_v2 = piVar4[4];
    if (temp_v2 != 0) {
      temp_v0 = temp_v3;
    }
    *(int *)(param_1 + 0xa0) = temp_v2;
    if (temp_v2 != 0) {
      FUN_0017d7c4(temp_v0);
    }
    temp_v1 = FUN_0017db04(temp_v3);
    FUN_0016d338(piVar4,temp_v1);
    return;
  }
  return;
}

} /* extern "C" */
