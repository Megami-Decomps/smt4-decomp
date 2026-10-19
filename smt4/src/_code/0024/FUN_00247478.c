/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00247478` (_code @ 0x247478, 0x67c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 22 slot(s), 32 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned char sp19; /* 0x19: local_19 */
    unsigned char sp1A; /* 0x1a: local_1a */
    unsigned char sp1B; /* 0x1b: local_1b */
    unsigned char sp1C; /* 0x1c: local_1c */
    unsigned short sp1E; /* 0x1e: local_1e */
    unsigned short sp20; /* 0x20: local_20 */
    unsigned short sp22; /* 0x22: local_22 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned char sp25; /* 0x25: local_25 */
    unsigned char sp26; /* 0x26: local_26 */
    unsigned char sp27; /* 0x27: local_27 */
    unsigned char sp28; /* 0x28: local_28 */
    unsigned char sp29; /* 0x29: local_29 */
    unsigned char sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp36; /* 0x36: local_36 */
    unsigned short sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002b4670. */
/* Supplied declaration required: FUN_002b6a54. */
extern int FUN_002b6ad0(void);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00247478(unsigned int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned char temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  unsigned char temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  unsigned short temp_v19;
  unsigned short temp_v20;
  short temp_v21;
  unsigned char temp_v22;
  unsigned char temp_v23;
  unsigned char temp_v24;
  unsigned char temp_v25;
  unsigned char temp_v26;
  
  temp_v9 = 100;
  temp_v10 = 0;
  temp_v5 = 0;
  temp_v7 = 0;
  temp_v11 = 0;
  temp_v15 = 0;
  temp_v22 = 0;
  temp_v6 = 0;
  temp_v8 = 0;
  temp_v16 = 0;
  temp_v23 = 0;
  temp_v26 = 0;
  temp_v17 = 0;
  temp_v18 = 0;
  temp_v20 = 0;
  temp_v24 = 0;
  temp_v12 = 0;
  temp_v19 = 0;
  temp_v21 = 0;
  temp_v25 = 0;
  temp_v14 = 0;
  temp_v13 = 0;
  switch((short)param_3[0x86]) {
  case 1:
    temp_v3 = *param_3;
    if ((temp_v3 & 6) != 0) {
      if (*(short *)((int)param_3 + 0x21a) != 1) {
        if (*(short *)((int)param_3 + 0x21a) == 2) {
          temp_v20 = *(unsigned short *)(param_3[0x9e] + 2);
          temp_v3 = (unsigned int)temp_v20;
          FUN_002b45e8();
          temp_v5 = (unsigned short)*(unsigned char *)(temp_v3 + 0x59);
          temp_v25 = *(unsigned char *)(temp_v3 + 0x58) & 0xf;
          temp_v26 = *(unsigned char *)(temp_v3 + 0x58) >> 4;
          temp_v18 = *(unsigned char *)(temp_v3 + 0xa4);
          temp_v2 = (unsigned int)*(unsigned short *)(param_3[0x9e] + 4);
          FUN_002b45e8();
          if (temp_v2 == 0) {
            temp_v6 = (unsigned short)((unsigned int)*(unsigned int *)(temp_v3 + 0x54) >> 0x10);
            temp_v0 = *(unsigned char *)(temp_v3 + 0x5a);
            temp_v15 = *(unsigned char *)(temp_v3 + 0x5b);
            temp_v16 = *(unsigned char *)(temp_v3 + 0x5c);
            temp_v10 = (unsigned short)*(unsigned int *)(temp_v3 + 0x54);
            temp_v1 = *(unsigned char *)(temp_v3 + 0x6c);
            temp_v12 = *(unsigned char *)(temp_v3 + 0x6d);
            temp_v14 = *(unsigned char *)(temp_v3 + 0x6f);
            temp_v13 = *(unsigned char *)(temp_v3 + 0x6e);
            temp_v11 = (unsigned short)temp_v1;
            temp_v10 = temp_v10 & 0x3ff;
            temp_v8 = (unsigned short)temp_v0;
            temp_v6 = temp_v6 >> 4;
            temp_v7 = 0;
            break;
          }
          temp_v6 = (unsigned short)((unsigned int)*(unsigned int *)(temp_v2 + 0x54) >> 0x14);
          temp_v8 = (unsigned short)*(unsigned char *)(temp_v2 + 0x5a);
          temp_v15 = *(unsigned char *)(temp_v2 + 0x5b);
          temp_v16 = *(unsigned char *)(temp_v2 + 0x5c);
          temp_v11 = (unsigned short)*(unsigned char *)(temp_v2 + 0x6c);
          temp_v12 = *(unsigned char *)(temp_v3 + 0x6d);
          temp_v14 = *(unsigned char *)(temp_v3 + 0x6f);
          temp_v13 = *(unsigned char *)(temp_v3 + 0x6e);
          temp_v10 = ((unsigned short)*(unsigned int *)(temp_v2 + 0x54) & 0x3ff) +
                     ((unsigned short)*(unsigned int *)(temp_v3 + 0x54) & 0x3ff);
        }
      }
      else {
        temp_v20 = *(unsigned short *)param_3[0x9e];
        temp_v3 = (unsigned int)temp_v20;
        FUN_002b45e8();
        temp_v6 = (unsigned short)((unsigned int)*(unsigned int *)(temp_v3 + 0x54) >> 0x10);
        temp_v5 = (unsigned short)*(unsigned char *)(temp_v3 + 0x59);
        temp_v10 = (unsigned short)*(unsigned int *)(temp_v3 + 0x54);
        temp_v25 = *(unsigned char *)(temp_v3 + 0x58) & 0xf;
        temp_v26 = *(unsigned char *)(temp_v3 + 0x58) >> 4;
        temp_v0 = *(unsigned char *)(temp_v3 + 0x5a);
        temp_v15 = *(unsigned char *)(temp_v3 + 0x5b);
        temp_v16 = *(unsigned char *)(temp_v3 + 0x5c);
        temp_v18 = *(unsigned char *)(temp_v3 + 0xa4);
        temp_v1 = *(unsigned char *)(temp_v3 + 0x6c);
        temp_v12 = *(unsigned char *)(temp_v3 + 0x6d);
        temp_v14 = *(unsigned char *)(temp_v3 + 0x6f);
        temp_v13 = *(unsigned char *)(temp_v3 + 0x6e);
        temp_v11 = (unsigned short)temp_v1;
        temp_v10 = temp_v10 & 0x3ff;
        temp_v8 = (unsigned short)temp_v0;
        temp_v6 = temp_v6 >> 4;
      }
    }
    else if ((temp_v3 & 8) != 0) {
      temp_v3 = (unsigned int)*(unsigned short *)((int)param_3 + 0xce);
      FUN_002b9024();
      temp_v6 = (unsigned short)*(unsigned char *)(temp_v3 + 10);
      temp_v5 = (unsigned short)(((unsigned int)*(unsigned short *)(temp_v3 + 8) << 0x1b) >> 0x1c);
      temp_v10 = *(unsigned short *)(temp_v3 + 0x12);
      temp_v25 = (unsigned char)*(unsigned short *)(temp_v3 + 8) >> 5;
      temp_v26 = (unsigned char)(((unsigned int)*(unsigned short *)(temp_v3 + 8) << 0x15) >> 0x1d);
      temp_v8 = (unsigned short)*(unsigned char *)(temp_v3 + 0xb);
      temp_v15 = *(unsigned char *)(temp_v3 + 0xc);
      temp_v16 = *(unsigned char *)(temp_v3 + 0xd);
      temp_v18 = *(unsigned char *)(temp_v3 + 0xf);
    }
    else if ((temp_v3 & 0x10) != 0) {
      temp_v6 = (unsigned short)*(unsigned char *)(param_3[0xa1] + 0x19);
      temp_v5 = *(unsigned short *)(param_3[0xa1] + 0x16) >> 0xc;
      temp_v10 = *(unsigned short *)(param_3[0xa1] + 0x20);
      temp_v25 = *(unsigned char *)(param_3[0xa1] + 0x18) & 7;
      temp_v26 = (unsigned char)(((unsigned int)*(unsigned char *)(param_3[0xa1] + 0x18) << 0x1a) >> 0x1d);
      temp_v8 = (unsigned short)*(unsigned char *)(param_3[0xa1] + 0x1a);
      temp_v15 = *(unsigned char *)(param_3[0xa1] + 0x1b);
      temp_v16 = *(unsigned char *)(param_3[0xa1] + 0x1c);
      temp_v3 = (unsigned int)*(unsigned short *)((int)param_3 + 0xce);
      FUN_002b9024();
      temp_v18 = *(unsigned char *)(temp_v3 + 0xf);
    }
    else if ((temp_v3 & 0x20) != 0) {
      temp_v4 = FUN_002b6ad0();
      if (temp_v4 != 0) {
        temp_v4 = FUN_002b6a54((int)(short)param_3[0x34],(int)*(short *)((int)param_3 + 0xd2));
        temp_v6 = (unsigned short)((unsigned int)(*(int *)(temp_v4 + 8) << 10) >> 0x1b);
        temp_v5 = (unsigned short)((unsigned int)(*(int *)(temp_v4 + 8) << 0x15) >> 0x1c);
        temp_v10 = *(unsigned short *)(temp_v4 + 0x12);
        temp_v25 = (unsigned char)((unsigned int)(*(int *)(temp_v4 + 8) << 0x12) >> 0x1d);
        temp_v26 = (unsigned char)((unsigned int)(*(int *)(temp_v4 + 8) << 0xf) >> 0x1d);
        temp_v8 = (unsigned short)*(unsigned char *)(temp_v4 + 0xc);
        temp_v15 = *(unsigned char *)(temp_v4 + 0xd);
        temp_v16 = *(unsigned char *)(temp_v4 + 0xe);
        temp_v18 = 0;
      }
      else {
        temp_v3 = (unsigned int)*(unsigned short *)(param_3[0xa0] + 0x46);
        FUN_002b9024();
        temp_v6 = (unsigned short)*(unsigned char *)(temp_v3 + 10);
        temp_v5 = (unsigned short)(((unsigned int)*(unsigned short *)(temp_v3 + 8) << 0x1b) >> 0x1c);
        temp_v10 = *(unsigned short *)(temp_v3 + 0x12);
        temp_v25 = (unsigned char)*(unsigned short *)(temp_v3 + 8) >> 5;
        temp_v26 = (unsigned char)(((unsigned int)*(unsigned short *)(temp_v3 + 8) << 0x15) >> 0x1d);
        temp_v8 = (unsigned short)*(unsigned char *)(temp_v3 + 0xb);
        temp_v15 = *(unsigned char *)(temp_v3 + 0xc);
        temp_v16 = *(unsigned char *)(temp_v3 + 0xd);
        temp_v18 = *(unsigned char *)(temp_v3 + 0xf);
      }
    }
    temp_v7 = 0;
    break;
  case 2:
  case 3:
    temp_v3 = (unsigned int)*(short *)((int)param_3 + 0x21a);
LAB_002478f4:
    temp_v19 = (unsigned short)temp_v3;
    temp_v2 = temp_v3;
    FUN_002ae164();
    if (temp_v2 != 0) {
      temp_v5 = (unsigned short)((unsigned int)(*(int *)(temp_v2 + 0x28) << 0x17) >> 0x1c);
      temp_v6 = (unsigned short)((unsigned int)(*(int *)(temp_v2 + 0x28) << 0xf) >> 0x1b);
      temp_v7 = (unsigned short)*(unsigned char *)(temp_v2 + 0x23);
      temp_v23 = *(unsigned char *)(temp_v2 + 0x3e);
      temp_v24 = *(unsigned char *)(temp_v2 + 0x3f);
      temp_v25 = (unsigned char)((unsigned int)(*(int *)(temp_v2 + 0x28) << 0xb) >> 0x1c);
      temp_v26 = (unsigned char)((unsigned int)(*(int *)(temp_v2 + 0x28) << 7) >> 0x1c);
      temp_v8 = (unsigned short)*(unsigned char *)(temp_v2 + 0x2e);
      temp_v15 = *(unsigned char *)(temp_v2 + 0x2f);
      temp_v16 = *(unsigned char *)(temp_v2 + 0x30);
      temp_v17 = (unsigned char)*(unsigned int *)(temp_v2 + 0x38) & 0x7f;
      temp_v11 = (unsigned short)((unsigned int)*(unsigned int *)(temp_v2 + 0x28) >> 0x19);
      temp_v12 = *(unsigned char *)(temp_v2 + 0x40);
      temp_v14 = *(unsigned char *)(temp_v2 + 0x42);
      temp_v13 = *(unsigned char *)(temp_v2 + 0x41);
    }
    else if (temp_v3 == 0xffff) {
      temp_v25 = 1;
      temp_v26 = 1;
    }
    break;
  case 8:
    temp_v21 = *(short *)((int)param_3 + 0x21a);
    temp_v4 = (int)temp_v21;
    FUN_002b4670();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
    if (temp_v3 != 0) goto LAB_002478f4;
    temp_v7 = 3;
    if ((*(unsigned char *)(temp_v4 + 0x6a) & 0x80) == 0) {
      temp_v5 = 2;
    }
    else {
      temp_v5 = 3;
    }
    temp_v25 = 1;
    temp_v17 = *(unsigned char *)(temp_v4 + 0x6a) & 0x7f;
    temp_v26 = 1;
    break;
  case 9:
  case 10:
  case 0xb:
    temp_v19 = 0xffff;
    temp_v25 = 1;
    temp_v26 = 1;
  }
  if (temp_v5 != 1 && temp_v5 != 3) {
    if (temp_v5 == 5) {
      temp_v22 = 2;
    }
    else if (temp_v5 == 6) {
      temp_v22 = 1;
    }
  }
  else {
    temp_v22 = 1;
  }
  temp_v3 = *param_3;
  if ((temp_v3 & 6) != 0) {
    temp_v9 = 100;
  }
  else if ((temp_v3 & 8) != 0) {
    temp_v3 = (unsigned int)*(unsigned short *)((int)param_3 + 0xce);
    FUN_002b9024();
    temp_v9 = *(unsigned short *)(temp_v3 + 0x10);
  }
  else if ((temp_v3 & 0x10) != 0) {
    temp_v9 = *(unsigned short *)(param_3[0xa1] + 0x1e);
  }
  else if ((temp_v3 & 0x20) != 0) {
    temp_v4 = FUN_002b6ad0();
    if (temp_v4 != 0) {
      temp_v3 = FUN_002b6a54((int)(short)param_3[0x34],(int)*(short *)((int)param_3 + 0xd2));
    }
    else {
      temp_v3 = (unsigned int)*(unsigned short *)(param_3[0xa0] + 0x46);
      FUN_002b9024();
    }
    temp_v9 = *(unsigned short *)(temp_v3 + 0x10);
  }
  rt_memcpy(param_1,&temp_v5,0x22);
  return;
}
