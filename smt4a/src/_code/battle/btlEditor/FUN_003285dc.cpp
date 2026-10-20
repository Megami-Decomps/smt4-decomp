/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003285dc` (_code @ 0x3285dc, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(int);
int FUN_004aa780(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int g_btlEditor; /* 0x5737e0 */
extern unsigned int DAT_005737e8; /* 0x5737e8 */
extern unsigned int DAT_005737ec; /* 0x5737ec */
extern int g_btlUiBlock; /* 0x57a9c8 */

/* Supplied declaration required: jobStop. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_004aa780. */


void FUN_003285dc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = jobGetWork();
  if (g_btlUiBlock != 0) {
    FUN_004aa780(g_btlUiBlock,0);
  }
  if (g_btlEditor != 0) {
    if (temp_v0 != 0) {
      piVar3 = (int *)(temp_v0 + 0x1ed4);
      temp_v1 = 0;
      if (*piVar3 != 0) {
        temp_v2 = 4;
        do {
          temp_v1 = temp_v2 + 1;
          temp_v2 = *piVar3 + temp_v2 * 0x1d0;
          temp_v3 = *(unsigned int *)(temp_v2 + 0x50);
          if ((temp_v3 & 1) != 0 && (temp_v3 & 0x80) != 0) {
            *(unsigned int *)(temp_v2 + 0x50) = temp_v3 & 0xfffffff7;
          }
          temp_v2 = temp_v1;
        } while (temp_v1 < 0x36);
      }
      if (temp_v0 != 0) {
        temp_v1 = *piVar3;
      }
      if (temp_v0 != 0 && temp_v1 != 0) {
        temp_v1 = 0;
        do {
          temp_v2 = temp_v1 + 1;
          temp_v1 = *piVar3 + temp_v1 * 0x1d0;
          *(unsigned int *)(temp_v1 + 0x6c) = *(unsigned int *)(temp_v1 + 0x70);
          temp_v1 = temp_v2;
        } while (temp_v2 < 0x6d);
      }
    }
    temp_v3 = ~DAT_005737e8;
    *(unsigned int *)(temp_v0 + 0x45ac) = *(unsigned int *)(temp_v0 + 0x45ac) & ~DAT_005737ec;
    *(unsigned int *)(temp_v0 + 0x45a8) = *(unsigned int *)(temp_v0 + 0x45a8) & temp_v3;
    asdMemFree(g_btlEditor);
    g_btlEditor = 0;
  }
  jobStop(*(unsigned int *)(temp_v0 + 0x7c),0);
  return;
}

} /* extern "C" */
