/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049f708` (_code @ 0x49f708, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp3A; /* 0x3a: local_3a */
    unsigned short sp50; /* 0x50: local_50 */
} param_3_stack;

extern int FUN_0014bef4(unsigned int);
/* Supplied declaration required: FUN_001801a4. */
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
/* Supplied declaration required: FUN_001fef70. */
/* Supplied declaration required: FUN_003dfad4. */


void FUN_0049f708(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short temp_v8 [11];
  unsigned short temp_v9;
  
  temp_v0 = 1 << (param_2 & 0xff);
  if (((((param_1 == 0 || param_1 == 2) || param_1 == 3) &&
       (temp_v2 = FUN_001801a4(), (*(unsigned short *)(temp_v2 + 0x5e) & 2) == 0)) &&
      (temp_v2 = FUN_001801a4(), (*(unsigned short *)(temp_v2 + 0x5e) & 0x400) == 0)) &&
     ((temp_v2 = FUN_001801a4(), (*(unsigned short *)(temp_v2 + 0x5e) & temp_v0) == 0 &&
      (temp_v2 = FUN_0014bef4(99), temp_v2 < param_3)))) {
    if (param_2 != 5) {
      temp_v2 = FUN_001801a4();
      *(unsigned short *)(temp_v2 + 0x5e) = *(unsigned short *)(temp_v2 + 0x5e) | (unsigned short)temp_v0;
    }
    else {
      temp_v4 = FUN_001801a4();
      FUN_003dfad4(temp_v8,temp_v4);
      temp_v9 = temp_v9 >> 10;
      if (!((temp_v9 == 1 || temp_v9 == 3) || temp_v9 == 4)) {
        temp_v2 = FUN_001801a4();
        *(unsigned short *)(temp_v2 + 0x5e) = *(unsigned short *)(temp_v2 + 0x5e) | (unsigned short)temp_v0;
      }
    }
  }
  if (param_1 >= 2) {
    if (param_1 != 2 && param_1 != 3) {
      return;
    }
    temp_v7 = 3;
    temp_v2 = FUN_001ab888();
    temp_v2 = temp_v2 + 0x1ca0;
  }
  else {
    temp_v7 = FUN_001b347c();
    temp_v2 = FUN_001ab888();
    temp_v2 = temp_v2 + 0x1c88;
  }
  temp_v6 = 0;
  if (temp_v6 < temp_v7) {
    do {
      if (-1 < *(char *)(temp_v2 + temp_v6)) {
        temp_v3 = FUN_001ab854();
        temp_v1 = *(unsigned short *)(temp_v3 + 0x60);
        if ((((temp_v1 & 2) == 0 && (temp_v1 & 0x400) == 0) && (temp_v1 & temp_v0) == 0) &&
           (temp_v5 = FUN_0014bef4(99), temp_v5 < param_3)) {
          if (param_2 != 5) {
            *(unsigned short *)(temp_v3 + 0x60) = *(unsigned short *)(temp_v3 + 0x60) | (unsigned short)temp_v0;
          }
          else {
            FUN_001fef70(temp_v8,temp_v3,0xb);
            temp_v1 = temp_v8[0] >> 10;
            if (!((temp_v1 == 1 || temp_v1 == 3) || temp_v1 == 4)) {
              *(unsigned short *)(temp_v3 + 0x60) = *(unsigned short *)(temp_v3 + 0x60) | (unsigned short)temp_v0;
            }
          }
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < temp_v7);
  }
  return;
}
