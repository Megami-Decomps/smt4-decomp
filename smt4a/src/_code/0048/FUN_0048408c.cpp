/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048408c` (_code @ 0x48408c, 0x1d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int stateSetterEnterState(int, int);
int sendEvent100020D(void);
int sendEvent100020E(void);

extern int flaggedEntryGetValueB(int);
/* Supplied declaration required: stateSetterEnterState. */
/* Supplied declaration required: sendEvent100020D. */
/* Supplied declaration required: sendEvent100020E. */


unsigned int FUN_0048408c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (*(char *)(param_1 + 0x260) == '\0') {
    return 0;
  }
  temp_v1 = flaggedEntryGetValueB(param_1 + 0x1fc);
  if (temp_v1 != 1) {
    temp_v1 = flaggedEntryGetValueB(param_1 + 0x1fc);
    if (temp_v1 != 2) {
      temp_v1 = flaggedEntryGetValueB(param_1 + 0x1fc);
      if (temp_v1 != 3) {
        return 0;
      }
      temp_v1 = 0;
      while( 1 ) {
        temp_v0 = (char)temp_v1;
        if (((-1 < temp_v0) &&
            (temp_v2 = param_1 + temp_v0 * 2,
            (unsigned short)((unsigned short)*(unsigned char *)(temp_v2 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v2 + 0xb1)) !=
            -0x7ec0)) &&
           ((temp_v0 < 0 ||
            (temp_v2 = param_1 + temp_v0 * 2,
            (unsigned short)((unsigned short)*(unsigned char *)(temp_v2 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v2 + 0xb1)) != 0
            )))) break;
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 8) {
          return 1;
        }
      }
      temp_v1 = 8;
      do {
        temp_v0 = (char)temp_v1;
        if ((((temp_v0 < 0) ||
             (temp_v2 = param_1 + temp_v0 * 2,
             (unsigned short)((unsigned short)*(unsigned char *)(temp_v2 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v2 + 0xb1)) !=
             0)) && (-1 < temp_v0)) &&
           (temp_v2 = param_1 + temp_v0 * 2,
           (unsigned short)((unsigned short)*(unsigned char *)(temp_v2 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v2 + 0xb1)) !=
           -0x7ec0)) break;
        temp_v1 = temp_v1 - 1;
        temp_v2 = param_1 + temp_v0 * 2;
        *(unsigned char *)(temp_v2 + 0xb0) = 0;
        *(unsigned char *)(temp_v2 + 0xb1) = 0;
      } while (0 < temp_v1);
      *(unsigned char *)(param_1 + 8) = 1;
      stateSetterEnterState(param_1,4);
      sendEvent100020E();
      return 1;
    }
    if ('\x06' < *(char *)(param_1 + 0x22)) {
      return 1;
    }
    *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) + '\x01';
    temp_v1 = *(int *)(param_1 + 0x568);
  }
  else {
    if (*(char *)(param_1 + 0x22) < '\x01') {
      return 1;
    }
    *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) - '\x01';
    temp_v1 = *(int *)(param_1 + 0x568);
  }
  if (temp_v1 == 0) {
    sendEvent100020D();
  }
  return 1;
}

} /* extern "C" */
