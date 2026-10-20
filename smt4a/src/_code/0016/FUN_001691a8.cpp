/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001691a8` (_code @ 0x1691a8, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int SBORROW4(int, int);

extern int g_npcRoom; /* 0x588124 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_001801b8(unsigned short, unsigned char);


unsigned int FUN_001691a8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = g_npcRoom;
  puVar1 = (unsigned int *)&g_npcRoom;
  if (g_npcRoom != 0) {
    temp_v5 = param_1 == (unsigned int *)0x0;
    if (-1 < (int)param_1) {
      puVar1 = *(unsigned int **)(g_npcRoom + 0xf4);
      temp_v5 = puVar1 == param_1;
    }
    if ((!temp_v5 && (-1 < (int)param_1 && (int)param_1 <= (int)puVar1)) && ((int)param_1 < 8)) {
      puVar2 = *(unsigned short **)(g_npcRoom + (int)param_1 * 4 + 0x28);
      temp_v2 = 0;
      if (puVar2 != (unsigned short *)0x0) {
        temp_v0 = FUN_001801b8(*puVar2,*(unsigned char *)(puVar2 + 0x29));
        if (temp_v0 == 0) {
          temp_v1 = temp_v1 + (int)param_1 * 0xc;
          temp_v3 = *(int *)(temp_v1 + 0x108);
          temp_v4 = *(int *)(temp_v1 + 0x10c);
          temp_v5 = SBORROW4(temp_v3,temp_v4);
          temp_v0 = temp_v3 - temp_v4;
          if (temp_v4 <= temp_v3) {
            temp_v5 = SBORROW4(*(int *)(temp_v1 + 0x110),5);
            temp_v0 = *(int *)(temp_v1 + 0x110) - 5;
          }
          if (temp_v0 < 0 == temp_v5) {
            return 0;
          }
        }
        temp_v2 = 1;
      }
      return temp_v2;
    }
  }
  return 0;
}

} /* extern "C" */
