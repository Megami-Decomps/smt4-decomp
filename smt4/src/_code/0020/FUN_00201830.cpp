/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201830` (_code @ 0x201830, 0x254 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026281c(int *, int, int);
int FUN_002b76d0(int *);
int FUN_002be5a4(...);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c1b64(int, int);
int FUN_002c39a4(int);
int FUN_0032accc(void);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_00201aac; /* 0x201aac */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0026281c. */
/* Supplied declaration required: FUN_002b76d0. */
/* Supplied declaration required: FUN_002be5a4. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c1b64. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0032accc. */


unsigned int FUN_00201830(void)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  float temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  
  temp_v0 = FUN_002c08f0();
  temp_v6 = 0.0f;
  temp_v5 = 0x3f800000;
  if (*(int *)(temp_v0 + 0x10) != 1) {
    FUN_002c198c(DAT_0044ea00);
    FUN_002c39a4(DAT_0044ea00);
    FUN_0032accc();
    if (*(float *)(temp_v0 + 0x6c) != temp_v6) {
      temp_v7 = temp_v5;
      temp_v8 = temp_v5;
      temp_v9 = temp_v5;
      temp_v10 = temp_v5;
      FUN_002c39a4(DAT_0044ea00);
      temp_v2 = DAT_0044ea00;
      temp_v1 = FUN_002c5d80(1,0);
      piVar6 = (int *)(temp_v2 + 0x124c);
      temp_v3 = *piVar6;
      temp_v4 = piVar6[temp_v3 + 2];
      *piVar6 = temp_v3 + 1;
      piVar6[temp_v3 + 3] = temp_v1;
      if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v4 != temp_v1) {
        (**(romwright_code **)(temp_v2 + 0x1268))();
        *(unsigned char *)(temp_v2 + 0x1264) = 0;
      }
      temp_v10 = *(unsigned int *)(temp_v0 + 0x6c);
      temp_v7 = temp_v5;
      temp_v8 = temp_v5;
      temp_v9 = temp_v5;
      FUN_002c1b64(DAT_0044ea00,0);
      FUN_002b76d0(&temp_v7);
      temp_v0 = DAT_0044ea00;
      piVar6 = (int *)(DAT_0044ea00 + 0x124c);
      temp_v2 = *piVar6;
      temp_v1 = piVar6[temp_v2 + 2];
      *piVar6 = temp_v2 - 1;
      if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar6[temp_v2 + 1]) {
        (**(romwright_code **)(temp_v0 + 0x1268))();
        *(unsigned char *)(temp_v0 + 0x1264) = 0;
      }
    }
  }
  else {
    temp_v1 = *(int *)(temp_v0 + 0x60);
    temp_v2 = 10;
    temp_v3 = 0;
    if (temp_v1 < 10) {
      temp_v2 = temp_v1;
      if (temp_v1 < 1) {
        FUN_002c198c(DAT_0044ea00);
        FUN_002c18e4(DAT_0044ea00);
        return 0;
      }
    }
    else if (*(int *)(temp_v0 + 0x68) >= 10) {
      temp_v3 = *(int *)(temp_v0 + 0x68) - 9;
    }
    temp_v1 = 0;
    do {
      temp_v5 = 0xffffffff;
      if (*(int *)(temp_v0 + 0x68) == temp_v1 + temp_v3) {
        VectorSignedToFloat(temp_v1 * 0xe,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(2,0xff00ff,&LAB_00201aac);
        temp_v5 = 0xff00ff;
      }
      FUN_0026281c(&temp_v7,*(int *)(temp_v0 + 100) + (temp_v1 + temp_v3) * 0x228,0x40);
      VectorSignedToFloat(temp_v1 * 0xe,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(2,temp_v5,&temp_v7);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < temp_v2);
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return 0;
}

} /* extern "C" */
