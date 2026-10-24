/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ebba0` (_code @ 0x3ebba0, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned int g_asdFileMutex; /* 0x465014 */
extern unsigned int g_asdFileThread; /* 0x465020 */
extern unsigned char DAT_00465024; /* 0x465024 */
extern unsigned int g_asdFileEvent; /* 0x465028 */
extern unsigned int DAT_0046502c; /* 0x46502c */
extern unsigned int DAT_00465038; /* 0x465038 */
extern unsigned int DAT_0046503c; /* 0x46503c */


void FUN_003ebba0(unsigned int param_1,unsigned int param_2,int param_3)

{
  *(unsigned int *)(param_3 + 0x30) = param_1;
  *(unsigned int *)(param_3 + 0x34) = param_2;
  DAT_00465038 = 0;
  DAT_0046503c = 0;
  g_asdFileThread = 0;
  DAT_00465024 = 1;
  g_asdFileMutex = 0;
  g_asdFileEvent = 0;
  DAT_0046502c = 0;
  return;
}

} /* extern "C" */
