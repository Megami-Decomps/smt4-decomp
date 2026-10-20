/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348850` (_code @ 0x348850, 0x2f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_00180118(unsigned int);
int FUN_001ab854(int);
int FUN_00237898(...);
int FUN_00275bb0(...);
int FUN_00275fe4(...);
int FUN_003180c4(int, unsigned int);
int FUN_004a0bac(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int FUN_0015687c(void);
/* Supplied declaration required: FUN_001695a0. */
extern int FUN_0016a0f0(unsigned int);
/* Supplied declaration required: FUN_00180118. */
/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
extern int FUN_001b347c(void);
/* Supplied declaration required: FUN_00237898. */
/* Supplied declaration required: FUN_00275bb0. */
/* Supplied declaration required: FUN_00275fe4. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_004a0bac. */


int FUN_00348850(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  if (param_1 != 0) {
    if ((param_1 == 1) && (temp_v6 = FUN_002deb84(), temp_v6 == 0)) {
      FUN_004a0bac(0,1);
      FUN_00275fe4(0);
      FUN_00275fe4(1,0);
      FUN_00275fe4(2,0);
    }
    return 1;
  }
  temp_v6 = FUN_002deb84();
  if (temp_v6 == 0) {
    FUN_004a0bac(0,1);
    FUN_00275fe4(0);
    FUN_00275fe4(1,0);
    FUN_00275fe4(2,0);
  }
  temp_v0 = FUN_0016a0f0(0x1e);
  temp_v6 = FUN_00275bb0(0);
  if (temp_v6 != 0) {
    if (temp_v6 != 1) {
      if (temp_v6 != 2) {
        if (temp_v6 != 3) {
          return 0;
        }
      }
      else {
        temp_v6 = FUN_001b347c();
        temp_v3 = FUN_001ab888();
        while (temp_v2 = FUN_00275bb0(2), temp_v2 < temp_v6) {
          temp_v2 = FUN_00275bb0(2);
          FUN_001ab854((int)*(char *)(temp_v2 + temp_v3 + 0x1c88));
          temp_v2 = FUN_00275bb0(2);
          FUN_00275fe4(2,temp_v2 + 1);
        }
        temp_v3 = FUN_00275bb0(2);
        if (temp_v6 <= temp_v3) {
          return 1;
        }
      }
      temp_v6 = FUN_001ab888();
      temp_v3 = FUN_00275bb0(2);
      temp_v6 = FUN_001ab854((int)*(char *)(temp_v3 + temp_v6 + 0x1c88));
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v6 + 0x62);
      FUN_00180118(temp_v4);
      FUN_003180c4(0x28,temp_v4);
      temp_v5 = FUN_00275bb0(1);
      FUN_00237898(temp_v0,0xd,temp_v5,6,0);
      temp_v6 = FUN_00275bb0(1);
      FUN_00275fe4(1,temp_v6 + 1);
      if (temp_v0 == 1) {
        FUN_00275fe4(0,2);
        FUN_00275fe4(1,0);
        temp_v6 = FUN_00275bb0(2);
        FUN_00275fe4(2,temp_v6 + 1);
        temp_v0 = 0;
      }
    }
    else {
      temp_v5 = FUN_0015687c();
      FUN_003180c4(0x28,temp_v5);
      temp_v5 = FUN_00275bb0(1);
      FUN_00237898(temp_v0,0xd,temp_v5,6,0);
      temp_v6 = FUN_00275bb0(1);
      FUN_00275fe4(1,temp_v6 + 1);
    }
  }
  else {
    temp_v5 = 0xf;
    temp_v6 = FUN_001b347c();
    if (temp_v6 == 0) {
      temp_v5 = 0xe;
    }
    FUN_001695a0();
    temp_v1 = FUN_00275bb0(1);
    FUN_00237898(temp_v0,temp_v5,temp_v1,6,0);
    temp_v6 = FUN_00275bb0(1);
    FUN_00275fe4(1,temp_v6 + 1);
  }
  return temp_v0;
}

} /* extern "C" */
