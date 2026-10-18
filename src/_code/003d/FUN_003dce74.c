/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dce74` (_code @ 0x3dce74, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_STORAGE_s__B_B_B_B_B_B_00435d00_25_1_DEFINED
#define ROMWRIGHT_STORAGE_s__B_B_B_B_B_B_00435d00_25_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 {
    char whole[25];
    unsigned char u1[25];
    signed char s1[25];
};
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_size_check[(sizeof(union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1) == 25) ? 1 : -1];
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_u1_width_check[(sizeof(((union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__B_B_B_B_B_B_00435d00_25_1_s1_width_check[(sizeof(((union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__B_B_B_B_B_B_00435d00_25_1 s__B_B_B_B_B_B_00435d00; /* 0x435d00 */

extern int FUN_002277fc(int);
extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_002b45f8(int, unsigned int, unsigned int);
extern unsigned int FUN_002c3290(unsigned int);


int FUN_003dce74(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  
  FUN_00293c98();
  temp_v0 = FUN_002934d4();
  if (temp_v0 != 0) {
    temp_v0 = -1;
  }
  else {
    piVar5 = (int *)(param_1 + 0x1cfc);
    temp_v0 = 0;
    if (*piVar5 != 0) {
      temp_v2 = 0;
      do {
        temp_v3 = *piVar5 + temp_v2 * 0x16 + 0x108;
        if (temp_v3 != 0) {
          temp_v1 = FUN_002c3290((*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]));
          temp_v3 = FUN_002b45f8(temp_v3,(*(unsigned int *)&s__B_B_B_B_B_B_00435d00.u1[0]),temp_v1);
          if (temp_v3 == 0) {
            temp_v0 = *piVar5 + temp_v2 * 0x16 + 0x108;
            if (temp_v0 == 0) {
              temp_v0 = FUN_002277fc(param_1);
              return temp_v0;
            }
            temp_v0 = (int)*(short *)(temp_v0 + 0x10);
            break;
          }
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
      if (temp_v0 != 0) {
        return temp_v0;
      }
    }
    temp_v0 = FUN_002277fc(param_1);
  }
  return temp_v0;
}
