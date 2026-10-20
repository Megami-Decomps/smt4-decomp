/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f12d4` (_code @ 0x3f12d4, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0020214c(void);
int FUN_002804b0(unsigned char *, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned char LAB_003f1318; /* 0x3f1318 */

/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_002804b0. */


void FUN_003f12d4(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  
  if (*(int *)(param_1 + 0x2294) == 0) {
    if (param_2 != 0) {
      FUN_002804b0(&LAB_003f1318,param_1 + 0x2294,0);
      return;
    }
    puVar1 = &LAB_003f1318;
    FUN_0020214c();
    *(unsigned char **)(param_1 + 0x2294) = puVar1;
  }
  return;
}

} /* extern "C" */
