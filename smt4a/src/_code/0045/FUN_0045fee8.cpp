/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045fee8` (_code @ 0x45fee8, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listAppendNode(int, int);
int FUN_0019102c(int, int);
int rt_memcpy_w(int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: listAppendNode. */
/* Supplied declaration required: FUN_0019102c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0045fee8(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned short *)(param_1 + 0x328c) = *(unsigned short *)(param_2 + 8);
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,0x19);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x27;
  *(int *)(temp_v1 + 0x10) = param_1 + 0x118;
  rt_memcpy_w(temp_v1 + 0x14,param_2,0x50);
  listAppendNode(temp_v0,temp_v1);
  return;
}

} /* extern "C" */
