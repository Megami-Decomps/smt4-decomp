/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00429ec0` (_code @ 0x429ec0, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0043c32c(void);
int nn_fs_ipc_FileSystem_FormatSaveData(unsigned int [2], int, int, unsigned int **, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned int DAT_005893a8; /* 0x5893a8 */

/* Supplied declaration required: FUN_0043c32c. */
/* Supplied declaration required: nn_fs_ipc_FileSystem_FormatSaveData. */


void FUN_00429ec0(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int **temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4 [2];
  
  temp_v0 = param_2;
  FUN_0043c32c();
  temp_v1 = param_1;
  FUN_0043c32c();
  temp_v2 = (unsigned int **)&temp_v2;
  temp_v3 = 1;
  temp_v4[0] = DAT_005893a8;
  nn_fs_ipc_FileSystem_FormatSaveData
            (temp_v4,4,1,temp_v2,1,0x200,param_2,param_1,temp_v0,temp_v1,param_3,1);
  return;
}

} /* extern "C" */
