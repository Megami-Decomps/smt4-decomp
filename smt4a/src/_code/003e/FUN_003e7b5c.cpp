/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e7b5c` (_code @ 0x3e7b5c, 0x164 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(short [2], int, int, unsigned char *);

extern unsigned char LAB_003d4ea8; /* 0x3d4ea8 */

/* Supplied declaration required: qsort. */


void FUN_003e7b5c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  short *psVar3;
  int temp_v1;
  unsigned short *puVar5;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  char temp_v5;
  unsigned long long temp_v6;
  short asStack_120 [2];
  int uStack_11c;
  unsigned short temp_v7 [122];
  
  temp_v4 = 0;
  if (*(unsigned char *)(param_1 + 0x1ed8) != 0) {
    temp_v6 = 0;
    do {
      temp_v3 = 0x14;
      puVar1 = (unsigned int *)&uStack_11c;
      psVar3 = asStack_120;
      puVar5 = temp_v7;
      do {
        *psVar3 = 0xffff;
        *puVar1 = (int)temp_v6;
        temp_v3 = temp_v3 - 1;
        puVar1 = puVar1 + 3;
        *puVar5 = 0;
        psVar3 = psVar3 + 6;
        puVar5 = puVar5 + 6;
      } while (temp_v3 != 0);
      temp_v0 = 4;
      temp_v3 = 0;
      do {
        temp_v2 = *(int *)(param_1 + 0x1ed4) + temp_v0 * 0x1d0;
        temp_v1 = temp_v3;
        if (((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 0x80) != 0) &&
           (*(char *)(temp_v2 + 0x44) == temp_v4)) {
          temp_v1 = temp_v3 + 1;
          asStack_120[temp_v3 * 6] = *(short *)(temp_v2 + 0x6a);
          (&uStack_11c)[temp_v3 * 3] = *(unsigned int *)(temp_v2 + 0xc);
        }
        temp_v0 = temp_v0 + 1;
        temp_v3 = temp_v1;
      } while (temp_v0 < 0x36);
      qsort(asStack_120,temp_v1,0xc,&LAB_003d4ea8);
      temp_v5 = '\0';
      temp_v3 = 0;
      do {
        temp_v0 = 4;
        do {
          temp_v1 = *(int *)(param_1 + 0x1ed4) + temp_v0 * 0x1d0;
          if ((((*(unsigned int *)(temp_v1 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v1 + 0x50) & 0x80) != 0) &&
              (*(char *)(temp_v1 + 0x44) == temp_v4)) &&
             (*(short *)(temp_v1 + 0x6a) == asStack_120[temp_v3 * 6])) {
            *(char *)(temp_v1 + 0x45) = temp_v5;
            temp_v5 = temp_v5 + '\x01';
            break;
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 0x36);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x14);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x1ed8));
  }
  return;
}

} /* extern "C" */
