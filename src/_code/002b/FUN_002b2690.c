/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b2690` (_code @ 0x2b2690, 0x16c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern int DAT_00465174; /* 0x465174 */
extern unsigned int DAT_004e4100; /* 0x4e4100 */
extern unsigned int DAT_004e411c; /* 0x4e411c */

/* Supplied declaration required: FUN_00144978. */
/* Supplied declaration required: FUN_002c3a24. */
extern unsigned int *FUN_002c3a44(int, int, int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3aa8. */


unsigned int * FUN_002b2690(int param_1,unsigned int param_2,unsigned int param_3,int param_4,int param_5)

{
/* irregular: 3 native warning(s); review required */
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
            FUN_00144978(&DAT_004e411c);
          }
        }
        else {
          puVar1 = &DAT_004e4100;
          FUN_00144978(&DAT_004e4100);
        }
      }
      else {
        temp_v2 = DAT_00465174 + 0x88;
        temp_v0 = DAT_00465174 + 0xe0;
        FUN_002c3aa8(temp_v0);
        puVar1 = (unsigned int *)FUN_002c3a44(temp_v2,param_4,temp_v1,0,0,0);
        FUN_002c3a24(temp_v0);
      }
    }
    else {
      temp_v2 = DAT_00465174 + 0x1c;
      temp_v0 = DAT_00465174 + 0x74;
      FUN_002c3aa8(temp_v0);
      puVar1 = (unsigned int *)FUN_002c3a44(temp_v2,param_4,temp_v1,0,0,0);
      FUN_002c3a24(temp_v0);
    }
  }
  return puVar1;
}
