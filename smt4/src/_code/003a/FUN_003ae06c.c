/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae06c` (_code @ 0x3ae06c, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp58; /* 0x58: local_58 */
} param_3_stack;

extern unsigned char LAB_003ae104; /* 0x3ae104 */
extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_001ecb54. */
/* Supplied declaration required: FUN_00241f98. */
/* Supplied declaration required: FUN_0026c77c. */
/* Supplied declaration required: FUN_0026c7b8. */
/* Supplied declaration required: FUN_002be624. */


void FUN_003ae06c(unsigned int param_1,short param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned char temp_v2 [64];
  
  temp_v0 = DAT_00439ca8;
  puVar3 = (unsigned int *)(DAT_00439ca8 + 0xc9e4);
  *(unsigned char *)(DAT_00439ca8 + 0xc9d8) = 1;
  *puVar3 = 0x12;
  *(short *)(temp_v0 + 0xc9e8) = param_2;
  *(unsigned int *)(temp_v0 + 0xc9dc) = param_3;
  *(unsigned int *)(temp_v0 + 0xc9e0) = 0;
  temp_v2[0] = 0;
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0xc9e8);
  FUN_00241f98(temp_v1);
  FUN_002be624(temp_v2,&LAB_003ae104,temp_v1);
  FUN_001ecb54((int)param_2);
  FUN_0026c7b8(temp_v2);
  FUN_0026c77c(0);
  return;
}
