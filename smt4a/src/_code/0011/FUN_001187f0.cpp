/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001187f0` (_code @ 0x1187f0, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00120310(unsigned char [64], unsigned int);
int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002f4f00(unsigned char [64]);
int FUN_00303cd8(unsigned char [64]);
int FUN_00303d10(unsigned char [64], int, int);
int FUN_00303d3a(unsigned char [64], int);
int FUN_00303d52(unsigned char [12]);
int FUN_00303d74(int, unsigned int, unsigned char [64]);

extern unsigned char LAB_00118e5f; /* 0x118e5f */
extern unsigned char DAT_0062d744; /* 0x62d744 */

/* Supplied declaration required: FUN_00120310. */
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: FUN_00303cd8. */
/* Supplied declaration required: FUN_00303d10. */
extern int FUN_00303d1e(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00303d3a. */
extern int FUN_00303d44(int, unsigned int);
/* Supplied declaration required: FUN_00303d52. */
/* Supplied declaration required: FUN_00303d74. */


int FUN_001187f0(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [64];
  unsigned char temp_v2 [12];
  
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  FUN_00303cd8(temp_v1);
  FUN_00303d10(temp_v1,*(unsigned short *)(param_1 + 0x20),1);
  temp_v0 = FUN_00303d1e(temp_v1,param_2);
  if (temp_v0 != 0) {
    FUN_00303d3a(temp_v1,0xb);
    FUN_00120310(temp_v1,param_3);
    (*(unsigned char * *)((unsigned char *)&DAT_0062d744 + 0x28)) = &LAB_00118e5f;
    if ((*(char *)(param_1 + 0x34) != '\0') && (temp_v0 = FUN_00303d44(param_1,0x10), temp_v0 != 0)) {
      FUN_00303d52(temp_v2);
    }
    FUN_00303d74(param_1,param_2,temp_v1);
    FUN_002f4f00(temp_v1);
    FUN_002e6e5c(temp_v2);
  }
  else {
    FUN_002f4f00(temp_v1);
    FUN_002e6e5c(temp_v2);
    param_1 = 0;
  }
  return param_1;
}

} /* extern "C" */
