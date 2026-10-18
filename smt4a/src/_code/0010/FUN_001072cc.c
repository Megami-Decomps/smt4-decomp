/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001072cc` (_code @ 0x1072cc, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp40; /* 0x40: local_40 */
} param_1_stack;

extern signed char DAT_0059497d; /* 0x59497d */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_002ea704(void);
extern unsigned long long FUN_002eab1c(unsigned char *, int *);
/* Supplied declaration required: FUN_002eb164. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002ef01c(int);
/* Supplied declaration required: FUN_002ef268. */
/* Supplied declaration required: FUN_002ef33c. */
/* Supplied declaration required: FUN_002ef34c. */
/* Supplied declaration required: FUN_002ef584. */


void FUN_001072cc(int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  unsigned long long temp_v4;
  unsigned char temp_v5 [4];
  unsigned short temp_v6;
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [8];
  unsigned char temp_v9 [4];
  unsigned short temp_v10;
  unsigned char temp_v11 [12];
  
  FUN_002eb588(temp_v7);
  temp_v1 = param_1[0x30];
  if (temp_v1 == 0) {
    temp_v1 = FUN_002ea704();
    if (*(char *)(temp_v1 + 0x10e) != '\0') {
      (**(romwright_code **)(*param_1 + 0x88))(param_1,3,1);
      return;
    }
    temp_v0 = (**(romwright_code **)(*param_1 + 0x48))(param_1);
    temp_v4 = FUN_002eab1c(temp_v7,param_1 + 0x38);
    temp_v1 = (int)((unsigned long long)temp_v4 >> 0x20);
    temp_v3 = temp_v0 < (unsigned int)temp_v4;
    if ((int)(-(unsigned int)temp_v3 - temp_v1) < 0 == (SBORROW4(0,temp_v1) != SBORROW4(-temp_v1,(unsigned int)temp_v3))) {
      temp_v1 = FUN_002ef01c(param_1[1]);
      temp_v0 = (**(romwright_code **)(*param_1 + 0x44))(param_1);
      temp_v4 = FUN_002eab1c(temp_v7,param_1 + 0x36);
      temp_v2 = (int)((unsigned long long)temp_v4 >> 0x20);
      temp_v3 = temp_v0 < (unsigned int)temp_v4;
      if (((int)(-(unsigned int)temp_v3 - temp_v2) < 0 != (SBORROW4(0,temp_v2) != SBORROW4(-temp_v2,(unsigned int)temp_v3)))
         && (*(char *)(temp_v1 + 0x9d) != '\0')) {
        temp_v1 = param_1[0x2a];
        FUN_002eb164(temp_v8,temp_v1);
        FUN_002ef33c(temp_v5,temp_v8,1);
        *(unsigned short *)(temp_v1 + 0x44) = temp_v6;
        *(unsigned char *)(param_1[0x2a] + 0x89) = 0;
        temp_v1 = (**(romwright_code **)(*param_1 + 0x44))(param_1);
        if ((temp_v1 != 0) && (temp_v1 = (**(romwright_code **)(*param_1 + 0x44))(param_1), temp_v1 != -1)) {
          param_1[0xa9] = param_1[0xa9] + 1;
          FUN_002eb164(temp_v9,param_1[0x2a]);
          param_1[0xcd] = (unsigned int)temp_v10;
          FUN_002ef34c(temp_v11,param_1,param_1[0x2a]);
        }
      }
      FUN_002ef584(param_1[1] + 0x14,param_1[0x2a]);
      return;
    }
    temp_v0 = (**(romwright_code **)(*param_1 + 0x2c))(param_1);
    if (((temp_v0 & (int)DAT_0059497d) != 0) &&
       (temp_v1 = (**(romwright_code **)(**(int **)(param_1[1] + 8) + 0x10))(*(int **)(param_1[1] + 8),param_1),
       temp_v1 != 0)) {
      return;
    }
    *(unsigned char *)((int)param_1 + 0x14a) = 0xb;
    temp_v1 = 2;
  }
  FUN_002ef268(param_1,temp_v1);
  return;
}
