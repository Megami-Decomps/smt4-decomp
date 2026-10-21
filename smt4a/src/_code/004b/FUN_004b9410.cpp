/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b9410` (_code @ 0x4b9410, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(unsigned int, int);
int FUN_001d1438(int, int);
int mapPlaceSet(...);
int FUN_003d54f8(int, int);
int FUN_004a0bac(int, int);
int FUN_004b7128(int);
int FUN_004b7a54(int);

extern int g_mapSelection; /* 0x5f1c98 */

/* Supplied declaration required: asdSequenceRequest. */
/* Supplied declaration required: FUN_001d1438. */
extern int FUN_002802c8(void);
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_004a0bac. */
/* Supplied declaration required: FUN_004b7128. */
/* Supplied declaration required: FUN_004b7a54. */


void FUN_004b9410(int param_1)

{
/* irregular: 7 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (((*(unsigned int *)(param_1 + 0x20) & 0x100) != 0) || (temp_v1 = FUN_002802c8(), temp_v1 == 0)) {
    temp_v2 = *(unsigned int *)(param_1 + 0x20);
    if ((temp_v2 & 0x400000) == 0) {
      if (((((temp_v2 & 0x200000) == 0 && (temp_v2 & 0x40000) == 0) &&
           ((temp_v2 & 0x800000) == 0 && (temp_v2 & 0x4000000) == 0)) &&
          ((temp_v2 & 0x1000000) == 0 && (temp_v2 & 0x2000000) == 0)) &&
         (((temp_v2 & 0x8000000) == 0 && (temp_v2 & 0x20000000) == 0 && ((temp_v2 & 0x10) != 0)))) {
        if ((temp_v2 & 0x80000) != 0) {
          if (g_mapSelection < 100) {
            temp_v3 = 6;
          }
          else {
            temp_v3 = 8;
          }
          asdSequenceRequest(temp_v3,0);
        }
        else {
          if ((temp_v2 & 0x100000) == 0) {
            FUN_004b7a54(param_1);
            FUN_001d1438(param_1 + 0x3c,param_1 + 0x42);
            FUN_004b7128(param_1);
            *(unsigned int *)(param_1 + 0x28) = 2;
            *(unsigned int *)(param_1 + 0x2c) = 0;
            *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffef;
            return;
          }
          temp_v1 = (int)*(short *)(param_1 + 0x42);
          if (temp_v1 >= 100) {
            if (temp_v1 != 100) {
              mapPlaceSet(temp_v1,1,0xffffffff);
            }
            *(unsigned char *)(param_1 + 0x48) = 1;
          }
          else {
            mapPlaceSet(temp_v1,(int)*(short *)(param_1 + 0x44),(int)*(short *)(param_1 + 0x46));
            *(unsigned char *)(param_1 + 0x49) = 1;
          }
        }
      }
      *(unsigned int *)(param_1 + 0x28) = 0x11;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    temp_v0 = *(short *)(param_1 + 0x1134) + 1;
    *(short *)(param_1 + 0x1134) = temp_v0;
    if (temp_v0 >= 0x1e) {
      FUN_004a0bac(0,1);
      FUN_003d54f8(0,10);
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffbfffff;
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}

} /* extern "C" */
