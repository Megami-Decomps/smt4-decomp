/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013cae4` (_code @ 0x13cae4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001566a8(int, unsigned int, unsigned int, unsigned int, int);
int FUN_001568f8(int, int);
int FUN_0015f490(int, unsigned int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int btlGetMainState(void);
extern unsigned int FUN_0014af98(void);
extern unsigned int FUN_00152f44(void);
/* Supplied declaration required: FUN_001566a8. */
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_0015f490. */


unsigned int FUN_0013cae4(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  if (param_1 != 10) {
    temp_v0 = FUN_00152f44();
    if (param_1 == 1 || param_1 == 3) {
      temp_v0 = temp_v0 | 4;
    }
    temp_v1 = FUN_0014af98();
    FUN_001566a8(param_1,param_2,temp_v1,temp_v0,1);
  }
  else {
    temp_v2 = btlGetMainState();
    if ((temp_v2 != 0) && (FUN_001568f8(temp_v2,(int)*(short *)(temp_v2 + 0x2356)), temp_v2 != 0)) {
      FUN_0015f490(*(unsigned short *)(temp_v2 + 2),param_2,1,0);
    }
  }
  return 1;
}

} /* extern "C" */
