/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00235614` (_code @ 0x235614, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0043dd50; /* 0x43dd50 */

/* Supplied declaration required: FUN_00189b24. */
/* Supplied declaration required: FUN_002509d8. */
/* Supplied declaration required: FUN_002900b0. */
/* Supplied declaration required: FUN_00291000. */
extern int FUN_0029f248(int);
extern int FUN_0029f260(int);
/* Supplied declaration required: FUN_002bdac0. */


void FUN_00235614(unsigned char param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_0043dd50;
  *(unsigned char *)(DAT_0043dd50 + 0x5f1) = 1;
  *(unsigned char *)(temp_v0 + 0x5f8) = param_1;
  FUN_00189b24();
  temp_v0 = DAT_0043dd50;
  *(unsigned char *)(DAT_0043dd50 + 0x5c4) = 0;
  if (*(int *)(temp_v0 + 4) != 0xd) {
    FUN_002509d8();
    temp_v1 = FUN_0029f260(temp_v0 + 0x660);
    temp_v2 = FUN_0029f248(temp_v0 + 0x660);
    FUN_002900b0(*(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x78a),1);
    FUN_002bdac0(temp_v0 + 0x34,0);
    temp_v0 = DAT_0043dd50;
    temp_v3 = *(unsigned int *)(DAT_0043dd50 + 4);
    *(unsigned int *)(DAT_0043dd50 + 4) = 1;
    *(unsigned int *)(temp_v0 + 8) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    return;
  }
  FUN_002bdac0(temp_v0 + 0x34,2,0);
  temp_v0 = DAT_0043dd50;
  temp_v3 = *(unsigned int *)(DAT_0043dd50 + 4);
  *(unsigned int *)(DAT_0043dd50 + 4) = 3;
  *(unsigned int *)(temp_v0 + 8) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  FUN_00291000(0xa0);
  return;
}
