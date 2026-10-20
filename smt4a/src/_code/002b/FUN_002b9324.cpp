/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b9324` (_code @ 0x2b9324, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162e8c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern signed char DAT_005f16d8; /* 0x5f16d8 */

/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_001ba570(void);
extern int FUN_001bd118(unsigned short);
extern int FUN_003de830(unsigned short);
extern int FUN_003df004(unsigned short, int, int *);
extern int FUN_004185ec(unsigned short);
extern int FUN_004186c0(unsigned short);


int FUN_002b9324(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5 [3];
  
  temp_v4 = 0;
  FUN_00162e8c();
  if (DAT_005f16d8 != '\0') {
    temp_v4 = 4;
  }
  else {
    temp_v0 = 100;
    do {
      temp_v1 = FUN_004185ec(temp_v0);
      if (temp_v1 != 0) {
        temp_v1 = FUN_001bd118(temp_v0);
        if (temp_v1 != 1) {
          if (((temp_v1 == 0) && (temp_v1 = FUN_004186c0(temp_v0), temp_v1 != 0)) &&
             (temp_v1 = FUN_003de830(temp_v0), temp_v1 != 0)) {
            temp_v1 = 0;
            temp_v3 = temp_v1;
            do {
              temp_v2 = FUN_003df004(temp_v0,temp_v1,temp_v5);
              if (temp_v2 != 0) {
                temp_v3 = temp_v3 + temp_v5[0];
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 4);
            if (temp_v3 == 0) {
              temp_v4 = 2;
            }
          }
        }
        else {
          temp_v1 = FUN_004186c0(temp_v0);
          if (temp_v1 != 0) {
            temp_v1 = 0;
            temp_v3 = temp_v1;
            do {
              temp_v2 = FUN_003df004(temp_v0,temp_v1,temp_v5);
              if (temp_v2 != 0) {
                temp_v3 = temp_v3 + temp_v5[0];
              }
              temp_v1 = temp_v1 + 1;
            } while (temp_v1 < 4);
            if (temp_v3 == 0) {
              temp_v4 = 1;
            }
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 400);
    if ((temp_v4 == 0) && (temp_v1 = FUN_001ba570(), temp_v1 != 0)) {
      temp_v4 = 3;
    }
  }
  return temp_v4;
}

} /* extern "C" */
