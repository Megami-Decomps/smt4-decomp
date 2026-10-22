/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037b280` (_code @ 0x37b280, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int asdMemoryAllocTracked(...);
int dataTableGetCount(...);
int sysMemClear(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_0026c568(...); /* 0x26c568 */
extern int asdMTeXReleaseJobContext(...); /* 0x334a54 */
extern unsigned int g_aocSystem; /* 0x570280 */

extern unsigned int FUN_0014afd0(unsigned int, unsigned int);
/* Supplied declaration required: asdProcessCreateSimple. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int aocLoadTextureNode(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
extern int dataTableGetEntries(void);
extern int aocRunByName(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: sysMemClear. */


void FUN_0037b280(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xa8,1);
  sysMemClear();
  puVar1[0x21] = 0xffffffff;
  puVar1[6] = 0xffffffff;
  puVar1[4] = 0x16;
  *puVar1 = 0;
  puVar1[7] = 0x43160000;
  puVar1[8] = 0x43160000;
  temp_v0 = dataTableGet(0x1a,1);
  temp_v1 = dataTableGetEntries();
  dataTableGetCount(temp_v0);
  puVar1[5] = (int)*(short *)(temp_v1 + (param_1 - 1) * 2);
  temp_v1 = FUN_00162ea4();
  if (temp_v1 != 0) {
    *(unsigned char *)(puVar1 + 0x1f) = 1;
  }
  else {
    if (puVar1[5] != -1) {
      temp_v1 = aocRunByName(g_aocSystem,puVar1[4],puVar1[5],1);
      if (temp_v1 != 0) {
        temp_v0 = aocLoadTextureNode(g_aocSystem,puVar1[4],puVar1[5],0x10000);
      }
      else {
        temp_v0 = FUN_0014afd0(puVar1[4],puVar1[5]);
      }
      puVar1[3] = temp_v0;
    }
    *(unsigned char *)(puVar1 + 0x1f) = 0;
  }
  puVar1[0xb] = 0x3f800000;
  *(unsigned char *)(puVar1 + 0xc) = 0;
  *(unsigned char *)((int)puVar1 + 0x31) = 1;
  puVar1[10] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  asdProcessCreateSimple("EVE_BustupTex",4,0,0,FUN_0026c568,asdMTeXReleaseJobContext,puVar1);
  return;
}

} /* extern "C" */
