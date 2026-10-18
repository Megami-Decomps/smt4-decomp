/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011dcb8` (_code @ 0x11dcb8, 0xde bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
} param_1_stack;

/* Supplied declaration required: FUN_0010b250. */
extern unsigned int FUN_001214f8(int, unsigned char *, unsigned int, unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e75fa. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002e7634. */
/* Supplied declaration required: FUN_002ec75c. */
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ec9f4. */
/* Supplied declaration required: FUN_002ee524. */
/* Supplied declaration required: FUN_002ee54c. */
extern int FUN_00301e8c(unsigned int, int, unsigned char *);
/* Supplied declaration required: FUN_00302f28. */
/* Supplied declaration required: FUN_00303038. */
/* Supplied declaration required: FUN_00303088. */
extern unsigned int FUN_00303146(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_003031e4. */
/* Supplied declaration required: FUN_00310dc6. */
extern unsigned int FUN_00310e4e(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00310e5e. */


void FUN_0011dcb8(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [32];
  unsigned char temp_v4 [32];
  unsigned char temp_v5 [24];
  unsigned char temp_v6 [28];
  unsigned char temp_v7 [8];
  unsigned char temp_v8 [8];
  
  if (*(char *)(param_1 + 0x90) == '\x02') {
    FUN_002e7634(temp_v3);
    temp_v0 = FUN_00301e8c(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x14),
                         param_1 + 0xf8,temp_v3);
    if (temp_v0 == 0) {
      FUN_00310e5e(param_1,3);
      FUN_002ec9f4(temp_v3);
      return;
    }
    FUN_002ec75c(temp_v6);
    FUN_002e7634(temp_v4);
    FUN_002ee524(temp_v5,temp_v3);
    temp_v1 = FUN_00310e4e(temp_v6,0x20);
    FUN_00310dc6(temp_v5,temp_v1,0x100);
    FUN_003031e4(temp_v5,&temp_v2);
    FUN_00303038(temp_v5,temp_v4);
    FUN_00302f28(temp_v7);
    FUN_00303088(temp_v7);
    temp_v0 = FUN_002e760a(0x58);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_00303146(temp_v8,temp_v7);
      temp_v1 = FUN_001214f8(temp_v0,temp_v4,*(unsigned int *)(param_1 + 0x70),temp_v2,temp_v6,
                           temp_v1);
    }
    FUN_0010b250(*(unsigned int *)(param_1 + 0x6c),temp_v2,temp_v1);
    **(unsigned int **)(param_1 + 0x78) = temp_v1;
    FUN_002e75fa(temp_v1);
    FUN_002ee54c(temp_v5);
    FUN_002ec9f4(temp_v4);
    FUN_002ec890(temp_v6);
    FUN_002ec9f4(temp_v3);
  }
  FUN_00310e5e(param_1,*(unsigned char *)(param_1 + 0x90));
  return;
}
