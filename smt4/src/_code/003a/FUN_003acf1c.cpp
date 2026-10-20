/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003acf1c` (_code @ 0x3acf1c, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002942c4(int, int);
int FUN_002b06c4(void);

extern unsigned char g_countdown; /* 0x43d9e0 */

/* Supplied declaration required: FUN_002942c4. */
/* Supplied declaration required: FUN_002b06c4. */


void FUN_003acf1c(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_countdown + 0x4));
  if (*(unsigned int *)((*(int *)((unsigned char *)&g_countdown + 0x4)) + 0xc) != param_1) {
    if (*(unsigned int *)((*(int *)((unsigned char *)&g_countdown + 0x4)) + 0xc) == 0) {
      *(unsigned int *)((*(int *)((unsigned char *)&g_countdown + 0x4)) + 4) = param_1;
      puVar2 = (unsigned short *)0x0;
      *(unsigned short *)(temp_v0 + 8) = 0xffff;
      FUN_002b06c4();
      temp_v1 = 0;
      do {
        if ((unsigned short)puVar2[0x50] == param_1) {
          *(unsigned short *)(temp_v0 + 8) = *puVar2;
          break;
        }
        temp_v1 = temp_v1 + 1;
        puVar2 = puVar2 + 0x54;
      } while (temp_v1 < 0x4b1);
      *(unsigned int *)(temp_v0 + 0x14) = param_1;
      puVar2 = (unsigned short *)0x0;
      *(unsigned short *)(temp_v0 + 0x18) = 0xffff;
      FUN_002b06c4();
      temp_v1 = 0;
      do {
        if ((unsigned short)puVar2[0x50] == param_1) {
          *(unsigned short *)(temp_v0 + 0x18) = *puVar2;
          break;
        }
        temp_v1 = temp_v1 + 1;
        puVar2 = puVar2 + 0x54;
      } while (temp_v1 < 0x4b1);
      if (-1 < *(short *)(temp_v0 + 8)) {
        FUN_002942c4((int)*(short *)(temp_v0 + 8),1);
      }
    }
    *(unsigned int *)(temp_v0 + 0xc) = param_1;
    puVar2 = (unsigned short *)0x0;
    *(unsigned short *)(temp_v0 + 0x10) = 0xffff;
    FUN_002b06c4();
    temp_v1 = 0;
    while ((unsigned short)puVar2[0x50] != param_1) {
      temp_v1 = temp_v1 + 1;
      puVar2 = puVar2 + 0x54;
      if (temp_v1 >= 0x4b1) {
        return;
      }
    }
    *(unsigned short *)(temp_v0 + 0x10) = *puVar2;
  }
  return;
}

} /* extern "C" */
