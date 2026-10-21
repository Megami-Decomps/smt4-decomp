/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fdff4` (_code @ 0x2fdff4, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae8e4(...);
int dataTableGetCount(...);
int memClear(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);
int FUN_002c58c8(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001dfc64(...); /* 0x1dfc64 */
extern int FUN_002db92c(...); /* 0x2db92c */
extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002ae8e4. */
extern int aocRunByName(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_002fdff4(int param_1)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x98,1);
  memClear();
  puVar2[8] = 0x3f800000;
  puVar2[9] = 0x3f800000;
  puVar2[10] = 0;
  puVar2[1] = 4;
  *puVar2 = 0;
  puVar2[0xf] = 2;
  temp_v1 = dataTableGet(0x1a,0);
  temp_v2 = dataTableGetEntries();
  dataTableGetCount(temp_v1);
  temp_v0 = *(short *)(temp_v2 + (param_1 - 1) * 2);
  puVar2[5] = 0xfffffff8;
  puVar2[0x10] = (int)temp_v0;
  puVar2[4] = 0xffffffc8;
  temp_v2 = FUN_002c1d5c();
  if (temp_v2 != 0) {
    puVar2[3] = 1;
  }
  else {
    puVar2[3] = 0;
    temp_v2 = aocRunByName(g_aocSystem,puVar2[0xf],puVar2[0x10],1);
    if (temp_v2 != 0) {
      FUN_002ae8e4(g_aocSystem,puVar2[0xf],puVar2[0x10],0x10000);
    }
    else {
      FUN_002c58c8(puVar2[0xf],puVar2[0x10]);
    }
  }
  puVar2[6] = 0x3ea8f5c3;
  asdProcessCreateSimple("EVE_2dTex",2,0,0,FUN_001dfc64,FUN_002db92c,puVar2);
  return;
}

} /* extern "C" */
