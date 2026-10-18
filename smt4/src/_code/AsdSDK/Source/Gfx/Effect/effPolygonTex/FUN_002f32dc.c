/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f32dc` (_code @ 0x2f32dc, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char DAT_004737c2; /* 0x4737c2 */

/* Supplied declaration required: FUN_002472f0. */
/* Supplied declaration required: FUN_00247334. */
/* Supplied declaration required: FUN_002491b4. */
/* Supplied declaration required: FUN_00249424. */
extern unsigned int FUN_0024c3c8(unsigned int);
extern unsigned int *FUN_0024c3d8(int);
extern unsigned int FUN_0024c3f8(int);
/* Supplied declaration required: FUN_002694f8. */
extern unsigned int *FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_002f32dc(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_002c32a0(0x10000,0x100,0,0xd4,0x10,1);
  FUN_002c4938(puVar1,0xd4);
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
    FUN_00247334(1,2,4,&DAT_004737c2,0x4c);
    puVar1[0x32] = temp_v0;
    puVar1[10] = (unsigned int)*(unsigned short *)(param_1 + 0xc);
    temp_v0 = FUN_0024c3f8(param_1);
    rt_memcpy(puVar1 + 0xc,temp_v0,0x98);
    puVar3 = (unsigned int *)FUN_0024c3d8(param_1);
    if (puVar3 != (unsigned int *)0x0) {
      switch(*(unsigned short *)(param_1 + 0x1c)) {
      case 1:
      case 9:
        FUN_002472f0(puVar1[0x32],puVar3);
        break;
      case 2:
        FUN_002491b4();
        puVar1[0x34] = (unsigned int)puVar3;
        break;
      case 4:
        temp_v1 = puVar1[0x32];
        temp_v0 = FUN_0024c3c8(*puVar3 & 0xffff);
        *(unsigned int *)(temp_v1 + 4) = temp_v0;
        FUN_002694f8();
        break;
      case 7:
        FUN_00249424();
        puVar1[0x33] = (unsigned int)puVar3;
      }
    }
  }
  return puVar1;
}
