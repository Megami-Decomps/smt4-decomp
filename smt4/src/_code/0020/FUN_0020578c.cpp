/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020578c` (_code @ 0x20578c, 0x300 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002992bc(...);
int FUN_0029d620(...);
int FUN_0029e958(...);
int FUN_0029ee54(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_002992bc. */
/* Supplied declaration required: FUN_0029d620. */
/* Supplied declaration required: FUN_0029e958. */
/* Supplied declaration required: FUN_0029ee54. */


void FUN_0020578c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0043dcf0;
  temp_v1 = *(int *)(DAT_0043dcf0 + 0x20);
  if (temp_v1 != 4) {
    if (temp_v1 != 6) {
      if (temp_v1 == 8) {
        temp_v1 = DAT_0043dcf0 + 0xa6c;
        temp_v3 = 0;
        temp_v2 = FUN_0029e958();
        if (0 < temp_v2) {
          do {
            if (*(char *)(temp_v0 + temp_v3 + 0x678) != '\0') {
              FUN_002992bc(temp_v0 + 0xa08,temp_v3);
              FUN_0029d620(temp_v0 + 0xa08,0);
              FUN_002992bc(temp_v1,temp_v3);
              FUN_0029d620(temp_v1,0);
              return;
            }
            temp_v3 = temp_v3 + 1;
            temp_v2 = FUN_0029e958(temp_v1);
          } while (temp_v3 < temp_v2);
        }
        temp_v3 = 1;
        temp_v2 = FUN_0029ee54(temp_v1);
        if (temp_v2 >= 2) {
          do {
            temp_v4 = 0;
            temp_v2 = FUN_0029e958(temp_v1);
            if (0 < temp_v2) {
              do {
                temp_v2 = (temp_v4 + temp_v3 * 4) - 4;
                if (*(short *)(temp_v0 + temp_v2 * 8 + 0x73c) != 0) {
                  FUN_002992bc(temp_v1,temp_v4);
                  FUN_0029d620(temp_v1,temp_v3);
                  if (*(int *)(temp_v0 + 0x2c) == 0) {
                    if (temp_v2 >= 0xc) {
                      return;
                    }
                    FUN_002992bc(temp_v0 + 0xa08,temp_v4);
                    FUN_0029d620(temp_v0 + 0xa08,temp_v3);
                    return;
                  }
                  if (*(int *)(temp_v0 + 0x2c) != 1) {
                    return;
                  }
                  if (temp_v2 < 0xc) {
                    return;
                  }
                  FUN_002992bc(temp_v0 + 0xa08,temp_v4);
                  FUN_0029d620(temp_v0 + 0xa08,temp_v3 - 3);
                  return;
                }
                temp_v4 = temp_v4 + 1;
                temp_v2 = FUN_0029e958(temp_v1);
              } while (temp_v4 < temp_v2);
            }
            temp_v3 = temp_v3 + 1;
            temp_v2 = FUN_0029ee54(temp_v1);
            if (temp_v2 <= temp_v3) {
              return;
            }
          } while( 1 );
        }
      }
    }
    else {
      temp_v1 = DAT_0043dcf0 + 0x9a4;
      temp_v3 = 0;
      temp_v2 = FUN_0029ee54();
      if (0 < temp_v2) {
        do {
          temp_v4 = 0;
          temp_v2 = FUN_0029e958(temp_v1);
          if (0 < temp_v2) {
            do {
              temp_v2 = temp_v4 + temp_v3 * 4;
              if (*(short *)(temp_v0 + temp_v2 * 8 + 0x73c) != 0) {
                FUN_002992bc(temp_v1,temp_v4);
                FUN_0029d620(temp_v1,temp_v3);
                if (*(int *)(temp_v0 + 0x2c) == 0) {
                  if (temp_v2 >= 0xc) {
                    return;
                  }
                  FUN_002992bc(temp_v0 + 0x940,temp_v4);
                  FUN_0029d620(temp_v0 + 0x940,temp_v3);
                  return;
                }
                if (*(int *)(temp_v0 + 0x2c) != 1) {
                  return;
                }
                if (temp_v2 < 0xc) {
                  return;
                }
                FUN_002992bc(temp_v0 + 0x940,temp_v4);
                FUN_0029d620(temp_v0 + 0x940,temp_v3 - 4);
                return;
              }
              temp_v4 = temp_v4 + 1;
              temp_v2 = FUN_0029e958(temp_v1);
            } while (temp_v4 < temp_v2);
          }
          temp_v3 = temp_v3 + 1;
          temp_v2 = FUN_0029ee54(temp_v1);
          if (temp_v2 <= temp_v3) {
            return;
          }
        } while( 1 );
      }
    }
  }
  else {
    temp_v1 = DAT_0043dcf0 + 0x8dc;
    temp_v3 = 0;
    temp_v2 = FUN_0029e958();
    if (0 < temp_v2) {
      do {
        if (*(char *)(temp_v0 + temp_v3 + 0x678) != '\0') {
          FUN_002992bc(temp_v1,temp_v3);
          return;
        }
        temp_v3 = temp_v3 + 1;
        temp_v2 = FUN_0029e958(temp_v1);
      } while (temp_v3 < temp_v2);
    }
  }
  return;
}

} /* extern "C" */
