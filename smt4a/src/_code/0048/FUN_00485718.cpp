/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00485718` (_code @ 0x485718, 0x3a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00162790(...);
int FUN_001677c0(void);
int FUN_0016c410(...);
int FUN_0016c4b8(int, int);
int FUN_0016c560(...);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 5 slot(s), 11 byte(s) */
typedef struct {
    unsigned char sp36; /* 0x36: local_36 */
    unsigned char sp37; /* 0x37: local_37 */
    unsigned char sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_00485718(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int *piVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  
  FUN_001677c0();
  temp_v7 = 0.25f;
  FUN_001879d0(DAT_0059dbb4);
  temp_v8 = (int)temp_v7;
  FUN_00157558(DAT_0059dbb4);
  FUN_00183bb0();
  temp_v4 = DAT_0059dbb4;
  temp_v0 = FUN_001692ac(1,0);
  piVar5 = (int *)(temp_v4 + 0x1258);
  temp_v2 = *piVar5;
  temp_v3 = piVar5[temp_v2 + 2];
  *piVar5 = temp_v2 + 1;
  piVar5[temp_v2 + 3] = temp_v0;
  if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v3 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x1274))();
    *(unsigned char *)(temp_v4 + 0x1270) = 0;
  }
  FUN_0016c4b8(DAT_0059dbb4,0);
  FUN_001835b4(2,0x23,0,temp_v8,0,0xb);
  temp_v4 = DAT_0059dbb4;
  temp_v0 = FUN_00169294(6,1,0);
  piVar5 = (int *)(temp_v4 + 0x12b8);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v0;
  if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x12d4))();
    *(unsigned char *)(temp_v4 + 0x12d0) = 0;
  }
  FUN_001835b4(2,0x23,1,temp_v8,0,0xb);
  FUN_001835b4(2,0x23,2,temp_v8,0,0xb);
  temp_v4 = DAT_0059dbb4;
  temp_v0 = FUN_00169294(6,7,0);
  piVar5 = (int *)(temp_v4 + 0x12b8);
  temp_v2 = piVar5[*piVar5 + 2];
  piVar5[*piVar5 + 2] = temp_v0;
  if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v2 != temp_v0) {
    (**(romwright_code **)(temp_v4 + 0x12d4))();
    *(unsigned char *)(temp_v4 + 0x12d0) = 0;
  }
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v4 = 0;
  temp_v11 = 0;
  do {
    temp_v0 = FUN_001834a4(0x23,temp_v4 + 8);
    if (*(char *)(param_1 + 1) != '\x04') {
      temp_v1 = param_1 + temp_v4 * 2;
      temp_v6 = *(char *)(temp_v1 + 0xb0) == '\0';
      if (temp_v6) {
        temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 0xb1);
      }
      temp_v2 = *(short *)(temp_v0 + 8) + temp_v8;
      if (!(temp_v6 && temp_v1 == 0)) {
        FUN_001835b4(2,0x23,0x10,temp_v2,(int)*(short *)(temp_v0 + 10),0x10);
      }
      else {
        FUN_001835b4(2,0x23,5,temp_v2,(int)*(short *)(temp_v0 + 10),0x10);
      }
    }
    temp_v5 = 0xffffffff;
    if ((*(char *)(param_1 + 0x22) == temp_v4) && (*(char *)(param_1 + 1) != '\x04')) {
      temp_v5 = 0x57d8ffff;
      FUN_001835b4(2,0x23,4,*(short *)(temp_v0 + 8) + temp_v8,(int)*(short *)(temp_v0 + 10),0x10);
      temp_v1 = *(unsigned int *)(param_1 + 0xc);
      temp_v2 = (int)(((long long)(int)temp_v1 * -0x77777777 + ((unsigned long long)temp_v1 << 0x20)) >> 0x20);
      if ((int)(temp_v1 + ((temp_v2 >> 4) - (temp_v2 >> 0x1f)) * -0x1e) < 0xf) {
        FUN_001835b4(2,0x23,6,*(short *)(temp_v0 + 8) + temp_v8,(int)*(short *)(temp_v0 + 10),0x10);
      }
    }
    temp_v2 = FUN_001834a4(0x23,7);
    temp_v3 = param_1 + temp_v4 * 2;
    temp_v9 = *(unsigned char *)(temp_v3 + 0xb0);
    temp_v10 = *(unsigned char *)(temp_v3 + 0xb1);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 10) + (int)*(short *)(temp_v2 + 10),
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v0 + 8) + (int)*(short *)(temp_v2 + 8) + temp_v8,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(4,temp_v5,&temp_v9,(int)*(short *)(temp_v0 + 10));
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  FUN_001677c0();
  temp_v4 = DAT_0059dbb4;
  piVar5 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v0 = *piVar5;
  temp_v2 = piVar5[temp_v0 + 2];
  *piVar5 = temp_v0 - 1;
  if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v2 != piVar5[temp_v0 + 1]) {
    (**(romwright_code **)(temp_v4 + 0x1274))();
    *(unsigned char *)(temp_v4 + 0x1270) = 0;
  }
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return;
}

} /* extern "C" */
