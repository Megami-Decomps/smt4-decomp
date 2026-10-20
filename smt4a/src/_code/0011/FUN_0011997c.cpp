/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011997c` (_code @ 0x11997c, 0x10a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e342c(unsigned char *, int);
int FUN_002e9acc(int, unsigned int);
int FUN_002ea3d0(int, unsigned int);
int FUN_002eca44(int);

typedef struct fn_0011997c_arg0 fn_0011997c_arg0;
struct fn_0011997c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x7c];
    undefined2 field_0x80; /* +0x80 */
    unsigned char pad_0x82[0x2];
    undefined4 field_0x84; /* +0x84 */
};

extern unsigned char LAB_00119a8c; /* 0x119a8c */
extern unsigned char DAT_0055a1e4; /* 0x55a1e4 */

extern int FUN_0011076c(int);
extern int wstrlen(int);
/* Supplied declaration required: FUN_002e342c. */
extern int strInit(int);
extern unsigned int FUN_002e784e(int, unsigned char *, unsigned int);
extern int FUN_002e9300(int, unsigned int);
extern int FUN_002e9520(unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002e9acc. */
extern int FUN_002e9ff4(int);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern int FUN_002ea974(int);
extern unsigned int *FUN_002eca10(fn_0011997c_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */
extern int FUN_002fafd8(int, unsigned int);


int FUN_0011997c(fn_0011997c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5,int param_6,unsigned int param_7,unsigned short param_8,
                unsigned int param_9,unsigned int param_10,unsigned int param_11,unsigned int param_12,
                unsigned int param_13)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [16];
  unsigned char temp_v4 [4];
  
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v4);
  puVar1[0x1a] = param_2;
  *puVar1 = (unsigned int)&DAT_0055a1e4;
  temp_v0 = FUN_002e9520(puVar1 + 0x1b,param_5);
  temp_v0 = FUN_002e9300(temp_v0 + 0xc,param_7);
  *(unsigned short *)(temp_v0 + 8) = param_8;
  *(unsigned int *)(temp_v0 + 0xc) = param_9;
  temp_v0 = temp_v0 + 0x10;
  FUN_002eca44(temp_v0);
  temp_v0 = FUN_002fafd8(temp_v0 + 0x60,0);
  temp_v0 = FUN_002e9ff4(temp_v0 + 0x78);
  temp_v0 = FUN_002e9ff4(temp_v0 + 0xc);
  temp_v0 = strInit(temp_v0 + 0xc);
  *(unsigned int *)(temp_v0 + 0x20) = param_3;
  temp_v0 = FUN_002ea974(temp_v0 + 0x24);
  temp_v0 = FUN_0011076c(temp_v0 + 0x6c);
  *(unsigned int *)(temp_v0 + 0xf8) = param_4;
  *(unsigned int *)(temp_v0 + 0xfc) = param_10;
  *(unsigned int *)(temp_v0 + 0x104) = 0;
  *(unsigned int *)(temp_v0 + 0x108) = 0;
  *(unsigned int *)(temp_v0 + 0x10c) = 0;
  *(unsigned int *)(temp_v0 + 0x100) = param_11;
  FUN_002e9acc(temp_v0 + 0x110,param_12);
  *(unsigned char *)(temp_v0 + 0x118) = 0;
  *(unsigned int *)(temp_v0 + 0x11c) = param_13;
  *(unsigned int *)(temp_v0 - 0x194) = 0;
  *(unsigned int *)(temp_v0 - 0x1a8) = 4;
  *(unsigned int *)(temp_v0 - 0x1a4) = 0;
  if (param_6 != 0) {
    temp_v1 = wstrlen(param_6);
    temp_v2 = FUN_002e784e(temp_v1 + 1,&LAB_00119a8c,0);
    *(unsigned int *)(temp_v0 - 0x194) = temp_v2;
    temp_v1 = wstrlen(param_6);
    if (temp_v1 != 0) {
      FUN_002e342c(*(unsigned char **)(temp_v0 - 0x194),param_6);
    }
    else {
      **(unsigned char **)(temp_v0 - 0x194) = 0;
    }
  }
  **(unsigned int **)(temp_v0 - 0x184) = 0;
  temp_v2 = FUN_002ea3c0(temp_v3,0x119375,0,&LAB_00119a8c);
  FUN_002ea3d0(temp_v0 - 0x208,temp_v2);
  *(unsigned char *)(temp_v0 - 0x1d0) = 1;
  return temp_v0 - 0x208;
}

} /* extern "C" */
