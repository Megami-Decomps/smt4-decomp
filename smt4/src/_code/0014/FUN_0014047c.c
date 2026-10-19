/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014047c` (_code @ 0x14047c, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00140f3c. */
extern void nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(unsigned int);


void FUN_0014047c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (*(char *)(param_1 + 0x180) != '\0') {
    if ((*(unsigned int *)(param_1 + 0x110) & 0xfffffffe) != 0) {
      nn_fs_CTR_MPCore_detail_UserFileSystem_CloseFile(*(unsigned int *)(param_1 + 0x110) & 0xfffffffe);
      *(unsigned int *)(param_1 + 0x110) = 0;
    }
    FUN_00140f3c(param_1 + 300);
    *(unsigned char *)(param_1 + 0x180) = 0;
  }
  *(unsigned int *)(param_1 + 4) = 0;
  *(unsigned char *)(param_1 + 8) = 0x2f;
  *(unsigned char *)(param_1 + 9) = 0;
  return;
}
