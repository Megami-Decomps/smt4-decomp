/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_NotifyToWait` (_code @ 0x2bb2e4, 0x24 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
extern unsigned int FUN_0013b8fc(void);
/* Supplied declaration required: FUN_002bb100. */
/* Supplied declaration required: FUN_002bb378. */
extern unsigned int FUN_002c131c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c52f8. */
/* Supplied declaration required: nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile. */


int nn_applet_CTR_detail_NotifyToWait(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_002bb378();
  FUN_002bb100();
  temp_v1 = FUN_0013b8fc();
  temp_v2 = -((int)temp_v1 >> 0x1f);
  if (temp_v2 != 0) {
    temp_v1 = FUN_002c131c(temp_v1,0x2bb2fc);
  }
  *(unsigned int *)(temp_v1 & temp_v2) = temp_v2;
  coproc_movefrom_User_R_Thread_and_Process_ID();
  temp_v0 = (int)((unsigned int *)(temp_v1 & temp_v2) + 1) >> 2;
  if ((*(unsigned int *)(temp_v0 + 4) & 0xfffffffe) != 0) {
    if ((*(unsigned int *)(temp_v0 + 4) & 1) != 0) {
      FUN_002c52f8();
    }
    nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(temp_v0 + 4) & 0xfffffffe);
    *(unsigned int *)(temp_v0 + 4) = 0;
  }
  return temp_v0;
}
