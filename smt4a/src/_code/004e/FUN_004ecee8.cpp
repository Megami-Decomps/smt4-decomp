/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ecee8` (_code @ 0x4ecee8, 0x254 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003eaf20(void);
int FUN_003f1b3c(...);
int FUN_0047f4cc(...);
int FUN_004a9308(unsigned int, int, int);
int FUN_004c9160(...);
int FUN_004e0114(...);
int FUN_004fbeac(unsigned int, unsigned int *, int, int, int);
int FUN_004fd508(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int DAT_00571150; /* 0x571150 */
extern unsigned int DAT_00571154; /* 0x571154 */
extern unsigned int DAT_00571160; /* 0x571160 */
extern unsigned int DAT_00571164; /* 0x571164 */
extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
extern int FUN_003e7adc(int);
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_003f1b3c. */
/* Supplied declaration required: FUN_0047f4cc. */
/* Supplied declaration required: FUN_004a9308. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004e0114. */
/* Supplied declaration required: FUN_004fbeac. */
/* Supplied declaration required: FUN_004fd508. */


void FUN_004ecee8(int *param_1,unsigned int *param_2)

{
/* irregular: 8 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6 [4];
  
  puVar3 = (unsigned int *)param_2[8];
  if ((*param_2 & 0x1080) == 0) {
    temp_v4 = 0x32;
  }
  else {
    temp_v4 = 0;
  }
  if ((short)puVar3[0xcd] >= 1) {
    if ((*puVar3 & (DAT_00571168 | DAT_00571170)) == 0 &&
        (puVar3[1] & (DAT_00571174 | DAT_0057116c)) == 0) {
      FUN_004a9308(DAT_0057a9c8,(short)param_2[0xb],0);
    }
    FUN_004fd508(temp_v4,param_2,0,param_2[9],1);
    temp_v2 = param_2[8];
    temp_v4 = 0x32;
  }
  else {
    if (((((*puVar3 & (DAT_00571150 | DAT_00571160)) != 0 ||
           (puVar3[1] & (DAT_00571164 | DAT_00571154)) != 0) &&
         (temp_v1 = FUN_003e7adc(*param_1), temp_v1 == 0)) && ((*param_2 & 0x200000) != 0)) &&
       (temp_v0 = *(short *)(param_2[10] + 0x1be), (temp_v0 == 9 || temp_v0 == 10) || temp_v0 == 0xd)) {
      FUN_004fbeac(temp_v4,param_2,0,0x47,0);
      return;
    }
    temp_v0 = *(short *)(param_2[10] + 0x1be);
    if (temp_v0 == 0x11) {
      return;
    }
    if (temp_v0 < 0x12) {
      if (temp_v0 != 6) {
        if (temp_v0 != 0xf) {
          return;
        }
        temp_v2 = param_2[9];
        temp_v3 = 0;
      }
      else {
        temp_v2 = param_2[9];
        temp_v3 = 1;
        temp_v4 = 0;
      }
      FUN_004fd508(temp_v4,param_2,temp_v3,temp_v2,1);
      temp_v5 = 5;
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,5);
      return;
    }
    if (temp_v0 == 0x13) {
      FUN_004c9160(0x2d,param_2[8],0,1);
      temp_v1 = *param_1;
      FUN_003eaf20();
      if (temp_v1 != 0) {
        temp_v4 = FUN_0019acdc(*(unsigned short *)(*(int *)(temp_v1 + 0x400) + 300),1);
        FUN_003f1b3c(*param_1,temp_v4,8,temp_v6,&temp_v5);
        FUN_0047f4cc(temp_v5);
      }
      temp_v5 = 5;
      FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,5);
      return;
    }
    if (temp_v0 != 0x14) {
      return;
    }
    temp_v2 = param_2[8];
    temp_v4 = 0x2e;
  }
  FUN_004c9160(temp_v4,temp_v2,0,1);
  temp_v5 = 5;
  FUN_004e0114(param_1,param_2,(int)*(short *)(param_2[9] + 0x6a),0,5);
  return;
}

} /* extern "C" */
