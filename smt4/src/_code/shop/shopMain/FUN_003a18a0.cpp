/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a18a0` (_code @ 0x3a18a0, 0x464 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022fa2c(...);
int FUN_002328b4(void);

int FUN_0022f834(...);
int FUN_0022faf8(void);
int FUN_0022fb64(int);
int FUN_0022fbc0(int);
int FUN_002302d8(int, int);
int FUN_00230558(int);
int FUN_00232848(void);
int FUN_00233240(int, int);
int FUN_002992e0(int);
int FUN_002996d8(int);
int FUN_00299d84(...);
int FUN_0029a014(unsigned int, int);
int FUN_0029ca58(void);
int FUN_002a0428(int, int);
int asdMdlManagerDestroy(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0044e010; /* 0x44e010 */
extern unsigned int DAT_0044e014; /* 0x44e014 */
extern unsigned int DAT_0044e018; /* 0x44e018 */
extern unsigned int DAT_0044e01c; /* 0x44e01c */

/* Supplied declaration required: FUN_0022f834. */
/* Supplied declaration required: FUN_0022fa2c. */
/* Supplied declaration required: FUN_0022faf8. */
extern int FUN_0022fb04(void);
extern int FUN_0022fb34(void);
/* Supplied declaration required: FUN_0022fb64. */
/* Supplied declaration required: FUN_0022fbc0. */
/* Supplied declaration required: FUN_002302d8. */
/* Supplied declaration required: FUN_00230558. */
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
/* Supplied declaration required: FUN_00233240. */
extern int FUN_00256510(void);
extern int FUN_002762e0(void);
/* Supplied declaration required: FUN_002992e0. */
/* Supplied declaration required: FUN_002996d8. */
/* Supplied declaration required: FUN_00299d84. */
extern int FUN_00299fc0(void);
/* Supplied declaration required: FUN_0029a014. */
/* Supplied declaration required: FUN_0029ca58. */
extern int FUN_0029d65c(int);
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: asdMdlManagerDestroy. */
extern int FUN_002adee0(void);
extern int FUN_002c09d0(unsigned int);


void FUN_003a18a0(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(param_1 + 0x15d48);
  if (*(int *)(param_1 + 0x860) != 7) {
    temp_v0 = FUN_00299fc0();
    if (temp_v0 == 0) {
      return;
    }
    if (*piVar3 != 0) {
      temp_v0 = FUN_002adee0();
      if (temp_v0 == 0) {
        return;
      }
      if (*(int *)(*(int *)(*piVar3 + 8) + 0xc) < 0) {
        FUN_002a0428(*piVar3,1);
        FUN_0029a014(*(unsigned int *)(*piVar3 + 8),0);
      }
    }
    if (*(int *)(param_1 + 0x860) != 3) {
      if (*(int *)(param_1 + 0x860) == 5) {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 0;
      }
      FUN_00299d84(temp_v1);
    }
    else {
      FUN_00299d84(1);
    }
  }
  FUN_0022fbc0(param_1);
  FUN_0022fb64(param_1);
  temp_v0 = FUN_0022fb34();
  if ((temp_v0 == 0) && (temp_v0 = FUN_0029d65c((int)*(short *)(param_1 + 0x15d4c)), temp_v0 != 6)) {
    temp_v0 = FUN_0022fb04();
    if (((temp_v0 != 0) || (temp_v0 = FUN_0029d65c((int)*(short *)(param_1 + 0x15d4e)), temp_v0 == 6)) &&
       (*(int *)(param_1 + 0x860) != 7)) {
      if (*(int *)(param_1 + 0x860) == 3) {
        FUN_002992e0(0);
      }
      if (*(int *)(param_1 + 0x860) == 4) {
        FUN_002992e0(1);
      }
      if (*(int *)(param_1 + 0x860) == 5) {
        FUN_002992e0(2);
      }
      FUN_002996d8(0);
      *(unsigned char *)(param_1 + 0x1e) = 0;
      if (((*(int *)(param_1 + 0x860) != 0) ||
          (((temp_v1 = DAT_0044e014, *(char *)(param_1 + 0x14) == '\0' &&
            (*(int *)(param_1 + 0x18) != 8)) &&
           (temp_v0 = FUN_002c09d0(0x410), temp_v1 = DAT_0044e014, temp_v0 != 0)))) &&
         ((*(int *)(param_1 + 0x860) != 3 ||
          (((temp_v1 = DAT_0044e01c, *(char *)(param_1 + 0x14) == '\0' &&
            (*(int *)(param_1 + 0x18) != 8)) &&
           (temp_v0 = FUN_002c09d0(0x410), temp_v1 = DAT_0044e01c, temp_v0 != 0)))))) {
        *(unsigned int *)(param_1 + 0x860) = *(unsigned int *)(*(int *)(param_1 + 0x860) * 8 + 0x44dfd4)
        ;
      }
      else {
        *(unsigned int *)(param_1 + 0x860) = temp_v1;
      }
      FUN_0022faf8();
      FUN_002302d8(param_1,1);
      if (*(int *)(param_1 + 0x860) != 3) {
        if (*(int *)(param_1 + 0x860) == 5) {
          temp_v1 = 2;
        }
        else {
          temp_v1 = 0;
        }
      }
      else {
        temp_v1 = 1;
      }
      FUN_00299d84(temp_v1);
    }
  }
  else if (*(int *)(param_1 + 0x860) != 7) {
    if (*(int *)(param_1 + 0x860) == 3) {
      FUN_002992e0(0);
    }
    if (*(int *)(param_1 + 0x860) == 4) {
      FUN_002992e0(1);
    }
    if (*(int *)(param_1 + 0x860) == 5) {
      FUN_002992e0(2);
    }
    FUN_002996d8(0);
    *(unsigned char *)(param_1 + 0x1e) = 0;
    if (((*(int *)(param_1 + 0x860) != 0) ||
        (((temp_v1 = DAT_0044e010, *(char *)(param_1 + 0x14) == '\0' &&
          (*(int *)(param_1 + 0x18) != 8)) &&
         (temp_v0 = FUN_002c09d0(0x410), temp_v1 = DAT_0044e010, temp_v0 != 0)))) &&
       ((*(int *)(param_1 + 0x860) != 3 ||
        (((temp_v1 = DAT_0044e018, *(char *)(param_1 + 0x14) == '\0' &&
          (*(int *)(param_1 + 0x18) != 8)) &&
         (temp_v0 = FUN_002c09d0(0x410), temp_v1 = DAT_0044e018, temp_v0 != 0)))))) {
      *(unsigned int *)(param_1 + 0x860) = *(unsigned int *)(*(int *)(param_1 + 0x860) * 8 + 0x44dfd0);
    }
    else {
      *(unsigned int *)(param_1 + 0x860) = temp_v1;
    }
    FUN_0022faf8();
    FUN_002302d8(param_1,1);
    if (*(int *)(param_1 + 0x860) != 3) {
      if (*(int *)(param_1 + 0x860) != 5) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = 2;
      }
    }
    else {
      temp_v1 = 1;
    }
    FUN_00299d84(temp_v1);
  }
  temp_v0 = FUN_002762e0();
  if (temp_v0 != 0) {
    if (*(int *)(param_1 + 0x860) == 3) {
      FUN_002992e0(0);
    }
    if (*(int *)(param_1 + 0x860) == 4) {
      FUN_002992e0(1);
    }
    if (*(int *)(param_1 + 0x860) == 5) {
      FUN_002992e0(2);
    }
    FUN_00233240(param_1 + 0x3a8,1);
    FUN_00232848();
    *(unsigned int *)(param_1 + 4) = 0x11;
    *(unsigned int *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0x860) == 7) {
      return;
    }
    piVar4 = (int *)(param_1 + 0x15d24);
    if (*piVar4 == 3) {
      FUN_0022f834(param_1);
      return;
    }
    if (*piVar4 == 1) {
      *piVar4 = 4;
      FUN_0022f834(param_1);
      return;
    }
    FUN_0029ca58();
    *piVar4 = 3;
    FUN_00230558(0);
    if (*piVar3 != 0) {
      asdMdlManagerDestroy();
      *piVar3 = 0;
    }
  }
  else {
    temp_v0 = FUN_00256510();
    if (temp_v0 != 0) {
      FUN_002328b4();
      FUN_0022fa2c(param_1);
    }
  }
  if (*(int *)(param_1 + 0x860) == 7) {
    return;
  }
  FUN_0022f834(param_1);
  return;
}

} /* extern "C" */
