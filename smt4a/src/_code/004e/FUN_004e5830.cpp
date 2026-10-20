/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e5830` (_code @ 0x4e5830, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNewD(void);
int FUN_002e6490(int);
int FUN_003f0e20(int, int);
int FUN_004c60c0(unsigned int, int);
int FUN_004c8340(unsigned int, int, int, int, unsigned int, int, int *);
int FUN_004c9160(int, int, int, int);
int FUN_004fdb18(unsigned int, unsigned int, int, int, int);

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern unsigned int DAT_00571210; /* 0x571210 */
extern unsigned int DAT_00571214; /* 0x571214 */
extern unsigned int DAT_005712e0; /* 0x5712e0 */
extern unsigned int DAT_005712e4; /* 0x5712e4 */

extern int FUN_001633a0(unsigned int);
/* Supplied declaration required: asdOperatorNewD. */
/* Supplied declaration required: FUN_002e6490. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c60c0. */
/* Supplied declaration required: FUN_004c8340. */
/* Supplied declaration required: FUN_004c9160. */
/* Supplied declaration required: FUN_004fdb18. */


void FUN_004e5830(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  int *piVar9;
  
  if ((*(unsigned int *)(*param_1 + 0x45a4) & DAT_00571214) != 0 ||
      (DAT_00571210 & *(unsigned int *)(*param_1 + 0x45a0)) != 0) {
    return;
  }
  temp_v0 = 1;
  temp_v5 = 0;
  temp_v1 = 1;
  temp_v2 = 0x10;
  piVar9 = param_1;
  asdOperatorNewD();
  temp_v6 = 0;
  do {
    puVar7 = (unsigned int *)(*(int *)(*param_1 + 0x1ffc) + temp_v5 * 0x408);
    if ((((DAT_00571148 & *puVar7) != 0 || (DAT_0057114c & puVar7[1]) != 0) &&
        ((*puVar7 & DAT_00571178) == 0 && (puVar7[1] & DAT_0057117c) == 0)) &&
       ((puVar7[0x9d] & 0x400) == 0)) {
      if ((puVar7[0x9d] & 0x200) != 0) {
        temp_v1 = 0;
      }
      else {
        temp_v3 = 0xffffffff;
        FUN_004c8340(0xffffffff,(int)(short)puVar7[2],0xf,2,0xffffffff,temp_v2,piVar9);
        temp_v4 = (unsigned int)(short)puVar7[2];
        FUN_004c60c0(temp_v4,0xf);
        if (((temp_v3 | temp_v4) & 0x170000) == 0) {
          temp_v0 = 0;
          *(int *)(temp_v2 + temp_v6 * 4) = (int)(short)puVar7[2];
          temp_v6 = (int)(char)((char)temp_v6 + '\x01');
        }
      }
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 4);
  if (((!temp_v0 && !temp_v1) && (temp_v6 != 0)) &&
     ((temp_v5 = FUN_001633a0(99), temp_v5 < 5 ||
      ((*(unsigned int *)(*param_1 + 0x45ac) & DAT_005712e4) != 0 ||
       (*(unsigned int *)(*param_1 + 0x45a8) & DAT_005712e0) != 0)))) {
    temp_v5 = FUN_001633a0((temp_v6 - 1U) & 0xffff);
    temp_v6 = *(int *)(*param_1 + 0x1ed4) + *(int *)(temp_v2 + temp_v5 * 4) * 0x1d0;
    FUN_004fdb18(param_3,param_2,temp_v6,0x200,1);
    temp_v5 = *param_1;
    FUN_003f0e20(temp_v5,(int)*(short *)(temp_v6 + 0x6a));
    *(unsigned short *)(temp_v5 + 0x276) = 0;
    *(unsigned short *)(temp_v5 + 0x278) = *(unsigned short *)(temp_v5 + 0x278) | 0x10;
    FUN_004c9160(0x1c,temp_v5,0,1);
  }
  FUN_002e6490(temp_v2);
  return;
}

} /* extern "C" */
