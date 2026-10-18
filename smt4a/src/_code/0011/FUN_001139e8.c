/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001139e8` (_code @ 0x1139e8, 0x112 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

/* Supplied declaration required: FUN_00103a38. */
/* Supplied declaration required: FUN_00103a4c. */
/* Supplied declaration required: FUN_00103a60. */
/* Supplied declaration required: FUN_00103ab8. */
extern int FUN_00123f04(int, unsigned int, unsigned int);
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e9318. */
extern int FUN_002ee774(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002ee96a(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002ee978. */
/* Supplied declaration required: FUN_002fbac6. */
extern int FUN_002fd432(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002fe1b8. */


unsigned int FUN_001139e8(int param_1,unsigned int param_2)

{
/* irregular: 11 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  unsigned int *temp_v4;
  unsigned char temp_v5 [8];
  unsigned char temp_v6 [8];
  unsigned int temp_v7 [2];
  
  temp_v1 = FUN_002e6e26();
  FUN_002e6e34(temp_v3,temp_v1 + 0x58);
  if ((*(int *)(param_1 + 8) != 0) && (temp_v1 = FUN_002ee978(param_2), temp_v1 != 0)) {
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    FUN_00103a38(param_2);
    temp_v1 = FUN_00123f04(param_1,param_2,0);
    if (temp_v1 != 0) {
      FUN_00103a4c(param_2,1);
      FUN_00103ab8(param_2,param_1 + 0x110);
      FUN_00103a60(param_2,*(unsigned short *)(param_1 + 0x118));
    }
    temp_v4 = *(unsigned int **)(param_1 + 0x2c);
    do {
      temp_v4 = (unsigned int *)*temp_v4;
      temp_v7[0] = *(unsigned int *)(param_1 + 0x2c);
      temp_v1 = FUN_002ee774(&temp_v4,temp_v7);
      if (temp_v1 == 0) break;
      FUN_002ee938(temp_v6,param_2);
      FUN_002ee938(temp_v5,temp_v4 + 2);
      temp_v1 = FUN_002ee96a(temp_v5,temp_v6);
      if (temp_v1 != 0) {
        temp_v1 = FUN_002ee978(temp_v4 + 2);
        temp_v2 = FUN_002ee978(param_2);
        if (temp_v1 != temp_v2) {
          temp_v0 = 0;
        }
        else {
          temp_v0 = 1;
        }
      }
      else {
        temp_v0 = 0;
      }
      FUN_002e9318(temp_v5);
      FUN_002e9318(temp_v6);
    } while (!temp_v0);
    temp_v7[0] = *(unsigned int *)(param_1 + 0x2c);
    temp_v1 = FUN_002fd432(&temp_v4,temp_v7);
    if (temp_v1 != 0) {
      temp_v1 = param_1 + 0x34;
      FUN_002fe1b8(temp_v1,param_2);
      if (temp_v1 == 0) {
        temp_v1 = param_1 + 0x50;
        FUN_002fe1b8(temp_v1,param_2);
        if (temp_v1 == 0) {
          FUN_002fbac6(param_1 + 0x1c,param_2);
          FUN_002e6e5c(temp_v3);
          return 1;
        }
      }
    }
  }
  FUN_002e6e5c(temp_v3);
  return 0;
}
