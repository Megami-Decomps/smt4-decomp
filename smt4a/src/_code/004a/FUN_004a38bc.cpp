/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a38bc` (_code @ 0x4a38bc, 0xf8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(void);
int FUN_003343f0(int);
int FUN_00341f88(void);
int FUN_0035deb0(void);
int FUN_004a1958(int);
int screen4AEnter(int);
int FUN_004a37a0(int, int);
int setListWindow(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0057f0b4; /* 0x57f0b4 */

/* Supplied declaration required: sysPlaySe. */
extern int FUN_00224880(unsigned int);
extern int FUN_002a482c(int);
extern int FUN_002a4b74(void);
extern int FUN_0031d174(int);
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_00341f88. */
/* Supplied declaration required: FUN_0035deb0. */
/* Supplied declaration required: FUN_004a1958. */
/* Supplied declaration required: screen4AEnter. */
/* Supplied declaration required: FUN_004a37a0. */
extern int FUN_004cfe4c(int);
/* Supplied declaration required: setListWindow. */


void FUN_004a38bc(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x85c));
  if (temp_v0 == 2) {
    temp_v0 = FUN_002a4b74();
    if (temp_v0 == 0) {
      temp_v0 = FUN_004cfe4c(param_1 + 0x20);
      FUN_004a37a0(param_1,*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x868));
      (*(unsigned int *)((unsigned char *)&DAT_0057f0b4 + 0x4)) = 0xffffffff;
      temp_v1 = FUN_0031d174(param_1 + 0x20);
      temp_v0 = FUN_002a482c(param_1 + 0x20);
      FUN_004a1958(param_1);
      if (temp_v0 >= 1) {
        temp_v0 = temp_v0 - 1;
      }
      else if ((temp_v1 != 0) && (*(int *)(param_1 + 0x28) <= temp_v1 + temp_v0)) {
        temp_v1 = temp_v1 - 1;
      }
      setListWindow(param_1 + 0x20,temp_v0,temp_v1);
    }
    FUN_00341f88();
    sysPlaySe();
    FUN_003343f0(0);
    if (*(short *)(param_1 + 0x864) < 1) {
      screen4AEnter(param_1);
      FUN_0035deb0();
      return;
    }
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
