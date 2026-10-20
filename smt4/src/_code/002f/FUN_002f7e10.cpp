/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7e10` (_code @ 0x2f7e10, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00246d38(int, unsigned int, int, int);
int FUN_00246e24(int, unsigned int, int, int, int);
int FUN_002505c0(int, unsigned int, int, int, int, int, int);
int FUN_00262f68(unsigned int, int);
int FUN_0026e61c(unsigned int, unsigned int);
int FUN_00296cc8(int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_00246d38. */
/* Supplied declaration required: FUN_00246e24. */
/* Supplied declaration required: FUN_002505c0. */
/* Supplied declaration required: FUN_00262f68. */
/* Supplied declaration required: FUN_0026e61c. */
extern unsigned int FUN_0027e928(unsigned int);
extern int FUN_002939f4(void);
/* Supplied declaration required: FUN_00296cc8. */
extern int FUN_0029ebac(unsigned int, unsigned int);
extern unsigned int FUN_002a8740(int);


unsigned int FUN_002f7e10(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  temp_v2 = FUN_00296cc8(2);
  temp_v3 = FUN_0027e928(DAT_0043427c);
  if (temp_v0 < 0x6d) {
    temp_v4 = FUN_002939f4();
    temp_v0 = *(int *)(temp_v4 + 0x1e98) + temp_v0 * 0x114;
    if (temp_v2 == 0) {
      FUN_00246d38(0,temp_v3,temp_v0,1 << (temp_v1 & 0xff));
      return 1;
    }
    FUN_00246e24(0,temp_v3,temp_v0,1 << (temp_v1 & 0xff),1);
  }
  else {
    temp_v5 = FUN_002a8740(temp_v0 - 0x6d);
    if (temp_v2 == 0) {
      FUN_00262f68(temp_v5,(1 << (temp_v1 & 0xff)) & 0xffff);
      return 1;
    }
    FUN_0026e61c(temp_v5,temp_v1 & 0xffff);
    if (((temp_v1 & 0xffff) != 4) && (temp_v0 = FUN_0029ebac(temp_v5,4), temp_v0 != 0)) {
      FUN_00262f68(temp_v5,0x10);
    }
  }
  FUN_002505c0(0,temp_v3,0x10001bd,0,0,0,0);
  return 1;
}

} /* extern "C" */
