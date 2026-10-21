/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eaa9c` (_code @ 0x3eaa9c, 0x1e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_00201950(int);
int FUN_00201984(int);
int FUN_004d854c(unsigned int);
int callOnHandleField4B(unsigned int);
int callOnHandleField4C(unsigned int);
int FUN_004d8724(void);
int callOnHandleField4D(unsigned int);

extern unsigned char LAB_003eac80; /* 0x3eac80 */

/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_00178b04. */
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int dataTableFileGetTable(int, unsigned int);
/* Supplied declaration required: FUN_00201950. */
/* Supplied declaration required: FUN_00201984. */
/* Supplied declaration required: FUN_004d854c. */
/* Supplied declaration required: callOnHandleField4B. */
/* Supplied declaration required: callOnHandleField4C. */
/* Supplied declaration required: FUN_004d8724. */
extern int FUN_004d87e4(unsigned int);
/* Supplied declaration required: callOnHandleField4D. */
extern unsigned int *battleModelOwnerInitialize(unsigned int *value);


void FUN_003eaa9c(int param_1)

{
/* irregular: 2 goto(s); irregular input(s): in_s0, in_s1, in_s2; 9 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  short *psVar6;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int temp_v5;
  unsigned int in_s2;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  
  temp_v1 = FUN_004d87e4(*(unsigned int *)(param_1 + 0x22bc));
  if (temp_v1 != 0) {
    FUN_004d854c(*(unsigned int *)(param_1 + 0x22bc));
    temp_v1 = 1;
    do {
      temp_v2 = FUN_00178b04(0x24,&LAB_003eac80,0x3649);
      temp_v3 = 0;
      if (temp_v2 != 0) {
        temp_v3 = (unsigned int)battleModelOwnerInitialize((unsigned int *)temp_v2);
      }
      temp_v2 = param_1 + temp_v1 * 4;
      *(unsigned int *)(temp_v2 + 0x22bc) = temp_v3;
      FUN_004d8724();
      FUN_004d854c(*(unsigned int *)(temp_v2 + 0x22bc));
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 4);
    temp_v1 = 4;
    do {
      temp_v2 = *(int *)(param_1 + 0x1ffc) + temp_v1 * 0x408;
      if (*(char *)(temp_v2 + 0x23a) != '\0') {
        temp_v1 = *(int *)(param_1 + 0x1ed4) + *(short *)(temp_v2 + 8) * 0x1d0;
        goto LAB_003eab60;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x36);
    temp_v1 = 0;
LAB_003eab60:
    temp_v2 = param_1;
    FUN_001568f8(param_1,(int)*(short *)(temp_v1 + 0x6a));
    temp_v0 = *(unsigned short *)(temp_v2 + 2);
    if (*(int *)(param_1 + 0x2294) != 0) {
      temp_v3 = dataTableFileGetTable(*(int *)(param_1 + 0x2294),0);
      temp_v1 = dataTableGetEntries();
      temp_v2 = dataTableGetCount(temp_v3);
      temp_v4 = 0;
      if (temp_v4 < temp_v2) {
        do {
          psVar6 = (short *)(temp_v1 + temp_v4 * 0x38);
          if ((int)*psVar6 == (unsigned int)temp_v0) goto LAB_003eabd0;
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < temp_v2);
      }
    }
    psVar6 = (short *)0x0;
LAB_003eabd0:
    temp_v1 = 0;
    temp_v7 = (unsigned long long)*(unsigned int *)(psVar6 + 2);
    do {
      FUN_00201950(temp_v1);
      temp_v4 = param_1 + temp_v1 * 0xc;
      *(unsigned int *)(temp_v4 + 0x22d0) = in_s0;
      *(unsigned int *)(temp_v4 + 0x22d4) = in_s1;
      *(unsigned int *)(temp_v4 + 0x22d8) = in_s2;
      temp_v2 = param_1 + temp_v1 * 4;
      temp_v3 = *(unsigned int *)(temp_v4 + 0x22d0);
      temp_v5 = *(unsigned int *)(temp_v4 + 0x22d4);
      temp_v6 = *(unsigned int *)(temp_v4 + 0x22d8);
      callOnHandleField4B(*(unsigned int *)(temp_v2 + 0x22bc));
      FUN_00201984(temp_v1);
      *(unsigned int *)(temp_v4 + 0x2300) = temp_v3;
      *(unsigned int *)(temp_v4 + 0x2304) = temp_v5;
      *(unsigned int *)(temp_v4 + 0x2308) = temp_v6;
      callOnHandleField4C(*(unsigned int *)(temp_v2 + 0x22bc));
      in_s0 = (unsigned int)temp_v7;
      *(unsigned int *)(temp_v2 + 0x2330) = in_s0;
      in_s1 = in_s0;
      in_s2 = in_s0;
      callOnHandleField4D(*(unsigned int *)(temp_v2 + 0x22bc));
      temp_v2 = param_1 + temp_v1;
      temp_v1 = temp_v1 + 1;
      *(unsigned char *)(temp_v2 + 0x2340) = 1;
    } while (temp_v1 < 4);
    *(unsigned char *)(param_1 + 0x22cd) = 1;
  }
  return;
}

} /* extern "C" */
