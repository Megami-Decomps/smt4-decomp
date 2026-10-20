/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002419c4` (_code @ 0x2419c4, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ea58(int, unsigned char *);
int FUN_003f0e20(unsigned int *, int);
int FUN_004fdcd8(int, int, unsigned int, int, int, unsigned int, int, int);

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_6_stack;

extern unsigned char LAB_00241b0c; /* 0x241b0c */
extern unsigned int DAT_005710f0; /* 0x5710f0 */
extern unsigned int DAT_005710f4; /* 0x5710f4 */
extern unsigned int DAT_00573808; /* 0x573808 */

extern unsigned int *btlGetMainState(void);
extern int wstrlen(int);
/* Supplied declaration required: FUN_0030ea58. */
/* Supplied declaration required: FUN_003f0e20. */
extern int FUN_004f5d2c(unsigned int);
/* Supplied declaration required: FUN_004fdcd8. */


void FUN_002419c4(int param_1,unsigned int param_2,int param_3,int param_4,unsigned int param_5,
                 int param_6)

{
/* irregular: 3 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  
  puVar2 = (unsigned int *)btlGetMainState();
  temp_v3 = 0;
  do {
    temp_v2 = param_3 + temp_v3 * 0x16;
    temp_v4 = temp_v2 + 0x58;
    temp_v1 = wstrlen(temp_v4);
    if ((temp_v1 != 0) && (FUN_0030ea58(temp_v4,&LAB_00241b0c), temp_v4 != 0)) {
      temp_v0 = *(short *)(temp_v2 + 0x6a);
      temp_v1 = FUN_004f5d2c(DAT_00573808);
      temp_v5 = 1;
      if (param_1 < 0) {
        temp_v5 = 2;
      }
      switch(temp_v0) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 0xc:
        if ((((temp_v0 != 0xc) || (param_6 < 0)) ||
            (puVar4 = puVar2, FUN_003f0e20(puVar2,param_6), puVar4 == (unsigned int *)0x0)) ||
           ((puVar4[1] & DAT_005710f4) != 0 || (*puVar4 & DAT_005710f0) != 0)) {
          FUN_004fdcd8((int)*(short *)(temp_v2 + 0x68) + temp_v1 * param_4,0,param_5,param_6,5,temp_v5,
                       temp_v0,temp_v2 + 0x58);
        }
      }
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  return;
}

} /* extern "C" */
