/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00142f30` (_code @ 0x142f30, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern int DAT_004652a0; /* 0x4652a0 */
extern unsigned int *DAT_004c632c; /* 0x4c632c */

/* Supplied declaration required: FUN_0014d8c8. */


int FUN_00142f30(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = *(unsigned int **)((param_1 & 0x1f) * 4 + 0x4c62ac);
  if (puVar1 != (unsigned int *)0x0) {
    do {
      temp_v0 = *puVar1;
      if (temp_v0 != param_1) {
        puVar1 = (unsigned int *)puVar1[0x10];
      }
    } while (temp_v0 != param_1 && puVar1 != (unsigned int *)0x0);
  }
  if (DAT_004c632c == puVar1) {
    puVar1[3] = DAT_004652a0 - puVar1[1];
  }
  FUN_0014d8c8();
  return param_3 + param_5 * 0x1c + 0x10;
}
