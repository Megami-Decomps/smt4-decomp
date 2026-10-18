/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104428` (_code @ 0x104428, 0xe6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp160; /* 0x160: local_160 */
} param_1_stack;

extern unsigned char LAB_0010451c; /* 0x10451c */

extern unsigned int FUN_002e7908(int *, int *);
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea198. */
/* Supplied declaration required: FUN_002ea214. */
extern unsigned int FUN_002ea3c0(int *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea43c. */
extern unsigned long long FUN_002ea4bc(void);
/* Supplied declaration required: FUN_002ea4d2. */
extern unsigned int FUN_002ea594(int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ea5b8. */


void FUN_00104428(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar5;
  unsigned long long temp_v3;
  int temp_v4 [2];
  int temp_v5;
  int temp_v6 [75];
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned char temp_v9 [16];
  int *piVar4;
  
  piVar4 = temp_v4;
  piVar5 = temp_v4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0xe0));
  if (temp_v0 == 0) {
    FUN_002ea43c(param_1);
    return;
  }
  temp_v3 = FUN_002ea4bc();
  if (*(char *)((int)temp_v3 + 0x30) != '\0') {
    temp_v6[0] = -0x7ffefff5;
  }
  else {
    temp_v1 = FUN_002ea594(param_1 + 0x118,(int)((unsigned long long)temp_v3 >> 0x20),0,0);
    if (temp_v1 == 0) {
      temp_v0 = param_1;
      FUN_002ea4d2();
      if (temp_v0 != 0) {
        return;
      }
      temp_v6[0] = -0x7ffefff5;
      piVar5 = temp_v6;
      temp_v2 = FUN_002e7908(piVar4,piVar5);
      FUN_002ea214(param_1,temp_v2);
      return;
    }
    FUN_002ea5b8();
    if (-1 < (int)temp_v1) {
      temp_v7 = 0;
      temp_v8 = 0;
      FUN_002ea198(&temp_v5);
      *(int *)(*(int *)(param_1 + 0xe8) + 300) = temp_v6[0];
      *(int *)(*(int *)(param_1 + 0xe8) + 0x128) = temp_v5;
      if ((temp_v6[0] == 200) && (temp_v5 == 1)) {
        if (*(int *)(param_1 + 0xf0) == 0) {
          temp_v2 = 0x10406d;
        }
        else {
          temp_v2 = 0x104351;
        }
        temp_v2 = FUN_002ea3c0(temp_v4,temp_v2,0,&LAB_0010451c);
        FUN_002ea3d0(param_1,temp_v2);
        return;
      }
      *(float *)&temp_v4[0] = -0x7f97ffff;
      piVar4 = (int *)temp_v9;
      temp_v2 = FUN_002e7908(piVar4,piVar5);
      FUN_002ea214(param_1,temp_v2);
      return;
    }
    if ((temp_v1 & 0x3ff) != 0x104) {
      if ((temp_v1 & 0x3ff) == 0x105) {
        temp_v6[0] = -0x7f97fffb;
      }
      else {
        temp_v6[0] = -0x7f97fffd;
      }
    }
    else {
      temp_v6[0] = -0x7f97fffc;
    }
  }
  piVar5 = temp_v6;
  temp_v2 = FUN_002e7908(piVar4,piVar5);
  FUN_002ea214(param_1,temp_v2);
  return;
}
