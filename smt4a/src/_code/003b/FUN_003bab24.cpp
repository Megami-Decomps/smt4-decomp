/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bab24` (_code @ 0x3bab24, 0x278 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00157558(int);
int FUN_00164b5c(...);
int FUN_001677c0(void);
int FUN_0016c410(...);
int FUN_0016c560(...);
int FUN_001835b4(int, int, int, int, int, int);
int FUN_0032cdc8(...);

typedef int romwright_code(...);
/* stack frame of void: 5 slot(s), 16 byte(s) */
typedef struct {
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char DAT_0057f208; /* 0x57f208 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_0032cdc8. */


char FUN_003bab24(void)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  
  temp_v2 = (*(int *)((unsigned char *)&DAT_0057f208 + 0xc));
  temp_v0 = '\0';
  if ((*(int *)((unsigned char *)&DAT_0057f208 + 0xc)) != 0) {
    temp_v0 = *(char *)((*(int *)((unsigned char *)&DAT_0057f208 + 0xc)) + 5);
  }
  if ((*(int *)((unsigned char *)&DAT_0057f208 + 0xc)) != 0 && temp_v0 != '\0') {
    FUN_00157558(DAT_0059dbb4);
    temp_v5 = DAT_0059dbb4;
    temp_v1 = FUN_001692ac(1,0);
    piVar6 = (int *)(temp_v5 + 0x1258);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v5 + 0x1270) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v5 + 0x1274))();
      *(unsigned char *)(temp_v5 + 0x1270) = 0;
    }
    temp_v6 = 0x42800000;
    if (*(char *)(temp_v2 + 0x1d) != '\0') {
      if (*(char *)(temp_v2 + 0x1d) == '\x01') {
        FUN_001835b4(2,9,0,0,0,1);
        temp_v5 = *(int *)(temp_v2 + 0x10);
        temp_v1 = *(int *)(temp_v2 + 0xc);
        FUN_001677c0();
        FUN_00164b5c(2,9,3,temp_v1,temp_v5,0xb);
        temp_v2 = FUN_001834a4(9,0x35);
        temp_v8 = 1;
        temp_v9 = 1;
        temp_v7 = temp_v6;
        FUN_0032cdc8(2,9,0x34,(int)*(short *)(temp_v2 + 8) +
                              temp_v1 + (int)**(short **)(temp_v2 + 0xc) / 2,
                     temp_v5 + (int)(*(short **)(temp_v2 + 0xc))[1] / 2 + (int)*(short *)(temp_v2 + 10),
                     0xb,&temp_v7);
        FUN_001677c0();
        FUN_001835b4(2,9,1,0,0,0xb);
      }
    }
    else {
      temp_v5 = *(int *)(temp_v2 + 0x10);
      temp_v1 = *(int *)(temp_v2 + 0xc);
      FUN_001677c0();
      FUN_00164b5c(2,9,3,temp_v1,temp_v5,0xb);
      temp_v2 = FUN_001834a4(9,0x35);
      temp_v8 = 1;
      temp_v9 = 1;
      temp_v7 = temp_v6;
      FUN_0032cdc8(2,9,0x34,(int)*(short *)(temp_v2 + 8) + temp_v1 + (int)**(short **)(temp_v2 + 0xc) / 2,
                   temp_v5 + (int)(*(short **)(temp_v2 + 0xc))[1] / 2 + (int)*(short *)(temp_v2 + 10),0xb,
                   &temp_v7);
      FUN_001677c0();
    }
    temp_v2 = DAT_0059dbb4;
    piVar6 = (int *)(DAT_0059dbb4 + 0x1258);
    temp_v5 = *piVar6;
    temp_v1 = piVar6[temp_v5 + 2];
    *piVar6 = temp_v5 - 1;
    if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v1 != piVar6[temp_v5 + 1]) {
      (**(romwright_code **)(temp_v2 + 0x1274))();
      *(unsigned char *)(temp_v2 + 0x1270) = 0;
    }
    FUN_0016c560(DAT_0059dbb4);
    FUN_0016c410(DAT_0059dbb4);
    temp_v0 = '\0';
  }
  return temp_v0;
}

} /* extern "C" */
