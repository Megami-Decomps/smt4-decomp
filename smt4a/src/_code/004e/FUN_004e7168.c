/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e7168` (_code @ 0x4e7168, 0x29c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571220; /* 0x571220 */
extern unsigned int DAT_00571224; /* 0x571224 */
extern unsigned int DAT_00571230; /* 0x571230 */
extern unsigned int DAT_00571234; /* 0x571234 */
extern unsigned int DAT_00571270; /* 0x571270 */
extern unsigned int DAT_00571274; /* 0x571274 */

/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004e626c. */
/* Supplied declaration required: FUN_004fcde0. */
/* Supplied declaration required: FUN_004fd508. */


void FUN_004e7168(int *param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  
  temp_v1 = *param_1;
  FUN_003f0e20(temp_v1,(int)*(short *)(temp_v1 + 0x2356),param_3,param_4,param_4);
  if ((temp_v1 != 0) &&
     (temp_v2 = *param_1,
     (*(unsigned int *)(temp_v2 + 0x45a4) & DAT_00571234) == 0 &&
     (*(unsigned int *)(temp_v2 + 0x45a0) & DAT_00571230) == 0)) {
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x27a);
    if ((int)(unsigned int)*(unsigned short *)(temp_v1 + 0x27a) < (int)*(unsigned int *)(temp_v2 + 0x2368)) {
      temp_v3 = *(unsigned int *)(temp_v2 + 0x2368);
    }
    *(unsigned int *)(temp_v2 + 0x2368) = temp_v3;
  }
  temp_v1 = *param_1;
  temp_v2 = *(int *)(temp_v1 + 0x2358);
  if (temp_v2 != 1) {
    if (temp_v2 != 2) {
      if (temp_v2 == 3) {
        *(unsigned short *)(param_2[10] + 0x1be) = 4;
        return;
      }
    }
    else {
      temp_v3 = DAT_00571270 | *(unsigned int *)(temp_v1 + 0x45a0);
      *(unsigned int *)(temp_v1 + 0x45a4) = DAT_00571274 | *(unsigned int *)(temp_v1 + 0x45a4);
      *(unsigned int *)(temp_v1 + 0x45a0) = temp_v3;
    }
  }
  temp_v1 = *param_1;
  temp_v0 = 0;
  temp_v4 = 0;
  if (*(int *)(temp_v1 + 0x2358) == 1) {
    switch(*(unsigned int *)(temp_v1 + 0x235c)) {
    case 1:
      temp_v0 = 1;
      temp_v4 = 0xc;
      break;
    case 2:
      temp_v0 = 1;
      temp_v4 = 5;
      break;
    case 3:
      temp_v0 = 1;
      temp_v4 = 3;
      break;
    case 4:
      temp_v0 = 1;
      temp_v4 = 0xe;
      break;
    case 7:
      temp_v3 = DAT_00571224 | *(unsigned int *)(temp_v1 + 0x45a4);
      *(unsigned int *)(temp_v1 + 0x45a0) = DAT_00571220 | *(unsigned int *)(temp_v1 + 0x45a0);
      *(unsigned int *)(temp_v1 + 0x45a4) = temp_v3;
      *param_2 = *param_2 | 4;
    }
    temp_v1 = *param_1;
    if ((*(int *)(temp_v1 + 0x2360) == 2) &&
       (FUN_003f0e20(temp_v1,(int)*(short *)(temp_v1 + 0x2356)), temp_v1 != 0)) {
      FUN_004fcde0(0,param_2,temp_v1);
    }
    if (temp_v0) {
      FUN_004fd508(0,param_2,temp_v4,param_2[9],1);
    }
  }
  temp_v1 = 0;
  temp_v2 = 0x32;
  puVar5 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + 0x1020);
  do {
    if (((*puVar5 & DAT_00571148) != 0 || (puVar5[1] & DAT_0057114c) != 0) &&
       ((*puVar5 & DAT_00571178) == 0 && (puVar5[1] & DAT_0057117c) == 0)) {
      temp_v1 = temp_v1 + 1;
    }
    temp_v2 = temp_v2 - 1;
    puVar5 = puVar5 + 0x102;
  } while (temp_v2 != 0);
  if (temp_v1 == 0) {
    *(unsigned int *)(*param_1 + 0xa8) = 10;
  }
  FUN_004e626c(param_1,*(unsigned int *)(*param_1 + 0xa4));
  temp_v1 = 0;
  do {
    param_2[temp_v1 * 4 + 0x279] = 0;
    temp_v2 = *param_1;
    FUN_003f0e20(temp_v2,temp_v1);
    if (temp_v2 != 0) {
      param_2[temp_v1 * 4 + 0x279] = *(unsigned int *)(temp_v2 + 600);
      param_2[temp_v1 * 4 + 0x27a] = *(unsigned int *)(temp_v2 + 0x25c);
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x6d);
  return;
}
