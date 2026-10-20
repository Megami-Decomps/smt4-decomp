/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017cbdc` (_code @ 0x17cbdc, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00196644(unsigned int, int);
int FUN_001975ec(unsigned int, int);

extern unsigned int *g_commandBufferCursor; /* 0x5b40e0 */
extern unsigned int g_commandBufferEnd; /* 0x5b40e4 */
extern int DAT_005b4400; /* 0x5b4400 */
extern unsigned int *DAT_005b4428; /* 0x5b4428 */

/* Supplied declaration required: FUN_00196644. */
/* Supplied declaration required: FUN_001975ec. */


void FUN_0017cbdc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = DAT_005b4400;
  temp_v0 = 0;
  if ((*(unsigned int *)(DAT_005b4400 + 8) & 0x80) == 0) {
    temp_v3 = 0;
    temp_v4 = DAT_005b4400 + 0x58;
    do {
      if ((*(unsigned int *)(param_1 + ((int)(temp_v3 + 10U) >> 5) * 4) & (1 << ((temp_v3 + 10U) & 0x1f))) != 0)
      {
        temp_v2 = temp_v4 + temp_v3 * 4;
        if (*(char *)(temp_v4 + temp_v3 + 0xaf) != '\0') {
          if (*(int *)(temp_v2 + 0x10) != 0) {
            if ((unsigned int *)DAT_005b4428[temp_v3 + 0x207] != (unsigned int *)0x0) {
              FUN_001975ec(*(unsigned int *)DAT_005b4428[temp_v3 + 0x207],temp_v3);
            }
          }
          else {
            FUN_001975ec(DAT_005b4428[1],temp_v3);
          }
        }
        else {
          puVar4 = DAT_005b4428;
          if ((*(int *)(temp_v2 + 4) == 0) ||
             (puVar4 = (unsigned int *)DAT_005b4428[temp_v3 + 0x204], puVar4 != (unsigned int *)0x0)) {
            FUN_00196644(*puVar4,temp_v3);
          }
        }
        temp_v0 = 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    if ((temp_v0) && (temp_v5 = *(unsigned int *)(temp_v1 + 0x770), (temp_v5 & 7) != 0)) {
      if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[1] = 0x10080;
        *g_commandBufferCursor = temp_v5;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
      if ((unsigned int)g_commandBufferCursor < g_commandBufferEnd) {
        g_commandBufferCursor[1] = 0x50080;
        *g_commandBufferCursor = 0x10000;
        g_commandBufferCursor = g_commandBufferCursor + 2;
      }
    }
  }
  return;
}

} /* extern "C" */
