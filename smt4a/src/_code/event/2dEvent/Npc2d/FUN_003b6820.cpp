/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6820` (_code @ 0x3b6820, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int asdMemoryAllocTracked(...);
int FUN_00191e00(...);
int FUN_0019e378(...);
int FUN_001acf98(...);
int FUN_00283498(...);
int sysMemClear(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int FUN_002897cc(...); /* 0x2897cc */
extern int FUN_0034da3c(...); /* 0x34da3c */
extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: asdProcessCreateSimple. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_00191e00. */
/* Supplied declaration required: FUN_0019e378. */
extern int FUN_001a6508(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_00283498. */
/* Supplied declaration required: sysMemClear. */


void FUN_003b6820(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned short *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = gameFlagIsSet(0x522);
  if (temp_v0 != 0) {
    FUN_00283498(param_1);
    temp_v0 = FUN_0019e378();
    if (temp_v0 == 0) {
      return;
    }
  }
  puVar2 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xbc,1);
  sysMemClear();
  temp_v2 = 0;
  puVar2[8] = 0x3f800000;
  puVar2[9] = 0x3f800000;
  puVar2[10] = 0;
  puVar2[0x12] = 0xffffffff;
  puVar2[1] = 0x41;
  puVar2[0x15] = param_3;
  *puVar2 = param_1;
  puVar2[5] = 0;
  puVar2[0x10] = 1;
  puVar2[0xd] = 0x3f800000;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x21] = 0;
  FUN_00283498();
  puVar2[0x16] = param_1;
  puVar3 = (unsigned short *)FUN_0019e378();
  puVar2[0x11] = (unsigned int)*puVar3;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2) {
        puVar2[4] = 0x48;
        puVar2[10] = 0x3e800000;
        puVar2[7] = temp_v2;
        temp_v1 = 5;
        puVar2[9] = temp_v2;
        puVar2[0xf] = temp_v1;
      }
    }
    else {
      puVar2[4] = 0xa0;
      temp_v1 = 4;
      puVar2[7] = 0x42400000;
      puVar2[0xf] = temp_v1;
    }
  }
  else {
    puVar2[4] = 0xffffffec;
    puVar2[7] = 0xc2400000;
    puVar2[0xf] = 3;
  }
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    puVar2[3] = 1;
  }
  else {
    puVar2[3] = 0;
    temp_v0 = FUN_001a6508(g_aocSystem,puVar2[0x10],puVar2[0x11],1);
    if (temp_v0 != 0) {
      FUN_00191e00(g_aocSystem,puVar2[0x10],puVar2[0x11],0x10000);
    }
    else {
      FUN_001acf98(puVar2[0x10],puVar2[0x11]);
    }
  }
  puVar2[6] = 0x3e851eb8;
  asdProcessCreateSimple("EVE_2dTex",4,0,0,FUN_002897cc,FUN_0034da3c,puVar2);
  return;
}

} /* extern "C" */
