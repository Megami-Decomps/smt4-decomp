/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cab9c` (_code @ 0x4cab9c, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_001568f8(int, int);
int halfRecClear(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0057aa68; /* 0x57aa68 */
extern unsigned int DAT_0057aa6c; /* 0x57aa6c */

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: halfRecClear. */


void FUN_004cab9c(int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = btlGetMainState();
  FUN_001568f8(temp_v1,(int)*(short *)(param_1 + 0x6a));
  if (temp_v1 != 0) {
    if ((*(unsigned short *)(temp_v1 + 0x110) & 0x180) != 0) {
      btlGetMainState();
      *(unsigned int *)(param_1 + 0x48) = 3;
      *(unsigned int *)(param_1 + 0x4c) = 0;
      *(unsigned int *)(param_1 + 0xac) = 0;
    }
    else if ((*(unsigned int *)(param_1 + 0x50) & 0x80) != 0) {
      *(unsigned int *)(param_1 + 0x48) = 0;
      *(unsigned int *)(param_1 + 0x4c) = 0;
      *(unsigned int *)(param_1 + 0xac) = 0;
      temp_v3 = btlGetMainState();
      if (-1 < *(short *)(param_1 + 0x68)) {
        puVar3 = (unsigned int *)(*(int *)(temp_v3 + 0x1ffc) + *(short *)(param_1 + 0x68) * 0x408);
        temp_v4 = ~DAT_0057aa6c;
        *puVar3 = *puVar3 & ~DAT_0057aa68;
        puVar3[1] = puVar3[1] & temp_v4;
      }
    }
    if ((*(unsigned short *)(temp_v1 + 0x110) & 0x3dc2) != 0) {
      temp_v2 = btlGetMainState();
      halfRecClear(temp_v2,temp_v1);
    }
    if ((-1 < *(short *)(param_1 + 0x68)) &&
       (temp_v3 = btlGetMainState(), *(int *)(temp_v3 + 0x1ffc) + *(short *)(param_1 + 0x68) * 0x408 != 0))
    {
      temp_v0 = *(unsigned short *)(temp_v1 + 0x110);
      temp_v4 = (unsigned int)temp_v0;
      if (*(unsigned int *)(param_1 + 0x170) != temp_v4) {
        *(unsigned int *)(param_1 + 0x160) = 0;
        *(unsigned int *)(param_1 + 0x128) = 0;
        *(unsigned int *)(param_1 + 300) = 0;
        *(unsigned int *)(param_1 + 0x130) = 0;
        *(unsigned int *)(param_1 + 0x134) = 0;
        *(unsigned int *)(param_1 + 0x138) = 0;
        *(unsigned int *)(param_1 + 0x13c) = 0;
        *(unsigned int *)(param_1 + 0x140) = 0;
        *(unsigned int *)(param_1 + 0x144) = 0;
        *(unsigned int *)(param_1 + 0x148) = 0;
        *(unsigned int *)(param_1 + 0x14c) = 0;
        *(unsigned int *)(param_1 + 0x150) = 0;
        *(unsigned int *)(param_1 + 0x154) = 0;
        *(unsigned int *)(param_1 + 0x158) = 0;
        *(unsigned int *)(param_1 + 0x15c) = 0;
        *(unsigned int *)(param_1 + 0x164) = 0;
        *(unsigned int *)(param_1 + 0x168) = 0;
        *(unsigned int *)(param_1 + 0x170) = 0;
        if ((temp_v4 != 0) && ((temp_v0 & 2) == 0)) {
          temp_v5 = 0;
          if ((temp_v0 & 0x10) != 0) {
            while ((temp_v4 & (1 << (temp_v5 & 0xff))) == 0) {
              temp_v5 = temp_v5 + 1;
              if ((int)temp_v5 >= 0xe) goto code_r0x0041a4fc;
              while( 1 ) {
                while (temp_v5 == 2) {
                  temp_v5 = 3;
                }
                if (temp_v5 != 4) break;
                temp_v5 = 5;
              }
            }
            temp_v4 = temp_v4 & 0xffffffef;
          }
code_r0x0041a4fc:
          temp_v5 = 0;
          do {
            if ((temp_v4 & (1 << (temp_v5 & 0xff))) != 0) {
              ((unsigned int *)(param_1 + 0x128))[*(int *)(param_1 + 0x160)] = temp_v5;
              *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
            }
            temp_v5 = temp_v5 + 1;
          } while ((int)temp_v5 < 0xe);
          *(unsigned int *)(param_1 + 0x170) = temp_v4;
        }
      }
      return;
    }
  }
  return;
}

} /* extern "C" */
