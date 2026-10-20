/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00483304` (_code @ 0x483304, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00356308(void);
int FUN_00482414(int, int *);
int FUN_00482428(int, int *);
int FUN_004824fc(int, unsigned int);
int FUN_0048269c(int, int *);
int FUN_004bc420(unsigned int, unsigned int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0018719c(unsigned int);
extern unsigned int mapEnemyLookupByte(unsigned int);
extern unsigned int FUN_002b7478(unsigned int);
/* Supplied declaration required: FUN_00356308. */
/* Supplied declaration required: FUN_00482414. */
/* Supplied declaration required: FUN_00482428. */
extern int FUN_0048243c(int, unsigned int);
/* Supplied declaration required: FUN_004824fc. */
/* Supplied declaration required: FUN_0048269c. */
extern int FUN_00482b08(int, unsigned int);
/* Supplied declaration required: FUN_004bc420. */


void FUN_00483304(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  
  temp_v4 = param_2;
  FUN_00356308();
  if ((*(short *)(temp_v4 + 10) != 1) ||
     ((temp_v1 = FUN_0018719c(0x137), temp_v1 != 0 && (temp_v1 = FUN_0018719c(0x147), temp_v1 == 0)))) {
    temp_v8 = VectorSignedToFloat((int)*(short *)(temp_v4 + 2),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = VectorSignedToFloat((int)*(short *)(temp_v4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = 0;
    temp_v10 = VectorSignedToFloat((int)*(short *)(temp_v4 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = 0;
    temp_v12 = 0;
    temp_v13 = 0;
    temp_v14 = 0x42480000;
    temp_v15 = 0x42480000;
    temp_v16 = 0x42480000;
    temp_v0 = *(unsigned short *)(temp_v4 + 8);
    temp_v6 = (unsigned int)temp_v0;
    do {
      temp_v5 = param_1 + temp_v1 * 2;
      temp_v7 = *(unsigned short *)(temp_v5 + 0x8a2) == temp_v6;
      if (!temp_v7) {
        param_3 = (unsigned int)*(unsigned short *)(temp_v5 + 0x8a4);
      }
      if (temp_v7 || param_3 == temp_v6) {
        return;
      }
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < 0x20);
    temp_v2 = *(unsigned int *)(param_1 + 4);
    FUN_004bc420(temp_v2,*(unsigned int *)(param_1 + 8),0);
    temp_v1 = FUN_00482b08(param_1,0);
    if (temp_v1 != 0) {
      FUN_004824fc(temp_v1,*(unsigned int *)(param_1 + 0x98));
      FUN_00482414(temp_v1,&temp_v8);
      FUN_00482428(temp_v1,&temp_v11);
      FUN_0048269c(temp_v1,&temp_v14);
      *(unsigned int *)(temp_v1 + 0x20) = temp_v2;
      *(int *)(temp_v1 + 0x24) = param_2;
      temp_v3 = mapEnemyLookupByte(temp_v2);
      *(unsigned int *)(temp_v1 + 100) = temp_v3;
      temp_v2 = FUN_002b7478(temp_v2);
      *(unsigned int *)(temp_v1 + 0x68) = temp_v2;
      *(unsigned int *)(temp_v1 + 0x70) = (unsigned int)*(unsigned short *)(temp_v4 + 10);
      temp_v4 = FUN_0048243c(temp_v1,temp_v6);
      if (temp_v4 != 0) {
        temp_v4 = 0;
        do {
          if (*(short *)(param_1 + temp_v4 * 2 + 0x8a2) == 0) {
            *(unsigned short *)(param_1 + temp_v4 * 2 + 0x8a2) = temp_v0;
            return;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x20);
      }
    }
  }
  return;
}

} /* extern "C" */
