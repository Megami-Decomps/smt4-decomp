/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b24d8` (_code @ 0x2b24d8, 0x16c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00145008(unsigned int *);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int DAT_00465174; /* 0x465174 */
extern unsigned int DAT_004e4100; /* 0x4e4100 */
extern unsigned int DAT_004e411c; /* 0x4e411c */

/* Supplied declaration required: FUN_00145008. */
extern unsigned int nn_fnd_ExpHeapBase_Allocate(unsigned int, unsigned int, int, unsigned char, int, unsigned char);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int *
FUN_002b24d8(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  if (param_4 == 0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    temp_v1 = 8;
    puVar1 = (unsigned int *)0x0;
    switch(param_2) {
    case 0x100:
      temp_v1 = 4;
      break;
    case 0x101:
      temp_v1 = 0x80;
      break;
    case 0x103:
      temp_v1 = 0x40;
      break;
    case 0x104:
    case 0x105:
      temp_v1 = 0x10;
    }
    if (param_5 == 0) {
      temp_v1 = -temp_v1;
    }
    if (param_1 != 0x100) {
      if (param_1 != 0x10000) {
        if (param_1 != 0x20000) {
          if (param_1 == 0x30000) {
            puVar1 = &DAT_004e411c;
            FUN_00145008(&DAT_004e411c);
          }
        }
        else {
          puVar1 = &DAT_004e4100;
          FUN_00145008(&DAT_004e4100);
        }
      }
      else {
        temp_v2 = DAT_00465174 + 0x88;
        temp_v0 = DAT_00465174 + 0xe0;
        nn_os_CriticalSection_Enter(temp_v0);
        puVar1 = (unsigned int *)nn_fnd_ExpHeapBase_Allocate(temp_v2,param_4,temp_v1,0,0,0);
        nn_os_CriticalSection_Leave(temp_v0);
      }
    }
    else {
      temp_v2 = DAT_00465174 + 0x1c;
      temp_v0 = DAT_00465174 + 0x74;
      nn_os_CriticalSection_Enter(temp_v0);
      puVar1 = (unsigned int *)nn_fnd_ExpHeapBase_Allocate(temp_v2,param_4,temp_v1,0,0,0);
      nn_os_CriticalSection_Leave(temp_v0);
    }
  }
  return puVar1;
}

} /* extern "C" */
