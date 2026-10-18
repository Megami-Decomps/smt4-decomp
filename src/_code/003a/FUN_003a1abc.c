/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a1abc` (_code @ 0x3a1abc, 0x464 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0044e010; /* 0x44e010 */
extern unsigned int DAT_0044e014; /* 0x44e014 */
extern unsigned int DAT_0044e018; /* 0x44e018 */
extern unsigned int DAT_0044e01c; /* 0x44e01c */

/* Supplied declaration required: FUN_0022f9c8. */
/* Supplied declaration required: FUN_0022fbc0. */
/* Supplied declaration required: FUN_0022fc8c. */
extern int FUN_0022fc98(void);
extern int FUN_0022fcc8(void);
/* Supplied declaration required: FUN_0022fcf8. */
/* Supplied declaration required: FUN_0022fd54. */
/* Supplied declaration required: FUN_0023046c. */
/* Supplied declaration required: FUN_002306ec. */
/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_00256750(void);
extern int FUN_00276550(void);
/* Supplied declaration required: FUN_0029957c. */
/* Supplied declaration required: FUN_00299974. */
/* Supplied declaration required: FUN_0029a020. */
extern int FUN_0029a25c(void);
/* Supplied declaration required: FUN_0029a2b0. */
/* Supplied declaration required: FUN_0029ccf8. */
extern int FUN_0029d8fc(int);
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a7aa0. */
extern int FUN_002ae16c(void);
extern int FUN_002c0ba8(unsigned int);


void FUN_003a1abc(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(param_1 + 0x15d48);
  if (*(int *)(param_1 + 0x860) != 7) {
    temp_v0 = FUN_0029a25c();
    if (temp_v0 == 0) {
      return;
    }
    if (*piVar3 != 0) {
      temp_v0 = FUN_002ae16c();
      if (temp_v0 == 0) {
        return;
      }
      if (*(int *)(*(int *)(*piVar3 + 8) + 0xc) < 0) {
        FUN_002a06c8(*piVar3,1);
        FUN_0029a2b0(*(unsigned int *)(*piVar3 + 8),0);
      }
    }
    if (*(int *)(param_1 + 0x860) != 3) {
      if (*(int *)(param_1 + 0x860) == 5) {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 0;
      }
      FUN_0029a020(temp_v1);
    }
    else {
      FUN_0029a020(1);
    }
  }
  FUN_0022fd54(param_1);
  FUN_0022fcf8(param_1);
  temp_v0 = FUN_0022fcc8();
  if ((temp_v0 == 0) && (temp_v0 = FUN_0029d8fc((int)*(short *)(param_1 + 0x15d4c)), temp_v0 != 6)) {
    temp_v0 = FUN_0022fc98();
    if (((temp_v0 != 0) || (temp_v0 = FUN_0029d8fc((int)*(short *)(param_1 + 0x15d4e)), temp_v0 == 6)) &&
       (*(int *)(param_1 + 0x860) != 7)) {
      if (*(int *)(param_1 + 0x860) == 3) {
        FUN_0029957c(0);
      }
      if (*(int *)(param_1 + 0x860) == 4) {
        FUN_0029957c(1);
      }
      if (*(int *)(param_1 + 0x860) == 5) {
        FUN_0029957c(2);
      }
      FUN_00299974(0);
      *(unsigned char *)(param_1 + 0x1e) = 0;
      if (((*(int *)(param_1 + 0x860) != 0) ||
          (((temp_v1 = DAT_0044e014, *(char *)(param_1 + 0x14) == '\0' &&
            (*(int *)(param_1 + 0x18) != 8)) &&
           (temp_v0 = FUN_002c0ba8(0x410), temp_v1 = DAT_0044e014, temp_v0 != 0)))) &&
         ((*(int *)(param_1 + 0x860) != 3 ||
          (((temp_v1 = DAT_0044e01c, *(char *)(param_1 + 0x14) == '\0' &&
            (*(int *)(param_1 + 0x18) != 8)) &&
           (temp_v0 = FUN_002c0ba8(0x410), temp_v1 = DAT_0044e01c, temp_v0 != 0)))))) {
        *(unsigned int *)(param_1 + 0x860) = *(unsigned int *)(*(int *)(param_1 + 0x860) * 8 + 0x44dfd4)
        ;
      }
      else {
        *(unsigned int *)(param_1 + 0x860) = temp_v1;
      }
      FUN_0022fc8c();
      FUN_0023046c(param_1,1);
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
      FUN_0029a020(temp_v1);
    }
  }
  else if (*(int *)(param_1 + 0x860) != 7) {
    if (*(int *)(param_1 + 0x860) == 3) {
      FUN_0029957c(0);
    }
    if (*(int *)(param_1 + 0x860) == 4) {
      FUN_0029957c(1);
    }
    if (*(int *)(param_1 + 0x860) == 5) {
      FUN_0029957c(2);
    }
    FUN_00299974(0);
    *(unsigned char *)(param_1 + 0x1e) = 0;
    if (((*(int *)(param_1 + 0x860) != 0) ||
        (((temp_v1 = DAT_0044e010, *(char *)(param_1 + 0x14) == '\0' &&
          (*(int *)(param_1 + 0x18) != 8)) &&
         (temp_v0 = FUN_002c0ba8(0x410), temp_v1 = DAT_0044e010, temp_v0 != 0)))) &&
       ((*(int *)(param_1 + 0x860) != 3 ||
        (((temp_v1 = DAT_0044e018, *(char *)(param_1 + 0x14) == '\0' &&
          (*(int *)(param_1 + 0x18) != 8)) &&
         (temp_v0 = FUN_002c0ba8(0x410), temp_v1 = DAT_0044e018, temp_v0 != 0)))))) {
      *(unsigned int *)(param_1 + 0x860) = *(unsigned int *)(*(int *)(param_1 + 0x860) * 8 + 0x44dfd0);
    }
    else {
      *(unsigned int *)(param_1 + 0x860) = temp_v1;
    }
    FUN_0022fc8c();
    FUN_0023046c(param_1,1);
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
    FUN_0029a020(temp_v1);
  }
  temp_v0 = FUN_00276550();
  if (temp_v0 != 0) {
    if (*(int *)(param_1 + 0x860) == 3) {
      FUN_0029957c(0);
    }
    if (*(int *)(param_1 + 0x860) == 4) {
      FUN_0029957c(1);
    }
    if (*(int *)(param_1 + 0x860) == 5) {
      FUN_0029957c(2);
    }
    FUN_002333d4(param_1 + 0x3a8,1);
    FUN_002329dc();
    *(unsigned int *)(param_1 + 4) = 0x11;
    *(unsigned int *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0x860) == 7) {
      return;
    }
    piVar4 = (int *)(param_1 + 0x15d24);
    if (*piVar4 == 3) {
      FUN_0022f9c8(param_1);
      return;
    }
    if (*piVar4 == 1) {
      *piVar4 = 4;
      FUN_0022f9c8(param_1);
      return;
    }
    FUN_0029ccf8();
    *piVar4 = 3;
    FUN_002306ec(0);
    if (*piVar3 != 0) {
      FUN_002a7aa0();
      *piVar3 = 0;
    }
  }
  else {
    temp_v0 = FUN_00256750();
    if (temp_v0 != 0) {
      FUN_00232a48();
      FUN_0022fbc0(param_1);
    }
  }
  if (*(int *)(param_1 + 0x860) == 7) {
    return;
  }
  FUN_0022f9c8(param_1);
  return;
}
