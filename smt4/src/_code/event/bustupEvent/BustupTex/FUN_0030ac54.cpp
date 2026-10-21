/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ac54` (_code @ 0x30ac54, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002459d8(...);
int memClear(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_001ce4a4(...); /* 0x1ce4a4 */
extern int FUN_002cfb68(...); /* 0x2cfb68 */
extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002459d8. */
extern unsigned int FUN_002ae8e4(unsigned int, unsigned int, unsigned int, unsigned int);
extern int aocRunByName(unsigned int, unsigned int, int, unsigned int);
extern int FUN_002aecd8(void);
extern int gameFlagIsSet(unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */
extern unsigned int FUN_002c58c8(unsigned int, unsigned int);


void FUN_0030ac54(unsigned int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = gameFlagIsSet(0x522);
  if (temp_v0 != 0) {
    FUN_002459d8(param_1);
    temp_v0 = FUN_002aecd8();
    if (temp_v0 == 0) {
      return;
    }
  }
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x90,1);
  memClear();
  *puVar2 = param_1;
  puVar2[0x21] = 0xffffffff;
  puVar2[6] = 0xffffffff;
  FUN_002459d8();
  puVar2[1] = param_1;
  if (param_2 == 0) {
    puVar2[4] = 0x20;
    puVar2[5] = 0xffffffff;
    puVar2[7] = 0x41c80000;
    puVar2[8] = 0x41c80000;
  }
  temp_v0 = FUN_002c1d5c();
  if (temp_v0 != 0) {
    *(unsigned char *)(puVar2 + 0x1f) = 1;
  }
  else {
    if (puVar2[5] != -1) {
      temp_v0 = aocRunByName(g_aocSystem,puVar2[4],puVar2[5],1);
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ae8e4(g_aocSystem,puVar2[4],puVar2[5],0x10000);
      }
      else {
        temp_v1 = FUN_002c58c8(puVar2[4],puVar2[5]);
      }
      puVar2[3] = temp_v1;
    }
    *(unsigned char *)(puVar2 + 0x1f) = 0;
  }
  puVar2[10] = 0;
  puVar2[0xb] = 0x3f800000;
  *(unsigned char *)(puVar2 + 0xc) = 0;
  *(unsigned char *)((int)puVar2 + 0x31) = 1;
  asdProcessCreateSimple("EVE_BustupTex",2,0,0,FUN_001ce4a4,FUN_002cfb68,puVar2);
  return;
}

} /* extern "C" */
