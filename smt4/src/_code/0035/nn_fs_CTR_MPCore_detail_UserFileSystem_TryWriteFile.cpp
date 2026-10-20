/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_CTR_MPCore_detail_UserFileSystem_TryWriteFile` (_code @ 0x355d04, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ad958(int);
int romwright_set_sp(unsigned int);

typedef int romwright_code(...);
/* Unsupported intrinsic, declaration required: romwright_set_sp (a write of the stack pointer). */
/* stack frame of param_6: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_6_stack;

/* Supplied declaration required: FUN_002ad958. */


unsigned int nn_fs_CTR_MPCore_detail_UserFileSystem_TryWriteFile
               (int *param_1,int *param_2,long long param_3,unsigned int param_4,unsigned int param_5,
               unsigned char param_6)

{
/* irregular: irregular input(s): in_stack_00000009; 1 native warning(s); review required */
  long long temp_v0;
  unsigned int temp_v1;
  unsigned int in_stack_00000009;
  
  temp_v0 = param_3;
  temp_v1 = (*(unsigned int *)&param_6);
  if ((param_1 == (int *)0x0 || param_2 == (int *)0x0) || (int)param_3 == 0) {
    romwright_set_sp((unsigned int)((unsigned int *)0xe0e046bc));
  }
  if ((param_1 != (int *)0x0 && param_2 != (int *)0x0) && (int)param_3 != 0) {
    FUN_002ad958(0);
    romwright_set_sp((unsigned int)((unsigned int *)(**(romwright_code **)(*param_2 + 4))(param_2,param_1,param_4,param_5,temp_v0,temp_v1)));
  }
  return (unsigned int)(unsigned char *)((unsigned int)__current_sp());
}

} /* extern "C" */
