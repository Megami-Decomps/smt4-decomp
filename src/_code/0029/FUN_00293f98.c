/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00293f98` (_code @ 0x293f98, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0023e3ec. */
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002a5ee4. */
/* Supplied declaration required: FUN_002a6100. */
extern int FUN_002ae98c(unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00293f98(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((param_2 & 8) != 0) {
      temp_v0 = FUN_002ae98c(DAT_00433158,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                           1);
      if (temp_v0 != 0) {
        FUN_002a5ee4(DAT_00433158,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                     0x20000);
        return;
      }
      FUN_0023e3ec(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
      return;
    }
    if ((param_2 & 0x40) != 0) {
      temp_v0 = FUN_002ae98c(DAT_00433158,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                           1);
      if (temp_v0 != 0) {
        FUN_002a5ee4(DAT_00433158,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                     0x30000);
        return;
      }
      FUN_002a6100(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
      return;
    }
    if ((param_2 & 1) != 0) {
      temp_v0 = FUN_002ae98c(DAT_00433158,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                           1);
      if (temp_v0 != 0) {
        FUN_002a5ee4(DAT_00433158,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc),
                     0x10000);
        return;
      }
      FUN_002a5ed0(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
      return;
    }
  }
  return;
}
