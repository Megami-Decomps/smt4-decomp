/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f5a78` (_code @ 0x4f5a78, 0x200 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int asdMemFree(...);
int FUN_002804b0(...);
int libc_strcpy(...);
int sysMemClear(...);
int FUN_003478dc(...);
int FUN_003afd30(...);
int rt_memcpy_w(...);

/* stack frame of param_1: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spA0; /* 0xa0: local_a0 */
    unsigned int sp124; /* 0x124: local_124 */
} param_1_stack;

extern int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: textFormatBuffer. */
extern int FUN_00100d60(unsigned char *, unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: libc_strcpy. */
extern unsigned int FUN_002e4c2c(int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_003478dc. */
extern int findRecordByKey(int);
/* Supplied declaration required: FUN_003afd30. */
extern int FUN_003c5d8c(void);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_004f5a78(int param_1)

{
/* irregular: 8 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  char *pcVar7;
  unsigned char temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [4];
  int temp_v9;
  unsigned char temp_v10 [8];
  unsigned char temp_v11;
  
  temp_v5 = DAT_00573808;
  temp_v1 = *(int *)(param_1 + 0x3050);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if (temp_v1 != 2) {
        return 1;
      }
      temp_v5 = FUN_003c5d8c();
      if (temp_v5 != 0) {
        *(unsigned int *)(param_1 + 0x3050) = 3;
        return 1;
      }
      return 0;
    }
  }
  else {
    temp_v1 = 0;
    do {
      temp_v3 = temp_v5 + temp_v1 * 0x8c;
      *(unsigned char *)(temp_v3 + 0x2e20) = 0xff;
      sysMemClear(temp_v3 + 0x2e28,0x80);
      if (*(int *)(temp_v3 + 0x2e24) != 0) {
        asdMemFree();
        *(unsigned int *)(temp_v3 + 0x2e24) = 0;
      }
      *(unsigned char *)(temp_v3 + 0x2ea8) = 0;
      sysMemClear(temp_v8,0x80);
      sysMemClear(temp_v10,0x80);
      textFormatBuffer(temp_v10,"battle/effect/%s.eft","Move_out_c" + temp_v1 * 0x20);
      libc_strcpy(temp_v8,temp_v10);
      temp_v2 = FUN_00100d60(temp_v8,0x2f);
      libc_strcpy(temp_v3 + 0x2e28,temp_v2 + 1);
      temp_v2 = findRecordByKey(temp_v3 + 0x2e28);
      if (temp_v2 == 0xff) {
        FUN_002804b0(temp_v8,temp_v3 + 0x2e24,1);
        *(unsigned char *)(temp_v3 + 0x2ea8) = *(unsigned char *)(temp_v3 + 0x2ea8) | 1;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    *(unsigned int *)(param_1 + 0x3050) = 1;
  }
  temp_v5 = DAT_00573808;
  temp_v1 = 0;
  do {
    rt_memcpy_w(temp_v8,temp_v5 + temp_v1 * 0x8c + 0x2e20,0x8c);
    if (((temp_v11 & 1) != 0) && (temp_v9 == 0)) {
      return 0;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    temp_v3 = temp_v5 + temp_v1 * 0x8c;
    pcVar7 = *(char **)(temp_v3 + 0x2e24);
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
      temp_v4 = FUN_002e4c2c(temp_v3 + 0x2e28);
      *(char *)(temp_v3 + 0x2e20) = (char)temp_v4;
      FUN_003478dc(temp_v4,pcVar7);
      *(char *)(temp_v3 + 0x2e20) = (char)temp_v4;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  FUN_003afd30();
  *(unsigned int *)(param_1 + 0x3050) = 2;
  temp_v5 = FUN_003c5d8c();
  if (temp_v5 != 0) {
    *(unsigned int *)(param_1 + 0x3050) = 3;
    return 1;
  }
  return 0;
}

} /* extern "C" */
