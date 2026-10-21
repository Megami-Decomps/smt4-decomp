/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003564e8` (_code @ 0x3564e8, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned int recordRequireValue(unsigned int *);
extern unsigned int nn_fs_ipc_FileSystem_CloseArchive(unsigned int, unsigned long long);


unsigned int * FUN_003564e8(unsigned int *param_1)

{
  unsigned int temp_v0;
  unsigned int unaff_r4;
  unsigned char temp_v1;
  
  *param_1 = (unsigned int)"挼5悼5怐5";
  if (param_1[2] != 0 || param_1[3] != 0) {
    temp_v0 = recordRequireValue(param_1);
    nn_fs_ipc_FileSystem_CloseArchive((unsigned int)&temp_v1,romwright_piece_4_4(unaff_r4,temp_v0));
    param_1[2] = 0;
    param_1[3] = 0;
  }
  param_1[1] = 0;
  return param_1;
}

} /* extern "C" */
