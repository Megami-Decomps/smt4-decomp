/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00318b3c` (_code @ 0x318b3c, 0x11c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(void);
int FUN_002c424c(...);

extern int g_btlTalk; /* 0x439b58 */

/* Supplied declaration required: scrSetResult. */
extern int FUN_002c09d0(void);
extern int FUN_002c09f4(unsigned int);
extern int dataTableGetCount(void);
extern int dataTableGetEntries(unsigned int);
/* Supplied declaration required: FUN_002c424c. */
extern unsigned int FUN_003c0868(int);


unsigned int FUN_00318b3c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  int temp_v5;
  int aiStack_130 [32];
  int aiStack_b0 [37];
  
  temp_v0 = FUN_003c0868(g_btlTalk);
  temp_v1 = dataTableGetCount();
  temp_v2 = dataTableGetEntries(temp_v0);
  temp_v5 = 0;
  FUN_002c424c(aiStack_b0,0x80,0xffffffff);
  temp_v4 = 0;
  if (temp_v4 < temp_v1) {
    do {
      temp_v3 = temp_v2 + temp_v4 * 0x7c;
      if (*(int *)(temp_v3 + 0x74) != 0) {
        if ((*(int *)(temp_v3 + 0x78) == 0) || (temp_v3 = FUN_002c09d0(), temp_v3 != 0)) {
          aiStack_b0[temp_v5] = temp_v4;
        }
        temp_v5 = temp_v5 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v1);
  }
  temp_v2 = 0;
  FUN_002c424c(aiStack_130,0x80,0xffffffff);
  piVar5 = aiStack_b0;
  temp_v1 = 0x20;
  do {
    temp_v4 = *piVar5;
    if ((temp_v4 != -1) && (*(int *)(g_btlTalk + temp_v4 * 4 + 0x34) == -1)) {
      aiStack_130[temp_v2] = temp_v4;
      temp_v2 = temp_v2 + 1;
    }
    temp_v1 = temp_v1 - 1;
    piVar5 = piVar5 + 1;
  } while (temp_v1 != 0);
  if (temp_v2 == 0) {
    temp_v2 = 1;
  }
  temp_v1 = FUN_002c09f4((temp_v2 - 1U) & 0xffff);
  *(unsigned int *)(g_btlTalk + aiStack_130[temp_v1] * 4 + 0x34) = 0xffffffff;
  scrSetResult();
  return 1;
}

} /* extern "C" */
