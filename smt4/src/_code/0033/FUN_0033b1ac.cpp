/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033b1ac` (_code @ 0x33b1ac, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlUiRefreshSlotRanks(unsigned int, int, int, int *);
int btlMainFindEntryByListedId(void);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int g_btlUiBlock; /* 0x439ca8 */

/* Supplied declaration required: btlUiRefreshSlotRanks. */
/* Supplied declaration required: btlMainFindEntryByListedId. */


void FUN_0033b1ac(int param_1,int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  short temp_v9;
  int temp_v10;
  short temp_v11;
  int temp_v12;
  int *temp_v13;
  
  temp_v2 = *(unsigned int *)(*(int *)(param_1 + 0x1e98) + param_2 * 0x114 + 0x50);
  if ((temp_v2 & 1) == 0 || (temp_v2 & 0x80) == 0) {
    return;
  }
  temp_v3 = param_1;
  btlMainFindEntryByListedId();
  temp_v5 = *(short *)(param_1 + 0x2f1e) + 1;
  temp_v7 = temp_v5;
  do {
    temp_v13 = param_4;
    if (temp_v7 >= 0xc) {
      btlUiRefreshSlotRanks(g_btlUiBlock,temp_v7,temp_v5,temp_v13);
      return;
    }
    if (*(short *)(param_1 + temp_v7 * 2 + 0x2f06) < 0) {
      temp_v6 = param_1 + temp_v7 * 2;
      temp_v7 = temp_v6 + 0x2f00;
      *(unsigned short *)(temp_v6 + 0x2f06) = *(unsigned short *)(temp_v3 + 0x6e);
      if (temp_v5 < 0xb) {
        temp_v13 = (int *)(param_1 + 0x1fc0);
        do {
          temp_v6 = param_1 + temp_v5 * 2;
          temp_v3 = temp_v5;
          if (-1 < *(short *)(temp_v6 + 0x2f06)) {
            while (temp_v7 = temp_v3 + 1, temp_v7 < 0xc) {
              temp_v4 = param_1 + temp_v7 * 2;
              temp_v0 = *(short *)(temp_v4 + 0x2f06);
              temp_v12 = (int)temp_v0;
              temp_v3 = temp_v7;
              if (-1 < temp_v12) {
                temp_v1 = *(short *)(temp_v6 + 0x2f06);
                temp_v7 = *temp_v13;
                temp_v10 = temp_v1 * 0x288 + 0xcc + temp_v7;
                temp_v8 = temp_v12 * 0x288 + 0xcc + temp_v7;
                temp_v9 = *(short *)(temp_v10 + 0xf6) + *(short *)(temp_v10 + 0x188);
                temp_v11 = *(short *)(temp_v8 + 0xf6) + *(short *)(temp_v8 + 0x188);
                if ((temp_v9 < temp_v11) ||
                   ((temp_v9 == temp_v11 &&
                    (*(short *)(temp_v7 + temp_v12 * 0x288 + 8) < *(short *)(temp_v7 + temp_v1 * 0x288 + 8))
                    ))) {
                  *(short *)(temp_v6 + 0x2f06) = temp_v0;
                  *(short *)(temp_v4 + 0x2f06) = temp_v1;
                }
              }
            }
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0xb);
      }
      btlUiRefreshSlotRanks(g_btlUiBlock,temp_v7,temp_v5,temp_v13);
      return;
    }
    temp_v7 = temp_v7 + 1;
  } while( 1 );
}

} /* extern "C" */
