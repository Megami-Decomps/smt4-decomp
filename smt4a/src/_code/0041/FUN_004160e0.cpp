#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int FUN_002a1ca0(unsigned int);
int FUN_002e3328(unsigned int *);
int FUN_002e3494(unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char g_filter4PolyBaseVtable; /* 0x557bf0 */
extern unsigned char DAT_00557cd8; /* 0x557cd8 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_002a1ca0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_002e3494. */


void FUN_004160e0(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_00557cd8;
  if (param_1[0x19] != 0) {
    FUN_002e3494(param_1[0x19]);
    param_1[0x19] = 0;
  }
  *param_1 = (unsigned int)&g_filter4PolyBaseVtable;
  if (param_1[2] != 0) {
    FUN_002a1ca0(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[1] != 0) {
    asdMemFree(param_1[1]);
    param_1[1] = 0;
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))(param_1[5]);
    param_1[5] = 0;
  }
  FUN_002e3328(param_1);
  return;
}

} /* extern "C" */
