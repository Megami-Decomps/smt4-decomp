/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e169c` (_code @ 0x2e169c, 0x348 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern int DAT_0057f0c8; /* 0x57f0c8 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164168. */
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0020bd54. */
/* Supplied declaration required: FUN_0025c848. */
/* Supplied declaration required: FUN_002acfc8. */


unsigned char FUN_002e169c(void)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  
  temp_v1 = DAT_0057f0c8;
  if (*(char *)(DAT_0057f0c8 + 0x5e0) != '\0') {
    FUN_00157558(DAT_0059dbb4);
    temp_v4 = DAT_0059dbb4;
    temp_v2 = FUN_001692ac(1,0);
    piVar10 = (int *)(temp_v4 + 0x1258);
    temp_v8 = *piVar10;
    temp_v7 = piVar10[temp_v8 + 2];
    *piVar10 = temp_v8 + 1;
    piVar10[temp_v8 + 3] = temp_v2;
    if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v7 != temp_v2) {
      (**(romwright_code **)(temp_v4 + 0x1274))();
      *(unsigned char *)(temp_v4 + 0x1270) = 0;
    }
    temp_v3 = *(unsigned int *)(temp_v1 + 0x10);
    if (((temp_v3 < 2) || (temp_v3 == 2 || temp_v3 == 3)) &&
       (FUN_0020bd54(), *(char *)(temp_v1 + 0x5e1) != '\0')) {
      if (*(char *)(temp_v1 + 0x5e4) != '\x01') {
        FUN_0025c848();
        FUN_0025c848(temp_v1 + 0x494);
        FUN_0025c848(temp_v1 + 0x520);
        FUN_0025c848(temp_v1 + 0x408);
      }
      else {
        temp_v5 = FUN_001654d8(temp_v1 + 0x37c);
        temp_v6 = FUN_001654e4(temp_v1 + 0x37c);
        FUN_001835b4(2,10,0,temp_v5,temp_v6,0x10);
        FUN_001835b4(2,10,1,temp_v5,temp_v6,0x10);
        FUN_001835b4(2,10,0xa3,temp_v5,temp_v6,0x10);
        FUN_001835b4(2,10,0xa4,temp_v5,temp_v6,0x10);
      }
      temp_v9 = *(char *)(temp_v1 + 0x5e1) != '\0';
      temp_v0 = '\0';
      if (temp_v9) {
        temp_v0 = *(char *)(temp_v1 + 0x5ea);
      }
      if ((temp_v9 && temp_v0 != '\0') && (*(int *)(temp_v1 + 0x3a8) >= 0x3f800000)) {
        temp_v4 = FUN_001834a4(10,0x1d);
        if (*(char *)(temp_v1 + 0x67c) != '\0') {
          FUN_00164168(*(unsigned int *)(temp_v1 + 0x678),(int)*(short *)(temp_v4 + 8),
                       (int)*(short *)(temp_v4 + 10),0x15,6,0);
        }
        else if (*(char *)(temp_v1 + 0x674) != '\0') {
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(2,*(unsigned int *)(temp_v1 + 0x5ec),temp_v1 + 0x5f0);
        }
        else {
          FUN_002acfc8(temp_v1 + 0x5f0,(int)*(short *)(temp_v4 + 8),(int)*(short *)(temp_v4 + 10));
        }
        temp_v4 = FUN_001834a4(10,0x1e);
        if (*(char *)(temp_v1 + 0x67c) != '\0') {
          FUN_00164168(*(unsigned int *)(temp_v1 + 0x678),(int)*(short *)(temp_v4 + 8),
                       (int)*(short *)(temp_v4 + 10),0x15,6,1);
        }
        else if (*(char *)(temp_v1 + 0x674) != '\x01') {
          VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
          VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(2,*(unsigned int *)(temp_v1 + 0x5ec),temp_v1 + 0x630);
        }
        else {
          FUN_002acfc8(temp_v1 + 0x630,(int)*(short *)(temp_v4 + 8),(int)*(short *)(temp_v4 + 10));
        }
      }
    }
    temp_v1 = DAT_0059dbb4;
    piVar10 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v4 = *piVar10;
    temp_v2 = piVar10[temp_v4 + 2];
    *piVar10 = temp_v4 - 1;
    if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v2 != piVar10[temp_v4 + 1]) {
      (**(romwright_code **)(temp_v1 + 0x1274))();
      *(unsigned char *)(temp_v1 + 0x1270) = 0;
    }
    FUN_0016c560(DAT_0059dbb4);
    FUN_0016c410(DAT_0059dbb4);
  }
  return 0;
}
