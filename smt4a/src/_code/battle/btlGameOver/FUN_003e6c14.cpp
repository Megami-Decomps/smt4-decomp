/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6c14` (_code @ 0x3e6c14, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f4908(int, unsigned int, int);
int FUN_002804b0(...);
int FUN_003e6dc8(...);
int FUN_003e71a8(...);
int FUN_004ab854(unsigned int);
int FUN_004fdcd8(int, int, int, int, int, int, int, int);
int FUN_004fddf4(int, int, unsigned int, int, int, unsigned int, int, int, unsigned int);

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned int DAT_005738e0; /* 0x5738e0 */
extern unsigned int DAT_005738e4; /* 0x5738e4 */
extern int DAT_0057a684; /* 0x57a684 */
extern int DAT_0057a688; /* 0x57a688 */
extern unsigned int DAT_0057a68c; /* 0x57a68c */
extern int DAT_0057a690; /* 0x57a690 */
extern unsigned int DAT_0057a694; /* 0x57a694 */
extern int DAT_0057a698; /* 0x57a698 */
extern unsigned int DAT_0057a69c; /* 0x57a69c */
extern unsigned int DAT_0057a6a0; /* 0x57a6a0 */
extern unsigned int DAT_0057a6a4; /* 0x57a6a4 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int FUN_0014aa78(unsigned int);
extern int FUN_0014af84(void);
/* Supplied declaration required: FUN_001f4908. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_003e6dc8. */
/* Supplied declaration required: FUN_003e71a8. */
/* Supplied declaration required: FUN_004ab854. */
/* Supplied declaration required: FUN_004fdcd8. */
/* Supplied declaration required: FUN_004fddf4. */


void FUN_003e6c14(unsigned int *param_1)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  
  if (param_1[2] == DAT_0057a684) {
    FUN_004fdcd8(0,0,0,0,7,0,0xb,0);
    FUN_004ab854(DAT_0057a9c8);
  }
  if (param_1[2] == DAT_0057a698) {
    FUN_004fddf4(0,0,DAT_0057a69c,0x10,0,DAT_0057a6a0,0,2,0xffffffff);
  }
  if (param_1[2] == DAT_0057a688) {
    FUN_001f4908(0,DAT_0057a68c,0xff);
  }
  if (param_1[2] == DAT_0057a690) {
    FUN_001f4908(1,DAT_0057a694,0xff);
  }
  if (DAT_0057a6a4 < (unsigned int)param_1[2]) {
    temp_v1 = FUN_0014aa78(DAT_0057a6a4);
    if ((*(unsigned int *)(temp_v1 + 0x45ac) & DAT_005738e4) == 0 &&
        (DAT_005738e0 & *(unsigned int *)(temp_v1 + 0x45a8)) == 0) {
      *param_1 = 3;
      FUN_002804b0("battle/gameover/gameover.bf",param_1 + 4,0);
      FUN_002804b0("battle/gameover/gameover.mbm",param_1 + 6,0);
      temp_v1 = FUN_0014af84();
      temp_v0 = *(char *)(temp_v1 + 0x27e3d);
      if (temp_v0 != -1) {
        *(char *)(temp_v1 + 0x27e3d) = temp_v0 + '\x01';
      }
      *param_1 = 4;
      FUN_003e6dc8(param_1);
      return;
    }
    *param_1 = 9;
    FUN_003e71a8(param_1);
    return;
  }
  return;
}

} /* extern "C" */
