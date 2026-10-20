/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00497290` (_code @ 0x497290, 0x400 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184528(int, int);
int FUN_002f0384(int);
int FUN_0037e0b8(...);
int FUN_0038b57c(int);
int FUN_003fd7b4(unsigned int);
int FUN_0040aad4(int, int);
int FUN_0040ace8(unsigned int, unsigned int);
int FUN_004954e8(int);
int FUN_004964e0(int, int);
int FUN_0049706c(int);
int FUN_00498994(int);
int FUN_00498de0(...);
int FUN_0049af90(int);
int FUN_004d0434(void);
int FUN_004d044c(void);
int FUN_004d0458(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned int DAT_00588f68; /* 0x588f68 */
extern unsigned int DAT_00588f6c; /* 0x588f6c */
extern unsigned int DAT_00588f70; /* 0x588f70 */
extern unsigned int DAT_00588f74; /* 0x588f74 */

/* Supplied declaration required: FUN_00184528. */
extern int FUN_0018719c(unsigned int);
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002f0384. */
extern int FUN_00334158(void);
/* Supplied declaration required: FUN_0037e0b8. */
/* Supplied declaration required: FUN_0038b57c. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(void);
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_004954e8. */
/* Supplied declaration required: FUN_004964e0. */
/* Supplied declaration required: FUN_0049706c. */
/* Supplied declaration required: FUN_00498994. */
/* Supplied declaration required: FUN_00498de0. */
/* Supplied declaration required: FUN_0049af90. */
/* Supplied declaration required: FUN_004d0434. */
/* Supplied declaration required: FUN_004d044c. */
/* Supplied declaration required: FUN_004d0458. */
extern int FUN_004d0464(void);
extern int FUN_004d0494(void);
extern int FUN_004d04f4(void);
extern int FUN_004d0554(void);


void FUN_00497290(int param_1)

{
/* irregular: 16 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (*(int *)(param_1 + 0xb40) != 7) {
    temp_v0 = FUN_00334158();
    if (temp_v0 == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x16028) != 0) {
      temp_v0 = FUN_0040ab8c();
      if (temp_v0 == 0) {
        return;
      }
      if (*(int *)(*(int *)(param_1 + 0x16028) + 4) == 0) {
        FUN_0040aad4(*(int *)(param_1 + 0x16028),0);
        temp_v1 = *(unsigned int *)(*(int *)(param_1 + 0x16028) + 4);
        FUN_0040ace8(DAT_0056fcc0,temp_v1);
        FUN_003fd7b4(temp_v1);
      }
    }
    if (*(int *)(param_1 + 0xb40) != 3) {
      if (*(int *)(param_1 + 0xb40) == 5) {
        temp_v1 = 2;
      }
      else {
        temp_v1 = 0;
      }
      FUN_0037e0b8(temp_v1);
    }
    else {
      FUN_0037e0b8(1);
    }
  }
  FUN_004954e8(param_1);
  FUN_00498994(param_1);
  temp_v0 = FUN_004d0464();
  if ((temp_v0 == 0) && (temp_v0 = FUN_00284140((int)*(short *)(param_1 + 0x1602c)), temp_v0 != 6)) {
    temp_v0 = FUN_004d0494();
    if (((temp_v0 != 0) || (temp_v0 = FUN_00284140((int)*(short *)(param_1 + 0x1602e)), temp_v0 == 6)) &&
       (*(int *)(param_1 + 0xb40) != 7)) {
      if (*(int *)(param_1 + 0xb40) == 3) {
        FUN_0038b57c(0);
      }
      if (*(int *)(param_1 + 0xb40) == 4) {
        FUN_0038b57c(1);
      }
      if (*(int *)(param_1 + 0xb40) == 5) {
        FUN_0038b57c(2);
      }
      FUN_002f0384(0);
      *(unsigned char *)(param_1 + 0x22) = 0;
      if (((*(int *)(param_1 + 0xb40) != 0) ||
          ((temp_v1 = DAT_00588f6c, *(char *)(param_1 + 0x18) == '\0' &&
           (temp_v0 = FUN_0018719c(0x410), temp_v1 = DAT_00588f6c, temp_v0 != 0)))) &&
         ((*(int *)(param_1 + 0xb40) != 3 ||
          ((temp_v1 = DAT_00588f74, *(char *)(param_1 + 0x18) == '\0' &&
           (temp_v0 = FUN_0018719c(0x410), temp_v1 = DAT_00588f74, temp_v0 != 0)))))) {
        *(unsigned int *)(param_1 + 0xb40) = *(unsigned int *)(*(int *)(param_1 + 0xb40) * 8 + 0x588f2c)
        ;
      }
      else {
        *(unsigned int *)(param_1 + 0xb40) = temp_v1;
      }
      FUN_004d0458();
      FUN_004964e0(param_1,1);
      if (*(int *)(param_1 + 0xb40) != 3) {
        if (*(int *)(param_1 + 0xb40) == 5) {
          temp_v1 = 2;
        }
        else {
          temp_v1 = 0;
        }
      }
      else {
        temp_v1 = 1;
      }
      FUN_0037e0b8(temp_v1);
    }
  }
  else if (*(int *)(param_1 + 0xb40) != 7) {
    if (*(int *)(param_1 + 0xb40) == 3) {
      FUN_0038b57c(0);
    }
    if (*(int *)(param_1 + 0xb40) == 4) {
      FUN_0038b57c(1);
    }
    if (*(int *)(param_1 + 0xb40) == 5) {
      FUN_0038b57c(2);
    }
    FUN_002f0384(0);
    *(unsigned char *)(param_1 + 0x22) = 0;
    if (((*(int *)(param_1 + 0xb40) != 0) ||
        ((temp_v1 = DAT_00588f68, *(char *)(param_1 + 0x18) == '\0' &&
         (temp_v0 = FUN_0018719c(0x410), temp_v1 = DAT_00588f68, temp_v0 != 0)))) &&
       ((*(int *)(param_1 + 0xb40) != 3 ||
        ((temp_v1 = DAT_00588f70, *(char *)(param_1 + 0x18) == '\0' &&
         (temp_v0 = FUN_0018719c(0x410), temp_v1 = DAT_00588f70, temp_v0 != 0)))))) {
      *(unsigned int *)(param_1 + 0xb40) = *(unsigned int *)(*(int *)(param_1 + 0xb40) * 8 + 0x588f28);
    }
    else {
      *(unsigned int *)(param_1 + 0xb40) = temp_v1;
    }
    FUN_004d0458();
    FUN_004964e0(param_1,1);
    if (*(int *)(param_1 + 0xb40) != 3) {
      if (*(int *)(param_1 + 0xb40) != 5) {
        temp_v1 = 0;
      }
      else {
        temp_v1 = 2;
      }
    }
    else {
      temp_v1 = 1;
    }
    FUN_0037e0b8(temp_v1);
  }
  temp_v0 = FUN_004d0554();
  if (temp_v0 != 0) {
    if (*(int *)(param_1 + 0xb40) == 3) {
      FUN_0038b57c(0);
    }
    if (*(int *)(param_1 + 0xb40) == 4) {
      FUN_0038b57c(1);
    }
    if (*(int *)(param_1 + 0xb40) == 5) {
      FUN_0038b57c(2);
    }
    FUN_00184528(param_1 + 0x3cc,1);
    FUN_004d0434();
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 4) = 0x13;
    *(unsigned int *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xb40) == 7) {
      return;
    }
    FUN_0049af90(param_1);
  }
  else {
    temp_v0 = FUN_004d04f4();
    if (temp_v0 != 0) {
      FUN_004d044c();
      FUN_0049706c(param_1);
    }
  }
  if (*(int *)(param_1 + 0xb40) == 7) {
    return;
  }
  FUN_00498de0(param_1);
  return;
}

} /* extern "C" */
