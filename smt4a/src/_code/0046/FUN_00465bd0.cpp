/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00465bd0` (_code @ 0x465bd0, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_3: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned char sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern unsigned char DAT_00646e54; /* 0x646e54 */

extern unsigned int FUN_00461e8c(int, unsigned int);


void FUN_00465bd0(int param_1,unsigned int param_2,int param_3)

{
  int temp_v0;
  unsigned char *temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if (*(int *)(param_1 + 0x88) != 0) {
    temp_v0 = param_1 + 0xd0;
    temp_v1 = &DAT_00646e54;
    temp_v2 = FUN_00461e8c(param_3,0);
    temp_v3 = *(unsigned char *)(param_3 + 0x24);
    (**(romwright_code **)(param_1 + 0x88))(param_2,&temp_v0,*(unsigned int *)(param_1 + 0x8c));
    *(unsigned char *)(param_3 + 0x24) = temp_v3;
  }
  return;
}

} /* extern "C" */
