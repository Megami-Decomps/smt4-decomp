/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00182054` (_code @ 0x182054, 0x18 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

extern int FUN_001861c4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_002adba8(void);


unsigned char FUN_00182054(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_lr */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v0 = FUN_002adba8();
  temp_v1 = FUN_001861c4(0x2e,temp_v0,param_3,param_4,unaff_r4,in_lr);
  return (*(unsigned int *)(temp_v1 + 0x10) & 4) != 0;
}
