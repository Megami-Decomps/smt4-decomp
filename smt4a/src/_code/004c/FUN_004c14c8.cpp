/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c14c8` (_code @ 0x4c14c8, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0034a290(void);
int FUN_003f0e20(unsigned int, unsigned int);
int source4CCopyHalves(void);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned int DAT_00571498; /* 0x571498 */
extern unsigned int DAT_0057149c; /* 0x57149c */

extern unsigned int btlGetMainState(void);
extern int lcgRandomRange(unsigned int);
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: source4CCopyHalves. */


unsigned short FUN_004c14c8(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short temp_v5 [10];
  
  temp_v0 = btlGetMainState();
  FUN_003f0e20(temp_v0,param_1);
  temp_v5[0] = 0;
  temp_v5[1] = 0;
  temp_v5[2] = 0;
  temp_v5[3] = 0;
  temp_v5[4] = 0;
  temp_v5[5] = 0;
  temp_v5[6] = 0;
  temp_v5[7] = 0;
  temp_v5[8] = 0;
  temp_v5[9] = 0;
  source4CCopyHalves();
  temp_v3 = 0;
  temp_v4 = temp_v0;
  do {
    temp_v1 = (unsigned int)temp_v5[temp_v3];
    if (temp_v1 != 0) {
      FUN_0034a290();
      if (temp_v1 != 0) {
        temp_v4 = (unsigned int)*(unsigned char *)(temp_v1 + 0x26);
      }
      if (temp_v1 != 0 && temp_v4 != 0) {
        temp_v2 = lcgRandomRange(99);
        if ((DAT_0057149c & *(unsigned int *)(temp_v0 + 0x45a4)) != 0 ||
            (*(unsigned int *)(temp_v0 + 0x45a0) & DAT_00571498) != 0) {
          temp_v2 = 0;
        }
        if (temp_v2 < (int)temp_v4) {
          return temp_v5[temp_v3];
        }
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 9) {
      return 0;
    }
  } while( 1 );
}

} /* extern "C" */
