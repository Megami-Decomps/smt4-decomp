/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034ee5c` (_code @ 0x34ee5c, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int FUN_0020ad6c(int, int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int saveSlotFindSelected(void);
/* Supplied declaration required: FUN_001846d0. */
extern int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_0020ad6c. */


void FUN_0034ee5c(int param_1,int param_2,unsigned char param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (param_2 == 0) {
    *(unsigned char *)(param_1 + 0x38b5) = 1;
  }
  else {
    *(unsigned char *)(param_1 + 0x38b5) = 0;
  }
  *(unsigned char *)(param_1 + 0x38b3) = 0;
  *(unsigned int *)(param_1 + 0x3890) = 4;
  *(unsigned char *)(param_1 + 0x4ba8) = 0;
  temp_v0 = saveSlotFindSelected();
  if ((temp_v0 != 0) &&
     ((temp_v1 = FUN_0019acdc(*(unsigned short *)(temp_v0 + 300),1), temp_v1 == 1 ||
      (temp_v0 = FUN_0019acdc(*(unsigned short *)(temp_v0 + 300),1), temp_v0 == 4)))) {
    *(unsigned char *)(param_1 + 0x4ba8) = 1;
  }
  FUN_001846d0(param_1 + 0x1344,0x1a);
  FUN_001846d0(param_1 + 0x13d0,0x1a);
  *(unsigned char *)(param_1 + 0x38b6) = param_3;
  if (*(int *)(param_1 + 0x387c) == 0x17) {
    *(unsigned int *)(param_1 + 0x3888) = 0x1f;
    FUN_0020ad6c(param_1,0x18,1);
    return;
  }
  FUN_0020ad6c(param_1,0x1f,1);
  return;
}

} /* extern "C" */
