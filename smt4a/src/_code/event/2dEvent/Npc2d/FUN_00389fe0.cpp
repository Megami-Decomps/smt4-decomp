/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389fe0` (_code @ 0x389fe0, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014afd0(...);
int asdProcessCreateSimple(...);
int asdMemoryAllocTracked(...);
int FUN_00191e00(...);
int dataTableGetCount(...);
int sysMemClear(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int FUN_002897cc(...); /* 0x2897cc */
extern int FUN_0034da3c(...); /* 0x34da3c */
extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: asdProcessCreateSimple. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00191e00. */
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
extern int FUN_001a6508(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: sysMemClear. */


void FUN_00389fe0(int param_1,int param_2,int param_3)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xbc,1);
  sysMemClear();
  puVar1[8] = 0x3f800000;
  puVar1[9] = 0x3f800000;
  puVar1[10] = 0;
  puVar1[1] = 4;
  *puVar1 = 0;
  puVar1[0x10] = 0;
  puVar1[0xd] = 0x3f800000;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  temp_v0 = dataTableGet(0x1a,0);
  temp_v1 = dataTableGetEntries();
  dataTableGetCount(temp_v0);
  puVar1[0x11] = (int)*(short *)(temp_v1 + (param_1 - 1) * 2);
  puVar1[4] = param_2 - 0x38;
  puVar1[5] = param_3 - 8;
  temp_v1 = FUN_00162ea4();
  if (temp_v1 != 0) {
    puVar1[3] = 1;
  }
  else {
    puVar1[3] = 0;
    temp_v1 = FUN_001a6508(g_aocSystem,puVar1[0x10],puVar1[0x11],1);
    if (temp_v1 != 0) {
      FUN_00191e00(g_aocSystem,puVar1[0x10],puVar1[0x11],0x10000);
    }
    else {
      FUN_0014afd0(puVar1[0x10],puVar1[0x11]);
    }
  }
  puVar1[6] = 0x3ea8f5c3;
  asdProcessCreateSimple("EVE_2dTex",4,0,0,FUN_002897cc,FUN_0034da3c,puVar1);
  return;
}

} /* extern "C" */
