/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00196068` (_code @ 0x196068, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a9f08(void);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern int DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int *DAT_0061a50c; /* 0x61a50c */

/* Supplied declaration required: FUN_001a9f08. */


int FUN_00196068(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = *(unsigned int **)((param_1 & 0x1f) * 4 + 0x61a48c);
  if (puVar1 != (unsigned int *)0x0) {
    do {
      temp_v0 = *puVar1;
      if (temp_v0 != param_1) {
        puVar1 = (unsigned int *)puVar1[0x10];
      }
    } while (temp_v0 != param_1 && puVar1 != (unsigned int *)0x0);
  }
  if (DAT_0061a50c == puVar1) {
    puVar1[3] = DAT_005b40e0 - puVar1[1];
  }
  FUN_001a9f08();
  return param_3 + param_5 * 0x1c + 0x10;
}

} /* extern "C" */
