/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045f67c` (_code @ 0x45f67c, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_0019102c(int, int);

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_0045f67c(int *param_1,unsigned char param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,6);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0xb;
  temp_v2 = (**(romwright_code **)(*param_1 + 0x20))(param_1);
  *(unsigned int *)(temp_v1 + 0x10) = temp_v2;
  *(unsigned char *)(temp_v1 + 0x14) = param_2;
  listAppendNode(temp_v0,temp_v1);
  return;
}

} /* extern "C" */
