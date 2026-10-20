/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354ce0` (_code @ 0x354ce0, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bbb2c(unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_002bbb2c. */
extern unsigned int nn_fs_detail_FileBase_TryRead(unsigned int, int *, unsigned int, unsigned int);


int FUN_00354ce0(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1 [2];
  
  temp_v1[0] = param_4;
  temp_v0 = nn_fs_detail_FileBase_TryRead(param_1 + 4,temp_v1,param_2,param_3);
  if ((int)temp_v0 < 0) {
    FUN_002bbb2c(temp_v0,0x354d00);
  }
  return temp_v1[0];
}

} /* extern "C" */
