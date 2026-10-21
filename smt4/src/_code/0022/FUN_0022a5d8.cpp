/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a5d8` (_code @ 0x22a5d8, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022a4ac(unsigned int, int, unsigned int, unsigned int, int, unsigned int, unsigned int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0022a4ac. */
extern int btlGetMainState(void);


unsigned int FUN_0022a5d8(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = btlGetMainState();
  if ((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40) == 0 && (*(unsigned int *)(temp_v0 + 0x44a0) & 0x100) == 0) {
    if (param_2 != 0) {
      temp_v2 = *(unsigned int *)(temp_v0 + 0x2230);
      temp_v3 = 0xd;
      temp_v1 = 1;
    }
    else {
      temp_v0 = btlGetMainState();
      if ((*(unsigned int *)(temp_v0 + 0x44a0) & 0x40) != 0 || (*(unsigned int *)(temp_v0 + 0x44a0) & 0x100) != 0) {
        return 0;
      }
      temp_v2 = *(unsigned int *)(temp_v0 + 0x2230);
      temp_v3 = 0xffffffff;
      param_2 = 0;
      temp_v1 = 0;
    }
    return FUN_0022a4ac(temp_v1,0,param_1,temp_v2,param_2,param_3,temp_v3);
  }
  return 0;
}

} /* extern "C" */
