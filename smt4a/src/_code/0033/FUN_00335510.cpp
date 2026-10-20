/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00335510` (_code @ 0x335510, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f01e0(int, int);
int FUN_003343f0(int);

extern int FUN_001801a4(void);
extern int FUN_00224880(unsigned int);
extern int FUN_002a4b60(void);
/* Supplied declaration required: FUN_002f01e0. */
/* Supplied declaration required: FUN_003343f0. */
extern unsigned char countUnlockedSlots(void);
extern unsigned char getUnlockedSlotCount(int);


void FUN_00335510(int param_1)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  short *psVar6;
  int temp_v5;
  
  temp_v2 = FUN_00224880(*(unsigned int *)(param_1 + 0x2574));
  if (temp_v2 == 2) {
    temp_v2 = FUN_002a4b60();
    if (temp_v2 == 0) {
      temp_v2 = 0;
      if (*(short *)(param_1 + 0x598) < 0) {
        temp_v3 = FUN_001801a4();
        *(unsigned int *)(temp_v3 + 0x34) = 0;
        *(unsigned int *)(temp_v3 + 0x38) = 0;
        *(unsigned int *)(temp_v3 + 0x3c) = 0;
        *(unsigned int *)(temp_v3 + 0x40) = 0;
        temp_v4 = 0;
        do {
          psVar6 = (short *)(param_1 + 0x24ac + temp_v4 * 8);
          temp_v0 = *psVar6;
          if (temp_v0 != 0) {
            temp_v5 = temp_v3 + temp_v2;
            *(short *)(temp_v3 + temp_v2 * 2 + 0x34) = temp_v0;
            temp_v2 = temp_v2 + 1;
            *(char *)(temp_v5 + 0x44) = (char)*(unsigned int *)(psVar6 + 2);
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 8);
        temp_v1 = countUnlockedSlots();
        FUN_002f01e0(temp_v3 + 0x34,temp_v1);
      }
      else {
        temp_v4 = *(int *)(param_1 + 0x24fc);
        temp_v3 = 0;
        *(unsigned int *)(temp_v4 + 0x34) = 0;
        *(unsigned int *)(temp_v4 + 0x38) = 0;
        *(unsigned int *)(temp_v4 + 0x3c) = 0;
        *(unsigned int *)(temp_v4 + 0x40) = 0;
        do {
          psVar6 = (short *)(param_1 + 0x24ac + temp_v3 * 8);
          temp_v0 = *psVar6;
          if (temp_v0 != 0) {
            temp_v5 = temp_v4 + temp_v2;
            *(short *)(temp_v4 + temp_v2 * 2 + 0x34) = temp_v0;
            temp_v2 = temp_v2 + 1;
            *(char *)(temp_v5 + 0x44) = (char)*(unsigned int *)(psVar6 + 2);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 8);
        temp_v1 = getUnlockedSlotCount(temp_v4);
        FUN_002f01e0(temp_v4 + 0x34,temp_v1);
      }
      if (*(char *)(param_1 + 0x2580) != '\0') {
        FUN_003343f0(0);
        *(unsigned char *)(param_1 + 0x2580) = 0;
      }
      *(unsigned int *)(param_1 + 0x2564) = 5;
      *(unsigned int *)(param_1 + 0x2568) = 0;
      return;
    }
    *(unsigned int *)(param_1 + 0x2564) = 1;
    *(unsigned int *)(param_1 + 0x2568) = 0;
  }
  return;
}

} /* extern "C" */
