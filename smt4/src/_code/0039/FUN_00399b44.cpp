/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399b44` (_code @ 0x399b44, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00220984(void);
int FUN_0039ad14(void);
int FUN_0039b370(void);
int FUN_0039c728(int);

/* Supplied declaration required: FUN_00220984. */
extern int padIsButtonDown(unsigned int);
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_0039ad14. */
/* Supplied declaration required: FUN_0039b370. */
/* Supplied declaration required: FUN_0039c728. */


void FUN_00399b44(int param_1)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (*(unsigned char *)(param_1 + 0xc) != 0xff) {
    temp_v1 = *(unsigned int *)(param_1 + 0x10);
    temp_v2 = FUN_002c09d0(0x400);
    if (temp_v2 != 0) {
      temp_v2 = padIsButtonDown(0x76);
      temp_v0 = '\0';
      if (temp_v2 != 0) {
        temp_v0 = *(char *)(param_1 + 0xc);
      }
      if (temp_v2 != 0 && temp_v0 != '\0') {
        FUN_0039c728(param_1);
      }
    }
    if ((temp_v1 & 0x1000) == 0) {
      FUN_00220984();
      temp_v2 = param_1;
      if (*(char *)(param_1 + 0xc) != '\0') {
        FUN_0039ad14();
      }
      else {
        temp_v3 = FUN_002c09d0(0x400);
        if (temp_v3 == 0) {
          return;
        }
        temp_v3 = padIsButtonDown(0x76);
        if (temp_v3 == 0) {
          return;
        }
        FUN_0039b370();
      }
      if (temp_v2 != 0) {
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) | 1;
      }
    }
  }
  return;
}

} /* extern "C" */
