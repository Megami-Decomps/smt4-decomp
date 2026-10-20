/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029f5d8` (_code @ 0x29f5d8, 0x1f8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026ab64(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int);
int flaggedEntrySetValueB(void);
int flaggedEntrySetValueA(unsigned int, int);
int FUN_0029d65c(int);
int eventQueueAddUnique(int);

typedef struct fn_0029f5d8_arg1 fn_0029f5d8_arg1;
struct fn_0029f5d8_arg1 {
    unsigned char pad_0x0[0x8];
    ushort field_0x8; /* +0x8 */
    ushort field_0xa; /* +0xa */
    ushort *field_0xc; /* +0xc */
};

/* stack frame of param_9: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_9_stack;

/* Supplied declaration required: FUN_0026ab64. */
extern int FUN_0028cfbc(unsigned int);
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntrySetValueA. */
extern int FUN_0029d644(unsigned int);
/* Supplied declaration required: FUN_0029d65c. */
extern int FUN_0029e908(unsigned int);
extern int FUN_0029e93c(unsigned int);
extern int FUN_0029efa8(unsigned int);
extern int FUN_0029efc0(unsigned int);
/* Supplied declaration required: eventQueueAddUnique. */


unsigned int
FUN_0029f5d8(unsigned int param_1,fn_0029f5d8_arg1 *param_2,int param_3,unsigned int param_4,
            unsigned int param_5,unsigned int param_6,unsigned char *param_7,int param_8,int param_9)

{
/* irregular: 1 goto(s); 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  
  temp_v8 = 0;
  FUN_0029d65c((int)(short)param_5);
  FUN_0029d65c((int)(short)param_6);
  FUN_0029d65c((int)(short)param_4);
  temp_v0 = 0;
  temp_v7 = -1;
  temp_v2 = FUN_0029d644(param_1);
  temp_v4 = temp_v7;
  if (param_3 != 0) {
    if (param_8 != 0) {
      temp_v2 = FUN_0028cfbc(param_1);
    }
    temp_v6 = 0;
    if (0 < temp_v2) {
      while (temp_v3 = FUN_0029d65c((int)*(short *)(param_3 + temp_v6 * 2)), temp_v3 != 6) {
        temp_v4 = temp_v6;
        if ((temp_v3 == 1 || temp_v3 == 2) || (temp_v6 = temp_v6 + 1, temp_v4 = temp_v7, temp_v2 <= temp_v6))
        goto LAB_0029f684;
      }
      temp_v0 = 1;
      temp_v4 = temp_v7;
    }
  }
LAB_0029f684:
  temp_v2 = FUN_0029e93c(param_1);
  temp_v7 = FUN_0029e908(param_1);
  temp_v6 = FUN_0029efc0(param_1);
  temp_v3 = FUN_0029efa8(param_1);
  if (temp_v4 >= 0) {
    if (param_8 != 0) {
      flaggedEntrySetValueB();
    }
    else {
      flaggedEntrySetValueA(param_1,temp_v4);
    }
    temp_v8 = 1;
  }
  else if (param_2 != (fn_0029f5d8_arg1 *)0x0) {
    (*(unsigned short *)((unsigned char *)&temp_v1 + 0)) = param_2->field_0x8;
    (*(unsigned short *)((unsigned char *)&temp_v1 + 2)) = param_2->field_0xa;
    temp_v8 = param_1;
    FUN_0026ab64(param_1,temp_v1,*(unsigned int *)param_2->field_0xc,param_4,param_5,param_6,param_8,
                 param_9);
  }
  if (param_9 != 0) {
    temp_v4 = FUN_0029e93c(param_1);
    temp_v5 = FUN_0029e908(param_1);
    if (temp_v5 + temp_v4 == temp_v2 + temp_v7) {
      temp_v4 = FUN_0029efc0(param_1);
      temp_v2 = FUN_0029efa8(param_1);
      if (temp_v2 + temp_v4 == temp_v6 + temp_v3) {
        *param_7 = temp_v0;
        return temp_v8;
      }
    }
    eventQueueAddUnique(0x100016c);
  }
  *param_7 = temp_v0;
  return temp_v8;
}

} /* extern "C" */
