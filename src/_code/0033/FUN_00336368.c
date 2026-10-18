/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336368` (_code @ 0x336368, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0032c6e8; /* 0x32c6e8 */

/* Supplied declaration required: FUN_002b7bca. */


void FUN_00336368(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short *psVar1;
  int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  unsigned short *puVar5;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  char temp_v5;
  unsigned char temp_v6;
  unsigned long long temp_v7;
  short asStack_120 [2];
  int uStack_11c;
  unsigned short temp_v8 [122];
  
  temp_v4 = 0;
  if (*(unsigned char *)(param_1 + 0x1e9c) != 0) {
    temp_v7 = 0;
    do {
      temp_v3 = 0x14;
      puVar3 = (unsigned int *)&uStack_11c;
      psVar1 = asStack_120;
      puVar5 = temp_v8;
      do {
        *psVar1 = 0xffff;
        *puVar3 = (int)temp_v7;
        temp_v3 = temp_v3 - 1;
        puVar3 = puVar3 + 3;
        *puVar5 = 0;
        psVar1 = psVar1 + 6;
        puVar5 = puVar5 + 6;
      } while (temp_v3 != 0);
      temp_v0 = 4;
      temp_v3 = 0;
      do {
        temp_v2 = *(int *)(param_1 + 0x1e98) + temp_v0 * 0x114;
        temp_v1 = temp_v3;
        if (((*(unsigned int *)(temp_v2 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v2 + 0x50) & 0x80) != 0) &&
           (*(char *)(temp_v2 + 0x44) == temp_v4)) {
          temp_v1 = temp_v3 + 1;
          asStack_120[temp_v3 * 6] = *(short *)(temp_v2 + 0x62);
          (&uStack_11c)[temp_v3 * 3] = *(unsigned int *)(temp_v2 + 0xc);
        }
        temp_v0 = temp_v0 + 1;
        temp_v3 = temp_v1;
      } while (temp_v0 < 0x36);
      FUN_002b7bca(asStack_120,temp_v1,0xc,&LAB_0032c6e8);
      temp_v5 = '\0';
      temp_v3 = 0;
      do {
        temp_v0 = 4;
        do {
          temp_v1 = *(int *)(param_1 + 0x1e98) + temp_v0 * 0x114;
          if ((*(unsigned int *)(temp_v1 + 0x50) & 1) != 0 && (*(unsigned int *)(temp_v1 + 0x50) & 0x80) != 0) {
            temp_v2 = (int)*(char *)(temp_v1 + 0x44);
            temp_v6 = temp_v2 == temp_v4;
            if (temp_v6) {
              temp_v2 = (int)*(short *)(temp_v1 + 0x62);
            }
            if (temp_v6 && temp_v2 == asStack_120[temp_v3 * 6]) {
              *(char *)(temp_v1 + 0x45) = temp_v5;
              temp_v5 = temp_v5 + '\x01';
              break;
            }
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 0x36);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 0x14);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(param_1 + 0x1e9c));
  }
  return;
}
