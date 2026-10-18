/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245678` (_code @ 0x245678, 0x204 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spA0; /* 0xa0: local_a0 */
    unsigned int sp124; /* 0x124: local_124 */
} param_1_stack;

extern int DAT_00435d18; /* 0x435d18 */

extern int FUN_00246874(void);
/* Supplied declaration required: FUN_00246908. */
/* Supplied declaration required: FUN_00249fac. */
extern unsigned int FUN_0024a80c(int);
extern int FUN_0024a964(int);
extern int FUN_00252520(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c4b30. */


unsigned int FUN_00245678(int param_1)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  char *pcVar7;
  int *piVar8;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [4];
  int temp_v9;
  unsigned char temp_v10 [8];
  unsigned char temp_v11;
  
  temp_v5 = DAT_00435d18;
  piVar8 = (int *)(param_1 + 0x2f98);
  temp_v1 = *piVar8;
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        return 1;
      }
      temp_v5 = FUN_00246874();
      if (temp_v5 != 0) {
        *piVar8 = 3;
        return 1;
      }
      return 0;
    }
  }
  else {
    temp_v1 = 0;
    do {
      temp_v3 = temp_v5 + temp_v1 * 0x8c;
      *(unsigned char *)(temp_v3 + 0x2cdc) = 0xff;
      FUN_002c4b30(temp_v3 + 0x2ce4,0x80);
      if (*(int *)(temp_v3 + 0x2ce0) != 0) {
        FUN_002c4360();
        *(unsigned int *)(temp_v3 + 0x2ce0) = 0;
      }
      *(unsigned char *)(temp_v3 + 0x2d64) = 0;
      FUN_002c4b30(temp_v8,0x80);
      FUN_002c4b30(temp_v10,0x80);
      FUN_002be7fc(temp_v10,"battle/effect/%s.eft","Move_out_c" + temp_v1 * 0x20);
      FUN_002bf86c(temp_v8,temp_v10);
      temp_v2 = FUN_00252520(temp_v8,0x2f);
      FUN_002bf86c(temp_v3 + 0x2ce4,temp_v2 + 1);
      temp_v2 = FUN_0024a964(temp_v3 + 0x2ce4);
      if (temp_v2 == 0xff) {
        FUN_00297704(temp_v8,temp_v3 + 0x2ce0,0);
        *(unsigned char *)(temp_v3 + 0x2d64) = *(unsigned char *)(temp_v3 + 0x2d64) | 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 5);
    *piVar8 = 1;
  }
  temp_v5 = DAT_00435d18;
  temp_v1 = 0;
  do {
    FUN_002bcf58(temp_v8,temp_v5 + temp_v1 * 0x8c + 0x2cdc,0x8c);
    if (((temp_v11 & 1) != 0) && (temp_v9 == 0)) {
      return 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  temp_v1 = 0;
  do {
    temp_v3 = temp_v5 + temp_v1 * 0x8c;
    pcVar7 = *(char **)(temp_v3 + 0x2ce0);
    temp_v0 = *pcVar7;
    temp_v6 = temp_v0 == 'V';
    if (temp_v6) {
      temp_v0 = pcVar7[1];
    }
    temp_v7 = temp_v6 && temp_v0 == 'E';
    if (temp_v6 && temp_v0 == 'E') {
      temp_v7 = pcVar7[2] == 'R';
    }
    if (temp_v7) {
      temp_v4 = FUN_0024a80c(temp_v3 + 0x2ce4);
      *(char *)(temp_v3 + 0x2cdc) = (char)temp_v4;
      FUN_00249fac(temp_v4,pcVar7);
      *(char *)(temp_v3 + 0x2cdc) = (char)temp_v4;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 5);
  FUN_00246908();
  *piVar8 = 2;
  temp_v5 = FUN_00246874();
  if (temp_v5 != 0) {
    *piVar8 = 3;
    return 1;
  }
  return 0;
}
