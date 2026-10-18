/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238ed4` (_code @ 0x238ed4, 0x1ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern signed char DAT_004656ca; /* 0x4656ca */
extern signed char DAT_004656cb; /* 0x4656cb */
extern signed char DAT_004656cc; /* 0x4656cc */
extern unsigned int DAT_004e629c; /* 0x4e629c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_00239bb0(unsigned int);
extern int FUN_00239bec(void);
/* Supplied declaration required: FUN_002bb490. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_00359088. */
extern unsigned int FUN_00359288(int *);
extern int FUN_0035b0a4(unsigned int);


int FUN_00238ed4(int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *puVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6 [3];
  int temp_v7;
  unsigned char temp_v8 [8];
  
  temp_v4 = -0x375ef410;
  if ((DAT_004656ca != '\0') || (temp_v0 = FUN_00239bec(), temp_v0 != 0)) {
    FUN_002c3aa8(&DAT_004e629c);
    if (DAT_004656cb == '\0') {
      FUN_002c3a24(&DAT_004e629c);
      return -0x375ef410;
    }
    if (DAT_004656cc == '\0') {
      temp_v0 = FUN_0035b0a4(0);
      if (temp_v0 < 0) {
        FUN_002c3a24(&DAT_004e629c);
        return temp_v0;
      }
      FUN_002bb490(16000000,0);
      DAT_004656cc = '\x01';
    }
    if (param_2 != 0) {
      if (param_1 != 0) {
        temp_v1 = FUN_00239bb0(0xc);
      }
      else {
        temp_v1 = FUN_00239bb0(0xb);
      }
    }
    else {
      temp_v5 = 0;
      temp_v6[0] = 0;
      temp_v2 = FUN_00359288(temp_v6);
      temp_v0 = 0;
      if ((temp_v2 & 0x80000000) == 0) {
        temp_v0 = temp_v6[0];
      }
      if (param_1 != 0) {
        temp_v3 = FUN_00239bb0(0xc);
      }
      else {
        temp_v3 = FUN_00239bb0(0xb);
      }
      while( 1 ) {
        temp_v6[0] = 1000000000;
        temp_v6[1] = 0;
        puVar5 = temp_v8;
        temp_v7 = temp_v0;
        FUN_002c42fc(puVar5,&temp_v7,1,0);
        if ((int)puVar5 < 0) {
          FUN_002c5468();
        }
        temp_v1 = temp_v3;
        if (((((unsigned int)puVar5 & 0x3ff) != 0x3fe) || (FUN_00359088(temp_v6 + 2), temp_v6[2] == 1)) ||
           (temp_v1 = temp_v4, temp_v5 >= 0x3d)) break;
        temp_v5 = temp_v5 + 1;
      }
      if (temp_v0 != 0) {
        software_interrupt(0x23);
      }
    }
    FUN_002c3a24(&DAT_004e629c);
    temp_v4 = temp_v1;
  }
  return temp_v4;
}
