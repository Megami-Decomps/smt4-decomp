/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_fs_DeleteExtSaveData` (_code @ 0x354ee0, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 6 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned short sp16; /* 0x16: local_16 */
    unsigned char sp17; /* 0x17: local_17 */
    unsigned char sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int FUN_002bbaf8(void);
extern unsigned int nn_fs_ipc_FileSystem_DeleteExtSaveData(unsigned int, int, unsigned int);


unsigned int nn_fs_DeleteExtSaveData(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_10;
  unsigned int temp_v5 [3];
  
  temp_v0 = 1;
  temp_v3 = 0;
  temp_v1 = 1;
  temp_v2 = 0;
  temp_v4 = param_1;
  uStack_10 = param_2;
  temp_v5[0] = FUN_002bbaf8();
  temp_v0 = nn_fs_ipc_FileSystem_DeleteExtSaveData((unsigned int)temp_v5,(int)&temp_v1,temp_v0);
  if ((((temp_v0 & 0x3fc00) == 0x4400) && ((temp_v0 & 0x3ff) >= 0xdc)) && ((temp_v0 & 0x3ff) < 0xe6)) {
    temp_v0 = 0xc8804482;
  }
  if (-1 < (int)temp_v0) {
    temp_v0 = 0;
  }
                    /* WARNING: Treating indirect jump as return */
  return temp_v0;
}

} /* extern "C" */
