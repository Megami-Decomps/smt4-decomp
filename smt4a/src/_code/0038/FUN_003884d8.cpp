/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003884d8` (_code @ 0x3884d8, 0x228 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016431c(unsigned int);
int FUN_0021bdac(unsigned int, unsigned int, unsigned int, int, int, int);
int FUN_00236038(int);
int FUN_0023723c(unsigned int, int, unsigned int, int, int, unsigned char *, unsigned char *);
int FUN_0023b27c(void);
int FUN_002686b8(...);
int FUN_002c1d50(void);
int FUN_002c76c0(int);
int FUN_002deb84(void);
int FUN_00318124(void);
int FUN_0031f208(int);
int FUN_0031f27c(unsigned int, int);
int FUN_003283ac(int);
int FUN_003491e8(void);
int FUN_0035d8a4(void);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern unsigned char LAB_0038870c; /* 0x38870c */
extern unsigned char LAB_00388748; /* 0x388748 */
extern int DAT_0057f58c; /* 0x57f58c */

/* Supplied declaration required: FUN_0016431c. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0021bdac. */
/* Supplied declaration required: FUN_00236038. */
/* Supplied declaration required: FUN_0023723c. */
extern int FUN_0023b258(void);
/* Supplied declaration required: FUN_0023b27c. */
/* Supplied declaration required: FUN_002686b8. */
extern unsigned int FUN_002ba85c(void);
/* Supplied declaration required: FUN_002c1d50. */
/* Supplied declaration required: FUN_002c76c0. */
extern int FUN_002c7c54(void);
/* Supplied declaration required: FUN_002deb84. */
/* Supplied declaration required: FUN_00318124. */
/* Supplied declaration required: FUN_0031f208. */
/* Supplied declaration required: FUN_0031f27c. */
/* Supplied declaration required: FUN_003283ac. */
/* Supplied declaration required: FUN_003491e8. */
/* Supplied declaration required: FUN_0035d8a4. */


unsigned int FUN_003884d8(void)

{
/* irregular: irregular input(s): in_r12; 16 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int *in_r12;
  unsigned int temp_v8 [5];
  char temp_v9 [4];
  unsigned int uStack_24;
  
  temp_v8[0] = *in_r12;
  temp_v8[1] = in_r12[1];
  temp_v8[2] = in_r12[2];
  temp_v8[3] = in_r12[3];
  temp_v8[4] = in_r12[4];
  temp_v9[0] = 'U';
  temp_v9[1] = 'V';
  temp_v9[2] = 'W';
  temp_v9[3] = 'X';
  uStack_24 = 0x5a;
  temp_v0 = FUN_002deb84();
  temp_v1 = FUN_00236038(0);
  FUN_002c76c0(0);
  temp_v7 = 0;
  temp_v6 = 0;
  do {
    if ((temp_v1 != temp_v6) && (temp_v2 = FUN_0018719c(temp_v8[temp_v6]), temp_v2 != 0)) {
      temp_v7 = temp_v7 + 1;
    }
    temp_v2 = DAT_0057f58c;
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 5);
  if (temp_v7 == 0) {
    FUN_003283ac(99);
    return 1;
  }
  if (temp_v0 == 0) {
    FUN_00318124();
    FUN_002c1d50();
    if (DAT_0057f58c != 0) {
      *(unsigned char *)(DAT_0057f58c + 0x19c5) = 0x15;
    }
    temp_v5 = FUN_002ba85c();
    temp_v3 = FUN_00236038(0);
    temp_v4 = FUN_002deb84();
    FUN_0021bdac(temp_v5,temp_v3,temp_v4,6,0,0);
    FUN_0023723c(*(unsigned int *)(temp_v2 + 4),4,0xffffffff,0,3,&LAB_00388748,&LAB_0038870c);
    FUN_0016431c(*(unsigned int *)(temp_v2 + 4));
    *(unsigned char *)(temp_v2 + 0x19c4) = 0;
    *(unsigned int *)(temp_v2 + 0xc) = *(unsigned int *)(temp_v2 + 0xc) | 0x20;
    FUN_0031f27c(0xffffffff,3);
    temp_v0 = 0;
    do {
      if ((temp_v1 != temp_v0) && (temp_v6 = FUN_0018719c(temp_v8[temp_v0]), temp_v6 != 0)) {
        FUN_0031f208(temp_v9[temp_v0]);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 5);
    FUN_0023b27c();
  }
  temp_v1 = FUN_002c7c54();
  temp_v0 = FUN_0023b258();
  if (temp_v0 != 0) {
    FUN_003283ac(0);
    FUN_002686b8();
    FUN_0035d8a4();
    FUN_003491e8();
    temp_v5 = 1;
  }
  else {
    if (temp_v1 != 0x69) {
      FUN_002686b8(0);
      FUN_0035d8a4();
      if (temp_v1 == 0x5a) {
        temp_v1 = 5;
      }
      else {
        temp_v1 = temp_v1 - 0x54;
      }
      FUN_003283ac(temp_v1);
      FUN_003491e8();
      return 1;
    }
    temp_v5 = 0;
  }
  return temp_v5;
}

} /* extern "C" */
