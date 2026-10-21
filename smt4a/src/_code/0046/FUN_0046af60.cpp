/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046af60` (_code @ 0x46af60, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(void);
int sysPlaySe(int);
int FUN_00183e58(void);
int slotSetRequest(int, int, int);
int msgWindowReset(void);
int FUN_002bf4f4(int);
int pickObjStart(int, unsigned char *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0046b060; /* 0x46b060 */

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00183e58. */
/* Supplied declaration required: slotSetRequest. */
extern int scrRunOpcodesStub(unsigned int);
extern int FUN_00239480(void);
extern int screenFadeIsBusy(void);
/* Supplied declaration required: msgWindowReset. */
/* Supplied declaration required: FUN_002bf4f4. */
extern int FUN_002e19f8(void);
/* Supplied declaration required: pickObjStart. */


void FUN_0046af60(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    pickObjStart(param_1,&LAB_0046b060);
    sysPlaySe(0xa0);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return;
  }
  if (temp_v0 != 1) {
    if (((temp_v0 == 2) && (temp_v0 = screenFadeIsBusy(), temp_v0 == 0)) &&
       (temp_v0 = FUN_002e19f8(), temp_v0 != 0)) {
      *(unsigned int *)(param_1 + 4) = 0x12;
      *(unsigned int *)(param_1 + 8) = 0;
    }
  }
  else {
    FUN_002bf4f4(0);
    temp_v0 = scrRunOpcodesStub(**(unsigned int **)(param_1 + 0x2b4));
    if (temp_v0 == 2) {
      slotSetRequest(0,10,0xff);
      slotSetRequest(1,10,0xff);
      FUN_00183e58();
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      return;
    }
    temp_v0 = 1;
    FUN_001517b4();
    if ((temp_v0 != 0) && (temp_v0 = FUN_00239480(), temp_v0 != 0)) {
      msgWindowReset();
      return;
    }
  }
  return;
}

} /* extern "C" */
