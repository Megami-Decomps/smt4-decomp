/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003450d4` (_code @ 0x3450d4, 0x1f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUnique(int);
int FUN_00284140(int);
int FUN_002e2848(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int);
int flaggedEntrySetValueB(void);
int flaggedEntrySetValueA(unsigned int, int);

typedef struct fn_003450d4_arg1 fn_003450d4_arg1;
struct fn_003450d4_arg1 {
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

/* Supplied declaration required: eventQueueAddUnique. */
/* Supplied declaration required: FUN_00284140. */
extern int FUN_002a4844(unsigned int);
extern int FUN_002a4860(unsigned int);
extern int FUN_002a4878(unsigned int);
extern int FUN_002a4894(unsigned int);
/* Supplied declaration required: FUN_002e2848. */
/* Supplied declaration required: flaggedEntrySetValueB. */
/* Supplied declaration required: flaggedEntrySetValueA. */
extern int uiSearchSecondary(unsigned int);
extern int uiSearchPrimary(unsigned int);


unsigned int
FUN_003450d4(unsigned int param_1,fn_003450d4_arg1 *param_2,int param_3,unsigned int param_4,
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
  FUN_00284140((int)(short)param_5);
  FUN_00284140((int)(short)param_6);
  FUN_00284140((int)(short)param_4);
  temp_v0 = 0;
  temp_v7 = -1;
  temp_v2 = uiSearchPrimary(param_1);
  temp_v4 = temp_v7;
  if (param_3 != 0) {
    if (param_8 != 0) {
      temp_v2 = uiSearchSecondary(param_1);
    }
    temp_v6 = 0;
    if (0 < temp_v2) {
      while (temp_v3 = FUN_00284140((int)*(short *)(param_3 + temp_v6 * 2)), temp_v3 != 6) {
        temp_v4 = temp_v6;
        if ((temp_v3 == 1 || temp_v3 == 2) || (temp_v6 = temp_v6 + 1, temp_v4 = temp_v7, temp_v2 <= temp_v6))
        goto LAB_00345180;
      }
      temp_v0 = 1;
      temp_v4 = temp_v7;
    }
  }
LAB_00345180:
  temp_v2 = FUN_002a4844(param_1);
  temp_v7 = FUN_002a4878(param_1);
  temp_v6 = FUN_002a4860(param_1);
  temp_v3 = FUN_002a4894(param_1);
  if (temp_v4 >= 0) {
    if (param_8 != 0) {
      flaggedEntrySetValueB();
    }
    else {
      flaggedEntrySetValueA(param_1,temp_v4);
    }
    temp_v8 = 1;
  }
  else if (param_2 != (fn_003450d4_arg1 *)0x0) {
    (*(unsigned short *)((unsigned char *)&temp_v1 + 0)) = param_2->field_0x8;
    (*(unsigned short *)((unsigned char *)&temp_v1 + 2)) = param_2->field_0xa;
    temp_v8 = param_1;
    FUN_002e2848(param_1,temp_v1,*(unsigned int *)param_2->field_0xc,param_4,param_5,param_6,param_8,
                 param_9);
  }
  if (param_9 != 0) {
    temp_v4 = FUN_002a4844(param_1);
    temp_v5 = FUN_002a4878(param_1);
    if (temp_v5 + temp_v4 == temp_v2 + temp_v7) {
      temp_v4 = FUN_002a4860(param_1);
      temp_v2 = FUN_002a4894(param_1);
      if (temp_v2 + temp_v4 == temp_v6 + temp_v3) {
        *param_7 = temp_v0;
        return temp_v8;
      }
    }
    eventQueueAddUnique(0x100020d);
  }
  *param_7 = temp_v0;
  return temp_v8;
}

} /* extern "C" */
