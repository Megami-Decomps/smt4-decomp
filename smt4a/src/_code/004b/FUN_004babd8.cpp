/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004babd8` (_code @ 0x4babd8, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexLoadMainHeap(int);
int FUN_004cfe4c(...);
int sub10OwnerStart(int);
int FUN_004d0738(int, int);

/* Supplied declaration required: asdTMTexLoadMainHeap. */
/* Supplied declaration required: FUN_004cfe4c. */
extern int FUN_004d0058(int, unsigned int);
/* Supplied declaration required: sub10OwnerStart. */
extern int FUN_004d0584(void);
extern unsigned int selectOwnerGetSelected(int);
/* Supplied declaration required: FUN_004d0738. */


unsigned int FUN_004babd8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  temp_v0 = FUN_004cfe4c();
  if (*(char *)(param_1 + 0x9ee) == '\0') {
    FUN_004d0738(param_1 + 0x74,param_1);
    sub10OwnerStart(param_1);
  }
  temp_v1 = FUN_004cfe4c(param_1);
  if (temp_v1 != temp_v0) {
    *(unsigned int *)(param_1 + 0x1074) = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x1074);
    *(int *)(param_1 + 0x1074) = temp_v0 + 1;
    if (temp_v0 + 1 < 0) {
      temp_v0 = 0;
    }
    else {
      *(int *)(param_1 + 0x1074) = temp_v0 + 2;
      if (temp_v0 + 2 < 0x101) {
        temp_v0 = temp_v0 + 3;
        *(int *)(param_1 + 0x1074) = temp_v0;
      }
      else {
        temp_v0 = 0x100;
      }
    }
    *(int *)(param_1 + 0x1074) = temp_v0;
    if (temp_v0 >= 0x10) {
      temp_v0 = FUN_004cfe4c(param_1);
      temp_v2 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + temp_v0 * 4 + 0x7ec) + 0x5a);
      temp_v0 = temp_v2 + 1;
      temp_v1 = param_1 + temp_v0;
      if (*(char *)(temp_v1 + 0x1034) == '\0') {
        *(unsigned int *)(param_1 + 0x102c) = temp_v2 + 2;
        *(int *)(param_1 + 0x1030) = temp_v0;
        if (*(char *)(temp_v1 + 0x1034) == '\0') {
          asdTMTexLoadMainHeap(0x1f);
          *(unsigned char *)(temp_v1 + 0x1034) = 1;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x9ee) == '\0') {
    if (*(char *)(param_1 + 0x86) != '\0') {
      temp_v3 = selectOwnerGetSelected(param_1 + 0x74);
      temp_v0 = FUN_004d0058(param_1,temp_v3);
      if (temp_v0 != 0) {
        temp_v4 = 1;
      }
    }
    temp_v0 = FUN_004d0584();
    if (temp_v0 != 0) {
      temp_v4 = 1;
    }
  }
  return temp_v4;
}

} /* extern "C" */
