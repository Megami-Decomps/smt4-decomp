/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef8e4` (_code @ 0x2ef8e4, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1f7c(int);
int FUN_001edcf0(void);
int FUN_00247af8(int, int, int, int, int);
int FUN_0028727c(void);
int buttonHelpCreate(void);
int FUN_0028d9b0(void);
int buttonHelpRelease(void);
int uiFadeRelease(void);
int FUN_00297050(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0043e2f2; /* 0x43e2f2 */
extern unsigned short DAT_0043e2f6; /* 0x43e2f6 */
extern int DAT_0043e2f8; /* 0x43e2f8 */

extern int FUN_00193c50(void);
/* Supplied declaration required: FUN_001a1f7c. */
/* Supplied declaration required: FUN_001edcf0. */
/* Supplied declaration required: FUN_00247af8. */
/* Supplied declaration required: FUN_0028727c. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: FUN_0028d9b0. */
/* Supplied declaration required: buttonHelpRelease. */
/* Supplied declaration required: uiFadeRelease. */
/* Supplied declaration required: FUN_00297050. */
extern int jobGetWork(void);


unsigned int FUN_002ef8e4(void)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = jobGetWork();
  temp_v1 = *(int *)(temp_v0 + 4);
  if (temp_v1 != 8) {
    if (temp_v1 != 9) {
      if (temp_v1 != 10) {
        return 0;
      }
      temp_v0 = FUN_00193c50();
      if (temp_v0 != 0) {
        uiFadeRelease();
        FUN_001a1f7c(0);
      }
      FUN_00297050(1);
      buttonHelpRelease();
      FUN_0028727c();
      DAT_0043e2f2 = 1;
      return 0xffffffff;
    }
    FUN_001edcf0();
    if (temp_v1 != 1) {
      if (DAT_0043e2f8 + 1 < 8) {
        DAT_0043e2f8 = DAT_0043e2f8 + 1;
        return 0;
      }
      DAT_0043e2f6 = DAT_0043e2f6 + 1;
      if (DAT_0043e2f6 >= 3) {
        DAT_0043e2f6 = 0;
      }
      DAT_0043e2f8 = 0;
      return 0;
    }
    temp_v2 = 10;
  }
  else {
    FUN_0028d9b0();
    buttonHelpCreate();
    FUN_00297050(0);
    FUN_00247af8(0,0,0,0,0);
    temp_v2 = 9;
  }
  *(unsigned int *)(temp_v0 + 4) = temp_v2;
  return 0;
}

} /* extern "C" */
