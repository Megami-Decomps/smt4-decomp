/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a76c` (_code @ 0x22a76c, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a640. */
extern int FUN_00293c98(void);


void FUN_0022a76c(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00293c98();
  if ((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40) == 0 && (*(unsigned int *)(temp_v0 + 0x44a0) & 0x100) == 0) {
    if (param_2 != 0) {
      temp_v2 = *(unsigned int *)(temp_v0 + 0x2230);
      temp_v3 = 0xd;
      temp_v1 = 1;
    }
    else {
      temp_v0 = FUN_00293c98();
      if ((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40) != 0 || (*(unsigned int *)(temp_v0 + 0x44a0) & 0x100) != 0) {
        return;
      }
      temp_v2 = *(unsigned int *)(temp_v0 + 0x2230);
      temp_v3 = 0xffffffff;
      param_2 = 0;
      temp_v1 = 0;
    }
    FUN_0022a640(temp_v1,0,param_1,temp_v2,param_2,param_3,temp_v3);
  }
  return;
}
