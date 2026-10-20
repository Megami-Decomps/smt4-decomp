/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00460824` (_code @ 0x460824, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_0019102c(int, int);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_7_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_00460824(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned char param_5,unsigned char param_6,unsigned long long param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,0xb);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0xd;
  *(int *)(temp_v1 + 0x10) = param_1 + 0x128;
  *(unsigned int *)(temp_v1 + 0x14) = param_2;
  *(unsigned int *)(temp_v1 + 0x18) = param_3;
  *(unsigned int *)(temp_v1 + 0x1c) = param_4;
  *(unsigned char *)(temp_v1 + 0x20) = param_5;
  *(unsigned char *)(temp_v1 + 0x21) = param_6;
  *(int *)(temp_v1 + 0x24) = (int)param_7;
  *(int *)(temp_v1 + 0x28) = (int)((unsigned long long)param_7 >> 0x20);
  listAppendNode(temp_v0,temp_v1);
  return;
}

} /* extern "C" */
