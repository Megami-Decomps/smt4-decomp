/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f3290` (_code @ 0x2f3290, 0x180 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_004737c2; /* 0x4737c2 */

/* Supplied declaration required: FUN_0024745c. */
/* Supplied declaration required: FUN_002474a0. */
/* Supplied declaration required: FUN_00249324. */
/* Supplied declaration required: FUN_00249588. */
extern unsigned int FUN_0024c5dc(unsigned int);
extern unsigned int *FUN_0024c5ec(int);
extern unsigned int FUN_0024c60c(int);
/* Supplied declaration required: FUN_00269758. */
extern unsigned int *FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c5ff4. */


unsigned int * FUN_002f3290(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_002c34a4(0x10000,0x100,0,0xd4,0x10,1);
  FUN_002c4b30(puVar1,0xd4);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[7] = 0x3f800000;
  puVar1[9] = 0xffffffff;
  puVar1[8] = 0x3f800000;
  if (param_1 != 0) {
    temp_v0 = 1;
    FUN_002474a0(1,2,4,&DAT_004737c2,0x4c);
    puVar1[0x32] = temp_v0;
    puVar1[10] = (unsigned int)*(unsigned short *)(param_1 + 0xc);
    temp_v0 = FUN_0024c60c(param_1);
    FUN_002c5ff4(puVar1 + 0xc,temp_v0,0x98);
    puVar3 = (unsigned int *)FUN_0024c5ec(param_1);
    if (puVar3 != (unsigned int *)0x0) {
      switch(*(unsigned short *)(param_1 + 0x1c)) {
      case 1:
      case 9:
        FUN_0024745c(puVar1[0x32],puVar3);
        break;
      case 2:
        FUN_00249324();
        puVar1[0x34] = (unsigned int)puVar3;
        break;
      case 4:
        temp_v1 = puVar1[0x32];
        temp_v0 = FUN_0024c5dc(*puVar3 & 0xffff);
        *(unsigned int *)(temp_v1 + 4) = temp_v0;
        FUN_00269758();
        break;
      case 7:
        FUN_00249588();
        puVar1[0x33] = (unsigned int)puVar3;
      }
    }
  }
  return puVar1;
}
