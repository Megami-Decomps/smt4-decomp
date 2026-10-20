/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb31c` (_code @ 0x4bb31c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0042f1cc(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern unsigned int DAT_0057f2c8; /* 0x57f2c8 */
extern int DAT_005b3f98; /* 0x5b3f98 */

extern int FUN_002bd934(unsigned int, unsigned int);
extern unsigned int FUN_0042d694(unsigned int);
/* Supplied declaration required: FUN_0042f1cc. */


unsigned int FUN_004bb31c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v1 = FUN_0042d694(0x19a2);
  temp_v2 = FUN_002bd934(temp_v1,DAT_0057f2c8);
  if (temp_v2 != 0) {
    temp_v1 = FUN_0042d694(0x19a2);
    temp_v3 = 0;
    if (DAT_005b3f98 != 0) {
      temp_v0 = *(unsigned int *)(DAT_005b3f98 + 0x18);
      FUN_0042f1cc(temp_v0,temp_v1,param_3,param_4,unaff_r4,in_lr);
      if ((temp_v0 & 0x80000000) == 0) {
        temp_v3 = 1;
      }
    }
    return temp_v3;
  }
  return 0;
}

} /* extern "C" */
