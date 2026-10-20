#include "romwright_types.h"

extern "C" {

int FUN_0013dd78(unsigned int);
int FUN_001836b0(unsigned int);
int asdMemFree(...);
int FUN_00222104(void);
int FUN_00222434(void);
int FUN_002b2f08(unsigned int);
int FUN_002ce8d8(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0013dd78. */
/* Supplied declaration required: FUN_001836b0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_00222104. */
/* Supplied declaration required: FUN_00222434. */
/* Supplied declaration required: FUN_002b2f08. */
/* Supplied declaration required: FUN_002ce8d8. */


void FUN_002b40ec(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (param_1[0xe] != 0) {
    temp_v0 = 0;
    if (param_1[0x13] != 0) {
      temp_v1 = *(unsigned int *)(param_1[0x13] + 8);
    }
    else {
      temp_v1 = *param_1;
    }
    for (temp_v0 = 0; temp_v0 < temp_v1; temp_v0 = temp_v0 + 1) {
      FUN_0013dd78(*(unsigned int *)(param_1[0xd] + temp_v0 * 4));
    }
    asdMemFree(param_1[0xe]);
  }
  if (param_1[0x10] != 0) {
    temp_v0 = 0;
    if (param_1[0x13] != 0) {
      temp_v1 = *(unsigned int *)(param_1[0x13] + 8);
    }
    else {
      temp_v1 = *param_1;
    }
    for (temp_v0 = 0; temp_v0 < temp_v1; temp_v0 = temp_v0 + 1) {
      FUN_001836b0(*(unsigned int *)(param_1[0xf] + temp_v0 * 4));
    }
    asdMemFree(param_1[0x10]);
  }
  if (param_1[0x11] != 0) {
    FUN_00222104();
  }
  if (param_1[0x12] != 0) {
    FUN_00222434();
  }
  if ((*(unsigned char *)((int)param_1 + 0xe) & 1) != 0) {
    FUN_002b2f08(param_1[0x13]);
  }
  if (param_1[0x14] != 0) {
    FUN_002ce8d8();
  }
  asdMemFree(param_1);
  return;
}

} /* extern "C" */
