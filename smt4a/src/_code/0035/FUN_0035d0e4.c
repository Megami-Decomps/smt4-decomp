/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d0e4` (_code @ 0x35d0e4, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_0023f900. */
/* Supplied declaration required: FUN_0031d890. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0035d0e4(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0057f268;
  if ((DAT_0057f268 != 0) && (*(int *)(DAT_0057f268 + 0x1218) != param_1)) {
    *(int *)(DAT_0057f268 + 0x1218) = param_1;
    if (param_1 == 0) {
      temp_v1 = 0xffffffff;
    }
    else {
      temp_v1 = 0xfffffffe;
    }
    *(unsigned int *)(*(int *)(temp_v0 + 0xa10) + 0x34) = temp_v1;
    if (param_1 != 0) {
      rt_memcpy_w(temp_v0 + 0xd50,temp_v0 + 0xc24,100);
      rt_memcpy_w(temp_v0 + 0xdb4,temp_v0 + 0xc24,100);
    }
    else {
      FUN_0031d890();
    }
    FUN_0023f900();
    return;
  }
  return;
}
