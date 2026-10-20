/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5598` (_code @ 0x3f5598, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f1b8(int, int);
int FUN_00151408(unsigned int, int, int);
int FUN_001527d8(unsigned int, unsigned int);
int FUN_001acf98(int, int);
int FUN_001b4a90(int, int, unsigned int);
int FUN_002804b0(...);
int FUN_002e6dd4(int, int);
int FUN_003f5268(int, int, int);
int FUN_003f84e8(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0013f1b8. */
extern unsigned int FUN_0014bce0(unsigned int);
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: FUN_003f5268. */
/* Supplied declaration required: FUN_003f84e8. */


void FUN_003f5598(int param_1)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  *(unsigned int *)(param_1 + 0x6b0) = 0;
  FUN_002e6dd4(param_1 + 0x5e6,200);
  *(unsigned int *)(param_1 + 0x44) = 0;
  *(unsigned int *)(param_1 + 0x48) = 0;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x5dc) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned char *)(param_1 + 0x5e4) = 0;
  *(unsigned char *)(param_1 + 0x5e5) = 0;
  FUN_002804b0("event/PartnerTopic/PartnerTopic.mbm",param_1 + 0x28,0);
  FUN_002804b0("event/PartnerTopic/PartnerTopicCommon.mbm",param_1 + 0x2c,0);
  FUN_002804b0("event/PartnerTopic/PartnerTopicCommon.bf",param_1 + 0x30,0);
  FUN_001b4a90(param_1 + 0x6b4,0x14,0xffffffff);
  FUN_001b4a90(param_1 + 0x6c8,0x10,0xffffffff);
  FUN_0013f1b8(0x31,0);
  do {
    FUN_001acf98(0x31,temp_v1);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  temp_v0 = FUN_0014bce0(0);
  *(unsigned int *)(param_1 + 0x5d8) = temp_v0;
  FUN_001527d8(temp_v0,0xffffffff);
  FUN_00151408(*(unsigned int *)(param_1 + 0x5d8),0,0x646464ff);
  FUN_003f84e8(param_1);
  FUN_003f5268(param_1,1,0);
  return;
}

} /* extern "C" */
