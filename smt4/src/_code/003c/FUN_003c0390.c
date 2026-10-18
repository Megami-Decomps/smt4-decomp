/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c0390` (_code @ 0x3c0390, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a4ac. */
extern unsigned int FUN_002499b4(void);
extern int FUN_002939f4(void);


void FUN_003c0390(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_002939f4();
  if ((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40) == 0 && (*(unsigned int *)(temp_v0 + 0x44a0) & 0x100) == 0) {
    temp_v3 = param_2 < 0;
    temp_v2 = *(unsigned int *)(temp_v0 + 0x2240);
    if (!temp_v3) {
      temp_v1 = FUN_002499b4();
    }
    else {
      param_2 = -1;
      temp_v1 = 0;
    }
    FUN_0022a4ac(!temp_v3,0,param_1,temp_v2,temp_v1,param_3,param_2);
  }
  return;
}
