/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d032c` (_code @ 0x4d032c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a48ac(char *, unsigned int);
int FUN_002a48e0(char *, unsigned int);
int FUN_0031d1b4(char *, unsigned int);
int FUN_0031d1d8(char *, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int FUN_002a4844(char *);
extern unsigned int FUN_002a4860(void);
/* Supplied declaration required: FUN_002a48ac. */
/* Supplied declaration required: FUN_002a48e0. */
/* Supplied declaration required: FUN_0031d1b4. */
/* Supplied declaration required: FUN_0031d1d8. */


void FUN_004d032c(char *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*param_1 != '\x01') {
    temp_v0 = FUN_002a4860();
  }
  else {
    temp_v0 = FUN_002a4844(param_1 + 0x10);
  }
  if (*param_1 == '\0') {
    FUN_002a48e0(param_1 + 0x10,temp_v0);
    FUN_0031d1d8(param_1 + 0x10,param_2);
  }
  if (*param_1 == '\x01') {
    FUN_002a48ac(param_1 + 0x10,temp_v0);
    FUN_0031d1b4(param_1 + 0x10,param_2);
    return;
  }
  return;
}

} /* extern "C" */
