/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c840` (_code @ 0x39c840, 0x18c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int asdMemoryAllocTracked(...);
int FUN_00283498(...);
int sysMemClear(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_0026c568(...); /* 0x26c568 */
extern int FUN_00334a54(...); /* 0x334a54 */
extern unsigned int g_aocSystem; /* 0x570280 */

extern unsigned int FUN_0014afd0(unsigned int, unsigned int);
/* Supplied declaration required: asdProcessCreateSimple. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
extern int gameFlagIsSet(unsigned int);
extern unsigned int FUN_00191e00(unsigned int, unsigned int, unsigned int, unsigned int);
extern int FUN_0019e378(void);
extern int FUN_001a6508(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_00283498. */
/* Supplied declaration required: sysMemClear. */


void FUN_0039c840(unsigned int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v0 = gameFlagIsSet(0x522);
  if (temp_v0 != 0) {
    FUN_00283498(param_1);
    temp_v0 = FUN_0019e378();
    if (temp_v0 == 0) {
      return;
    }
  }
  puVar2 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xa8,1);
  sysMemClear();
  *puVar2 = param_1;
  puVar2[0x21] = 0xffffffff;
  puVar2[6] = 0xffffffff;
  FUN_00283498();
  puVar2[1] = param_1;
  if (param_2 == 0) {
    puVar2[4] = 0x17;
    puVar2[5] = 0xffffffff;
    puVar2[7] = 0x41c80000;
    puVar2[8] = 0x41c80000;
  }
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    *(unsigned char *)(puVar2 + 0x1f) = 1;
  }
  else {
    if (puVar2[5] != -1) {
      temp_v0 = FUN_001a6508(g_aocSystem,puVar2[4],puVar2[5],1);
      if (temp_v0 != 0) {
        temp_v1 = FUN_00191e00(g_aocSystem,puVar2[4],puVar2[5],0x10000);
      }
      else {
        temp_v1 = FUN_0014afd0(puVar2[4],puVar2[5]);
      }
      puVar2[3] = temp_v1;
    }
    *(unsigned char *)(puVar2 + 0x1f) = 0;
  }
  puVar2[0xb] = 0x3f800000;
  *(unsigned char *)(puVar2 + 0xc) = 0;
  *(unsigned char *)((int)puVar2 + 0x31) = 1;
  puVar2[10] = 0;
  puVar2[0x24] = 0;
  puVar2[0x25] = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  asdProcessCreateSimple("EVE_BustupTex",4,0,0,FUN_0026c568,FUN_00334a54,puVar2);
  return;
}

} /* extern "C" */
