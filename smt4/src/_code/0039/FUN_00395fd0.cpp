/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00395fd0` (_code @ 0x395fd0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMdlManagerMarkDestroy(void);
int asdMdlManagerDestroy(unsigned int);
int asdMemFreeNonNull(unsigned int *);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0042231c; /* 0x42231c */

/* Supplied declaration required: asdMdlManagerMarkDestroy. */
/* Supplied declaration required: asdMdlManagerDestroy. */
/* Supplied declaration required: asdMemFreeNonNull. */


void FUN_00395fd0(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)param_1[0x1a];
  *param_1 = (unsigned int)&DAT_0042231c;
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
    param_1[0x1a] = 0;
  }
  if (param_1[0x1b] != 0) {
    asdMdlManagerMarkDestroy();
    asdMdlManagerDestroy(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  asdMemFreeNonNull(param_1);
  return;
}

} /* extern "C" */
