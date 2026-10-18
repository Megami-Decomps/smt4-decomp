/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4e54` (_code @ 0x1f4e54, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_00293230(unsigned int);
/* Supplied declaration required: FUN_002bee58. */


void FUN_001f4e54(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  
  temp_v1 = param_1 + param_2 * 2;
  *(unsigned short *)(temp_v1 + 0x5950) = 1;
  puVar3 = (unsigned char *)(param_1 + param_2 + 0x5978);
  *(unsigned short *)(temp_v1 + 0x595a) = 0;
  *(unsigned int *)(param_1 + param_2 * 4 + 0x5964) = 0;
  *puVar3 = 0;
  *(unsigned short *)(temp_v1 + 0x597e) = 0;
  *(unsigned short *)(temp_v1 + 0x5988) = 0;
  *(unsigned short *)(temp_v1 + 0x5992) = 0;
  *(unsigned short *)(temp_v1 + 0x599c) = 0;
  *(unsigned short *)(temp_v1 + 0x59a6) = 0;
  *(unsigned short *)(temp_v1 + 0x59b0) = 0;
  temp_v0 = FUN_00293230(*(unsigned int *)(param_1 + 0x3040));
  if (temp_v0 != 0) {
    *puVar3 = 1;
    *(unsigned short *)(temp_v1 + 0x5950) = 5;
    return;
  }
  param_1 = param_1 + param_2 * 0x8c;
  FUN_002bee58(param_1 + 0x13d0,0xb);
  FUN_002bee58(param_1 + 0x1600,0xd);
  FUN_002bee58(param_1 + 0x1830,0xe);
  return;
}
