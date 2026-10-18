/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041774c` (_code @ 0x41774c, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001641b4. */
extern unsigned int FUN_00180114(unsigned short);
extern int FUN_001801a4(void);
/* Supplied declaration required: FUN_00187010. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_003491e8. */
extern int FUN_003df4a4(unsigned short);
extern int FUN_003e4cb4(void);
/* Supplied declaration required: FUN_003e4e4c. */
extern int FUN_004bca68(unsigned int, unsigned short);
extern unsigned int FUN_004bd068(unsigned int);
/* Supplied declaration required: FUN_004bd6b0. */


unsigned int FUN_0041774c(int param_1)

{
/* irregular: 4 unstructured edge(s); 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  switch(*(unsigned int *)(param_1 + 0xc)) {
  case 0:
    *(unsigned int *)(param_1 + 0x14) = 0;
    *(unsigned int *)(param_1 + 0xc) = 1;
  case 1:
    temp_v3 = 0;
    FUN_001517b4(0,1);
    if (temp_v3 == 0) {
      temp_v3 = 9;
      FUN_001517b4(9,0);
      if ((temp_v3 == 0) || (*(int *)(param_1 + 0x14) < 3)) break;
    }
    FUN_001641b4(0x100020e);
    FUN_003491e8();
    if (*(char *)(param_1 + 0x40) != '\0') {
      if ((-1 < *(int *)(param_1 + 0x3c)) &&
         (temp_v3 = FUN_003df4a4(*(unsigned short *)(param_1 + 0x38)), temp_v3 == 0)) {
        temp_v3 = FUN_001801a4();
        *(unsigned short *)(temp_v3 + *(int *)(param_1 + 0x3c) * 2 + 0x34) =
             *(unsigned short *)(param_1 + 0x38);
        *(unsigned char *)(*(int *)(param_1 + 0x3c) + temp_v3 + 0x44) = 1;
      }
      *(unsigned int *)(param_1 + 0xc) = 5;
    }
    else {
      temp_v2 = FUN_00187010(*(unsigned int *)(param_1 + 0x34) & 0xffff);
      temp_v3 = FUN_004bca68(temp_v2,*(unsigned short *)(param_1 + 0x38));
      if (temp_v3 == 0) {
        temp_v0 = FUN_004bd068(temp_v2);
        FUN_004bd6b0(temp_v2,*(unsigned short *)(param_1 + 0x38),temp_v0);
      }
      temp_v2 = 2;
      *(unsigned int *)(param_1 + 0xc) = temp_v2;
    }
    break;
  case 2:
    temp_v3 = FUN_00187010(*(unsigned int *)(param_1 + 0x34) & 0xffff);
    temp_v1 = FUN_003e4cb4();
    if (temp_v1 != 0) {
      *(unsigned int *)(param_1 + 0xc) = 5;
      break;
    }
    FUN_00333dc8(1);
    temp_v2 = FUN_00180114(*(unsigned short *)(temp_v3 + 0x62));
    FUN_003180c4(0,temp_v2);
    FUN_00275f44(*(unsigned int *)(param_1 + 0x1c),0x13);
    *(unsigned int *)(param_1 + 0xc) = 3;
  case 3:
    temp_v3 = FUN_00224880(*(unsigned int *)(param_1 + 0x1c));
    if (temp_v3 == 2) {
      temp_v3 = FUN_002a4b74();
      if (temp_v3 == 0) {
        FUN_003e4e4c(*(unsigned int *)(param_1 + 0x34) & 0xffff);
        temp_v3 = FUN_00187010(*(unsigned int *)(param_1 + 0x34) & 0xffff);
        temp_v2 = FUN_00180114(*(unsigned short *)(temp_v3 + 0x62));
        FUN_003180c4(0,temp_v2);
        FUN_00275f44(*(unsigned int *)(param_1 + 0x1c),0x14);
        temp_v2 = 4;
        *(unsigned int *)(param_1 + 0xc) = temp_v2;
        break;
      }
      FUN_00333dc8(0);
      *(unsigned int *)(param_1 + 0xc) = 5;
    }
    break;
  case 4:
    temp_v3 = FUN_00224880(*(unsigned int *)(param_1 + 0x1c));
    if (temp_v3 == 2) {
      FUN_00333dc8(0);
      *(unsigned int *)(param_1 + 0xc) = 5;
    }
    break;
  case 5:
    *(unsigned int *)(param_1 + 8) = 6;
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return 0;
}
