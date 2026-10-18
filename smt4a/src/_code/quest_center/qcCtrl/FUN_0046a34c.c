/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046a34c` (_code @ 0x46a34c, 0x4c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp108; /* 0x108: local_108 */
} param_4_stack;

extern unsigned char LAB_0046a704; /* 0x46a704 */
extern unsigned char LAB_0046a714; /* 0x46a714 */
extern unsigned char LAB_0046a74c; /* 0x46a74c */
extern unsigned char LAB_0046a768; /* 0x46a768 */
extern unsigned char LAB_0046a774; /* 0x46a774 */
extern unsigned char LAB_0046a77c; /* 0x46a77c */
extern unsigned char LAB_0046a7a0; /* 0x46a7a0 */
extern unsigned char LAB_0046a818; /* 0x46a818 */
extern unsigned char LAB_0046a840; /* 0x46a840 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_00100388. */
extern int FUN_0015a21c(int);
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_00178b04. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_00407360. */
/* Supplied declaration required: FUN_00407978. */
/* Supplied declaration required: FUN_00407ab0. */
/* Supplied declaration required: FUN_00408184. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
/* Supplied declaration required: FUN_0040ac08. */
/* Supplied declaration required: FUN_0040ace8. */
/* Supplied declaration required: FUN_0040ae70. */
extern int FUN_0040af60(unsigned int);
/* Supplied declaration required: FUN_0040b0f8. */
/* Supplied declaration required: FUN_0045b538. */


void FUN_0046a34c(int param_1,char param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: 4 goto(s); 18 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned long long temp_v5;
  unsigned char temp_v6 [64];
  char temp_v7 [80];
  unsigned char temp_v8 [148];
  
  *(char *)(param_1 + 0x10) = param_2;
  *(unsigned char *)(param_1 + 0x11) = param_3;
  *(unsigned char *)(param_1 + 0x1a) = param_4;
  *(unsigned int *)(param_1 + 0xabc) = 6;
  if (param_2 != '\v') {
    if (param_2 < '\f') {
      if (param_2 == '\x01') {
        temp_v3 = 0;
      }
      else {
        if (param_2 != '\t') {
          if (param_2 != '\n') goto LAB_0046a3a0;
          goto LAB_0046a534;
        }
        temp_v3 = 2;
      }
      *(unsigned char *)(param_1 + 0x18) = temp_v3;
      goto LAB_0046a3b0;
    }
    if (param_2 != '\f' && param_2 != '\r') {
LAB_0046a3a0:
      *(unsigned char *)(param_1 + 0x18) = 1;
      *(unsigned int *)(param_1 + 0xabc) = 9;
      goto LAB_0046a3b0;
    }
  }
LAB_0046a534:
  *(unsigned char *)(param_1 + 0x18) = 3;
LAB_0046a3b0:
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v7[0] = -0x22;
  temp_v7[1] = '\x19';
  temp_v7[2] = 'V';
  temp_v7[3] = '\0';
  temp_v7[4] = 'l';
  temp_v7[5] = '\x1a';
  temp_v7[6] = 'V';
  temp_v7[7] = '\0';
  temp_v7[8] = '6';
  temp_v7[9] = '\x1a';
  temp_v7[10] = 'V';
  temp_v7[0xb] = '\0';
  temp_v7[0xc] = -4;
  temp_v7[0xd] = '\x19';
  temp_v7[0xe] = 'V';
  temp_v7[0xf] = '\0';
  if (0 < *(int *)(param_1 + 0xabc)) {
    do {
      FUN_00100388(temp_v8,&LAB_0046a704,
                   *(unsigned int *)(temp_v7 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),temp_v4 + 1);
      temp_v0 = 0x20;
      FUN_00178b04(0x20,&LAB_0046a714,0x245);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_0040ac08();
      }
      temp_v0 = param_1 + temp_v4 * 4;
      piVar6 = (int *)(temp_v0 + 0xa10);
      *piVar6 = temp_v1;
      FUN_0040aa6c();
      FUN_0040aad4(*piVar6,0);
      FUN_0045b538(*(int *)(*piVar6 + 0xc) + 0xc);
      temp_v1 = *(int *)(*piVar6 + 4);
      FUN_003fe86c(temp_v1,0);
      *(int *)(temp_v1 + 0x1fc) = (int)temp_v5;
      FUN_0040ace8(DAT_0056fcc0,temp_v1);
      FUN_00100388(temp_v8,&LAB_0046a74c,
                   *(unsigned int *)(temp_v7 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),temp_v4 + 1);
      temp_v1 = 0x20;
      FUN_00178b04(0x20,&LAB_0046a714,0x25a);
      temp_v2 = 0;
      if (temp_v1 != 0) {
        temp_v2 = FUN_0040ac08();
      }
      *(unsigned int *)(temp_v0 + 0xa34) = temp_v2;
      FUN_0040aa6c();
      FUN_0040aad4(*(int *)(temp_v0 + 0xa34),0);
      temp_v1 = *(int *)(*(int *)(temp_v0 + 0xa34) + 4);
      FUN_0040ace8(DAT_0056fcc0,temp_v1);
      FUN_003fe86c(temp_v1,0,1);
      temp_v4 = temp_v4 + 1;
      *(unsigned int *)(temp_v1 + 4) = *(unsigned int *)(temp_v1 + 4) | 1;
    } while (temp_v4 < *(int *)(param_1 + 0xabc));
  }
  *(unsigned int *)(param_1 + 0xa5c) = 0x41f00000;
  if (*(char *)(param_1 + 0x1a) == '\x02') {
    FUN_00100388(temp_v8,&LAB_0046a768,
                 *(unsigned int *)(temp_v7 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4));
    temp_v4 = 0x20;
    FUN_00178b04(0x20,&LAB_0046a714,0x27e);
    temp_v2 = 0;
    if (temp_v4 != 0) {
      temp_v2 = FUN_0040ac08();
    }
    piVar6 = (int *)(param_1 + 0xce8);
    *(unsigned int *)(param_1 + 0xce8) = temp_v2;
    FUN_0040aa6c();
    FUN_0040aad4(*piVar6,0);
    FUN_0045b538(*(int *)(*piVar6 + 0xc) + 0xc);
    temp_v2 = *(unsigned int *)(*piVar6 + 4);
    FUN_0040ace8(DAT_0056fcc0,temp_v2);
    FUN_003fe86c(temp_v2,0,1);
    FUN_00100388(temp_v8,&LAB_0046a774,
                 *(unsigned int *)(temp_v7 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4));
    temp_v2 = DAT_0056fcc0;
    FUN_0040b0f8(DAT_0056fcc0,temp_v8);
    temp_v4 = FUN_0040af60(temp_v2);
    if (temp_v4 != 0) {
      FUN_0040ae70(temp_v2,1);
    }
  }
  temp_v1 = 0x7a0;
  FUN_0016007c(0x7a0,param_1);
  temp_v4 = 0;
  if (temp_v1 != 0) {
    FUN_002e6354();
    temp_v4 = FUN_0015a21c(temp_v1 + 0x4f0);
    temp_v4 = temp_v4 - 0x4f0;
  }
  *(int *)(param_1 + 0xcdc) = temp_v4;
  FUN_00407978();
  FUN_00407ab0(*(unsigned int *)(param_1 + 0xcdc),
               *(unsigned int *)(temp_v7 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),0);
  FUN_00407360(*(unsigned int *)(param_1 + 0xcdc),0);
  if (*(char *)(param_1 + 0x10) != '\x0e') {
    FUN_00100388(temp_v7 + 0x10,&LAB_0046a77c);
    FUN_00100388(temp_v6,&LAB_0046a7a0,(int)*(char *)(param_1 + 0x10));
  }
  else {
    FUN_00100388(temp_v7 + 0x10,&LAB_0046a77c);
    temp_v4 = FUN_0018719c(0x103);
    if (temp_v4 != 0) {
      FUN_00100388(temp_v6,&LAB_0046a818,(int)*(char *)(param_1 + 0x10));
    }
    else {
      FUN_00100388(temp_v6,&LAB_0046a840,(int)*(char *)(param_1 + 0x10));
    }
  }
  FUN_002804b0(temp_v7 + 0x10,param_1 + 0x290,0);
  FUN_002804b0(temp_v6,param_1 + 0x294,0);
  FUN_0022677c(0,0xff);
  FUN_0022677c(1,0xff);
  FUN_00408184(0x1c,1);
  return;
}
