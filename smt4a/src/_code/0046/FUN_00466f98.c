/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00466f98` (_code @ 0x466f98, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_00175678(void);
/* Supplied declaration required: FUN_0017572c. */
/* Supplied declaration required: FUN_0019102c. */


void FUN_00466f98(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00175678();
  temp_v1 = temp_v0;
  FUN_0019102c(temp_v0,6);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x31;
  *(unsigned int *)(temp_v1 + 0x10) = param_1;
  *(unsigned int *)(temp_v1 + 0x14) = param_2;
  FUN_0017572c(temp_v0,temp_v1);
  return;
}
