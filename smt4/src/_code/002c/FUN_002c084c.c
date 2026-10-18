/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c084c` (_code @ 0x2c084c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002694f8. */
extern int *FUN_0028c814(void);
/* Supplied declaration required: FUN_0028c854. */
extern int FUN_0028c904(int *);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002c084c(int param_1,int *param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0028c904(param_2);
  if (temp_v0 != 0) {
    FUN_0028c854();
  }
  else {
    param_2 = (int *)FUN_0028c814();
  }
  *(int **)(param_1 + 0x14) = param_2;
  FUN_002694f8();
  temp_v0 = *param_2;
  *param_2 = temp_v0 - 1;
  if (temp_v0 - 1 != 0) {
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
