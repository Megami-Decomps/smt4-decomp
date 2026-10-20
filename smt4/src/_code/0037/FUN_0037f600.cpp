/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037f600` (_code @ 0x37f600, 0x6c bytes) from smt4_v1.2.0.cxi.
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

extern unsigned char DAT_004ea494; /* 0x4ea494 */

extern unsigned int FUN_0023578c(int, unsigned int);


void FUN_0037f600(int param_1,unsigned int param_2,int param_3)

{
  int temp_v0;
  unsigned char *temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    temp_v0 = param_1 + 0xcc;
    temp_v1 = &DAT_004ea494;
    temp_v2 = FUN_0023578c(param_3,0);
    temp_v3 = *(unsigned char *)(param_3 + 0x24);
    (**(romwright_code **)(param_1 + 0x84))(param_2,&temp_v0,*(unsigned int *)(param_1 + 0x88));
    *(unsigned char *)(param_3 + 0x24) = temp_v3;
  }
  return;
}

} /* extern "C" */
