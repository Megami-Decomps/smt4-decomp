/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdfb8` (_code @ 0x2fdfb8, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001dfb60(); /* 0x1dfb60 */
extern int FUN_002db8c4(); /* 0x2db8c4 */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002aeb78. */
extern int FUN_002aec20(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */
/* Supplied declaration required: FUN_002c5ab8. */


void FUN_002fdfb8(int param_1)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x98,1);
  FUN_002c4b30(puVar2,0x98);
  puVar2[8] = 0x3f800000;
  puVar2[9] = 0x3f800000;
  puVar2[10] = 0;
  puVar2[1] = 4;
  *puVar2 = 0;
  puVar2[0xf] = 2;
  temp_v1 = FUN_002c0ec4(0x1a,0);
  temp_v2 = FUN_002c0e9c();
  FUN_002c0e4c(temp_v1);
  temp_v0 = *(short *)(temp_v2 + (param_1 - 1) * 2);
  puVar2[5] = 0xfffffff8;
  puVar2[0x10] = (int)temp_v0;
  puVar2[4] = 0xffffffc8;
  temp_v2 = FUN_002c1f28();
  if (temp_v2 != 0) {
    puVar2[3] = 1;
  }
  else {
    puVar2[3] = 0;
    temp_v2 = FUN_002aec20(DAT_00433158,puVar2[0xf],puVar2[0x10],1);
    if (temp_v2 != 0) {
      FUN_002aeb78(DAT_00433158,puVar2[0xf],puVar2[0x10],0x10000);
    }
    else {
      FUN_002c5ab8(puVar2[0xf],puVar2[0x10]);
    }
  }
  puVar2[6] = 0x3ea8f5c3;
  FUN_002c5978("EVE_2dTex",2,0,0,FUN_001dfb60,FUN_002db8c4,puVar2);
  return;
}
