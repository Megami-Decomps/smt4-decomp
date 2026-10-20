/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bc80` (_code @ 0x31bc80, 0x1cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002459d8(...);
int FUN_002ae8e4(...);
int FUN_002aecd8(...);
int memClear(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);
int FUN_002c58c8(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int FUN_001dfc64(...); /* 0x1dfc64 */
extern int FUN_002db92c(...); /* 0x2db92c */
extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_002459d8. */
/* Supplied declaration required: FUN_002ae8e4. */
extern int FUN_002ae98c(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002aecd8. */
extern int gameFlagIsSet(unsigned int);
extern int FUN_002c1d5c(void);
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_0031bc80(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned short *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = gameFlagIsSet(0x522);
  if (temp_v0 != 0) {
    FUN_002459d8(param_1);
    temp_v0 = FUN_002aecd8();
    if (temp_v0 == 0) {
      return;
    }
  }
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x98,1);
  memClear();
  temp_v2 = 0;
  puVar2[8] = 0x3f800000;
  puVar2[9] = 0x3f800000;
  puVar2[10] = 0;
  puVar2[0x11] = 0xffffffff;
  *puVar2 = param_1;
  puVar2[1] = 0x41;
  puVar2[0x14] = param_3;
  puVar2[0xf] = 3;
  FUN_002459d8();
  puVar2[0x15] = param_1;
  puVar3 = (unsigned short *)FUN_002aecd8();
  puVar2[0x10] = (unsigned int)*puVar3;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        puVar2[4] = 0x48;
        puVar2[10] = 0x3e800000;
        puVar2[7] = temp_v2;
        temp_v1 = 5;
        puVar2[9] = temp_v2;
        puVar2[0xe] = temp_v1;
      }
    }
    else {
      puVar2[4] = 0xa0;
      temp_v1 = 4;
      puVar2[7] = 0x42400000;
      puVar2[0xe] = temp_v1;
    }
  }
  else {
    puVar2[4] = 0xffffffec;
    puVar2[7] = 0xc2400000;
    puVar2[0xe] = 3;
  }
  temp_v0 = FUN_002c1d5c();
  if (temp_v0 != 0) {
    puVar2[3] = 1;
  }
  else {
    puVar2[3] = 0;
    temp_v0 = FUN_002ae98c(g_aocSystem,puVar2[0xf],puVar2[0x10],1);
    if (temp_v0 != 0) {
      FUN_002ae8e4(g_aocSystem,puVar2[0xf],puVar2[0x10],0x10000);
    }
    else {
      FUN_002c58c8(puVar2[0xf],puVar2[0x10]);
    }
  }
  puVar2[6] = 0x3e99999a;
  asdProcessCreateSimple("EVE_2dTex",2,0,0,FUN_001dfc64,FUN_002db92c,puVar2);
  return;
}

} /* extern "C" */
