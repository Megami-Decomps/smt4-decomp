/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001817b8` (_code @ 0x1817b8, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int DAT_005b4070; /* 0x5b4070 */
extern unsigned char DAT_00640518; /* 0x640518 */
extern unsigned char DAT_00640534; /* 0x640534 */

/* Supplied declaration required: FUN_0019a534. */
extern int FUN_0019ad80(unsigned char *);
extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


int FUN_001817b8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_4 == 0) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 8;
    switch(param_2) {
    case 0x100:
      temp_v0 = 4;
      break;
    case 0x101:
      temp_v0 = 0x80;
      break;
    case 0x103:
      temp_v0 = 0x40;
      break;
    case 0x104:
    case 0x105:
      temp_v0 = 0x10;
    }
    if (param_5 == 0) {
      temp_v0 = -temp_v0;
    }
    if (param_1 != 0x100) {
      if (param_1 != 0x10000) {
        if (param_1 == 0x20000) {
          temp_v0 = FUN_0019ad80(&DAT_00640518);
          return temp_v0;
        }
        if (param_1 != 0x30000) {
          return 0;
        }
        temp_v0 = FUN_0019ad80(&DAT_00640534);
        return temp_v0;
      }
      temp_v2 = DAT_005b4070 + 0x88;
      temp_v1 = DAT_005b4070 + 0xe0;
      nn_os_CriticalSection_Enter(temp_v1);
      temp_v0 = nn_fnd_ExpHeapBase_Allocate(temp_v2,param_4,temp_v0,0,0,0);
      nn_os_CriticalSection_Leave(temp_v1);
    }
    else {
      temp_v2 = DAT_005b4070 + 0x1c;
      temp_v1 = DAT_005b4070 + 0x74;
      nn_os_CriticalSection_Enter(temp_v1);
      temp_v0 = nn_fnd_ExpHeapBase_Allocate(temp_v2,param_4,temp_v0,0,0,0);
      nn_os_CriticalSection_Leave(temp_v1);
    }
    if (temp_v0 == 0) {
      FUN_0019a534();
    }
  }
  return temp_v0;
}
