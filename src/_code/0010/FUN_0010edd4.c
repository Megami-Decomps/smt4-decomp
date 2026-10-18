/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010edd4` (_code @ 0x10edd4, 0x1cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043e18c; /* 0x43e18c */
extern int DAT_0043e190; /* 0x43e190 */
extern signed char DAT_00493828; /* 0x493828 */
extern unsigned char DAT_00493829; /* 0x493829 */

/* Supplied declaration required: FUN_001174d4. */
/* Supplied declaration required: FUN_002bc200. */
/* Supplied declaration required: FUN_002bc210. */
extern int FUN_002bc26c(void);
extern unsigned int FUN_002bffac(void);
/* Supplied declaration required: FUN_002c17d4. */
/* Supplied declaration required: FUN_002c1830. */


unsigned int FUN_0010edd4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  if (*(int *)(DAT_0043e190 + 4) == param_1) {
    return 0;
  }
  temp_v1 = FUN_002c1830(0,1);
  if ((temp_v1 == 0) && (temp_v1 = FUN_002c1830(9,2), temp_v1 == 0)) {
    temp_v2 = FUN_002c17d4(6);
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
      if ((!temp_v4 || temp_v2 != 1) || (temp_v1 = FUN_002c1830(1), temp_v1 == 0)) {
        temp_v1 = FUN_002c1830(9,2);
        if ((temp_v1 == 0) && (temp_v1 = FUN_002c17d4(6), temp_v1 == 0)) {
          FUN_001174d4(0);
        }
        temp_v1 = FUN_002c1830(8,1);
        temp_v3 = 0x100016e;
        if (temp_v1 != 0) {
          temp_v0 = *(char *)(DAT_0043e18c + 9);
          if ((temp_v0 == '\a' || temp_v0 == '\b') || temp_v0 == '\t') {
            return 0;
          }
          if (DAT_00493828 != '\0') {
            DAT_00493828 = 0;
            FUN_002bc200(0x100016e);
            return 0;
          }
          DAT_00493828 = 1;
          temp_v3 = 0x100016d;
        }
        else {
          temp_v1 = FUN_002c1830(1);
          if (temp_v1 == 0) {
            return 0;
          }
          if (DAT_00493828 == '\0') {
            return 0;
          }
          DAT_00493828 = 0;
        }
        FUN_002bc200(temp_v3);
        return 0;
      }
    }
  }
  temp_v1 = FUN_002c1830(9,2);
  if ((temp_v1 != 0) || (temp_v1 = FUN_002c17d4(6), temp_v1 != 0)) {
    FUN_001174d4(1);
  }
  temp_v1 = FUN_002bc26c();
  if ((temp_v1 != 0) && (temp_v2 = FUN_002bffac(), (temp_v2 & 1) != 0)) {
    FUN_002bc210();
  }
  if (DAT_00493829 == 0) {
    FUN_002bc200(0x100016c);
  }
  return 1;
}
