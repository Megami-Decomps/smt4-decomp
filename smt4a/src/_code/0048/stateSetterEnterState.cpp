/* NON_MATCHING: romwright 0.5.0 decompilation of `stateSetterEnterState` (_code @ 0x4853fc, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ifTouchRegionRemove(void);
int sysPlaySe(int);
int __aeabi_memset4(int, int, unsigned int);
int scrScriptProcessStartEntry(unsigned int, int);
int obj04Finish(void);

/* Supplied declaration required: ifTouchRegionRemove. */
extern unsigned short FUN_001643b4(unsigned int, int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: __aeabi_memset4. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: obj04Finish. */


void stateSetterEnterState(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  
  *(unsigned int *)(param_1 + 0xc) = 0;
  temp_v1 = *(char *)(param_1 + 1);
  *(char *)(param_1 + 1) = (char)param_2;
  if (param_2 == 2) {
    if (0 < *(short *)(param_1 + 0x55c)) {
      temp_v3 = 0;
      do {
        ifTouchRegionRemove();
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(short *)(param_1 + 0x55c));
      __aeabi_memset4(param_1 + 0x438,0x124,0xffffffff);
      *(unsigned short *)(param_1 + 0x55c) = 0;
    }
    temp_v3 = 0;
    do {
      temp_v2 = FUN_001643b4(0x23,temp_v3 + 0x56);
      temp_v0 = temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      *(unsigned short *)(param_1 + temp_v0 + 0x43e) = temp_v2;
      *(short *)(param_1 + 0x55c) = *(short *)(param_1 + 0x55c) + 1;
    } while (temp_v3 < 0x5a);
    temp_v3 = 0;
    do {
      temp_v2 = FUN_001643b4(0x23,temp_v3 + 0xc6);
      temp_v0 = temp_v3 * 2;
      temp_v3 = temp_v3 + 1;
      *(unsigned short *)(param_1 + temp_v0 + 0x54e) = temp_v2;
      *(short *)(param_1 + 0x55c) = *(short *)(param_1 + 0x55c) + 1;
    } while (temp_v3 < 4);
    if (temp_v1 != '\x04' && temp_v1 != '\x05') {
      sysPlaySe(*(unsigned short *)(param_1 + 0x55e));
    }
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x26c),0);
  }
  if (param_2 == 4 || param_2 == 5) {
    obj04Finish();
    *(unsigned char *)(param_1 + 0x270) = 0;
  }
  return;
}

} /* extern "C" */
