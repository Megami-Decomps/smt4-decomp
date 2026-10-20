/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001137c8` (_code @ 0x1137c8, 0x176 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011394c(...);
int FUN_00121050(...);
int FUN_001224d0(...);
int onlineStringDestroy(...);
int onlineUrlSetHost(unsigned char [108], unsigned int);
int FUN_002e93c2(unsigned char [108], unsigned int);
int onlineSockAddrSetHost(...);
int onlineSockAddrConstruct(unsigned char [6]);
int onlineUrlDestroy(...);
int FUN_002fd5d4(unsigned char [108], unsigned int);
int FUN_002fe1b8(void);
int FUN_002fe39c(void);
int FUN_002fe400(...);
int FUN_002fe454(unsigned char [108]);
int FUN_002fe468(unsigned char [4], unsigned char [108]);
int FUN_002fe4bc(...);
int FUN_002fe544(...);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 12 byte(s) */
typedef struct {
    unsigned short sp1D6; /* 0x1d6: local_1d6 */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
    unsigned short sp1FE; /* 0x1fe: local_1fe */
    unsigned int sp208; /* 0x208: local_208 */
} param_2_stack;

extern unsigned char LAB_00113944; /* 0x113944 */
extern unsigned int DAT_00594a8c; /* 0x594a8c */

/* Supplied declaration required: FUN_0011394c. */
/* Supplied declaration required: FUN_00121050. */
/* Supplied declaration required: FUN_001224d0. */
/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: onlineUrlSetHost. */
/* Supplied declaration required: FUN_002e93c2. */
/* Supplied declaration required: onlineSockAddrSetHost. */
/* Supplied declaration required: onlineSockAddrConstruct. */
extern int *FUN_002ea704(void);
/* Supplied declaration required: onlineUrlDestroy. */
extern int FUN_002f7896(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002fd5d4. */
/* Supplied declaration required: FUN_002fe1b8. */
/* Supplied declaration required: FUN_002fe39c. */
extern int FUN_002fe3e8(unsigned char *);
/* Supplied declaration required: FUN_002fe400. */
/* Supplied declaration required: FUN_002fe454. */
/* Supplied declaration required: FUN_002fe468. */
/* Supplied declaration required: FUN_002fe4bc. */
extern unsigned int FUN_002fe4f8(unsigned char *, unsigned char *, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002fe544. */


void FUN_001137c8(int param_1,unsigned int param_2)

{
/* irregular: 1 goto(s); 17 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned char *puVar5;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5 [6];
  unsigned short temp_v6;
  unsigned char temp_v7 [4];
  unsigned int temp_v8;
  unsigned char temp_v9 [6];
  unsigned short temp_v10;
  unsigned char temp_v11 [108];
  unsigned char temp_v12 [152];
  unsigned char temp_v13 [152];
  unsigned char temp_v14 [12];
  
  temp_v1 = param_1 + 0x34;
  FUN_002fe1b8();
  if (temp_v1 != 0) {
    FUN_002fe39c();
    return;
  }
  FUN_002fd5d4(temp_v11,param_2);
  piVar3 = (int *)FUN_002ea704();
  temp_v1 = (**(romwright_code **)(*piVar3 + 0x2c))();
  temp_v4 = *(char *)(temp_v1 + 8) == '\0';
  do {
    if (temp_v4) goto LAB_00113920;
    temp_v1 = FUN_002fe3e8(temp_v11);
    temp_v4 = 1;
  } while (temp_v1 == 0);
  temp_v4 = 0;
  FUN_002fe400(temp_v14,temp_v11);
  temp_v1 = FUN_002f7896(temp_v14,&LAB_00113944);
  if ((temp_v1 == 0) && (temp_v1 = FUN_002fe454(temp_v11), temp_v1 != 0)) {
    FUN_002fe468(temp_v7,temp_v11);
    temp_v4 = 1;
    temp_v1 = FUN_002f7896(temp_v7,&LAB_00113944);
    if ((temp_v1 == 0) && (temp_v1 = FUN_002fe4bc(temp_v11), temp_v1 != 0)) {
      temp_v0 = 0;
    }
    else {
      temp_v0 = 1;
    }
  }
  else {
    temp_v0 = 1;
  }
  if (temp_v4) {
    onlineStringDestroy(temp_v7);
  }
  onlineStringDestroy(temp_v14);
  if (temp_v0) {
    temp_v2 = FUN_002fe4f8(temp_v13,temp_v11,DAT_00594a8c,90000);
    FUN_002fe544(param_1 + 0x54,temp_v2);
    puVar5 = temp_v13;
  }
  else {
    FUN_002fe400(temp_v7,temp_v11);
    onlineUrlSetHost(temp_v11,temp_v8);
    onlineStringDestroy(temp_v7);
    temp_v2 = FUN_002fe454(temp_v11);
    FUN_002e93c2(temp_v11,temp_v2);
    onlineSockAddrConstruct(temp_v9);
    FUN_002fe400(temp_v7,temp_v11);
    onlineSockAddrSetHost(temp_v9,temp_v8);
    onlineStringDestroy(temp_v7);
    temp_v3 = FUN_002fe454(temp_v11);
    temp_v10 = (unsigned short)((temp_v3 & 0xff) << 8) | ((unsigned short)(temp_v3 >> 8) & 0xff);
    onlineSockAddrConstruct(temp_v5);
    FUN_002fe468(temp_v7,temp_v11);
    onlineSockAddrSetHost(temp_v5,temp_v8);
    onlineStringDestroy(temp_v7);
    temp_v3 = FUN_002fe4bc(temp_v11);
    temp_v6 = (unsigned short)((temp_v3 & 0xff) << 8) | ((unsigned short)(temp_v3 >> 8) & 0xff);
    piVar3 = (int *)FUN_002ea704();
    temp_v2 = (**(romwright_code **)(*piVar3 + 0x2c))();
    FUN_00121050(temp_v2,temp_v9,temp_v5,1);
    FUN_0011394c(param_1,temp_v5);
LAB_00113920:
    temp_v2 = FUN_002fe4f8(temp_v12,temp_v11,DAT_00594a8c,90000);
    FUN_002fe544(param_1 + 0x38,temp_v2);
    puVar5 = temp_v12;
  }
  FUN_001224d0(puVar5);
  onlineUrlDestroy(temp_v11);
  return;
}

} /* extern "C" */
