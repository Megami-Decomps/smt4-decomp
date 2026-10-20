/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011f42c` (_code @ 0x11f42c, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(unsigned char [12], int);
int FUN_002e6e5c(unsigned char [12]);
int FUN_002f4f00(unsigned char [64]);
int FUN_002fbb68(unsigned char [64], unsigned int);
int FUN_002fbb92(unsigned char [64], unsigned int);
int FUN_00303cd8(unsigned char [64]);
int FUN_00303d10(unsigned char [64], int, int);
int FUN_00303d3a(unsigned char [64], int);
int FUN_00303d52(unsigned char [12]);
int FUN_00303d74(int, unsigned int, unsigned char [64]);
int FUN_00311010(unsigned char [64], unsigned int);

/* stack frame of param_8: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_8_stack;

extern unsigned char LAB_0011f579; /* 0x11f579 */
extern unsigned char DAT_00630374; /* 0x630374 */

extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002f4f00. */
/* Supplied declaration required: FUN_002fbb68. */
/* Supplied declaration required: FUN_002fbb92. */
/* Supplied declaration required: FUN_00303cd8. */
/* Supplied declaration required: FUN_00303d10. */
extern int FUN_00303d1e(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00303d3a. */
extern int FUN_00303d44(int, unsigned int);
/* Supplied declaration required: FUN_00303d52. */
/* Supplied declaration required: FUN_00303d74. */
/* Supplied declaration required: FUN_00311010. */


int FUN_0011f42c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [64];
  unsigned char temp_v2 [12];
  int iStack_24;
  unsigned int temp_v3;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  iStack_24 = param_1;
  temp_v3 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(temp_v2,temp_v0 + 0x58);
  FUN_00303cd8(temp_v1);
  FUN_00303d10(temp_v1,*(unsigned short *)(param_1 + 0x20),1);
  temp_v0 = FUN_00303d1e(temp_v1,temp_v3);
  if (temp_v0 != 0) {
    FUN_00303d3a(temp_v1,0x15);
    FUN_002fbb92(temp_v1,param_3);
    FUN_002fbb92(temp_v1,param_4);
    FUN_002fbb68(temp_v1,param_5);
    FUN_002fbb92(temp_v1,param_6);
    FUN_00311010(temp_v1,param_7);
    FUN_00311010(temp_v1,param_8);
    (*(unsigned char * *)((unsigned char *)&DAT_00630374 + 0x50)) = &LAB_0011f579;
    if ((*(char *)(param_1 + 0x34) != '\0') && (temp_v0 = FUN_00303d44(param_1,0x10), temp_v0 != 0)) {
      FUN_00303d52(temp_v2);
    }
    FUN_00303d74(param_1,temp_v3,temp_v1);
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
