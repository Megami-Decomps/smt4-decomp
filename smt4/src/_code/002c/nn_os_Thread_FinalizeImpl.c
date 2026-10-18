/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_os_Thread_FinalizeImpl` (_code @ 0x2c3fe4, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */


void nn_os_Thread_FinalizeImpl(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  int uStack_10;
  unsigned char temp_v0 [4];
  
  if (*(char *)(param_1 + 1) == '\0') {
    uStack_10 = *param_1;
    puVar1 = temp_v0;
    FUN_002c40f8(puVar1,&uStack_10,1,0,0xffffffff,0xffffffff);
    if ((int)puVar1 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(param_1 + 1) = 1;
  }
  return;
}
