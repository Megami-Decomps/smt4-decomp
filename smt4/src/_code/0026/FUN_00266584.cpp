/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00266584` (_code @ 0x266584, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00263cb8(int, int, unsigned char *, int, int, unsigned int, unsigned int, unsigned int, int, int, int, int, int, int, int, int, unsigned int, int, int);
int FUN_0027b65c(unsigned int, int);
int FUN_00284838(void);
int FUN_00297a00(void);

/* stack frame of param_1: 13 slot(s), 52 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_1_stack;

extern unsigned char DAT_004043b8; /* 0x4043b8 */
extern int DAT_00447060; /* 0x447060 */

/* Supplied declaration required: FUN_00263cb8. */
/* Supplied declaration required: FUN_0027b65c. */
/* Supplied declaration required: FUN_00284838. */
/* Supplied declaration required: FUN_00297a00. */
extern int FUN_002c09d0(unsigned int);


void FUN_00266584(unsigned int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  FUN_00297a00();
  FUN_0027b65c(param_1,0);
  FUN_00284838();
  temp_v0 = DAT_00447060;
  temp_v1 = FUN_002c09d0(0x261);
  if ((temp_v1 != 0) && (*(int *)(temp_v0 + 0x40) == 0x65)) {
    temp_v2 = 0;
    do {
      temp_v0 = temp_v2 * 0x18;
      FUN_00263cb8(0,0,&DAT_004043b8,0x3c,0x27,0xffffffff,*(unsigned int *)(temp_v0 + 0x447368) & 0xff,
                   *(unsigned int *)(temp_v0 + 0x44736c) & 0xff,0,0,0,0,0,0,0,0,
                   *(unsigned int *)(temp_v0 + 0x447364),0,0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x10);
  }
  return;
}

} /* extern "C" */
