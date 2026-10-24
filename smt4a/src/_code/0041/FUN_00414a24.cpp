/* NON_MATCHING: BLOCKED: Obj557c90's destructor (returns this recovered from the embedded base destructor): needs the member classes at +0xAC (0x30-byte virtual elements) and the base object at +4, and retail keeps empty element-destroy loops (parity-unrolled, count by 8/12/16/184 bytes) for the POD vectors that armcc deletes for any source form tried; the Obj55a800 member's inline destructor has the same vptr-load scheduling difference as _ZN9Obj55a800D1Ev. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b6e2(unsigned int *);
int asdOperatorDeleteArray(...);

typedef int romwright_code(...);
extern unsigned char DAT_0055a808; /* 0x55a808 */

/* Supplied declaration required: FUN_0011b6e2. */
extern int FUN_0011b77c(unsigned int *);
/* Supplied declaration required: asdOperatorDeleteArray. */


int FUN_00414a24(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  unsigned int *puVar6;
  
  *param_1 = (unsigned int)"ﳨOﳠO";
  FUN_0011b6e2(param_1 + 1);
  param_1[0x37] = (unsigned int)&DAT_0055a808;
  puVar6 = (unsigned int *)param_1[0x3b];
  for (puVar5 = (unsigned int *)param_1[0x3a]; puVar5 != puVar6; puVar5 = puVar5 + 0x2e) {
    (**(romwright_code **)*puVar5)(puVar5);
  }
  asdOperatorDeleteArray(param_1[0x3a]);
  asdOperatorDeleteArray(param_1[0x34]);
  temp_v0 = param_1[0x31];
  temp_v3 = param_1[0x32];
  if (temp_v0 >= temp_v3) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = ((int)(temp_v3 - temp_v0) / 0xc) & 1;
  }
  temp_v2 = temp_v1 + 1;
  if (temp_v2 < (int)(temp_v3 - temp_v0) / 0xc + 1) {
    do {
      temp_v2 = temp_v2 + 2;
    } while (temp_v2 < (int)(temp_v3 - temp_v0) / 0xc + 1);
  }
  asdOperatorDeleteArray();
  puVar6 = (unsigned int *)param_1[0x2f];
  for (puVar5 = (unsigned int *)param_1[0x2e]; puVar5 != puVar6; puVar5 = puVar5 + 0x2e) {
    (**(romwright_code **)*puVar5)(puVar5);
  }
  asdOperatorDeleteArray(param_1[0x2e]);
  puVar6 = (unsigned int *)param_1[0x2c];
  for (puVar5 = (unsigned int *)param_1[0x2b]; puVar5 != puVar6; puVar5 = puVar5 + 0xc) {
    (**(romwright_code **)*puVar5)(puVar5);
  }
  asdOperatorDeleteArray(param_1[0x2b]);
  if (0 < (int)(param_1[0x29] - param_1[0x28]) >> 3) {
    for (temp_v2 = (int)(param_1[0x29] - param_1[0x28]) >> 4; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
    }
  }
  asdOperatorDeleteArray();
  temp_v2 = FUN_0011b77c(param_1 + 1);
  return temp_v2 - 4;
}

} /* extern "C" */
