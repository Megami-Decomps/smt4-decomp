/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037116c` (_code @ 0x37116c, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229fc0(int);
int FUN_00268250(int, unsigned int, int, int, int);
int FUN_002bf464(void);
int FUN_00318d6c(void);
int FUN_00342010(void);
int FUN_0035b304(void);
int FUN_0037b450(void);
int FUN_003a76a8(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0057f6be; /* 0x57f6be */
extern unsigned short DAT_0057f6c2; /* 0x57f6c2 */
extern int DAT_0057f6c4; /* 0x57f6c4 */

extern int jobGetWork(void);
extern int FUN_00213cfc(void);
/* Supplied declaration required: FUN_00229fc0. */
/* Supplied declaration required: FUN_00268250. */
extern int FUN_002a60f8(void);
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: FUN_00318d6c. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003a76a8. */


unsigned int FUN_0037116c(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = jobGetWork();
  temp_v1 = *(int *)(temp_v0 + 4);
  if (temp_v1 != 0xc) {
    if (temp_v1 != 0xd) {
      if (temp_v1 != 0xe) {
        return 0;
      }
      temp_v0 = FUN_00213cfc();
      if (temp_v0 != 0) {
        FUN_0035b304();
        FUN_00229fc0(0);
      }
      FUN_003a76a8(1);
      FUN_0037b450();
      FUN_00318d6c();
      DAT_0057f6be = 1;
      return 0xffffffff;
    }
    temp_v1 = FUN_002a60f8();
    if (temp_v1 != 1) {
      if (DAT_0057f6c4 + 1 < 8) {
        DAT_0057f6c4 = DAT_0057f6c4 + 1;
        return 0;
      }
      DAT_0057f6c2 = DAT_0057f6c2 + 1;
      if (DAT_0057f6c2 >= 3) {
        DAT_0057f6c2 = 0;
      }
      DAT_0057f6c4 = 0;
      return 0;
    }
    temp_v2 = 0xe;
  }
  else {
    FUN_002bf464();
    FUN_00342010();
    FUN_003a76a8(0);
    FUN_00268250(0,*(unsigned int *)(temp_v0 + 0x14),0,0,0);
    temp_v2 = 0xd;
  }
  *(unsigned int *)(temp_v0 + 4) = temp_v2;
  return 0;
}

} /* extern "C" */
