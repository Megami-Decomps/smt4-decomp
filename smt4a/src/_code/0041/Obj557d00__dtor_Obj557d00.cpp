/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj557d00D1Ev` (_code @ 0x4162a4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(void);

typedef int romwright_code(...);
/* Supplied declaration required: asdMemFree. */


unsigned int * _ZN9Obj557d00D1Ev(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = (unsigned int)"护A抔A";
  if (param_1[0x11] != 0) {
    asdMemFree();
    param_1[0x11] = 0;
  }
  if (param_1[0x12] != 0) {
    asdMemFree();
    param_1[0x12] = 0;
  }
  if (param_1[0x13] != 0) {
    asdMemFree();
    param_1[0x13] = 0;
  }
  if (param_1[0x14] != 0) {
    asdMemFree();
    param_1[0x14] = 0;
  }
  if (param_1[0x15] != 0) {
    asdMemFree();
    param_1[0x15] = 0;
  }
  if (param_1[0x16] != 0) {
    asdMemFree();
    param_1[0x16] = 0;
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[0x22] + 4))();
    param_1[0x22] = 0;
  }
  if (((param_1[2] & 1) == 0) && (param_1[0x10] != 0)) {
    asdMemFree();
    param_1[0x10] = 0;
  }
  return param_1;
}

} /* extern "C" */
