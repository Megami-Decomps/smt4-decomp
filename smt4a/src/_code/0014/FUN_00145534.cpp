/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145534` (_code @ 0x145534, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015059c(int);
int FUN_001517b4(...);
int FUN_00163fd4(int);
int eventQueueAddUniqueIfValid(...);
int FUN_00164288(void);

extern int DAT_0057f58c; /* 0x57f58c */
extern int DAT_0057f590; /* 0x57f590 */
extern unsigned char DAT_005e204c; /* 0x5e204c */
extern unsigned char DAT_005e204d; /* 0x5e204d */

/* Supplied declaration required: FUN_0015059c. */
/* Supplied declaration required: FUN_001517b4. */
extern unsigned int FUN_00152f44(void);
extern int FUN_0016345c(void);
/* Supplied declaration required: FUN_00163fd4. */
/* Supplied declaration required: eventQueueAddUniqueIfValid. */
/* Supplied declaration required: FUN_00164288. */


unsigned int FUN_00145534(int param_1)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  if (*(int *)(DAT_0057f590 + 4) == param_1) {
    return 0;
  }
  temp_v2 = 0;
  FUN_001517b4(0,1);
  if (temp_v2 == 0) {
    temp_v2 = 9;
    FUN_001517b4(9,2);
    if (temp_v2 == 0) {
      temp_v3 = FUN_00163fd4(6);
      temp_v5 = temp_v3 == 0;
      if (temp_v5) {
        temp_v3 = (unsigned int)DAT_005e204d;
      }
      if (temp_v5 && temp_v3 == 0) {
        if ((*(int *)(DAT_0057f58c + 4) == param_1) && (*(char *)(DAT_0057f58c + 0x19e8) == '\x01'))
        {
          temp_v2 = 1;
          FUN_001517b4();
          if (temp_v2 != 0) goto LAB_001455c8;
        }
        temp_v2 = 9;
        FUN_001517b4(9,2);
        if ((temp_v2 == 0) && (temp_v2 = FUN_00163fd4(6), temp_v2 == 0)) {
          FUN_0015059c(0);
        }
        temp_v2 = 8;
        FUN_001517b4(8,1);
        if (temp_v2 != 0) {
          temp_v0 = *(char *)(DAT_0057f58c + 9);
          if ((temp_v0 == '\a' || temp_v0 == '\b') || temp_v0 == '\t') {
            return 0;
          }
          DAT_005e204c = DAT_005e204c == '\0';
          if ((unsigned char)DAT_005e204c) {
            temp_v4 = 0x100020e;
          }
          else {
            temp_v4 = 0x100020f;
          }
          eventQueueAddUniqueIfValid(temp_v4);
          return 0;
        }
        FUN_001517b4(1);
        return 0;
      }
    }
  }
LAB_001455c8:
  temp_v1 = 1;
  temp_v2 = 9;
  FUN_001517b4(9,2);
  if ((temp_v2 != 0) || (temp_v2 = FUN_00163fd4(6), temp_v2 != 0)) {
    FUN_0015059c(1);
  }
  temp_v2 = FUN_0016345c();
  if ((temp_v2 != 0) && (temp_v3 = FUN_00152f44(), (temp_v3 & 1) != 0)) {
    FUN_00164288();
    temp_v1 = 0;
  }
  if ((unsigned char)(temp_v1 & ~(DAT_005e204d != 0))) {
    eventQueueAddUniqueIfValid(0x1000226);
  }
  return 1;
}

} /* extern "C" */
