/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296fec` (_code @ 0x296fec, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00259294(int);
int FUN_0026b584(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0043e188; /* 0x43e188 */

/* Supplied declaration required: FUN_00259294. */
/* Supplied declaration required: FUN_0026b584. */


void FUN_00296fec(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  param_1[1] = 0;
  param_1[2] = 0;
  if ((int *)param_1[0x82] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x82] + 4))();
    param_1[0x82] = 0;
  }
  *param_1 = 0;
  param_1[3] = 0;
  param_1[0x8e] = 0x32;
  FUN_0026b584(4);
  FUN_00259294(4);
  DAT_0043e188 = 0;
  return;
}

} /* extern "C" */
