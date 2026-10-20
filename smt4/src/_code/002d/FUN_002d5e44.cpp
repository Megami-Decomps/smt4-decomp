/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d5e44` (_code @ 0x2d5e44, 0x144 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int fileOwnerCloseA(void);
int fileOwnerCloseB(void);
int fileOwnerCloseC(unsigned char **);
int fileOwnerCloseD(void);
int FUN_002bb688(unsigned char **, int);

/* stack frame of param_2: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char DAT_00420b78; /* 0x420b78 */

extern int FUN_001ff93c(unsigned char **);
extern int FUN_001ffaf0(void);
/* Supplied declaration required: fileOwnerCloseA. */
/* Supplied declaration required: fileOwnerCloseB. */
/* Supplied declaration required: fileOwnerCloseC. */
/* Supplied declaration required: fileOwnerCloseD. */
extern int FUN_0024ab94(unsigned char **, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bb688. */
extern int FUN_002cbfe8(unsigned char **);


unsigned int FUN_002d5e44(int param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v1 = &DAT_00420b78;
  temp_v2 = 0x420bf0;
  temp_v0 = -0x181c0001;
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (param_1 == 3) {
          temp_v0 = FUN_001ffaf0();
        }
      }
      else {
        temp_v0 = FUN_002cbfe8(&temp_v1);
      }
    }
    else {
      temp_v0 = FUN_001ff93c(&temp_v1);
    }
  }
  else {
    temp_v0 = FUN_0024ab94(&temp_v1,param_2,2);
  }
  if (temp_v0 < 0) {
    FUN_002bb688(&temp_v1,0);
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        if (param_1 == 3) {
          fileOwnerCloseD();
        }
      }
      else {
        fileOwnerCloseA();
      }
    }
    else {
      fileOwnerCloseB();
    }
  }
  else {
    fileOwnerCloseC(&temp_v1);
  }
  FUN_002bb688(&temp_v1,0);
  return 1;
}

} /* extern "C" */
