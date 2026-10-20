/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_cfg_CTR_IsDebugMode` (_code @ 0x11bd70, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001283e4(int);
int FUN_002bbb2c(int, int);

/* stack frame of void: 3 slot(s), 6 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned char spC; /* 0xc: local_c */
    unsigned char spF; /* 0xf: local_f */
} void_stack;

extern unsigned char LAB_00130000; /* 0x130000 */
extern unsigned char bRam1ff80014; /* 0x1ff80014 */

/* Supplied declaration required: FUN_001283e4. */
extern int FUN_0013a170(unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002bbb2c. */
extern int nn_cfg_CTR_detail_InitializeProperPort(unsigned char *);


unsigned char nn_cfg_CTR_IsDebugMode(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char uStack_10;
  unsigned char temp_v2;
  unsigned char temp_v3 [12];
  
  if ((bRam1ff80014 & 1) == 0) {
    temp_v1 = nn_cfg_CTR_detail_InitializeProperPort(temp_v3);
    if ((temp_v1 < 0) && (temp_v1 < 0)) {
      FUN_002bbb2c(temp_v1,0x11bda4);
    }
    temp_v1 = FUN_0013a170(&uStack_10,4,&LAB_00130000);
    if (temp_v1 < 0) {
      FUN_002bbb2c(temp_v1,0x11bdc0);
    }
    FUN_001283e4(temp_v3[0]);
    temp_v0 = (unsigned char)(temp_v2 & 1);
    if ((temp_v2 & 1) != 0) {
      temp_v0 = 1;
    }
                    /* WARNING: Treating indirect jump as return */
    return temp_v0;
  }
  return 0;
}

} /* extern "C" */
