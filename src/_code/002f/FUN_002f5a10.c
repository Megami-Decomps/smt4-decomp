/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5a10` (_code @ 0x2f5a10, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001ce4a4(); /* 0x1ce4a4 */
extern int FUN_002cfb68(); /* 0x2cfb68 */
extern unsigned int DAT_00433158; /* 0x433158 */

extern unsigned int FUN_002ae8e4(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_002ae98c(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_002c0c74. */
extern int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5788. */
extern unsigned int FUN_002c58c8(unsigned int, unsigned int);


void FUN_002f5a10(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x100;
  FUN_002c498c(0x100,0x100,0,0x90,1);
  FUN_002c4938();
  puVar1[0x21] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  puVar1[4] = 0x1f;
  *puVar1 = 0;
  puVar1[7] = 0x43160000;
  puVar1[8] = 0x43160000;
  temp_v0 = FUN_002c0cec(0x1a,1);
  temp_v1 = FUN_002c0cc4();
  FUN_002c0c74(temp_v0);
  puVar1[5] = (int)*(short *)(temp_v1 + (param_1 - 1) * 2);
  temp_v1 = FUN_002c1d5c();
  if (temp_v1 != 0) {
    *(unsigned char *)(puVar1 + 0x1f) = 1;
  }
  else {
    if (puVar1[5] != -1) {
      temp_v1 = FUN_002ae98c(DAT_00433158,puVar1[4],puVar1[5],1);
      if (temp_v1 != 0) {
        temp_v0 = FUN_002ae8e4(DAT_00433158,puVar1[4],puVar1[5],0x10000);
      }
      else {
        temp_v0 = FUN_002c58c8(puVar1[4],puVar1[5]);
      }
      puVar1[3] = temp_v0;
    }
    *(unsigned char *)(puVar1 + 0x1f) = 0;
  }
  puVar1[10] = 0;
  puVar1[0xb] = 0x3f800000;
  *(unsigned char *)(puVar1 + 0xc) = 0;
  *(unsigned char *)((int)puVar1 + 0x31) = 1;
  FUN_002c5788("EVE_BustupTex",2,0,0,FUN_001ce4a4,FUN_002cfb68,puVar1);
  return;
}
