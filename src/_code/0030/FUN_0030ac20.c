/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ac20` (_code @ 0x30ac20, 0x174 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_001ce3a4(); /* 0x1ce3a4 */
extern int FUN_002cfabc(); /* 0x2cfabc */
extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_00245b44. */
extern unsigned int FUN_002aeb78(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002aec20(unsigned int, unsigned int, int, unsigned int);
extern int FUN_002aef6c(void);
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */
extern unsigned int FUN_002c5ab8(unsigned int, unsigned int);


void FUN_0030ac20(unsigned int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002c0ba8(0x522);
  if (temp_v0 != 0) {
    FUN_00245b44(param_1);
    temp_v0 = FUN_002aef6c();
    if (temp_v0 == 0) {
      return;
    }
  }
  puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x90,1);
  FUN_002c4b30(puVar2,0x90);
  *puVar2 = param_1;
  puVar2[0x21] = 0xffffffff;
  puVar2[6] = 0xffffffff;
  FUN_00245b44();
  puVar2[1] = param_1;
  if (param_2 == 0) {
    puVar2[4] = 0x20;
    puVar2[5] = 0xffffffff;
    puVar2[7] = 0x41c80000;
    puVar2[8] = 0x41c80000;
  }
  temp_v0 = FUN_002c1f28();
  if (temp_v0 != 0) {
    *(unsigned char *)(puVar2 + 0x1f) = 1;
  }
  else {
    if (puVar2[5] != -1) {
      temp_v0 = FUN_002aec20(DAT_00433158,puVar2[4],puVar2[5],1);
      if (temp_v0 != 0) {
        temp_v1 = FUN_002aeb78(DAT_00433158,puVar2[4],puVar2[5],0x10000);
      }
      else {
        temp_v1 = FUN_002c5ab8(puVar2[4],puVar2[5]);
      }
      puVar2[3] = temp_v1;
    }
    *(unsigned char *)(puVar2 + 0x1f) = 0;
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0x3f800000;
  *(unsigned char *)(puVar2 + 0xc) = 0;
  *(unsigned char *)((int)puVar2 + 0x31) = 1;
  FUN_002c5978("EVE_BustupTex",2,0,0,FUN_001ce3a4,FUN_002cfabc,puVar2);
  return;
}
