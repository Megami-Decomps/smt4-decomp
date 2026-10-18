/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001148a8` (_code @ 0x1148a8, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
} param_1_stack;

/* Supplied declaration required: FUN_00114504. */
/* Supplied declaration required: FUN_002ea704. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eb5f4(void);
extern unsigned long long FUN_002ecfe4(int);
/* Supplied declaration required: FUN_002f3490. */
/* Supplied declaration required: FUN_002fa434. */
extern int FUN_002fdb0c(unsigned char *);
/* Supplied declaration required: FUN_00300048. */
extern int FUN_00300064(int);


void FUN_001148a8(int param_1)

{
/* irregular: 6 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  unsigned char temp_v4 [28];
  int temp_v5;
  unsigned char temp_v6 [4];
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v1 = FUN_002eb5f4();
  if (temp_v1 == 0) {
    return;
  }
  temp_v1 = FUN_002ea704();
  if (temp_v1 == 0) {
    return;
  }
  temp_v0 = (char)*(unsigned int *)(param_1 + 0x98);
  if ((temp_v0 < '\0') || (temp_v0 == '\0')) {
    FUN_00300048();
    return;
  }
  if (temp_v0 != '\x01') {
    if (temp_v0 != '\x02') {
      if (temp_v0 != '\x03') {
        FUN_00300048();
        return;
      }
      temp_v1 = FUN_00300064(param_1);
      if (temp_v1 == 0) {
        return;
      }
      temp_v1 = FUN_002eb5f4();
      *(unsigned char *)(*(int *)(temp_v1 + 0xd0) + 0x11a) = 1;
    }
    else {
      temp_v1 = FUN_00300064(param_1);
      if (temp_v1 == 0) {
        return;
      }
      temp_v2 = FUN_002ea704();
      FUN_002fa434(temp_v6,temp_v2);
      temp_v1 = FUN_002fdb0c(temp_v6);
      FUN_002f3490(temp_v6);
      if (temp_v1 != 2) {
        temp_v1 = FUN_002eb5f4();
        *(unsigned char *)(*(int *)(temp_v1 + 0xd0) + 0x11a) = 1;
      }
    }
  }
  else {
    temp_v1 = FUN_00300064(param_1);
    if (temp_v1 == 0) {
      return;
    }
  }
  temp_v1 = FUN_002eb5f4();
  temp_v1 = *(int *)(temp_v1 + 0xe4);
  temp_v3 = FUN_002ecfe4(param_1 + 0x80);
  *(unsigned long long *)(temp_v1 + 0x30) = temp_v3;
  FUN_002eb588(&temp_v7);
  *(unsigned int *)(temp_v1 + 0x2c) = temp_v8;
  *(unsigned int *)(temp_v1 + 0x28) = temp_v7;
  piVar3 = (int *)FUN_002ea704();
  temp_v1 = (**(romwright_code **)(*piVar3 + 0x2c))();
  *(unsigned int *)(*(int *)(temp_v1 + 4) + 0x40) = *(unsigned int *)(param_1 + 0x9c);
  temp_v2 = FUN_002ea704();
  FUN_002fa434(temp_v4,temp_v2);
  temp_v1 = FUN_002fdb0c(temp_v4);
  if ((temp_v1 == 2) && (temp_v5 != 1)) {
    temp_v1 = FUN_002eb5f4();
    *(unsigned char *)(*(int *)(temp_v1 + 0xd0) + 0x11a) = 1;
  }
  FUN_00114504();
  FUN_002f3490(temp_v4);
  return;
}
