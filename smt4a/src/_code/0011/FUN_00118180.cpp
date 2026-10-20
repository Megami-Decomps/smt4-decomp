/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00118180` (_code @ 0x118180, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002f4f00(unsigned char [64]);
int FUN_00303cd8(unsigned char [64]);
int FUN_00303d10(unsigned char [64], int, int);
int FUN_00303d3a(unsigned char [64], int);
int FUN_00303d52(unsigned char [12]);
int FUN_00303d74(int, int, unsigned char [64]);
int FUN_00303e66(int, unsigned int);
int FUN_00304d08(unsigned char [64], unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char LAB_00118a39; /* 0x118a39 */
extern unsigned char *DAT_0062d7a4; /* 0x62d7a4 */

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: FUN_00303cd8. */
/* Supplied declaration required: FUN_00303d10. */
extern int FUN_00303d1e(unsigned char *, int);
/* Supplied declaration required: FUN_00303d3a. */
extern int FUN_00303d44(int, unsigned int);
/* Supplied declaration required: FUN_00303d52. */
/* Supplied declaration required: FUN_00303d74. */
/* Supplied declaration required: FUN_00303e66. */
/* Supplied declaration required: FUN_00304d08. */


int FUN_00118180(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [64];
  unsigned char temp_v2 [12];
  int iStack_24;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v3;
  
  iStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  temp_v3 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  FUN_00303cd8(temp_v1);
  FUN_00303d10(temp_v1,*(unsigned short *)(param_1 + 0x20),1);
  temp_v0 = FUN_00303d1e(temp_v1,param_2);
  if (temp_v0 != 0) {
    FUN_00303d3a(temp_v1,0x19);
    FUN_00304d08(temp_v1,param_3);
    if (param_2 != 0) {
      FUN_00303e66(param_2,temp_v3);
    }
    DAT_0062d7a4 = &LAB_00118a39;
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
