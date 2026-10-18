/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00266704` (_code @ 0x266704, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0024f6fc(void);
/* Supplied declaration required: FUN_0024f734. */
/* Supplied declaration required: FUN_003968d4. */
/* Supplied declaration required: FUN_00396d24. */


void FUN_00266704(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  char *pcVar3;
  
  if ((*param_1 & 1) == 0) {
    *(unsigned short *)(param_1 + 0x28) = 0;
    temp_v0 = FUN_0024f6fc();
    pcVar3 = (char *)0x0;
    if (0 < temp_v0) {
      do {
        pcVar2 = pcVar3;
        FUN_0024f734();
        if ((((int)*pcVar2 != 0xffffffff) && ((int)*pcVar2 == param_1[1])) &&
           ((int)pcVar2[1] == param_1[2])) {
          *(short *)((int)param_1 + (unsigned int)(unsigned short)param_1[0x28] * 2 + 0xa2) = (short)pcVar3;
          *(short *)(param_1 + 0x28) = (short)param_1[0x28] + 1;
        }
        pcVar3 = pcVar3 + 1;
      } while ((int)pcVar3 < temp_v0);
    }
    temp_v0 = 0;
    do {
      FUN_00396d24(param_1,1);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    FUN_003968d4(param_1);
    return;
  }
  return;
}
