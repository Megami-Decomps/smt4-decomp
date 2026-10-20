/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a334c` (_code @ 0x2a334c, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);
int scrGetArg(...);
int FUN_00282a08(void);
int FUN_002c76c0(int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char g_messageMain; /* 0x57f588 */

/* Supplied declaration required: FUN_0021bdac. */
/* Supplied declaration required: scrGetArg. */
/* Supplied declaration required: FUN_00282a08. */
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: FUN_002c76c0. */
extern unsigned int scrGetCommandFrame(void);


void FUN_002a334c(void)

{
/* irregular: 1 goto(s); 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = scrGetArg();
  temp_v1 = scrGetArg(1);
  if (temp_v1 != 0xd) {
    FUN_00282a08();
    return;
  }
  if (temp_v0 != 0xb) {
    if (temp_v0 < 0xc) {
      switch(temp_v0) {
      default:
        FUN_00282a08();
        return;
      case 1:
      case 2:
      case 3:
      case 6:
      case 7:
      case 8:
      case 10:
        goto LAB_002a33e8;
      }
    }
    if (temp_v0 != 0x28) {
      if (temp_v0 < 0x29) {
        if (!((temp_v0 == 0xf || temp_v0 == 0x12) || temp_v0 == 0x19)) {
          FUN_00282a08();
          return;
        }
      }
      else if (!((temp_v0 == 0x2a || temp_v0 == 0x47) || temp_v0 == 0x49)) {
        FUN_00282a08();
        return;
      }
    }
  }
LAB_002a33e8:
  FUN_002c76c0(0);
  if ((*(int *)((unsigned char *)&g_messageMain + 0x4)) != 0) {
    *(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x4)) + 0x19c5) = 0x15;
  }
  temp_v2 = FUN_002ba85c();
  temp_v3 = scrGetArg(0);
  temp_v4 = scrGetCommandFrame();
  FUN_0021bdac(temp_v2,temp_v3,temp_v4,6,1,0);
  return;
}

} /* extern "C" */
