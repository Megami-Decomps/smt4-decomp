/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e2848` (_code @ 0x2e2848, 0x24c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUnique(int);
int FUN_002a4844(...);
int FUN_002a4914(...);
int FUN_002a4964(...);

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
} param_8_stack;

/* Supplied declaration required: eventQueueAddUnique. */
extern short FUN_002618c8(void);
extern short FUN_002618e0(void);
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002a4844. */
extern int FUN_002a4860(unsigned int);
extern int FUN_002a4878(unsigned int);
extern int FUN_002a4894(unsigned int);
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
extern int widgetSubCallIfVisible(unsigned int);
extern int objectApplyIfUnblocked(unsigned int);
extern short __aeabi_idivmod(int);


unsigned int
FUN_002e2848(unsigned int param_1,unsigned int param_2,int param_3,short param_4,short param_5,
            short param_6,int param_7,int param_8)

{
/* irregular: 6 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  
  temp_v1 = FUN_00284140((int)param_5);
  temp_v2 = FUN_00284140((int)param_6);
  temp_v3 = FUN_00284140((int)param_4);
  if (!(temp_v1 == 6 || temp_v1 == 2)) {
    if (temp_v2 != 6 && temp_v2 != 2) {
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v1 = objectApplyIfUnblocked(param_1);
      temp_v0 = FUN_002618e0();
      temp_v2 = (int)(short)(temp_v0 - (short)((unsigned int)param_2 >> 0x10));
      if (param_7 != 0) {
        temp_v2 = widgetSubCallIfVisible(param_1);
        temp_v0 = FUN_002618c8();
        temp_v3 = (int)(short)(temp_v0 - (short)param_2);
        temp_v6 = temp_v3 == 0;
        temp_v1 = temp_v5;
        if (-1 < temp_v3) {
          temp_v1 = (int)(short)param_3;
          temp_v6 = temp_v1 == temp_v3;
        }
        if (temp_v6 || (-1 >= temp_v3 || temp_v1 < temp_v3)) {
          return 1;
        }
        temp_v0 = __aeabi_idivmod(temp_v3 * temp_v2);
        FUN_002a4914(param_1,(int)temp_v0);
        return 1;
      }
      temp_v6 = temp_v2 == 0;
      temp_v3 = temp_v4;
      if (-1 < temp_v2) {
        temp_v3 = param_3 >> 0x10;
        temp_v6 = temp_v3 == temp_v2;
      }
      if (temp_v6 || (-1 >= temp_v2 || temp_v3 < temp_v2)) {
        return 1;
      }
      temp_v0 = __aeabi_idivmod(temp_v2 * temp_v1);
      temp_v1 = FUN_002a4894(param_1);
      temp_v2 = FUN_002a4860(param_1);
      if (temp_v2 + temp_v1 != (int)temp_v0 && param_8 != 0) {
        eventQueueAddUnique(0x100020d);
      }
      FUN_002a4964(param_1,(int)temp_v0);
      return 1;
    }
    temp_v1 = FUN_002a4860(param_1);
    temp_v2 = FUN_002a4894(param_1);
    temp_v1 = temp_v2 + temp_v1 + 1;
    if (param_7 != 0) {
      temp_v1 = FUN_002a4844();
      temp_v2 = FUN_002a4878(param_1);
      temp_v2 = temp_v2 + temp_v1 + 1;
      temp_v1 = widgetSubCallIfVisible(param_1);
      if (temp_v1 <= temp_v2) {
        return 1;
      }
      FUN_002a4914(param_1,temp_v2);
    }
    else {
      temp_v2 = objectApplyIfUnblocked(param_1);
      if (temp_v2 <= temp_v1) {
        return 1;
      }
      FUN_002a4964(param_1,temp_v1);
    }
  }
  else {
    temp_v1 = FUN_002a4860(param_1);
    temp_v2 = FUN_002a4894(param_1);
    temp_v2 = temp_v2 + temp_v1;
    if (param_7 != 0) {
      temp_v1 = FUN_002a4844(param_1);
      temp_v2 = FUN_002a4878(param_1);
      temp_v2 = temp_v2 + temp_v1;
    }
    if (temp_v2 - 1 < 0) {
      return 1;
    }
    if (param_7 != 0) {
      FUN_002a4914();
    }
    else {
      FUN_002a4964(param_1);
    }
  }
  if (param_8 != 0) {
    eventQueueAddUnique(0x100020d);
  }
  return 1;
}

} /* extern "C" */
