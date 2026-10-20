/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eb0cc` (_code @ 0x3eb0cc, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(int, int, unsigned int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */

/* Supplied declaration required: FUN_002e6354. */


void FUN_003eb0cc(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int *piVar6;
  int *piVar7;
  
  temp_v3 = 0;
  piVar6 = (int *)(param_1 + 0x1ed4);
  piVar7 = (int *)(param_1 + 0x1ffc);
  do {
    temp_v0 = (int)*(short *)(*piVar6 + temp_v3 * 0x1d0 + 0x68);
    if (-1 < temp_v0) {
      puVar2 = (unsigned int *)(*piVar7 + temp_v0 * 0x408);
      temp_v2 = *puVar2;
      temp_v1 = puVar2[1];
      if ((((temp_v1 & DAT_0057397c) != 0 || (DAT_00573978 & temp_v2) != 0) &&
          ((temp_v1 & DAT_005739a4) == 0 && (DAT_005739a0 & temp_v2) == 0)) &&
         (temp_v0 = *piVar7 + temp_v0 * 0x408 + 0x164, temp_v0 != 0)) {
        if (param_2 != 0) {
          if ((param_2 != 1) || ((temp_v1 & DAT_00573994) != 0 || (DAT_00573990 & temp_v2) != 0)) {
            FUN_002e6354(temp_v0 + 0x17c,0x15,temp_v2,temp_v0,param_1);
          }
        }
        else if ((temp_v1 & DAT_00573994) == 0 && (DAT_00573990 & temp_v2) == 0) {
          FUN_002e6354(temp_v0 + 0x17c,0x15,temp_v2,temp_v0,param_1);
        }
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x6d) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
