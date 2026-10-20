/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f80e4` (_code @ 0x4f80e4, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_0030ea58(int, unsigned char *);

extern unsigned char LAB_004f8260; /* 0x4f8260 */

/* Supplied declaration required: btlGetMainState. */
extern int wstrlen(int);
/* Supplied declaration required: FUN_0030ea58. */
extern int FUN_003e8430(void);


int FUN_004f80e4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned char temp_v2;
  
  if ((*(int *)(param_1 + 0x1f54) != 0) && (piVar3 = (int *)(param_1 + 0x1f58), *piVar3 != 0)) {
    btlGetMainState();
    temp_v0 = FUN_003e8430();
    if (temp_v0 == 0) {
      temp_v0 = 0;
      temp_v1 = wstrlen(*piVar3);
      if (temp_v1 != 0) {
        temp_v1 = *piVar3;
        FUN_0030ea58(temp_v1,&LAB_004f8260);
        if (((temp_v1 != 0) && (temp_v1 = (int)*(short *)(*piVar3 + 0x10), -1 < temp_v1)) && (0 < temp_v1))
        {
          temp_v0 = temp_v1;
        }
      }
      temp_v1 = wstrlen(*piVar3 + 0x16);
      if (temp_v1 != 0) {
        temp_v1 = *piVar3 + 0x16;
        FUN_0030ea58(temp_v1,&LAB_004f8260);
        if (temp_v1 != 0) {
          temp_v1 = (int)*(short *)(*piVar3 + 0x26);
          temp_v2 = temp_v1 == 0;
          if (-1 < temp_v1) {
            temp_v2 = temp_v1 == temp_v0;
          }
          if (!temp_v2 && (-1 < temp_v1 && temp_v0 <= temp_v1)) {
            temp_v0 = temp_v1;
          }
        }
      }
      temp_v1 = wstrlen(*piVar3 + 0x2c);
      if (temp_v1 != 0) {
        temp_v1 = *piVar3 + 0x2c;
        FUN_0030ea58(temp_v1,&LAB_004f8260);
        if (temp_v1 != 0) {
          temp_v1 = (int)*(short *)(*piVar3 + 0x3c);
          temp_v2 = temp_v1 == 0;
          if (-1 < temp_v1) {
            temp_v2 = temp_v1 == temp_v0;
          }
          if (!temp_v2 && (-1 < temp_v1 && temp_v0 <= temp_v1)) {
            temp_v0 = temp_v1;
          }
        }
      }
      temp_v1 = wstrlen(*piVar3 + 0x42);
      if (temp_v1 != 0) {
        temp_v1 = *piVar3 + 0x42;
        FUN_0030ea58(temp_v1,&LAB_004f8260);
        if (temp_v1 != 0) {
          temp_v1 = (int)*(short *)(*piVar3 + 0x52);
          temp_v2 = temp_v1 == 0;
          if (-1 < temp_v1) {
            temp_v2 = temp_v1 == temp_v0;
          }
          if (!temp_v2 && (-1 < temp_v1 && temp_v0 <= temp_v1)) {
            temp_v0 = temp_v1;
          }
        }
      }
      return temp_v0;
    }
  }
  return -1;
}

} /* extern "C" */
