/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010edf8` (_code @ 0x10edf8, 0x1cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001175d4(int);
int eventQueueAddUniqueIfValid(...);
int FUN_002bc02c(void);
int FUN_002c15fc(int);
int FUN_002c1658(...);

extern unsigned int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */
extern signed char DAT_00493828; /* 0x493828 */
extern unsigned char DAT_00493829; /* 0x493829 */

/* Supplied declaration required: FUN_001175d4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_002bc02c. */
extern int FUN_002bc088(void);
extern unsigned int FUN_002bfdd4(void);
/* Supplied declaration required: FUN_002c15fc. */
/* Supplied declaration required: FUN_002c1658. */


unsigned int FUN_0010edf8(int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  if (*(int *)(DAT_0043e190 + 4) == param_1) {
    return 0;
  }
  temp_v1 = 0;
  FUN_002c1658(0,1);
  if (temp_v1 == 0) {
    temp_v1 = 9;
    FUN_002c1658(9,2);
    if (temp_v1 == 0) {
      temp_v2 = FUN_002c15fc(6);
      temp_v4 = temp_v2 == 0;
      if (temp_v4) {
        temp_v2 = (unsigned int)DAT_00493829;
      }
      if (temp_v4 && temp_v2 == 0) {
        temp_v4 = *(int *)(DAT_0043e18c + 4) == param_1;
        temp_v2 = DAT_0043e18c;
        if (temp_v4) {
          temp_v2 = (unsigned int)*(unsigned char *)(DAT_0043e18c + 0xa34);
        }
        if (temp_v4 && temp_v2 == 1) {
          temp_v1 = 1;
          FUN_002c1658();
          if (temp_v1 != 0) goto LAB_0010ee84;
        }
        temp_v1 = 9;
        FUN_002c1658(9,2);
        if ((temp_v1 == 0) && (temp_v1 = FUN_002c15fc(6), temp_v1 == 0)) {
          FUN_001175d4(0);
        }
        temp_v1 = 8;
        FUN_002c1658(8,1);
        temp_v3 = 0x100016e;
        if (temp_v1 != 0) {
          temp_v0 = *(char *)(DAT_0043e18c + 9);
          if ((temp_v0 == '\a' || temp_v0 == '\b') || temp_v0 == '\t') {
            return 0;
          }
          if (DAT_00493828 != '\0') {
            DAT_00493828 = 0;
            eventQueueAddUniqueIfValid(0x100016e);
            return 0;
          }
          DAT_00493828 = 1;
          temp_v3 = 0x100016d;
        }
        else {
          temp_v1 = 1;
          FUN_002c1658();
          if (temp_v1 == 0) {
            return 0;
          }
          if (DAT_00493828 == '\0') {
            return 0;
          }
          DAT_00493828 = 0;
        }
        eventQueueAddUniqueIfValid(temp_v3);
        return 0;
      }
    }
  }
LAB_0010ee84:
  temp_v1 = 9;
  FUN_002c1658(9,2);
  if ((temp_v1 != 0) || (temp_v1 = FUN_002c15fc(6), temp_v1 != 0)) {
    FUN_001175d4(1);
  }
  temp_v1 = FUN_002bc088();
  if ((temp_v1 != 0) && (temp_v2 = FUN_002bfdd4(), (temp_v2 & 1) != 0)) {
    FUN_002bc02c();
  }
  if (DAT_00493829 == 0) {
    eventQueueAddUniqueIfValid(0x100016c);
  }
  return 1;
}

} /* extern "C" */
