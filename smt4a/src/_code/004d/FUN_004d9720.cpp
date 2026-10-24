/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004d9720` (_code @ 0x4d9720, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001244a8(void);
int _ZN18OnlineResultRecordaSERKS_(int, int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_001244a8. */
/* Supplied declaration required: _ZN18OnlineResultRecordaSERKS_. */
extern int _ZNK18OnlineResultRecord7isValidEv(int);


void FUN_004d9720(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int uStack_14;
  unsigned int temp_v3;
  
  temp_v3 = *(unsigned int *)(param_2 + 0x40);
  temp_v2 = *(unsigned int *)(param_2 + 0x38);
  uStack_14 = *(unsigned int *)(param_2 + 0x3c);
  _ZN18OnlineResultRecordaSERKS_(param_1 + 0x30,&temp_v2);
  temp_v0 = _ZNK18OnlineResultRecord7isValidEv(param_1 + 0x30);
  if (temp_v0 != 0) {
    *(unsigned int *)(param_1 + 0x28) = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(param_1 + 0x14);
    FUN_001244a8();
    *(unsigned int *)(param_1 + 0x40) = temp_v1;
  }
  *(unsigned char *)(param_1 + 0x44) = 1;
  return;
}

} /* extern "C" */
