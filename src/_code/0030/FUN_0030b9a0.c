/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030b9a0` (_code @ 0x30b9a0, 0x1b4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned int DAT_0043427c; /* 0x43427c */

/* Supplied declaration required: FUN_002461ec. */
/* Supplied declaration required: FUN_002462a0. */
extern unsigned int FUN_00246554(unsigned int);
/* Supplied declaration required: FUN_00246ea4. */
/* Supplied declaration required: FUN_00246f90. */
/* Supplied declaration required: FUN_00250800. */
extern unsigned int FUN_0027eb98(unsigned int);
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_00296f60. */


unsigned int FUN_0030b9a0(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int *puVar10;
  int *piVar11;
  
  temp_v1 = FUN_00296f60(0);
  temp_v2 = FUN_00296f60(1);
  temp_v3 = FUN_00296f60(2);
  temp_v4 = FUN_0027eb98(DAT_0043427c);
  temp_v5 = FUN_00293c98();
  temp_v0 = 1 << (temp_v1 & 0xff);
  temp_v8 = 0;
  piVar11 = (int *)(temp_v5 + 0x1e98);
  do {
    puVar10 = (unsigned int *)(*(int *)(temp_v5 + 0x1fc0) + temp_v8 * 0x288);
    if ((((*puVar10 & 1) != 0) && ((*puVar10 & 0x40) == 0)) && (-1 < (short)puVar10[2])) {
      if (temp_v2 != 0) {
        if (temp_v3 != 0) {
          temp_v6 = FUN_00246554(temp_v1);
          temp_v7 = (unsigned int)(short)puVar10[2];
          FUN_002462a0(temp_v7,temp_v6,2,0xffffffff);
          if ((temp_v7 & 0x10000) != 0) {
            FUN_002461ec(0,0,temp_v4,*piVar11 + (short)puVar10[2] * 0x114,4);
            FUN_00250800(0,temp_v4,0x10001ea,0,1,0,0);
            temp_v8 = temp_v8 + 1;
            if (temp_v8 >= 4) {
              return 1;
            }
            continue;
          }
        }
        FUN_00246f90(0,temp_v4,*piVar11 + (short)puVar10[2] * 0x114,temp_v0,1);
        FUN_00250800(0,temp_v4,0x10001bd,0,0,0,0);
      }
      else {
        FUN_00246ea4(0,temp_v4,*piVar11 + (short)puVar10[2] * 0x114,temp_v0);
      }
    }
    temp_v8 = temp_v8 + 1;
    if (temp_v8 >= 4) {
      return 1;
    }
  } while( 1 );
}
