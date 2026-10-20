/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354c60` (_code @ 0x354c60, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00361234(void);
int nn_fs_ipc_FileSystem_FormatSaveData(unsigned int [2], int, int, unsigned int **, int, int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);

/* stack frame of param_3: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern unsigned char DAT_0044e650; /* 0x44e650 */

/* Supplied declaration required: FUN_00361234. */
/* Supplied declaration required: nn_fs_ipc_FileSystem_FormatSaveData. */


void FUN_00354c60(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int **temp_v2;
  unsigned int uStack_24;
  unsigned int temp_v3 [2];
  
  temp_v0 = param_2;
  FUN_00361234();
  temp_v1 = param_1;
  FUN_00361234();
  temp_v2 = (unsigned int **)&temp_v2;
  uStack_24 = 1;
  temp_v3[0] = (*(unsigned int *)((unsigned char *)&DAT_0044e650 + 0x10));
  nn_fs_ipc_FileSystem_FormatSaveData
            (temp_v3,4,1,temp_v2,1,0x200,param_2,param_1,temp_v0,temp_v1,param_3,1);
  return;
}

} /* extern "C" */
