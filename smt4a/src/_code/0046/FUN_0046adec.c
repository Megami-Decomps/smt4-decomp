/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046adec` (_code @ 0x46adec, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_0046af3c; /* 0x46af3c */
extern unsigned char LAB_0046af48; /* 0x46af48 */
extern unsigned char LAB_0046af54; /* 0x46af54 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0019f29c. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_00407450. */
/* Supplied declaration required: FUN_00407eb0. */


void FUN_0046adec(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  romwright_code *pcVar4;
  int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5 [32];
  unsigned char temp_v6 [16];
  
  temp_v1 = param_1 + *(int *)(param_1 + 4) * 8;
  pcVar4 = *(romwright_code **)(temp_v1 + 0x2b8);
  temp_v2 = *(unsigned int *)(temp_v1 + 700);
  if ((pcVar4 != (romwright_code *)0x0) || (((temp_v2 & 1) != 0 && (temp_v2 != 0)))) {
    if ((temp_v2 & 1) != 0) {
      pcVar4 = *(romwright_code **)((unsigned char *)pcVar4 + *(int *)(param_1 + ((int)temp_v2 >> 1)));
    }
    (*pcVar4)();
  }
  if (*(char *)(param_1 + 0x1a) == '\0') {
    temp_v1 = *(int *)(param_1 + 0xce0);
    if (*(int *)(param_1 + 0xce4) != temp_v1) {
      *(int *)(param_1 + 0xce4) = temp_v1;
      FUN_00407eb0(*(unsigned int *)(param_1 + 0xcdc),temp_v1,0);
    }
    FUN_00407450(*(unsigned int *)(param_1 + 0xcdc));
  }
  temp_v0 = *(char *)(param_1 + 0xa58);
  temp_v4 = temp_v0 == '\0';
  if (temp_v4) {
    temp_v0 = *(char *)(param_1 + 0x1a);
  }
  if (temp_v4 && temp_v0 == '\0') {
    *(unsigned char *)(param_1 + 0xa58) = 1;
    temp_v1 = 0;
    if (temp_v1 < *(int *)(param_1 + 0xabc)) {
      do {
        FUN_00100388(temp_v5,&LAB_0046af3c,temp_v1 + 1);
        if (temp_v1 != 7) {
          if (temp_v1 == 8) {
            FUN_00100388(temp_v5,&LAB_0046af54);
          }
        }
        else {
          FUN_00100388(temp_v5,&LAB_0046af48);
        }
        FUN_0019f29c(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xcdc) + 0x18) + 4),temp_v5,
                     temp_v6);
        temp_v3 = param_1 + temp_v1 * 4;
        FUN_003fd76c(*(unsigned int *)(*(int *)(temp_v3 + 0xa10) + 4),temp_v6);
        FUN_003fd76c(*(unsigned int *)(*(int *)(temp_v3 + 0xa34) + 4),temp_v6);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < *(int *)(param_1 + 0xabc));
    }
  }
  return;
}
