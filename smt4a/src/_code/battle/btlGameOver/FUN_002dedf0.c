/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dedf0` (_code @ 0x2dedf0, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_005738c8; /* 0x5738c8 */
extern unsigned int DAT_005738d0; /* 0x5738d0 */
extern unsigned int DAT_005738d4; /* 0x5738d4 */
extern unsigned int DAT_005738d8; /* 0x5738d8 */
extern unsigned int DAT_005738dc; /* 0x5738dc */
extern unsigned int DAT_005738e0; /* 0x5738e0 */
extern unsigned int DAT_005738e4; /* 0x5738e4 */

extern int FUN_00164a9c(void);
extern int FUN_00317408(unsigned int);
/* Supplied declaration required: FUN_003e6f50. */


int FUN_002dedf0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = DAT_005738c8;
  if (DAT_005738c8 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v2 = *(int *)(DAT_005738c8 + 8) + 1;
    *(unsigned int *)(DAT_005738c8 + 8) = temp_v2;
    if (temp_v2 >= 0x10000) {
      *(unsigned int *)(temp_v1 + 8) = 0xffff;
    }
    if (*(int *)(temp_v0 + 0xa8) == 2) {
      if ((*(unsigned int *)(temp_v0 + 0x45ac) & DAT_005738e4) != 0 ||
          (DAT_005738e0 & *(unsigned int *)(temp_v0 + 0x45a8)) != 0) {
        FUN_003e6f50(temp_v1);
        return temp_v1;
      }
      if (((DAT_005738d4 & *(unsigned int *)(temp_v0 + 0x45a4)) == 0 &&
           (DAT_005738d0 & *(unsigned int *)(temp_v0 + 0x45a0)) == 0) &&
         ((DAT_005738dc & *(unsigned int *)(temp_v0 + 0x45a4)) == 0 &&
          (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_005738d8) == 0)) {
        FUN_003e6f50(temp_v1);
        return temp_v1;
      }
    }
    temp_v0 = FUN_00317408(*(unsigned int *)(temp_v0 + 0x4c));
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = -1;
    }
  }
  return temp_v1;
}
