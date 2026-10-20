/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00174a00` (_code @ 0x174a00, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(unsigned int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_0016e800. */
extern unsigned int nn_fs_detail_FileBase_TryRead(unsigned int, int *, unsigned int, unsigned int);


int FUN_00174a00(int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int *temp_v1;
  
  temp_v1 = param_4;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    temp_v0 = nn_fs_detail_FileBase_TryRead(param_1 + 4,param_4,param_2,param_3);
    *(unsigned int *)(param_1 + 0x18) = temp_v0;
    return ((int)temp_v0 >> 0x1f) + 1;
  }
  temp_v0 = nn_fs_detail_FileBase_TryRead(param_1 + 4,(int *)&temp_v1,param_2,param_3);
  if ((int)temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x174a50);
  }
  *param_4 = (int)temp_v1;
  return 1;
}

} /* extern "C" */
