/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dc19c` (_code @ 0x3dc19c, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297468(...);
int textFormatBuffer(...);
int libc_strcpy(...);
int asdMemFree(...);
int memClear(...);

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int FUN_0024a808(int);
extern int FUN_002522e0(unsigned char *, unsigned int);
extern unsigned int btlGetMainState(void);
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */
extern int FUN_003397b8(unsigned int, unsigned int);


unsigned int FUN_003dc19c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [128];
  unsigned char temp_v4 [128];
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  
  temp_v5 = btlGetMainState();
  temp_v2 = 0;
  do {
    temp_v6 = 0;
    temp_v7 = 0;
    temp_v8 = 0;
    temp_v9 = 0;
    temp_v0 = FUN_003397b8(temp_v5,*(unsigned int *)(*(int *)(param_1 + 0x3054) + temp_v2 * 8 + 0x7c));
    libc_strcpy(&temp_v6,temp_v0 + 4);
    temp_v0 = param_1 + temp_v2 * 0x8c;
    *(unsigned char *)(temp_v0 + 0x3070) = 0xff;
    memClear(temp_v0 + 0x3078,0x80);
    if (*(int *)(temp_v0 + 0x3074) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x3074) = 0;
    }
    *(unsigned char *)(temp_v0 + 0x30f8) = 0;
    memClear(temp_v3,0x80);
    memClear(temp_v4,0x80);
    textFormatBuffer(temp_v4,"battle/effect/%s.eft",&temp_v6);
    libc_strcpy(temp_v3,temp_v4);
    temp_v1 = FUN_002522e0(temp_v3,0x2f);
    libc_strcpy(temp_v0 + 0x3078,temp_v1 + 1);
    temp_v1 = FUN_0024a808(temp_v0 + 0x3078);
    if (temp_v1 == 0xff) {
      FUN_00297468(temp_v3,temp_v0 + 0x3074,0);
      *(unsigned char *)(temp_v0 + 0x30f8) = *(unsigned char *)(temp_v0 + 0x30f8) | 1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 3);
  return 1;
}

} /* extern "C" */
