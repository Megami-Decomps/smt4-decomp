/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227d70` (_code @ 0x227d70, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_00227668(unsigned int);
extern int FUN_00227ecc(unsigned int, unsigned int);
extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */


int FUN_00227d70(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_002939f4();
  temp_v0 = FUN_00293230();
  if (temp_v0 != 0) {
    temp_v0 = 5;
  }
  else {
    temp_v1 = FUN_00227ecc(param_1,param_2);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = (int)*(short *)(temp_v1 + 0x10);
    }
    if (temp_v1 == 0 || temp_v0 == 0) {
      temp_v0 = FUN_00227668(param_1);
      return temp_v0;
    }
  }
  return temp_v0;
}
