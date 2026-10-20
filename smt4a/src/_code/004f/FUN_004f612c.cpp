/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f612c` (_code @ 0x4f612c, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int objDestroyIfSet(void);

typedef struct fn_004f612c_arg0 fn_004f612c_arg0;
struct fn_004f612c_arg0 {
    unsigned char pad_0x0[0x339c];
    uint field_0x339c; /* +0x339c */
    unsigned char pad_0x33a0[0x8];
    int field_0x33a8; /* +0x33a8 */
    undefined1 field_0x33ac; /* +0x33ac */
};

extern int g_btlCamera; /* 0x571508 */

/* Supplied declaration required: objDestroyIfSet. */


void FUN_004f612c(fn_004f612c_arg0 *param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1->field_0x33a8 != 0) {
    objDestroyIfSet();
    param_1->field_0x33a8 = 0;
  }
  param_1->field_0x33ac = 0xc;
  param_1->field_0x339c = param_1->field_0x339c & 0xfffffffd;
  if (g_btlCamera != 0) {
    *(unsigned int *)(g_btlCamera + 0x64c) = *(unsigned int *)(g_btlCamera + 0x64c) & 0xfbffffff;
  }
  return;
}

} /* extern "C" */
