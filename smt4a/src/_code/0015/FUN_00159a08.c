/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159a08` (_code @ 0x159a08, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Supplied declaration required: FUN_0016cd18. */
extern int FUN_0016ceb8(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00159a08(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0016ceb8(0,param_2,0x10302,0x400db,0,1,1);
  if (temp_v0 < 0x801) {
    temp_v1 = 0;
    FUN_0016cd18("ngword:",0,0x10302,0x400db,0,1,1,*(unsigned int *)(param_1 + 0x28),0x800,0);
    if ((temp_v1 & 0x80000000) == 0) {
      *(unsigned char *)(param_1 + 0x19) = 1;
    }
  }
  return;
}
