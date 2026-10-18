/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3400` (_code @ 0x3a3400, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp58; /* 0x58: local_58 */
} void_stack;

extern int DAT_0059dbb4; /* 0x59dbb4 */
extern int DAT_00616ee0; /* 0x616ee0 */

extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_00280a08. */


void FUN_003a3400(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int temp_v4 [4];
  char acStack_48 [4];
  char acStack_44 [4];
  char acStack_40 [4];
  unsigned int uStack_3c;
  unsigned int temp_v5;
  unsigned int uStack_34;
  char acStack_30 [4];
  unsigned int temp_v6;
  
  temp_v3 = DAT_0059dbb4;
  temp_v4[0] = 0xff000000;
  temp_v4[1] = 0xff0000;
  temp_v4[2] = 0xffff0000;
  temp_v4[3] = 0xff00;
  acStack_48[0] = '\0';
  acStack_48[1] = -1;
  acStack_48[2] = '\0';
  acStack_48[3] = -1;
  acStack_44[0] = '\0';
  acStack_44[1] = -1;
  acStack_44[2] = -1;
  acStack_44[3] = '\0';
  acStack_40[0] = '\0';
  acStack_40[1] = '\0';
  acStack_40[2] = '\0';
  acStack_40[3] = -0x80;
  uStack_3c = 0x800000;
  temp_v6 = 0xff8000;
  temp_v5 = 0xff800000;
  uStack_34 = 0x8000;
  acStack_30[0] = '\0';
  acStack_30[1] = -0x80;
  acStack_30[2] = '\0';
  acStack_30[3] = -1;
  if (DAT_00616ee0 != 0) {
    temp_v0 = FUN_001692ac(5,1);
    piVar4 = (int *)(temp_v3 + 0x1258);
    temp_v1 = *piVar4;
    temp_v2 = piVar4[temp_v1 + 2];
    *piVar4 = temp_v1 + 1;
    piVar4[temp_v1 + 3] = temp_v0;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v2 != temp_v0) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
    FUN_0016c4b8(DAT_0059dbb4,0);
    temp_v3 = 0;
    if (temp_v3 < DAT_00616ee0) {
      do {
        FUN_00280a08(temp_v4[temp_v3 % 0xc] | 0x70,temp_v4[temp_v3 % 0xc] | 0x70);
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < DAT_00616ee0);
    }
    temp_v3 = DAT_0059dbb4;
    piVar4 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v0 = *piVar4;
    temp_v1 = piVar4[temp_v0 + 2];
    *piVar4 = temp_v0 - 1;
    if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v1 != piVar4[temp_v0 + 1]) {
      (**(romwright_code **)(temp_v3 + 0x1274))();
      *(unsigned char *)(temp_v3 + 0x1270) = 0;
    }
  }
  return;
}
