/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c3d0` (_code @ 0x35c3d0, 0x214 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} param_4_stack;

extern int FUN_002835f4(); /* 0x2835f4 */
extern int FUN_00283a48(); /* 0x283a48 */
extern unsigned char LAB_0035c628; /* 0x35c628 */
extern unsigned char LAB_0035c640; /* 0x35c640 */
extern unsigned char LAB_0035c660; /* 0x35c660 */
extern int DAT_0057f3c4; /* 0x57f3c4 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0013f1b8. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0018206c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001acf98. */
extern int FUN_00341940(unsigned int);


int FUN_0035c3d0(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 8 native warning(s); review required */
  int *piVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [68];
  
  temp_v1 = 0;
  do {
    if (*(int *)(temp_v1 * 4 + 0x57f3c8) == 0) {
      piVar1 = (int *)0x100;
      FUN_00163060(0x100,0x100,0,0x38,1);
      *(int **)(temp_v1 * 4 + 0x57f3c8) = piVar1;
      if (temp_v1 >= 2) {
        return 0;
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = temp_v1;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
      piVar1[0xc] = 0;
      piVar1[0xd] = 0;
      FUN_00100388(temp_v2,&LAB_0035c628,temp_v1);
      puVar2 = temp_v2;
      FUN_0014e38c(puVar2,3,0,0,FUN_00283a48,0,piVar1);
      *piVar1 = (int)puVar2;
      FUN_00100388(temp_v2,&LAB_0035c640,temp_v1);
      FUN_0015155c(temp_v2,0x85,0,0,FUN_002835f4,0,piVar1,*piVar1);
      FUN_00100388(temp_v2,&LAB_0035c660,temp_v1);
      FUN_0015155c(temp_v2,0xe1,0,0,FUN_002835f4,0,piVar1,*piVar1);
      piVar1[4] = 0;
      piVar1[9] = param_1;
      piVar1[10] = param_2;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[0xb] = 0;
      piVar1[0xc] = param_3;
      piVar1[0xd] = param_4;
      if (param_1 < 4) {
        temp_v1 = FUN_00341940(0x35);
        if (temp_v1 != 0) {
          DAT_0057f3c4 = DAT_0057f3c4 + 1;
        }
        else {
          FUN_0013f1b8(0x35,0);
          DAT_0057f3c4 = 0;
        }
        temp_v1 = param_1 * 0x10;
        temp_v0 = FUN_0018206c(*(unsigned int *)(temp_v1 + 0x57f43c),*(unsigned int *)(temp_v1 + 0x57f440));
        if (temp_v0 != 0) {
          *(int *)(temp_v1 + 0x57f444) = *(int *)(temp_v1 + 0x57f444) + 1;
        }
        else {
          FUN_001acf98(*(unsigned int *)(temp_v1 + 0x57f43c),*(unsigned int *)(temp_v1 + 0x57f440));
          *(unsigned int *)(temp_v1 + 0x57f444) = 0;
        }
      }
      piVar1[3] = 0;
      return *piVar1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  return 0;
}
