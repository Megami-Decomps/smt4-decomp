/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004112c4` (_code @ 0x4112c4, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_00573808; /* 0x573808 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_00163e84(unsigned int);
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_00203d04. */
extern int FUN_002619e0(void);
/* Supplied declaration required: FUN_003eb26c. */
extern int FUN_003eec8c(void);
/* Supplied declaration required: FUN_00411bb4. */
/* Supplied declaration required: FUN_004a9d1c. */
extern int FUN_004ab6b4(unsigned int);
/* Supplied declaration required: FUN_004f5238. */
/* Supplied declaration required: FUN_004f8f08. */


void FUN_004112c4(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *(int *)(param_1 + 0x10);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          FUN_0014aa78();
          temp_v0 = FUN_003eec8c();
          if (temp_v0 != 0) {
            *(unsigned int *)(param_1 + 8) = 3;
          }
        }
      }
      else {
        temp_v0 = FUN_00163e84(0);
        if (temp_v0 != 0) {
          FUN_004f8f08(DAT_00573808);
          FUN_0014aa78();
          FUN_003eb26c();
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          return;
        }
      }
    }
    else {
      temp_v0 = FUN_004ab6b4(DAT_0057a9c8);
      if ((temp_v0 != 0) &&
         ((temp_v0 = FUN_002619e0(), temp_v0 == 0 || (*(unsigned int *)(param_1 + 0xc) >= 0x37)))) {
        FUN_001f4908(0,10,0xff);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        return;
      }
    }
  }
  else {
    temp_v0 = FUN_0013def0(0);
    if (temp_v0 == 3) {
      FUN_00411bb4(param_1);
      FUN_004f5238(DAT_00573808,0,0,9,0,6,0,1,0);
      FUN_004a9d1c(DAT_0057a9c8);
      temp_v0 = FUN_002619e0();
      if (temp_v0 != 0) {
        FUN_00203d04(1);
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      return;
    }
  }
  return;
}
