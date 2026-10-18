/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ecfe4` (_code @ 0x2ecfe4, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043de68; /* 0x43de68 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c3f5c. */
/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: nn_os_Thread_FinalizeImpl. */


void FUN_002ecfe4(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int uStack_18;
  unsigned char temp_v1 [4];
  
  temp_v0 = DAT_0043de68;
  if (DAT_0043de68 != 0) {
    uStack_18 = *(unsigned int *)(DAT_0043de68 + 0x42c);
    puVar2 = temp_v1;
    FUN_002c40f8(puVar2,&uStack_18,1,0,0xffffffff,0xffffffff);
    if ((int)puVar2 < 0) {
      FUN_002c526c();
    }
    *(unsigned char *)(temp_v0 + 0x430) = 1;
    nn_os_Thread_FinalizeImpl();
    if (*(int *)(temp_v0 + 0x42c) != 0) {
      software_interrupt(0x23);
      *(int *)(temp_v0 + 0x42c) = 0;
    }
    FUN_002c3f5c(temp_v0 + 0x434);
    if (*(int *)(temp_v0 + 0x44c) != 0) {
      FUN_002c415c();
      *(unsigned int *)(temp_v0 + 0x44c) = 0;
    }
    *(unsigned int *)(temp_v0 + 0x428) = 0xffffffff;
  }
  return;
}
