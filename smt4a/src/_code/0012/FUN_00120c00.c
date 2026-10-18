/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120c00` (_code @ 0x120c00, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned char sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned char DAT_0055a55c; /* 0x55a55c */
extern unsigned char DAT_0055ac60; /* 0x55ac60 */

/* Supplied declaration required: FUN_0011eee2. */
/* Supplied declaration required: FUN_0011ef68. */
extern unsigned int FUN_002e7908(unsigned char **, unsigned int *);
extern int FUN_002fafc4(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00303d3a. */
/* Supplied declaration required: FUN_00304e82. */
/* Supplied declaration required: FUN_00310cf2. */


void FUN_00120c00(int *param_1,unsigned int param_2,unsigned int param_3,unsigned char *param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned char temp_v6 [12];
  int *piStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned char *temp_v7;
  
  temp_v0 = param_2;
  piStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  temp_v7 = param_4;
  FUN_00304e82();
  if ((temp_v0 & 0xffff) != 1) {
    temp_v5 = 0x80010002;
    temp_v1 = FUN_002e7908(&temp_v3,(unsigned int *)&temp_v5);
    FUN_00310cf2(param_1,temp_v1);
  }
  else {
    temp_v3 = &DAT_0055ac60;
    temp_v4 = 0;
    temp_v2 = FUN_002fafc4(temp_v6,0);
    *(unsigned int *)(temp_v2 - 8) = 0;
    *(unsigned char **)(temp_v2 - 0x10) = &DAT_0055a55c;
    FUN_0011eee2(param_2,&temp_v3);
    if (*(char *)(param_2 + 4) == '\0') {
      (**(romwright_code **)(*param_1 + 0x5c))(param_1,&temp_v3);
      FUN_00303d3a(param_3,0x8001);
    }
    FUN_0011ef68(&temp_v3);
    *temp_v7 = 1;
  }
  return;
}
