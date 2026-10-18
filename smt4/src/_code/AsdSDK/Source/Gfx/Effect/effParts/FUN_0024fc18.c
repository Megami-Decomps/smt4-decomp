/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024fc18` (_code @ 0x24fc18, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_00464110; /* 0x464110 */

extern unsigned int *FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int * FUN_0024fc18(unsigned int *param_1)

{
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = *(unsigned short *)(param_1 + 1);
  puVar2 = (unsigned int *)FUN_002c32a0(0x10000,0x100,0,0x2c,0x10,1);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  *puVar2 = 0xdc;
  *(unsigned short *)(puVar2 + 1) = temp_v0;
  *puVar2 = *param_1;
  *(unsigned short *)(puVar2 + 3) = *(unsigned short *)(param_1 + 3);
  *(unsigned short *)(puVar2 + 7) = *(unsigned short *)(param_1 + 7);
  temp_v1 = (**(romwright_code **)(&DAT_00464110 + (unsigned int)temp_v0 * 0x44))(param_1);
  puVar2[2] = temp_v1;
  return puVar2;
}
