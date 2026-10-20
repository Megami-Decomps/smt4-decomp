/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011af14` (_code @ 0x11af14, 0x76 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9318(unsigned char [8]);
int FUN_002e9598(unsigned int, unsigned char [8]);
int FUN_002e9ec8(int, unsigned int);
int FUN_002ec890(unsigned char [24]);
int FUN_002f6be2(int, int *);
int FUN_002f6bf0(int);
int FUN_002fa794(unsigned char [8], unsigned char [24]);
int FUN_00302058(unsigned char [24], unsigned int, int);
int FUN_00307020(int, unsigned int);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char DAT_00589540; /* 0x589540 */

extern unsigned int FUN_002e7908(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e9598. */
extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002f6be2. */
/* Supplied declaration required: FUN_002f6bf0. */
/* Supplied declaration required: FUN_002fa794. */
/* Supplied declaration required: FUN_00302058. */
/* Supplied declaration required: FUN_00307020. */


void FUN_0011af14(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned char temp_v3 [24];
  unsigned char temp_v4 [8];
  unsigned char temp_v5 [12];
  int temp_v6;
  unsigned char temp_v7 [12];
  unsigned int temp_v8 [2];
  unsigned char *puVar3;
  
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v2 = 0;
    FUN_002f6be2(param_1 + 0x70,&temp_v2);
    FUN_00302058(temp_v3,*(unsigned int *)(param_1 + 0x6c),temp_v2);
    FUN_002fa794(temp_v4,temp_v3);
    FUN_002e9598(*(unsigned int *)(param_1 + 0x78),temp_v4);
    FUN_002e9318(temp_v4);
    FUN_002ec890(temp_v3);
    FUN_002f6bf0(temp_v2);
    (*(unsigned int *)((unsigned char *)&DAT_00589540 + 0x18)) = *(unsigned int *)(param_1 + 0x6c);
    puVar4 = (unsigned int *)&temp_v6;
    temp_v6 = 0x10001;
    puVar3 = temp_v5;
  }
  else {
    puVar4 = temp_v8;
    temp_v8[0] = 0x80010004;
    puVar3 = temp_v7;
  }
  temp_v1 = FUN_002e7908(puVar3,puVar4);
  FUN_00307020(param_1,temp_v1);
  return;
}

} /* extern "C" */
