/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f210` (_code @ 0x26f210, 0x568 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 5 slot(s), 15 byte(s) */
typedef struct {
    unsigned char spA6; /* 0xa6: local_a6 */
    unsigned short spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
} param_3_stack;

extern unsigned char LAB_0026f584; /* 0x26f584 */
extern unsigned char LAB_0026f598; /* 0x26f598 */
extern unsigned char LAB_0026f5a8; /* 0x26f5a8 */
extern unsigned char LAB_0026f5b0; /* 0x26f5b0 */
extern unsigned char LAB_0026f778; /* 0x26f778 */

/* Supplied declaration required: FUN_0024ee4c. */
/* Supplied declaration required: FUN_0028f4b4. */
/* Supplied declaration required: FUN_00293f10. */
/* Supplied declaration required: FUN_002942c4. */
/* Supplied declaration required: FUN_002958f8. */
/* Supplied declaration required: FUN_00296b3c. */
/* Supplied declaration required: FUN_002a7c80. */
extern unsigned int FUN_002b47bc(int, unsigned int, unsigned int);
extern unsigned int FUN_002bce00(void);
extern unsigned int FUN_002bce30(short, unsigned int);
/* Supplied declaration required: FUN_002bcfc0. */
extern unsigned int FUN_002bd06c(void);
/* Supplied declaration required: FUN_002be624. */
extern unsigned int FUN_002be650(short, unsigned int);
/* Supplied declaration required: FUN_002bf694. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0026f210(unsigned int *param_1,short *param_2,int param_3)

{
/* irregular: 11 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  float temp_v5;
  unsigned short temp_v6;
  unsigned char temp_v7;
  unsigned long long temp_v8;
  
  FUN_002bf694(&temp_v6,param_2 + 7);
  FUN_00296b3c(param_1[1],4,0xffffffff,0,0,&temp_v6);
  if ((*(unsigned char *)(param_2 + 0x10) & 2) != 0) {
    rt_memcpy_w(&temp_v6,&LAB_0026f584,0x13);
  }
  else {
    rt_memcpy_w(&temp_v6,&LAB_0026f598,0xf);
  }
  FUN_00296b3c(*param_1,4,0xffffffff,0,0,&temp_v6);
  if (param_3 != 0) {
    temp_v1 = FUN_002b47bc(param_3,*(unsigned int *)(param_2 + 0x12),0);
    FUN_00296b3c(param_1[0xd],2,0xffffffff,0,0,&LAB_0026f5a8,temp_v1);
  }
  else {
    temp_v6 = 0x4081;
    temp_v7 = 0;
    FUN_00296b3c(param_1[0xd],2,0xffffffff,0,0,&temp_v6);
  }
  if (*param_2 == 0) {
    *(unsigned short *)(param_1 + 9) = 0;
  }
  else {
    temp_v1 = FUN_002be650(*param_2,0);
    FUN_002bcfc0(temp_v1,&temp_v6);
    FUN_00296b3c(param_1[2],2,0xffffffff,0,0,&temp_v6);
    *(short *)(param_1 + 9) = *param_2;
  }
  if (param_2[1] == 0) {
    *(unsigned short *)((int)param_1 + 0x26) = 0;
  }
  else {
    temp_v1 = FUN_002be650(param_2[1],0);
    FUN_002bcfc0(temp_v1,&temp_v6);
    FUN_00296b3c(param_1[3],2,0xffffffff,0,0,&temp_v6);
    *(short *)((int)param_1 + 0x26) = param_2[1];
  }
  if (param_2[2] == 0) {
    *(unsigned short *)(param_1 + 10) = 0;
  }
  else {
    temp_v1 = FUN_002be650(param_2[2],0);
    FUN_002bcfc0(temp_v1,&temp_v6);
    FUN_00296b3c(param_1[4],2,0xffffffff,0,0,&temp_v6);
    *(short *)(param_1 + 10) = param_2[2];
  }
  if (param_2[3] == 0) {
    *(unsigned short *)((int)param_1 + 0x2a) = 0;
  }
  else {
    temp_v1 = FUN_002be650(param_2[3],0);
    FUN_002bcfc0(temp_v1,&temp_v6);
    FUN_00296b3c(param_1[5],2,0xffffffff,0,0,&temp_v6);
    *(short *)((int)param_1 + 0x2a) = param_2[3];
  }
  if (param_2[4] == 0) {
    *(unsigned short *)(param_1 + 0xb) = 0;
  }
  else {
    temp_v1 = FUN_002be650(param_2[4],0);
    FUN_002bcfc0(temp_v1,&temp_v6);
    FUN_00296b3c(param_1[6],2,0xffffffff,0,0,&temp_v6);
    *(short *)(param_1 + 0xb) = param_2[4];
  }
  if (param_2[5] == 0) {
    *(unsigned short *)((int)param_1 + 0x2e) = 0;
  }
  else {
    temp_v1 = FUN_002be650(param_2[5],0);
    FUN_002bcfc0(temp_v1,&temp_v6);
    FUN_00296b3c(param_1[7],2,0xffffffff,0,0,&temp_v6);
    *(short *)((int)param_1 + 0x2e) = param_2[5];
  }
  if (param_2[6] == 0) {
    *(unsigned short *)(param_1 + 0xc) = 0;
  }
  else {
    temp_v1 = FUN_002be650(param_2[6],0);
    FUN_002bcfc0(temp_v1,&temp_v6);
    FUN_00296b3c(param_1[8],2,0xffffffff,0,0,&temp_v6);
    *(short *)(param_1 + 0xc) = param_2[6];
  }
  if (param_2[0x24] != 0) {
    temp_v1 = FUN_002bd06c();
    FUN_002bcfc0(temp_v1,&temp_v6);
  }
  else {
    FUN_0024ee4c(&temp_v6,&LAB_0026f5b0);
  }
  FUN_00296b3c(param_1[0xe],1,0xffffffff,0,0,&temp_v6);
  temp_v5 = 0.0f;
  temp_v8 = 0;
  FUN_0028f4b4(&temp_v6,1);
  param_1[0xf] = (int)temp_v5;
  if (param_2[0x24] != 0) {
    temp_v1 = FUN_002bce30(param_2[0x24],0);
    FUN_002bcfc0(temp_v1,&temp_v6);
  }
  else {
    FUN_002a7c80(&temp_v6,&LAB_0026f778);
  }
  FUN_00296b3c(param_1[0x10],2,0xffffffff,0,0,&temp_v6);
  temp_v5 = (float)temp_v8;
  FUN_0028f4b4(&temp_v6,2);
  temp_v4 = 0;
  param_1[0x11] = (int)temp_v5;
  do {
    if (param_2[temp_v4 + 0x1c] != 0) {
      temp_v1 = FUN_002bce00();
      FUN_002bcfc0(temp_v1,&temp_v6);
      FUN_00296b3c(param_1[temp_v4 + 0x12],1,0xffffffff,0,0,&temp_v6);
      temp_v5 = (float)temp_v8;
      FUN_0028f4b4(&temp_v6,1);
      param_1[temp_v4 + 0x1a] = (int)temp_v5;
    }
    else {
      FUN_002be624(&temp_v6,&LAB_0026f5b0);
      FUN_00296b3c(param_1[temp_v4 + 0x12],2,0xffffffff,0,0,&temp_v6);
      temp_v5 = (float)temp_v8;
      FUN_0028f4b4(&temp_v6,2);
      param_1[temp_v4 + 0x1a] = (int)temp_v5;
    }
    temp_v5 = (float)temp_v8;
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 8);
  temp_v2 = (unsigned int)*(short *)(param_1 + 0x22);
  temp_v3 = (unsigned int)(unsigned short)param_2[0x24];
  if (temp_v2 != temp_v3) {
    if (temp_v3 != 0) {
      if ((temp_v2 != 0) && (FUN_00293f10(temp_v2,1), temp_v2 != 0)) {
        FUN_002958f8((int)*(short *)(param_1 + 0x22),1);
      }
      temp_v0 = param_2[0x24];
      *(short *)(param_1 + 0x22) = temp_v0;
      FUN_002942c4((int)temp_v0,1);
      FUN_002be624(&temp_v6,
                   "犂钂銂薂薂钂澂膂鎂鎂䂁閂鎂薂銂鎂䂁鞂覂貂貂䂁銂薂莂薂覂隂薂䂁钂袂覂鎂䒁＀"
                  );
      FUN_00296b3c(param_1[0x23],2,0xffffffff,0,0,&temp_v6);
      FUN_0028f4b4(&temp_v6,2);
      param_1[0x24] = (int)temp_v5;
      return;
    }
  }
  else if (temp_v3 != 0) {
    FUN_002be624(&temp_v6,
                 "犂钂銂薂薂钂澂膂鎂鎂䂁閂鎂薂銂鎂䂁鞂覂貂貂䂁銂薂莂薂覂隂薂䂁钂袂覂鎂䒁＀"
                );
    FUN_00296b3c(param_1[0x23],2,0xffffffff,0,0,&temp_v6);
    FUN_0028f4b4(&temp_v6,2);
    param_1[0x24] = (int)temp_v5;
    return;
  }
  if ((temp_v2 != 0) && (FUN_00293f10(temp_v2,1), temp_v2 != 0)) {
    FUN_002958f8((int)*(short *)(param_1 + 0x22),1);
  }
  *(unsigned short *)(param_1 + 0x22) = 0;
  FUN_002be624(&temp_v6,
               "犂钂銂薂薂钂澂膂鎂鎂䂁閂鎂薂銂鎂䂁鞂覂貂貂䂁銂薂莂薂覂隂薂䂁钂袂覂鎂䒁＀"
              );
  FUN_00296b3c(param_1[0x23],2,0xffffffff,0,0,&temp_v6);
  FUN_0028f4b4(&temp_v6,2);
  param_1[0x24] = (int)temp_v5;
  return;
}
