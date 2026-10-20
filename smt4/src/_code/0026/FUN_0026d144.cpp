/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026d144` (_code @ 0x26d144, 0x290 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002621b4(...);
int FUN_00298d28(int, unsigned int);
int FUN_0029e908(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int g_btlScriptUnit; /* 0x43427c */
extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_002621b4. */
extern int btlUnitGet(void);
extern int btlGetMainState(void);
/* Supplied declaration required: FUN_00298d28. */
extern int FUN_0029a924(unsigned short);
extern int FUN_0029a9d4(unsigned short, unsigned int);
/* Supplied declaration required: FUN_0029e908. */
extern int FUN_0029efa8(unsigned int);
extern int FUN_002a8764(void);


void FUN_0026d144(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v5 = DAT_0043dcf0;
  temp_v6 = param_4;
  temp_v2 = FUN_002a8764();
  temp_v6 = 0;
  if (((*(short *)(temp_v5 + 0x36) == 0x7d) && (temp_v3 = btlGetMainState(), temp_v3 != 0)) &&
     (g_btlScriptUnit != 0)) {
    temp_v3 = btlUnitGet();
    if ((*(int *)(temp_v3 + 0x28) != 0) && (*(short *)(*(int *)(temp_v3 + 0x28) + 0x14c) == 8))
    goto LAB_0026d25c;
  }
  if (*(short *)(temp_v5 + 0x38) >= 0) {
    temp_v3 = 0;
    do {
      if ((int)*(char *)(temp_v2 + temp_v3 + 0x9108) == (int)*(short *)(temp_v5 + 0x38)) {
        temp_v4 = FUN_0029a924(*(unsigned short *)(temp_v5 + 0x36));
        *(int *)(*(int *)(temp_v5 + temp_v3 * 4 + 0x6cc) + 0x44) = -temp_v4;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v3 = 0;
    do {
      if (*(int *)(temp_v5 + temp_v3 * 8 + 0x738) == (int)*(short *)(temp_v5 + 0x38)) {
        temp_v4 = FUN_0029a924(*(unsigned short *)(temp_v5 + 0x36));
        *(int *)(*(int *)(temp_v5 + temp_v3 * 4 + 0x6d8) + 0x44) = -temp_v4;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
  }
  else {
    temp_v3 = FUN_0029a9d4(*(unsigned short *)(temp_v5 + 0x36),1);
    *(int *)(*(int *)(temp_v5 + 0x6c8) + 0x44) = -temp_v3;
  }
LAB_0026d25c:
  if (param_2 != 0) {
    if (*(char *)(temp_v5 + 0x42) != '\0') {
      temp_v2 = FUN_0029e908();
      temp_v3 = FUN_0029efa8(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4;
    }
    else {
      temp_v3 = FUN_0029efa8(param_1);
      temp_v4 = *(int *)(temp_v5 + 0x2c);
      temp_v2 = FUN_0029e908(param_1);
      temp_v2 = temp_v3 * 4 + temp_v4 * 0xc + temp_v2;
    }
  }
  else {
    temp_v3 = FUN_0029efa8(param_1);
    if (temp_v3 < 1) {
      temp_v3 = FUN_0029e908(param_1);
      if (temp_v3 != 0) {
        temp_v0 = *(unsigned short *)(temp_v5 + 0x36);
        temp_v2 = (int)*(char *)(temp_v2 + temp_v3 + 0x9107);
        temp_v1 = *(short *)(temp_v5 + 0x38);
      }
      else {
        temp_v0 = *(unsigned short *)(temp_v5 + 0x36);
        temp_v1 = *(short *)(temp_v5 + 0x38);
        temp_v2 = -1;
      }
      FUN_002621b4((int)temp_v1,temp_v2,temp_v0,&temp_v6);
      temp_v5 = temp_v5 + temp_v3 * 4;
      *(unsigned int *)(*(int *)(temp_v5 + 0x6c8) + 0x40) = temp_v6;
      FUN_00298d28(temp_v6,*(unsigned int *)(*(int *)(temp_v5 + 0x6c8) + 0x44));
      return;
    }
    if (*(char *)(temp_v5 + 0x42) != '\0') {
      temp_v2 = FUN_0029e908();
      temp_v3 = FUN_0029efa8(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4;
    }
    else {
      temp_v3 = FUN_0029efa8(param_1);
      temp_v4 = *(int *)(temp_v5 + 0x2c);
      temp_v2 = FUN_0029e908(param_1);
      temp_v2 = temp_v2 + temp_v3 * 4 + temp_v4 * 0xc;
    }
    temp_v2 = temp_v2 - 4;
  }
  FUN_002621b4((int)*(short *)(temp_v5 + 0x38),*(unsigned int *)(temp_v5 + temp_v2 * 8 + 0x738),
               *(unsigned short *)(temp_v5 + 0x36),&temp_v6);
  temp_v5 = temp_v5 + temp_v2 * 4;
  *(unsigned int *)(*(int *)(temp_v5 + 0x6d8) + 0x40) = temp_v6;
  FUN_00298d28(temp_v6,*(unsigned int *)(*(int *)(temp_v5 + 0x6d8) + 0x44));
  return;
}

} /* extern "C" */
