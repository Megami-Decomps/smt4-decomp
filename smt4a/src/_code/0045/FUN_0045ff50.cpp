/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045ff50` (_code @ 0x45ff50, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_0019102c(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_0045ff50(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  *(unsigned int *)(param_1 + 9000) = param_2;
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,0xb);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x28;
  *(int *)(temp_v1 + 0x10) = param_1 + 0x118;
  *(int *)(temp_v1 + 0x28) = param_1 + 0x2314;
  temp_v2 = param_3[1];
  temp_v3 = param_3[2];
  temp_v4 = param_3[3];
  *(unsigned int *)(temp_v1 + 0x18) = *param_3;
  *(unsigned int *)(temp_v1 + 0x1c) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x20) = temp_v3;
  *(unsigned int *)(temp_v1 + 0x24) = temp_v4;
  listAppendNode(temp_v0,temp_v1);
  return;
}

} /* extern "C" */
