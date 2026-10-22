/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336de4` (_code @ 0x336de4, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014afd0(int, unsigned int);
int FUN_00184310(void);
int aocLoadTextureNode(unsigned int, int, unsigned int, int);
int dataTable00FindById(void);
int FUN_001a6568(unsigned int, int, unsigned int, int);
int asdTMTexLoadMainHeap(int, unsigned int);
int FUN_0021ba5c(int);
int FUN_003d44ac(int);

extern unsigned int g_aocSystem; /* 0x570280 */
extern int g_btlTalkBustUp; /* 0x5710dc */

/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: aocLoadTextureNode. */
/* Supplied declaration required: dataTable00FindById. */
extern int aocRunByName(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001a6568. */
/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: FUN_0021ba5c. */
/* Supplied declaration required: FUN_003d44ac. */


void FUN_00336de4(int param_1,int param_2)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = g_btlTalkBustUp;
  if (g_btlTalkBustUp != 0) {
    temp_v1 = param_1;
    dataTable00FindById();
    *(unsigned int *)(temp_v0 + 0x2f0) = (unsigned int)(*(unsigned char *)(temp_v1 + 0xa5) >> 2);
    temp_v1 = param_1;
    FUN_00184310();
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x9c);
    *(unsigned int *)(temp_v0 + 0x2f8) = temp_v2;
    *(int *)(temp_v0 + 0x308) = param_1;
    if (param_2 == 0) {
      temp_v1 = aocRunByName(g_aocSystem,0x10,temp_v2,1);
      if (temp_v1 != 0) {
        aocLoadTextureNode(g_aocSystem,0x10,*(unsigned int *)(temp_v0 + 0x2f8),0x10000);
      }
      else {
        FUN_0014afd0(0x10,*(unsigned int *)(temp_v0 + 0x2f8));
      }
      FUN_003d44ac(temp_v0);
      FUN_0021ba5c(temp_v0);
      *(unsigned int *)(temp_v0 + 0x2e8) = 2;
      *(unsigned int *)(temp_v0 + 0x2ec) = 0;
      return;
    }
    temp_v1 = aocRunByName(g_aocSystem,0x10,temp_v2,1);
    if (temp_v1 != 0) {
      FUN_001a6568(g_aocSystem,0x10,*(unsigned int *)(temp_v0 + 0x2f8),0x10000);
    }
    else {
      asdTMTexLoadMainHeap(0x10,*(unsigned int *)(temp_v0 + 0x2f8));
    }
    *(unsigned int *)(temp_v0 + 0x2e8) = 1;
    *(unsigned int *)(temp_v0 + 0x2ec) = 0;
  }
  return;
}

} /* extern "C" */
