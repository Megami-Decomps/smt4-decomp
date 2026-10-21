/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00117300` (_code @ 0x117300, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00122692(int, unsigned char [4]);
int sharedRefHolderDestroy2(unsigned char [4]);
int FUN_002fde5c(unsigned char [4]);
int streamReadWordCopy(unsigned char [4], int *);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned char sp24; /* 0x24: local_24 */
} param_2_stack;

/* Supplied declaration required: FUN_00122692. */
/* Supplied declaration required: sharedRefHolderDestroy2. */
/* Supplied declaration required: FUN_002fde5c. */
/* Supplied declaration required: streamReadWordCopy. */


unsigned int FUN_00117300(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [4];
  char temp_v2;
  int temp_v3;
  
  FUN_002fde5c(temp_v1);
  FUN_00122692(param_1,temp_v1);
  if (((*(char *)(param_1 + 4) == '\0') && (streamReadWordCopy(temp_v1,&temp_v3), temp_v2 == '\0'))
     && (temp_v3 == param_2 + 1)) {
    sharedRefHolderDestroy2(temp_v1);
    temp_v0 = 1;
  }
  else {
    sharedRefHolderDestroy2(temp_v1);
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
