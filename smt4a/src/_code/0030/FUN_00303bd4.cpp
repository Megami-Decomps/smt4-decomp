/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303bd4` (_code @ 0x303bd4, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned short [200], int);
int aocRecordLookup83(void);

/* stack frame of param_1: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp1B0; /* 0x1b0: local_1b0 */
} param_1_stack;

extern int FUN_00184964(unsigned int, int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: aocRecordLookup83. */
extern int flagValueIsPositive(unsigned int);


unsigned short FUN_00303bd4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned short *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short temp_v3 [200];
  
  temp_v2 = 0;
  sysMemClear(temp_v3,200);
  temp_v1 = 0x3b7;
  do {
    temp_v0 = flagValueIsPositive(temp_v1);
    if (temp_v0 != 0) {
      puVar2 = temp_v3 + temp_v2;
      temp_v2 = temp_v2 + 1;
      *puVar2 = (short)temp_v1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x47f);
  if (temp_v2 != 0 && param_1 != 0) {
    if (param_1 != 1) {
      if (param_1 != 2) {
        if ((param_1 != 3) || (temp_v2 < 1)) {
          return 0;
        }
        aocRecordLookup83();
      }
      else {
        if (temp_v2 < 1) {
          return 0;
        }
        aocRecordLookup83();
      }
      temp_v2 = 0;
    }
    else {
      temp_v2 = FUN_00184964(0,temp_v2 - 1);
    }
    return temp_v3[temp_v2];
  }
  return 0;
}

} /* extern "C" */
