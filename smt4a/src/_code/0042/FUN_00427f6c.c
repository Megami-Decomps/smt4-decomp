/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00427f6c` (_code @ 0x427f6c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} param_3_stack;

/* Supplied declaration required: FUN_001b57a8. */
extern int FUN_004283cc(unsigned int);
/* Supplied declaration required: FUN_004283f0. */
/* Supplied declaration required: FUN_00439664. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00427f6c(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  unsigned int uStack_54;
  unsigned char temp_v2 [64];
  
  temp_v0 = FUN_004283cc(param_2);
  if (temp_v0 < 0) {
    FUN_001b57a8(param_1,temp_v0);
    return;
  }
  puVar2 = temp_v2;
  FUN_00439664();
  if (-1 < (int)puVar2) {
    rt_memcpy(param_3,temp_v2,0x20);
    puVar2 = (unsigned char *)0x0;
  }
  FUN_001b57a8(&temp_v1,puVar2);
  FUN_004283f0(param_2,temp_v1,uStack_54);
  *param_1 = temp_v1;
  param_1[1] = uStack_54;
  return;
}
