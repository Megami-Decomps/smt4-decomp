/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cec_CTR_Message_GetMessageId` (_code @ 0x430e84, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int wordPairCopy(...);
int clearTwoWords(void);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: wordPairCopy. */
extern unsigned int releaseOrCopyHandle(unsigned char *, int);
/* Supplied declaration required: clearTwoWords. */


unsigned int nn_cec_CTR_Message_GetMessageId(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [8];
  
  if (param_3 != 0) {
    temp_v0 = releaseOrCopyHandle(temp_v1,param_2 + 0x20);
    wordPairCopy(param_3,temp_v0);
  }
  if (param_2 != -0x20) {
    wordPairCopy();
  }
  else {
    clearTwoWords();
  }
  return param_1;
}

} /* extern "C" */
