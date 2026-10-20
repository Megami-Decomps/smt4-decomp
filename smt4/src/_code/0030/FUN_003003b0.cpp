/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003003b0` (_code @ 0x3003b0, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246080(int, int, unsigned int, unsigned int, int);
int FUN_00246134(int, unsigned int, int, unsigned int);
int FUN_00246d38(...);
int FUN_00246e24(int, unsigned int, unsigned int, int, int);
int FUN_002505c0(...);
int FUN_00296cc8(int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00246080. */
/* Supplied declaration required: FUN_00246134. */
extern unsigned int FUN_002463e8(unsigned int);
/* Supplied declaration required: FUN_00246d38. */
/* Supplied declaration required: FUN_00246e24. */
/* Supplied declaration required: FUN_002505c0. */
extern unsigned int FUN_0027e928(unsigned int);
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_003003b0(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  temp_v3 = FUN_0027e928(DAT_0043427c);
  temp_v4 = FUN_002939f4();
  if (temp_v1 != 0) {
    if (temp_v2 != 0) {
      temp_v5 = FUN_002463e8(temp_v0);
      temp_v6 = 0;
      FUN_00246134(0,temp_v5,2,0xffffffff);
      if ((temp_v6 & 0x10000) != 0) {
        FUN_00246080(0,0,temp_v3,*(unsigned int *)(temp_v4 + 0x1e98),4);
        FUN_002505c0(0,temp_v3,0x10001ea,0,1,0,0);
        return 1;
      }
    }
    FUN_00246e24(0,temp_v3,*(unsigned int *)(temp_v4 + 0x1e98),1 << (temp_v0 & 0xff),1);
    FUN_002505c0(0,temp_v3,0x10001bd,0,0,0,0);
  }
  else {
    FUN_00246d38(0,temp_v3,*(unsigned int *)(temp_v4 + 0x1e98),1 << (temp_v0 & 0xff));
  }
  return 1;
}

} /* extern "C" */
