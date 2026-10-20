/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019dcbc` (_code @ 0x19dcbc, 0x1d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned char DAT_0063af98; /* 0x63af98 */
extern unsigned char DAT_0063afa8; /* 0x63afa8 */


void FUN_0019dcbc(int *param_1,unsigned int param_2)

{
/* irregular: 10 native warning(s); review required */
  unsigned short temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v6 = 0;
  while ((*(int *)(temp_v6 * 4 + 0x636f68) == 0 || (*(unsigned short *)(&DAT_0063af98 + temp_v6 * 2) != param_2)
         )) {
    temp_v6 = temp_v6 + 1;
    if (temp_v6 >= 8) {
      return;
    }
  }
  switch(*(unsigned int *)(&DAT_0063afa8 + temp_v6 * 4)) {
  case 0:
                    /* WARNING: Jumptable at 0x0019dd18 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(temp_v6 * 4 + 0x636f68))();
    return;
  case 1:
    temp_v3 = param_1[2];
    param_1[2] = temp_v3 + 1;
    param_1[4] = param_1[4] + 1;
                    /* WARNING: Jumptable at 0x0019dd48 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(temp_v6 * 4 + 0x636f68))(*(unsigned short *)(*param_1 + (temp_v3 + 1) * 0x20));
    return;
  case 2:
    temp_v3 = param_1[2];
    temp_v4 = temp_v3 + 1;
    param_1[2] = temp_v4;
    temp_v5 = param_1[4];
    temp_v3 = temp_v3 + 2;
    param_1[4] = temp_v5 + 1;
    temp_v0 = *(unsigned short *)(*param_1 + temp_v4 * 0x20);
    param_1[2] = temp_v3;
    param_1[4] = temp_v5 + 2;
                    /* WARNING: Jumptable at 0x0019dd94 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(temp_v6 * 4 + 0x636f68))(temp_v0,*(unsigned short *)(*param_1 + temp_v3 * 0x20));
    return;
  case 3:
    temp_v3 = param_1[2];
    param_1[2] = temp_v3 + 1;
    temp_v4 = param_1[4];
    param_1[4] = temp_v4 + 1;
    temp_v5 = *param_1;
    temp_v0 = *(unsigned short *)(temp_v5 + (temp_v3 + 1) * 0x20);
    param_1[4] = temp_v4 + 2;
    param_1[2] = temp_v3 + 2;
    temp_v1 = *(unsigned short *)(temp_v5 + (temp_v3 + 2) * 0x20);
    param_1[2] = temp_v3 + 3;
    param_1[4] = temp_v4 + 3;
                    /* WARNING: Jumptable at 0x0019ddf8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(temp_v6 * 4 + 0x636f68))(temp_v0,temp_v1,*(unsigned short *)(temp_v5 + (temp_v3 + 3) * 0x20));
    return;
  case 4:
    temp_v3 = param_1[2];
    param_1[2] = temp_v3 + 1;
    temp_v4 = param_1[4];
    param_1[4] = temp_v4 + 1;
    temp_v5 = *param_1;
    temp_v0 = *(unsigned short *)(temp_v5 + (temp_v3 + 1) * 0x20);
    param_1[4] = temp_v4 + 2;
    param_1[2] = temp_v3 + 2;
    temp_v1 = *(unsigned short *)(temp_v5 + (temp_v3 + 2) * 0x20);
    param_1[4] = temp_v4 + 3;
    param_1[2] = temp_v3 + 3;
    temp_v2 = *(unsigned short *)(temp_v5 + (temp_v3 + 3) * 0x20);
    param_1[2] = temp_v3 + 4;
    param_1[4] = temp_v4 + 4;
                    /* WARNING: Jumptable at 0x0019de74 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(temp_v6 * 4 + 0x636f68))
              (temp_v0,temp_v1,temp_v2,*(unsigned short *)(temp_v5 + (temp_v3 + 4) * 0x20));
    return;
  default:
    return;
  }
}

} /* extern "C" */
