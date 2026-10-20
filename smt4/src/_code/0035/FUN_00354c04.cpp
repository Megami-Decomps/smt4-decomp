/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354c04` (_code @ 0x354c04, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f6db4(void);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_0044e660; /* 0x44e660 */

#ifndef ROMWRIGHT_ZEXT_4_8_DEFINED
#define ROMWRIGHT_ZEXT_4_8_DEFINED
#define romwright_zext_4_8(value) ((unsigned long long)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_003f6db4. */
extern unsigned int nn_fs_ipc_FileSystem_ControlArchive(unsigned int, unsigned long long, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_00354c04(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [4];
  unsigned char temp_v2 [4];
  
  FUN_003f6db4();
  if (param_1 != 0) {
    temp_v0 = DAT_0044e660;
    nn_fs_ipc_FileSystem_ControlArchive
              ((unsigned int)&temp_v0,romwright_zext_4_8(temp_v1) << 0x20,(unsigned int)temp_v2,*(unsigned int *)(param_1 + 8),
               *(unsigned int *)(param_1 + 0xc),1,(unsigned int)temp_v2);
  }
  return;
}

} /* extern "C" */
