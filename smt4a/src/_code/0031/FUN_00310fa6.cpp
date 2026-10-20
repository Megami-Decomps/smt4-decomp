/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310fa6` (_code @ 0x310fa6, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strAssign(unsigned int, int, int, unsigned int);
int streamWriterFinish(int);
int streamSeek(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int streamReaderHasBytes(int, int);
/* Supplied declaration required: strAssign. */
extern int onlineBufferGetData(void);
extern int streamReadU32(int, int *);
/* Supplied declaration required: streamWriterFinish. */
/* Supplied declaration required: streamSeek. */


unsigned int FUN_00310fa6(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  temp_v0 = streamReadU32(param_1,&temp_v2);
  temp_v1 = 0;
  if ((temp_v0 != 0) && (temp_v0 = streamReaderHasBytes(param_1,temp_v2), temp_v1 = 0, temp_v0 != 0)) {
    streamWriterFinish(param_1);
    temp_v0 = onlineBufferGetData();
    strAssign(param_2,temp_v0 + *(int *)(param_1 + 0xc),temp_v2,0xffffffff);
    streamSeek(param_1,*(int *)(param_1 + 0xc) + temp_v2);
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
