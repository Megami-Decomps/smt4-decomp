/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fb2fc` (_code @ 0x1fb2fc, 0x134 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern signed char DAT_0049f9c8; /* 0x49f9c8 */

extern int FUN_00287a68(void);
extern int FUN_00287adc(unsigned short);
extern int FUN_00287afc(unsigned short);
extern int FUN_0028f460(unsigned short);
extern int FUN_00299064(unsigned short);
extern int FUN_002990dc(unsigned short, int, int *);
/* Supplied declaration required: FUN_002c2b1c. */


int FUN_001fb2fc(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5 [3];
  
  temp_v4 = 0;
  FUN_002c2b1c();
  if (DAT_0049f9c8 != '\0') {
    temp_v4 = 4;
  }
  else {
    temp_v0 = 100;
    do {
      temp_v1 = FUN_00299064(temp_v0);
      if (temp_v1 != 0) {
        temp_v1 = FUN_00287afc(temp_v0);
        if (temp_v1 != 1) {
          if (((temp_v1 == 0) && (temp_v1 = FUN_00287adc(temp_v0), temp_v1 != 0)) &&
             (temp_v1 = FUN_0028f460(temp_v0), temp_v1 != 0)) {
            temp_v1 = 0;
            temp_v3 = temp_v1;
            do {
              temp_v2 = FUN_002990dc(temp_v0,temp_v1,temp_v5);
              if (temp_v2 != 0) {
                temp_v3 = temp_v3 + temp_v5[0];
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 6);
            if (temp_v3 == 0) {
              temp_v4 = 2;
            }
          }
        }
        else {
          temp_v1 = FUN_00287adc(temp_v0);
          if (temp_v1 != 0) {
            temp_v1 = 0;
            temp_v3 = temp_v1;
            do {
              temp_v2 = FUN_002990dc(temp_v0,temp_v1,temp_v5);
              if (temp_v2 != 0) {
                temp_v3 = temp_v3 + temp_v5[0];
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 6);
            if (temp_v3 == 0) {
              temp_v4 = 1;
            }
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 400);
    if ((temp_v4 == 0) && (temp_v1 = FUN_00287a68(), temp_v1 != 0)) {
      temp_v4 = 3;
    }
  }
  return temp_v4;
}
