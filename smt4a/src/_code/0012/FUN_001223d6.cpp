/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001223d6` (_code @ 0x1223d6, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001037d6(unsigned int, int *);
int FUN_002e9a56(unsigned int);

/* stack frame of param_4: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned char sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001037d6. */
/* Supplied declaration required: FUN_002e9a56. */
extern int FUN_002f4e86(unsigned int *);


void FUN_001223d6(unsigned int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_4;
  temp_v0 = FUN_002f4e86(param_2);
  if (temp_v0 != 0) {
    FUN_002e9a56(param_1);
    return;
  }
  FUN_002e9a56(param_1);
  temp_v1 = *param_2;
  FUN_001037d6(param_1,&temp_v1);
  return;
}

} /* extern "C" */
