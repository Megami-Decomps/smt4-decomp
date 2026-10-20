/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034d884` (_code @ 0x34d884, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0027d9e8(unsigned int, unsigned int);
int FUN_0027da30(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_0027d9e8. */
/* Supplied declaration required: FUN_0027da30. */
extern int FUN_0027dab0(int, int);


void FUN_0034d884(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(*(int *)(param_1 + 4) + 0x1e98) + (param_3 + param_2 * 0x40) * 4;
  temp_v0 = FUN_0027dab0(*(int *)(param_1 + 4),temp_v2);
  temp_v1 = *(int *)(param_1 + 4);
  FUN_0027da30(temp_v1,(int)*(short *)(temp_v2 + 0x62));
  FUN_0027d9e8(*(unsigned int *)(param_1 + 4),*(unsigned int *)(temp_v1 + temp_v0 * 4 + 0xc));
  return;
}

} /* extern "C" */
