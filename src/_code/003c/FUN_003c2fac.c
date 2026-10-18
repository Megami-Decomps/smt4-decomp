/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2fac` (_code @ 0x3c2fac, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0022a60c. */
/* Supplied declaration required: FUN_00299000. */
/* Supplied declaration required: FUN_00299558. */
/* Supplied declaration required: FUN_0029d8c0. */
extern unsigned int FUN_0029ebdc(char *);
extern unsigned int FUN_0029f260(void);


void FUN_003c2fac(char *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_0029f260();
  }
  else {
    temp_v0 = FUN_0029ebdc(param_1 + 0x10);
  }
  if (*param_1 == '\0') {
    FUN_00299000(param_1 + 0x10,temp_v0);
    FUN_0029d8c0(param_1 + 0x10,param_2);
  }
  if (*param_1 == '\x01') {
    FUN_0022a60c(param_1 + 0x10,temp_v0);
    FUN_00299558(param_1 + 0x10,param_2);
    return;
  }
  return;
}
