/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a93bc` (_code @ 0x3a93bc, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004fd204(int, int, int, int, int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_0014aa78(void);
extern int FUN_00236038(unsigned int);
/* Supplied declaration required: FUN_004fd204. */


unsigned int FUN_003a93bc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_00236038(0);
  temp_v4 = 0;
  temp_v1 = FUN_0014aa78();
  do {
    temp_v3 = *(int *)(temp_v1 + 0x1ed4) + temp_v4 * 0x1d0;
    temp_v2 = *(unsigned int *)(temp_v3 + 0x50);
    if ((((temp_v2 & 1) != 0 && (temp_v2 & 0x80) != 0) && (temp_v2 & 0x400) != 0) &&
       (((temp_v2 & 0x10) == 0 || ((*(unsigned int *)(temp_v3 + 0x10c) & 2) == 0)))) {
      if (temp_v0 != 0) {
        FUN_004fd204(0,0,temp_v3,0xff,0x14,0);
      }
      else {
        FUN_004fd204(0,0,temp_v3,0,0x14,0);
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x6d);
  return 1;
}

} /* extern "C" */
