/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003474b0` (_code @ 0x3474b0, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0023b834. */
/* Supplied declaration required: FUN_0023b934. */
extern unsigned int FUN_002bc300(int);
/* Supplied declaration required: FUN_002c5ff4. */
/* Supplied declaration required: FUN_00347190. */


void FUN_003474b0(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if ((*(unsigned int *)(param_1 + 4) & 0x100) == 0) {
      FUN_00347190(param_1);
      temp_v2 = *(int *)(param_1 + 0x18);
      temp_v0 = temp_v2 << 1;
      FUN_0023b834(temp_v0);
      FUN_002c5ff4();
      temp_v1 = FUN_002bc300(temp_v0);
      *(unsigned int *)(param_1 + 0x7dc) = temp_v1;
      *(int *)(param_1 + 0x7e0) = temp_v2;
      *(unsigned char *)(param_1 + 0x7e4) = 0;
    }
    FUN_0023b934(param_1,param_1 + 0x4c,(unsigned int *)(param_1 + 0x7dc));
    return;
  }
  return;
}
