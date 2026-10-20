#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588c40; /* 0x588c40 */

extern int FUN_001801a4(void);
extern int FUN_004ccbf0(int);


void FUN_00370fe8(int param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588c40 + 0x4));
  temp_v1 = FUN_001801a4();
  temp_v4 = 0;
  temp_v3 = 0;
  if (temp_v3 < param_1) {
    do {
      temp_v2 = FUN_004ccbf0((unsigned int)*(unsigned short *)(temp_v1 + 0x62) + temp_v3);
      temp_v3 = temp_v3 + 1;
      temp_v4 = temp_v4 + temp_v2;
    } while (temp_v3 < param_1);
  }
  temp_v4 = temp_v4 - *(int *)(temp_v1 + 0x30);
  if (temp_v4 < 0) {
    temp_v4 = 0;
  }
  *(int *)(temp_v0 + 0x7870) = temp_v4 + *(int *)(temp_v0 + 0x7870);
  return;
}

} /* extern "C" */
