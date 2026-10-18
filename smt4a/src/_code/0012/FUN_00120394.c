/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120394` (_code @ 0x120394, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned char sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_4_stack;

extern unsigned char DAT_00559524; /* 0x559524 */
extern unsigned char DAT_00559ef4; /* 0x559ef4 */

extern unsigned int FUN_002e7908(unsigned char **, unsigned int *);
extern int FUN_002ea0e4(unsigned char *);
/* Supplied declaration required: FUN_002fd360. */
/* Supplied declaration required: FUN_00303d3a. */
/* Supplied declaration required: FUN_00304e82. */
/* Supplied declaration required: FUN_00310c3c. */
/* Supplied declaration required: FUN_00310cf2. */


void FUN_00120394(int *param_1,unsigned int param_2,unsigned int param_3,unsigned char *param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5 [3];
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
    temp_v5[0] = 0x80010002;
    temp_v1 = FUN_002e7908(&temp_v3,temp_v5);
    FUN_00310cf2(param_1,temp_v1);
  }
  else {
    temp_v3 = &DAT_00559ef4;
    temp_v4 = 0;
    temp_v2 = FUN_002ea0e4(temp_v6);
    *(unsigned int *)(temp_v2 - 0x10) = 0;
    *(unsigned int *)(temp_v2 - 0xc) = 0;
    *(unsigned int *)(temp_v2 - 8) = 0;
    *(unsigned int *)(temp_v2 - 4) = 0;
    *(unsigned int *)(temp_v2 + 8) = 0;
    *(unsigned char **)(temp_v2 - 0x18) = &DAT_00559524;
    FUN_00310c3c(param_2,&temp_v3);
    if (*(char *)(param_2 + 4) == '\0') {
      (**(romwright_code **)(*param_1 + 0x5c))(param_1,&temp_v3);
      FUN_00303d3a(param_3,0x8001);
    }
    FUN_002fd360(&temp_v3);
    *temp_v7 = 1;
  }
  return;
}
