/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0042a068` (_code @ 0x42a068, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016cdc0(unsigned char [12], int, unsigned int, unsigned int);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

extern unsigned char DAT_00589398; /* 0x589398 */

/* Supplied declaration required: FUN_0016cdc0. */
extern unsigned int nn_fs_ipc_FileSystem_CreateExtSaveData(unsigned int, int, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_0042a068(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 ,unsigned int param_6)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [12];
  unsigned int temp_v2 [2];
  
  FUN_0016cdc0(temp_v1,1,param_1,param_2);
  temp_v2[0] = (*(unsigned int *)((unsigned char *)&DAT_00589398 + 0x10));
  temp_v0 = nn_fs_ipc_FileSystem_CreateExtSaveData
                    ((unsigned int)temp_v2,(int)temp_v1,0xffffffffffffffff,param_5,param_6,param_3,param_4);
  if ((((temp_v0 & 0x3fc00) == 0x4400) && ((temp_v0 & 0x3ff) >= 0xdc)) && ((temp_v0 & 0x3ff) < 0xe6)) {
    temp_v0 = 0xc8804482;
  }
  return temp_v0;
}

} /* extern "C" */
