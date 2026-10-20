/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c55e8` (_code @ 0x3c55e8, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int FUN_001846d0(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
extern int scrGetArg(unsigned int);
extern int FUN_002deb84(void);


unsigned char FUN_003c55e8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    temp_v2 = scrGetArg(0);
    temp_v1 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
    temp_v3 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x14d8;
    FUN_0014e188(temp_v3,4,0xabf9,(*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x194,0xb);
    temp_v4 = temp_v1 + 0x1564;
    FUN_0014e188(temp_v4,4,0xac04,temp_v1 + 0x194,0xb);
    FUN_0014e188(temp_v1 + 0x15f0,4,0xabff,temp_v1 + 0x194,0xb);
    FUN_0014e188(temp_v1 + 0x167c,4,0xac01,temp_v1 + 0x194,0xb);
    temp_v5 = temp_v1 + 0x1708;
    FUN_0014e188(temp_v5,4,0xac01,temp_v1 + 0x194,0xb);
    FUN_0014e188(temp_v1 + 0x1794,4,0xabfe,temp_v1 + 0x194,0xb);
    *(int *)(temp_v1 + 0x19fc) = temp_v2;
    *(unsigned char *)(temp_v1 + 0x19fb) = 1;
    *(unsigned char *)(temp_v1 + 0x19fa) = 1;
    FUN_001846d0(temp_v1 + 0x15f0,0xd);
    FUN_001846d0(temp_v1 + 0x167c,0xe);
    FUN_001846d0(temp_v1 + 0x1794,0x11);
    temp_v2 = *(int *)(temp_v1 + 0x19fc);
    if (temp_v2 != 0) {
      if (temp_v2 != 1) {
        if (temp_v2 != 2) {
          FUN_001846d0(temp_v3,0x15);
          FUN_001846d0(temp_v4,0x18);
          FUN_001846d0(temp_v5,0x1b);
          *(unsigned char *)(temp_v1 + 0x19f9) = 1;
        }
        else {
          FUN_001846d0(temp_v3,0x14);
          FUN_001846d0(temp_v4,0x17);
          FUN_001846d0(temp_v5,0x1a);
          *(unsigned char *)(temp_v1 + 0x19f9) = 1;
        }
      }
      else {
        FUN_001846d0(temp_v3,0x13);
        FUN_001846d0(temp_v4,0x16);
        FUN_001846d0(temp_v5,0x19);
        *(unsigned char *)(temp_v1 + 0x19f9) = 1;
      }
    }
    else {
      *(unsigned char *)(temp_v1 + 0x19f9) = 6;
    }
  }
  return *(char *)(temp_v0 + 0x19fa) == '\0';
}

} /* extern "C" */
