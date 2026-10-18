/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f59c8` (_code @ 0x2f59c8, 0x140 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001ce3a4(); /* 0x1ce3a4 */
extern int FUN_002cfabc(); /* 0x2cfabc */
extern unsigned int DAT_00433158; /* 0x433158 */

extern unsigned int FUN_002aeb78(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002aec20(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */
extern unsigned int FUN_002c5ab8(unsigned int, unsigned int);


void FUN_002f59c8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x90,1);
  FUN_002c4b30(puVar1,0x90);
  puVar1[0x21] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  puVar1[4] = 0x1f;
  *puVar1 = 0;
  puVar1[7] = 0x43160000;
  puVar1[8] = 0x43160000;
  temp_v0 = FUN_002c0ec4(0x1a,1);
  temp_v1 = FUN_002c0e9c();
  FUN_002c0e4c(temp_v0);
  puVar1[5] = (int)*(short *)(temp_v1 + (param_1 - 1) * 2);
  temp_v1 = FUN_002c1f28();
  if (temp_v1 != 0) {
    *(unsigned char *)(puVar1 + 0x1f) = 1;
  }
  else {
    if (puVar1[5] != -1) {
      temp_v1 = FUN_002aec20(DAT_00433158,puVar1[4],puVar1[5],1);
      if (temp_v1 != 0) {
        temp_v0 = FUN_002aeb78(DAT_00433158,puVar1[4],puVar1[5],0x10000);
      }
      else {
        temp_v0 = FUN_002c5ab8(puVar1[4],puVar1[5]);
      }
      puVar1[3] = temp_v0;
    }
    *(unsigned char *)(puVar1 + 0x1f) = 0;
  }
  puVar1[10] = 0;
  puVar1[0xb] = 0x3f800000;
  *(unsigned char *)(puVar1 + 0xc) = 0;
  *(unsigned char *)((int)puVar1 + 0x31) = 1;
  FUN_002c5978("EVE_BustupTex",2,0,0,FUN_001ce3a4,FUN_002cfabc,puVar1);
  return;
}
