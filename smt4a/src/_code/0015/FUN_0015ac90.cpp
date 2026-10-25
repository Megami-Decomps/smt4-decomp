/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015ac90` (_code @ 0x15ac90, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00170454(void);
int FUN_00189a38(int, int);

extern signed char DAT_005b4464; /* 0x5b4464 */
extern int DAT_005b4468; /* 0x5b4468 */
extern int DAT_005b446c; /* 0x5b446c */
extern int DAT_005b4480; /* 0x5b4480 */

extern int FUN_0016f988(unsigned int *, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00170454. */
/* Supplied declaration required: FUN_00189a38. */
extern unsigned int libc_strlen(void);


int FUN_0015ac90(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = -0x1f5f3007;
  if (DAT_005b4464 != '\0') {
    if (DAT_005b446c == 0) {
      DAT_005b446c = DAT_005b4468;
    }
    temp_v0 = DAT_005b446c;
    temp_v2 = temp_v3;
    if (DAT_005b4480 == 0) {
      temp_v1 = libc_strlen();
      temp_v2 = FUN_0016f988((unsigned int *)&DAT_005b4480,temp_v0,temp_v1,0);
    }
    if (temp_v2 < 0) {
      DAT_005b446c = 0;
      FUN_00170454();
      if (DAT_005b446c == 0) {
        DAT_005b446c = DAT_005b4468;
      }
      temp_v0 = DAT_005b446c;
      if (DAT_005b4480 == 0) {
        temp_v1 = libc_strlen();
        temp_v3 = FUN_0016f988((unsigned int *)&DAT_005b4480,temp_v0,temp_v1,0);
      }
      temp_v2 = temp_v3;
      if (temp_v3 < 0) {
        FUN_00189a38(temp_v3,0x15ad58);
      }
    }
    return temp_v2;
  }
  if (DAT_005b446c == 0) {
    DAT_005b446c = DAT_005b4468;
  }
  temp_v0 = DAT_005b446c;
  if (DAT_005b4480 == 0) {
    temp_v1 = libc_strlen();
    temp_v3 = FUN_0016f988((unsigned int *)&DAT_005b4480,temp_v0,temp_v1,0);
  }
  if (temp_v3 < 0) {
    FUN_00189a38(temp_v3,0x15adac);
  }
  return temp_v3;
}

} /* extern "C" */
