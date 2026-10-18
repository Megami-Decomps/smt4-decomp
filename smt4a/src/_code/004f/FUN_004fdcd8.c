/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fdcd8` (_code @ 0x4fdcd8, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_004fdde4; /* 0x4fdde4 */
extern unsigned char LAB_004fddec; /* 0x4fddec */
extern int DAT_005712f0; /* 0x5712f0 */
extern unsigned int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_004102d8. */
extern int FUN_004f5710(unsigned int, int);


int FUN_004fdcd8(short param_1,unsigned int param_2,unsigned short param_3,int param_4,unsigned short param_5,
                unsigned short param_6,unsigned int param_7,int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_004f5710(DAT_00573808,param_8);
  if (temp_v0 != 0) {
    temp_v0 = DAT_005712f0;
    FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
    *(unsigned char *)(temp_v0 + 4) = 4;
  }
  else {
    if (param_4 < 0x6d) {
      temp_v0 = DAT_005712f0;
      FUN_004102d8(DAT_005712f0,(int)param_1,0,param_2);
      *(unsigned char *)(temp_v0 + 4) = 1;
      *(unsigned short *)(temp_v0 + 0x24) = param_3;
      *(short *)(temp_v0 + 0x26) = (short)param_4;
      *(unsigned short *)(temp_v0 + 0x48) = param_5;
      *(unsigned short *)(temp_v0 + 0x4a) = param_6;
      *(unsigned int *)(temp_v0 + 0x28) = param_7;
      *(unsigned int *)(temp_v0 + 0x34) = 0;
      *(unsigned int *)(temp_v0 + 0x38) = 0;
      *(unsigned int *)(temp_v0 + 0x4c) = 0;
      *(unsigned int *)(temp_v0 + 0x50) = 1;
      if (param_8 != 0) {
        puVar2 = &LAB_004fdde4;
        FUN_0030ea58(&LAB_004fdde4,param_8);
        if (puVar2 != (unsigned char *)0x0) {
          puVar2 = &LAB_004fddec;
          FUN_0030ea58(&LAB_004fddec,param_8);
          if (puVar2 != (unsigned char *)0x0) {
            return temp_v0;
          }
        }
        *(unsigned char *)(temp_v0 + 0x20) = 1;
      }
      return temp_v0;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
