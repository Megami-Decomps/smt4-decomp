/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00119b68` (_code @ 0x119b68, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(int *, unsigned int);
int FUN_002ea41e(...);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_00119be4; /* 0x119be4 */

extern int *FUN_002e7908(unsigned char *, unsigned int *);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
/* Supplied declaration required: FUN_002ea41e. */


void FUN_00119b68(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  romwright_code *pcVar3;
  int *piVar4;
  int temp_v1 [3];
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned char temp_v4 [16];
  
  piVar4 = param_1 + 0x26;
  piVar1 = temp_v1;
  if ((char)param_1[0x2a] != '\x02') {
    FUN_002ea41e(temp_v1,piVar4);
    temp_v2 = 0x80030064;
    piVar1 = (int *)FUN_002e7908(temp_v3,(unsigned int *)&temp_v2);
    if ((temp_v1[0] == *piVar1) && ((char)param_1[0x5d] == '\0')) {
      *(unsigned char *)(param_1 + 0x5d) = 1;
      temp_v0 = FUN_002ea3c0(temp_v4,0x119b05,0,&LAB_00119be4);
      FUN_002ea3d0(param_1,temp_v0);
      return;
    }
    FUN_002ea41e(temp_v4,piVar4);
    piVar1 = (int *)temp_v4;
    pcVar3 = *(romwright_code **)(*param_1 + 0x34);
  }
  else {
    FUN_002ea41e(temp_v1,piVar4);
    pcVar3 = *(romwright_code **)(*param_1 + 0x34);
  }
  (*pcVar3)(param_1,piVar1);
  return;
}

} /* extern "C" */
