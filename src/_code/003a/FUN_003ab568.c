/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab568` (_code @ 0x3ab568, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_00231318(void);
/* Supplied declaration required: FUN_002313d4. */
extern int FUN_00241b74(void);
extern int FUN_0029e398(void);
/* Supplied declaration required: FUN_002b9220. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);


void FUN_003ab568(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = param_1 + 0xfc;
  FUN_002b9220(temp_v2,0);
  temp_v0 = FUN_002bef70(temp_v2);
  temp_v1 = FUN_002bef7c(temp_v2);
  FUN_002313d4(param_1 + 200,temp_v1,temp_v0);
  if ((((*(char *)(param_1 + 0x186) != '\0') && (temp_v2 = FUN_00231318(), temp_v2 != 0)) &&
      (temp_v2 = FUN_00241b74(), temp_v2 != 0)) && (temp_v2 = FUN_0029e398(), temp_v2 != 0)) {
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_002313d4(param_1 + 200,0,0);
    return;
  }
  return;
}
