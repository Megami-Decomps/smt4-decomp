/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145aa8` (_code @ 0x145aa8, 0x1c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char DAT_004def18; /* 0x4def18 */
extern unsigned char DAT_004def28; /* 0x4def28 */


void FUN_00145aa8(int *param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v6 = 0;
  while ((*(int *)(temp_v6 * 4 + 0x4daee8) == 0 || (*(unsigned short *)(&DAT_004def18 + temp_v6 * 2) != param_2)
         )) {
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 8) {
      return;
    }
  }
  temp_v3 = *(int *)(&DAT_004def28 + temp_v6 * 4);
  if (temp_v3 == 1) {
    temp_v3 = param_1[2];
    param_1[2] = temp_v3 + 1;
    param_1[4] = param_1[4] + 1;
                    /* WARNING: Jumptable at 0x00145ba4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(temp_v6 * 4 + 0x4daee8))(*(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20));
    return;
  }
  if (temp_v3 == 2) {
    temp_v3 = param_1[2];
    temp_v4 = temp_v3 + 1;
    param_1[2] = temp_v4;
    temp_v5 = param_1[4];
    temp_v3 = temp_v3 + 2;
    param_1[4] = temp_v5 + 1;
    temp_v0 = *(unsigned short *)(*param_1 + temp_v4 * 0x20);
    param_1[2] = temp_v3;
    param_1[4] = temp_v5 + 2;
                    /* WARNING: Jumptable at 0x00145bf0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(temp_v6 * 4 + 0x4daee8))(temp_v0,*(unsigned short *)(*param_1 + temp_v3 * 0x20));
    return;
  }
  if (temp_v3 != 3) {
    if (temp_v3 != 4) {
      return;
    }
    temp_v3 = param_1[2];
    param_1[2] = temp_v3 + 1;
    temp_v4 = param_1[4];
    param_1[4] = temp_v4 + 1;
    temp_v5 = *param_1;
    temp_v0 = *(unsigned short *)(temp_v5 + (temp_v3 + 1) * 0x20);
    param_1[2] = temp_v3 + 2;
    param_1[4] = temp_v4 + 2;
    temp_v1 = *(unsigned short *)(temp_v5 + (temp_v3 + 2) * 0x20);
    param_1[2] = temp_v3 + 3;
    param_1[4] = temp_v4 + 3;
    temp_v2 = *(unsigned short *)(temp_v5 + (temp_v3 + 3) * 0x20);
    param_1[2] = temp_v3 + 4;
    param_1[4] = temp_v4 + 4;
                    /* WARNING: Jumptable at 0x00145b74 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(temp_v6 * 4 + 0x4daee8))
              (temp_v0,temp_v1,temp_v2,*(unsigned short *)(temp_v5 + (temp_v3 + 4) * 0x20));
    return;
  }
  temp_v3 = param_1[2];
  param_1[2] = temp_v3 + 1;
  temp_v4 = param_1[4];
  param_1[4] = temp_v4 + 1;
  temp_v5 = *param_1;
  temp_v0 = *(unsigned short *)(temp_v5 + (temp_v3 + 1) * 0x20);
  param_1[2] = temp_v3 + 2;
  param_1[4] = temp_v4 + 2;
  temp_v1 = *(unsigned short *)(temp_v5 + (temp_v3 + 2) * 0x20);
  param_1[2] = temp_v3 + 3;
  param_1[4] = temp_v4 + 3;
                    /* WARNING: Jumptable at 0x00145c54 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(romwright_code **)(temp_v6 * 4 + 0x4daee8))(temp_v0,temp_v1,*(unsigned short *)(temp_v5 + (temp_v3 + 3) * 0x20));
  return;
}

} /* extern "C" */
