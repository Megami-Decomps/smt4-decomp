/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f66f0` (_code @ 0x3f66f0, 0x1fc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003b3160(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_00420740; /* 0x420740 */
extern romwright_code *DAT_0044e990; /* 0x44e990 */
extern romwright_code *DAT_0044e994; /* 0x44e994 */

extern int FUN_003b21e4(int, int);
extern int FUN_003b3030(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003b3160. */


unsigned int FUN_003f66f0(romwright_code *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  int temp_v1;
  
  pcVar1 = param_1;
  if (DAT_0044e990 != (romwright_code *)0x0) {
    pcVar1 = DAT_0044e994;
  }
  if (DAT_0044e990 == (romwright_code *)0x0 || pcVar1 == (romwright_code *)0x0) {
    return 0x12;
  }
  puVar2 = (unsigned int *)(*DAT_0044e990)(8);
  if (puVar2 == (unsigned int *)0x0) {
    return 9;
  }
  puVar3 = (unsigned int *)(*DAT_0044e990)(4);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = (unsigned int)"녨4녈4녤4";
  }
  *puVar2 = (unsigned int)puVar3;
  if (puVar3 != (unsigned int *)0x0) {
    temp_v0 = (*DAT_0044e990)(0x1498);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_003b3030(temp_v0,*puVar2,0);
      *(unsigned char **)(temp_v1 + 0x148c) = &DAT_00420740;
    }
    puVar2[1] = temp_v1;
    if (temp_v1 != 0) {
      *(unsigned int *)(temp_v1 + 0x1494) = param_2;
      *(unsigned int *)(puVar2[1] + 0x1490) = param_3;
      temp_v1 = FUN_003b21e4(puVar2[1],puVar2[1] + 0x148c);
      if (temp_v1 == 0) {
        *(unsigned int **)param_1 = puVar2;
        return 0;
      }
      FUN_003b3160(puVar2[1]);
      (*DAT_0044e994)(puVar2[1]);
      (*DAT_0044e994)(*puVar2);
      (*DAT_0044e994)(puVar2);
      if (temp_v1 == 0x46) {
        return 0xc;
      }
      if (temp_v1 < 0x47) {
        if (temp_v1 != 0x41) {
          if (temp_v1 < 0x42) {
            if (temp_v1 == 2) {
              return 0x10;
            }
            if (temp_v1 >= 3) {
              if (temp_v1 == 3) {
                return 0x11;
              }
              if (temp_v1 == 0x40) {
                return 1;
              }
              return 4;
            }
            if (temp_v1 == 0) {
              return 0;
            }
            if (temp_v1 == 1) {
              return 3;
            }
            return 4;
          }
          if (temp_v1 == 0x42) {
            return 5;
          }
          if (temp_v1 != 0x43) {
            if (temp_v1 == 0x44) {
              return 9;
            }
            if (temp_v1 != 0x45) {
              return 4;
            }
          }
          return 6;
        }
      }
      else if (temp_v1 < 0x4c) {
        switch(temp_v1) {
        case 0x47:
          return 0xe;
        case 0x48:
          return 0xf;
        case 0x49:
          return 6;
        }
      }
      return 4;
    }
    (*DAT_0044e994)(*puVar2);
  }
  (*DAT_0044e994)(puVar2);
  return 9;
}

} /* extern "C" */
