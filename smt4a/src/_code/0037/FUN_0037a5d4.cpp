/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a5d4` (_code @ 0x37a5d4, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001566a8(int, unsigned int, int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_00588fcc; /* 0x588fcc */
extern unsigned char DAT_0061978c; /* 0x61978c */
extern int DAT_0061996c; /* 0x61996c */
extern unsigned char DAT_00619970; /* 0x619970 */

extern unsigned int FUN_001029da(int);
/* Supplied declaration required: FUN_001566a8. */
extern int FUN_002deb84(void);


unsigned int FUN_0037a5d4(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 != 0) {
    if (DAT_00588fcc >= 4) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)(&DAT_0061978c + DAT_00588fcc * 0x78);
    }
    if (*pcVar2 != '\x02') {
      return 0;
    }
  }
  else if (((param_1 < 0x10) && (DAT_0061996c != 0)) &&
          (temp_v0 = DAT_0061996c + param_1 * 0xc, temp_v0 != 0)) {
    temp_v3 = DAT_00619970 | 4;
    temp_v1 = FUN_001029da(temp_v0);
    temp_v2 = 1;
    FUN_001566a8(1,temp_v1,*(unsigned short *)(temp_v0 + 10) & 0xff,temp_v3,1);
    DAT_00588fcc = temp_v2;
    if (temp_v2 != 0xffffffff) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
