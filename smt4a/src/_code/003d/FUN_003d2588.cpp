/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2588` (_code @ 0x3d2588, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_bsearch(unsigned short *, unsigned int, unsigned int, int, unsigned char *);
int FUN_001a6568(unsigned int, int, int, int);
int asdTMTexLoadMainHeap(int, int);

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_002321f8; /* 0x2321f8 */
extern unsigned int g_aocSystem; /* 0x570280 */
extern int g_sWin; /* 0x57f57c */

/* Supplied declaration required: libc_bsearch. */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern unsigned int dataTableGetEntries(void);
extern int aocRunByName(unsigned int, unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
extern int textureGetIndexedResource(unsigned int);


void FUN_003d2588(unsigned int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned short temp_v4 [4];
  
  temp_v3 = g_sWin;
  temp_v0 = textureGetIndexedResource(0x34);
  if (temp_v0 != 0) {
    *(unsigned int *)(temp_v3 + 0xc) = 0;
    *(unsigned int *)(temp_v3 + 8) = 1;
    *(unsigned int *)(temp_v3 + 0x18) = 0;
    *(unsigned int *)(temp_v3 + 0x24) = param_2;
    *(unsigned int *)(g_sWin + 0x14) = param_1;
    temp_v1 = dataTableGet(0x47,0);
    temp_v2 = dataTableGetEntries();
    temp_v1 = dataTableGetCount(temp_v1);
    puVar4 = temp_v4;
    temp_v4[0] = (unsigned short)param_1;
    libc_bsearch(puVar4,temp_v2,temp_v1,4,&LAB_002321f8);
    if ((puVar4 != (unsigned short *)0x0) && (temp_v3 = (int)(short)puVar4[1], -1 < temp_v3)) {
      temp_v0 = aocRunByName(g_aocSystem,0x34,temp_v3,1);
      if (temp_v0 != 0) {
        FUN_001a6568(g_aocSystem,0x34,temp_v3,0x10000);
        return;
      }
      asdTMTexLoadMainHeap(0x34,temp_v3);
      return;
    }
  }
  return;
}

} /* extern "C" */
