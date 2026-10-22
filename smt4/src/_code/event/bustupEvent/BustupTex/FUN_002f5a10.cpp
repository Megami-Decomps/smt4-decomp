/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f5a10` (_code @ 0x2f5a10, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(...);
int memClear(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001ce4a4(...); /* 0x1ce4a4 */
extern int asdMTeXReleaseJobContext(...); /* 0x2cfb68 */
extern unsigned int g_aocSystem; /* 0x433158 */

extern unsigned int FUN_002ae8e4(unsigned int, unsigned int, unsigned int, unsigned int);
extern int aocRunByName(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */
extern unsigned int FUN_002c58c8(unsigned int, unsigned int);


void FUN_002f5a10(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x90,1);
  memClear();
  puVar1[0x21] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  puVar1[4] = 0x1f;
  *puVar1 = 0;
  puVar1[7] = 0x43160000;
  puVar1[8] = 0x43160000;
  temp_v0 = dataTableGet(0x1a,1);
  temp_v1 = dataTableGetEntries();
  dataTableGetCount(temp_v0);
  puVar1[5] = (int)*(short *)(temp_v1 + (param_1 - 1) * 2);
  temp_v1 = FUN_002c1d5c();
  if (temp_v1 != 0) {
    *(unsigned char *)(puVar1 + 0x1f) = 1;
  }
  else {
    if (puVar1[5] != -1) {
      temp_v1 = aocRunByName(g_aocSystem,puVar1[4],puVar1[5],1);
      if (temp_v1 != 0) {
        temp_v0 = FUN_002ae8e4(g_aocSystem,puVar1[4],puVar1[5],0x10000);
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
  asdProcessCreateSimple("EVE_BustupTex",2,0,0,FUN_001ce4a4,asdMTeXReleaseJobContext,puVar1);
  return;
}

} /* extern "C" */
