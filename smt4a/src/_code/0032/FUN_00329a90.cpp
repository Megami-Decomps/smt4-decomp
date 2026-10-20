/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00329a90` (_code @ 0x329a90, 0x294 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00157558(int);
int FUN_00162790(...);
int FUN_00164b5c(int, int, int, int, int, int);
int FUN_001677c0(void);
int FUN_001834a4(int, int);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_00355428(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern unsigned char LAB_00329d54; /* 0x329d54 */
extern int DAT_005806c4; /* 0x5806c4 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00355428. */


unsigned int FUN_00329a90(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  unsigned char temp_v8 [48];
  
  temp_v1 = DAT_005806c4;
  if ((*(int *)(DAT_005806c4 + 0x48) >= 2) && (*(int *)(DAT_005806c4 + 0x48) < 0x12)) {
    FUN_00157558(DAT_0059dbb4);
    temp_v2 = DAT_0059dbb4;
    temp_v0 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v2 + 0x1258);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v0;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != temp_v0) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    temp_v1 = *(int *)(temp_v1 + 0x48);
    if (!(temp_v1 == 5 || temp_v1 == 6)) {
      if (temp_v1 == 0xe) {
        FUN_001677c0();
        FUN_00183bb0();
        temp_v1 = DAT_005806c4;
        temp_v7 = 0.0f;
        if (*(int *)(DAT_005806c4 + 0x54) < 5) {
          temp_v7 = (float)VectorSignedToFloat(*(int *)(DAT_005806c4 + 0x54) * 100,
                                             (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v7 = 500.0f - temp_v7;
        }
        FUN_00164b5c(2,0x13,0x1e,(int)temp_v7,0,0xb);
        temp_v2 = FUN_001834a4(0x13,0x1105);
        FUN_001834a4(0x13,0x110d);
        temp_v0 = FUN_001834a4(0x13,0x1101);
        temp_v3 = FUN_001834a4(0x13,0x1100);
        FUN_001834a4(0x13,0x1104);
        FUN_001834a4(0x13,0x1102);
        FUN_001834a4(0x13,0x1103);
        temp_v6 = (float)VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v5 = (float)VectorSignedToFloat((int)*(short *)(temp_v3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_001835b4(2,0x13,0x1242,(int)(temp_v6 + temp_v7 + temp_v5),
                     (int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v3 + 10),0xb);
        FUN_00100388(temp_v8,&LAB_00329d54,*(unsigned int *)(temp_v1 + 0x44));
        VectorSignedToFloat((int)*(short *)(temp_v2 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v2 + 10) + (int)*(short *)(temp_v0 + 10),
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat((int)*(short *)(temp_v0 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_00162790(2,0xffffffff,temp_v8,(int)*(short *)(temp_v0 + 10));
      }
    }
    else {
      FUN_001677c0();
      FUN_00183bb0();
      FUN_00355428();
    }
    temp_v1 = DAT_0059dbb4;
    piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v2 = *piVar6;
    temp_v0 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v0 != piVar6[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
  }
  return 0;
}

} /* extern "C" */
