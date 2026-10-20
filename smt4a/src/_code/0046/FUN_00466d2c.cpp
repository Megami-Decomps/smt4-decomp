/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466d2c` (_code @ 0x466d2c, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int);
int FUN_0019102c(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_00466d2c(int param_1,unsigned int *param_2,unsigned int *param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,0xe);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x23;
  *(int *)(temp_v1 + 0x10) = param_1 + 0x124;
  temp_v2 = param_3[1];
  temp_v3 = param_3[2];
  *(unsigned int *)(temp_v1 + 0x14) = *param_3;
  *(unsigned int *)(temp_v1 + 0x18) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x1c) = temp_v3;
  *(unsigned int *)(temp_v1 + 0x24) = param_2[1];
  *(unsigned int *)(temp_v1 + 0x20) = *param_2;
  *(unsigned int *)(temp_v1 + 0x28) = param_2[3];
  temp_v2 = ((unsigned int *)param_2[2])[1];
  *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)param_2[2];
  *(unsigned int *)(temp_v1 + 0x30) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x34) = *param_3;
  listAppendNode(temp_v0);
  return;
}

} /* extern "C" */
