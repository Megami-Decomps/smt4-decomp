/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b208` (_code @ 0x37b208, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b777c. */
extern unsigned int FUN_002bb360(void);
/* Supplied declaration required: FUN_002bf774. */
/* Supplied declaration required: FUN_002c3628. */
/* Supplied declaration required: FUN_00379c24. */
/* Supplied declaration required: FUN_0037a3fc. */
/* Supplied declaration required: FUN_0037bc48. */


void FUN_0037b208(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(char *)((int)param_1 + 0x555) != '\0') {
    *(unsigned char *)((int)param_1 + 0x555) = 0;
    if ((char)param_1[0x155] == '\x01') {
      temp_v0 = FUN_002bb360();
      FUN_0037a3fc(temp_v0,param_1 + 0x9a);
      FUN_002c3628(param_1 + 0x9d);
    }
    param_1[0x14b] = 0;
    param_1[0x14c] = 0;
    param_1[0x150] = 0;
    *(unsigned char *)(param_1 + 0x154) = 0;
    param_1[0x14d] = 0;
    param_1[0x151] = 0;
    *(unsigned char *)((int)param_1 + 0x551) = 0;
    param_1[0x14e] = 0;
    param_1[0x152] = 0;
    *(unsigned char *)((int)param_1 + 0x552) = 0;
    param_1[0x14f] = 0;
    param_1[0x153] = 0;
    *(unsigned char *)((int)param_1 + 0x553) = 0;
    FUN_00379c24(param_1);
    FUN_0037bc48(param_1 + 0xb1);
    temp_v1 = param_1[0x96];
    FUN_002b777c(temp_v1 + 8,param_1 + 0x35);
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    FUN_002bf774(temp_v1 + 0x14,temp_v1 + 0x18,param_1 + 0x35);
    return;
  }
  return;
}
