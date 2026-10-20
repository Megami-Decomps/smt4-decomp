/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2114` (_code @ 0x2e2114, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003857b4(int);
int FUN_003e5504(unsigned int, int *);
int FUN_003e5558(unsigned int);
int FUN_003e5858(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_003857b4. */
/* Supplied declaration required: FUN_003e5504. */
/* Supplied declaration required: FUN_003e5558. */
/* Supplied declaration required: FUN_003e5858. */
extern int FUN_003e5ae8(unsigned int);


unsigned int FUN_002e2114(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v1 = 0;
  if (param_1[7] != 0) {
    FUN_003e5858();
    temp_v0 = FUN_003e5ae8(param_1[7]);
    if (temp_v0 != 0) {
      temp_v2 = *param_1;
      uStack_14 = param_1[1];
      uStack_10 = param_1[2];
      FUN_003e5504(param_1[7],&temp_v2);
      FUN_003e5558(param_1[7]);
      FUN_003857b4(0);
      temp_v1 = 1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
