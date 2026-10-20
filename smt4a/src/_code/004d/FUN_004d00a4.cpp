/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d00a4` (_code @ 0x4d00a4, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a48ac(char *, unsigned int);
int FUN_002a48e0(char *);
int FUN_0031d1b4(char *, unsigned int);
int FUN_0031d1d8(char *, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_002a48ac. */
/* Supplied declaration required: FUN_002a48e0. */
/* Supplied declaration required: FUN_0031d1b4. */
/* Supplied declaration required: FUN_0031d1d8. */


void FUN_004d00a4(char *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  if (*param_1 == '\0') {
    FUN_002a48e0(param_1 + 0x10);
    FUN_0031d1d8(param_1 + 0x10,param_3);
  }
  if (*param_1 == '\x01') {
    FUN_002a48ac(param_1 + 0x10,param_2);
    FUN_0031d1b4(param_1 + 0x10,param_3);
    return;
  }
  return;
}

} /* extern "C" */
