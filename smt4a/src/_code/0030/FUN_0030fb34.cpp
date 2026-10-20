/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fb34` (_code @ 0x30fb34, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001224f4(int, int);
int FUN_00122554(int, unsigned int, unsigned int, unsigned int, int, int, unsigned int);
int FUN_0012259a(int, int);
int strAssign(unsigned int, int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_4_stack;

/* Supplied declaration required: FUN_001224f4. */
/* Supplied declaration required: FUN_00122554. */
/* Supplied declaration required: FUN_0012259a. */
/* Supplied declaration required: strAssign. */


void FUN_0030fb34(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_00122554(param_1,param_3,param_3,param_4,param_1,param_2,param_3);
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x10) != 7) {
    temp_v2 = 0;
    while (temp_v2 = temp_v2 + 8, temp_v2 <= param_3) {
      FUN_0012259a(param_1,*(unsigned char *)(param_2 + temp_v1));
      temp_v1 = temp_v1 + 1;
    }
  }
  else {
    temp_v1 = param_3 >> 3;
    strAssign(*(unsigned int *)(param_1 + 8),param_2,temp_v1,*(unsigned int *)(param_1 + 0xc));
    *(unsigned int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + temp_v1 * 8;
    *(unsigned int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + temp_v1;
  }
  param_3 = param_3 & 7;
  if (param_3 != 0) {
    temp_v2 = 0x80;
    temp_v0 = *(unsigned char *)(param_2 + temp_v1);
    do {
      FUN_001224f4(param_1,(temp_v0 & temp_v2) != 0);
      temp_v2 = temp_v2 >> 1;
      param_3 = (param_3 - 1) & 0xff;
    } while (param_3 != 0);
  }
  return;
}

} /* extern "C" */
