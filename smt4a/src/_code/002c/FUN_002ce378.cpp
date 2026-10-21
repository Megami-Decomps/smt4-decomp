/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ce378` (_code @ 0x2ce378, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192608(void);
int equipmentGetCappedUpgradeBonuses(int, unsigned char [12]);

/* stack frame of param_2: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp18; /* 0x18: local_18 */
    unsigned short sp28; /* 0x28: local_28 */
} param_2_stack;

/* Supplied declaration required: FUN_00192608. */
/* Supplied declaration required: equipmentGetCappedUpgradeBonuses. */


int FUN_002ce378(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [12];
  short temp_v4;
  unsigned char temp_v5 [12];
  short temp_v6;
  
  temp_v0 = (unsigned int)*param_1;
  FUN_00192608();
  temp_v1 = (unsigned int)*param_2;
  FUN_00192608();
  equipmentGetCappedUpgradeBonuses(*param_1,temp_v3);
  equipmentGetCappedUpgradeBonuses(*param_2,temp_v5);
  temp_v2 = ((int)temp_v6 + (int)*(char *)(temp_v1 + 0x35)) -
          ((int)temp_v4 + (int)*(char *)(temp_v0 + 0x35));
  if (temp_v2 == 0) {
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x20) - (unsigned int)*(unsigned short *)(temp_v1 + 0x20);
  }
  return temp_v2;
}

} /* extern "C" */
