/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012409c` (_code @ 0x12409c, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_U16TreeFind.h"

extern "C" {

int onlineSockAddrCopy(unsigned int, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int wordRefsDiffer_00132142(int *, unsigned int *);
/* Supplied declaration required: onlineSockAddrCopy. */


unsigned char FUN_0012409c(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int iStack_18;
  int uStack_14;
  unsigned int uStack_10;
  
  iStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  U16LookupIterator found = onlineU16TreeFind((U16LookupTree*)(param_1 + 4),(u16*)&uStack_14);
  temp_v1 = (int)found.node;
  temp_v2 = *(unsigned int *)(param_1 + 0x14);
  temp_v0 = wordRefsDiffer_00132142(&temp_v1,(unsigned int *)&temp_v2);
  if (temp_v0 != 0) {
    onlineSockAddrCopy(param_3,temp_v1 + 0x14);
  }
  return temp_v0 != 0;
}

} /* extern "C" */
