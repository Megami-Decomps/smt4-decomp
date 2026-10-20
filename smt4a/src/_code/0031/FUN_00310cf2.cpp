/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310cf2` (_code @ 0x310cf2, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9afe(int, unsigned int **);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int FUN_00122486(void);
/* Supplied declaration required: FUN_002e9afe. */


void FUN_00310cf2(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v1 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  temp_v0 = FUN_00122486();
  temp_v1 = (unsigned int *)*param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  FUN_002e9afe(temp_v0 + 0x20,&temp_v1);
  return;
}

} /* extern "C" */
