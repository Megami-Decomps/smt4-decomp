/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1b94` (_code @ 0x1b1b94, 0x1fbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 8 byte(s) */
typedef struct {
    unsigned long long spA0; /* 0xa0: local_a0 */
} param_2_stack;

extern unsigned char LAB_001b1ee4; /* 0x1b1ee4 */
extern unsigned char LAB_001b1ef0; /* 0x1b1ef0 */
extern unsigned char LAB_001b2224; /* 0x1b2224 */
extern unsigned char LAB_001b2230; /* 0x1b2230 */
extern unsigned char LAB_001b223c; /* 0x1b223c */
extern unsigned char LAB_001b2244; /* 0x1b2244 */
extern unsigned char LAB_001b2250; /* 0x1b2250 */
extern unsigned char LAB_001b225c; /* 0x1b225c */
extern unsigned char LAB_001b2268; /* 0x1b2268 */
extern unsigned char LAB_001b2274; /* 0x1b2274 */
extern unsigned char LAB_001b2280; /* 0x1b2280 */
extern unsigned char LAB_001b228c; /* 0x1b228c */
extern unsigned char LAB_001b2298; /* 0x1b2298 */
extern unsigned char LAB_001b22a4; /* 0x1b22a4 */
extern unsigned char LAB_001b25bc; /* 0x1b25bc */
extern unsigned char LAB_001b2624; /* 0x1b2624 */
extern unsigned char LAB_001b262c; /* 0x1b262c */
extern unsigned char LAB_001b2634; /* 0x1b2634 */
extern unsigned char LAB_001b263c; /* 0x1b263c */
extern unsigned char LAB_001b2930; /* 0x1b2930 */
extern unsigned char LAB_001b293c; /* 0x1b293c */
extern unsigned char LAB_001b2958; /* 0x1b2958 */
extern unsigned char LAB_001b2964; /* 0x1b2964 */
extern unsigned char LAB_001b2970; /* 0x1b2970 */
extern unsigned char LAB_001b2978; /* 0x1b2978 */
extern unsigned char LAB_001b2980; /* 0x1b2980 */
extern unsigned char LAB_001b2988; /* 0x1b2988 */
extern unsigned char LAB_001b2994; /* 0x1b2994 */
extern unsigned char LAB_001b29a0; /* 0x1b29a0 */
extern unsigned char LAB_001b29ac; /* 0x1b29ac */
extern unsigned char LAB_001b29b8; /* 0x1b29b8 */
extern unsigned char LAB_001b29c4; /* 0x1b29c4 */
extern unsigned char LAB_001b29d0; /* 0x1b29d0 */
extern unsigned char LAB_001b29dc; /* 0x1b29dc */
extern unsigned char LAB_001b2cc4; /* 0x1b2cc4 */
extern unsigned char LAB_001b2cd0; /* 0x1b2cd0 */
extern unsigned char LAB_001b2cdc; /* 0x1b2cdc */
extern unsigned char LAB_001b2ce8; /* 0x1b2ce8 */
extern unsigned char LAB_001b2cf4; /* 0x1b2cf4 */
extern unsigned char LAB_001b2d00; /* 0x1b2d00 */
extern unsigned char LAB_001b2d0c; /* 0x1b2d0c */
extern unsigned char LAB_001b2d18; /* 0x1b2d18 */
extern unsigned char LAB_001b2d24; /* 0x1b2d24 */
extern unsigned char LAB_001b2d30; /* 0x1b2d30 */
extern unsigned char LAB_001b2d3c; /* 0x1b2d3c */
extern unsigned char LAB_001b2d48; /* 0x1b2d48 */
extern unsigned char LAB_001b2d54; /* 0x1b2d54 */
extern unsigned char LAB_001b2d60; /* 0x1b2d60 */
extern unsigned char LAB_001b2d6c; /* 0x1b2d6c */
extern unsigned char LAB_001b2d78; /* 0x1b2d78 */
extern unsigned char LAB_001b2d84; /* 0x1b2d84 */
extern unsigned char LAB_001b2d90; /* 0x1b2d90 */
extern unsigned char LAB_001b2fe0; /* 0x1b2fe0 */
extern unsigned char LAB_001b2ff0; /* 0x1b2ff0 */
extern unsigned char LAB_001b3000; /* 0x1b3000 */
extern unsigned char LAB_001b3010; /* 0x1b3010 */
extern unsigned char LAB_001b3020; /* 0x1b3020 */
extern unsigned char LAB_001b3030; /* 0x1b3030 */
extern unsigned char LAB_001b3040; /* 0x1b3040 */
extern unsigned char LAB_001b3050; /* 0x1b3050 */
extern unsigned char LAB_001b3060; /* 0x1b3060 */
extern unsigned char LAB_001b3070; /* 0x1b3070 */
extern unsigned char LAB_001b3080; /* 0x1b3080 */
extern unsigned char LAB_001b3090; /* 0x1b3090 */
extern unsigned char LAB_001b30a0; /* 0x1b30a0 */
extern unsigned char LAB_001b30b0; /* 0x1b30b0 */
extern unsigned char LAB_001b30c0; /* 0x1b30c0 */
extern unsigned char LAB_001b30d0; /* 0x1b30d0 */
extern unsigned char LAB_001b33c4; /* 0x1b33c4 */
extern unsigned char LAB_001b33d4; /* 0x1b33d4 */
extern unsigned char LAB_001b33e4; /* 0x1b33e4 */
extern unsigned char LAB_001b33f4; /* 0x1b33f4 */
extern unsigned char LAB_001b3404; /* 0x1b3404 */
extern unsigned char LAB_001b3414; /* 0x1b3414 */
extern unsigned char LAB_001b3424; /* 0x1b3424 */
extern unsigned char LAB_001b3434; /* 0x1b3434 */
extern unsigned char LAB_001b3444; /* 0x1b3444 */
extern unsigned char LAB_001b3454; /* 0x1b3454 */
extern unsigned char LAB_001b3464; /* 0x1b3464 */
extern unsigned char LAB_001b3474; /* 0x1b3474 */
extern unsigned char LAB_001b3480; /* 0x1b3480 */
extern unsigned char LAB_001b348c; /* 0x1b348c */
extern unsigned char LAB_001b3498; /* 0x1b3498 */
extern unsigned char LAB_001b34a4; /* 0x1b34a4 */
extern unsigned char LAB_001b34b0; /* 0x1b34b0 */
extern unsigned char LAB_001b37dc; /* 0x1b37dc */
extern unsigned char LAB_001b37e8; /* 0x1b37e8 */
extern unsigned char LAB_001b37f4; /* 0x1b37f4 */
extern unsigned char LAB_001b3800; /* 0x1b3800 */
extern unsigned char LAB_001b380c; /* 0x1b380c */
extern unsigned char LAB_001b3818; /* 0x1b3818 */
extern unsigned char LAB_001b3824; /* 0x1b3824 */
extern unsigned char LAB_001b3830; /* 0x1b3830 */
extern unsigned char LAB_001b383c; /* 0x1b383c */
extern unsigned char LAB_001b3848; /* 0x1b3848 */
extern unsigned char LAB_001b3854; /* 0x1b3854 */
extern unsigned char LAB_001b3860; /* 0x1b3860 */
extern unsigned char LAB_001b386c; /* 0x1b386c */
extern unsigned char LAB_001b3878; /* 0x1b3878 */
extern unsigned char LAB_001b3884; /* 0x1b3884 */
extern unsigned char LAB_001b3890; /* 0x1b3890 */
extern unsigned char LAB_001b389c; /* 0x1b389c */
extern unsigned char LAB_001b38ac; /* 0x1b38ac */
extern unsigned char LAB_001b38b8; /* 0x1b38b8 */
extern unsigned char LAB_001b38c4; /* 0x1b38c4 */
extern unsigned char LAB_001b38d0; /* 0x1b38d0 */
extern unsigned char LAB_001b3b50; /* 0x1b3b50 */
extern unsigned char LAB_001b3b5c; /* 0x1b3b5c */
extern unsigned char LAB_001b3b68; /* 0x1b3b68 */
extern unsigned char LAB_001b3b74; /* 0x1b3b74 */
extern unsigned char LAB_001b3b80; /* 0x1b3b80 */
extern unsigned char LAB_001b3b8c; /* 0x1b3b8c */
extern unsigned char LAB_001b3b98; /* 0x1b3b98 */
extern unsigned char LAB_001b3ba4; /* 0x1b3ba4 */
extern unsigned char LAB_001b3bb0; /* 0x1b3bb0 */
extern unsigned char LAB_001b3bbc; /* 0x1b3bbc */
extern unsigned char LAB_001b3bc8; /* 0x1b3bc8 */
extern unsigned char LAB_001b3bd4; /* 0x1b3bd4 */
extern unsigned char LAB_001b3be4; /* 0x1b3be4 */
extern unsigned char LAB_001b3bf4; /* 0x1b3bf4 */
extern unsigned char LAB_001b3c04; /* 0x1b3c04 */
extern unsigned char LAB_001b3c10; /* 0x1b3c10 */
extern unsigned char LAB_001b3c1c; /* 0x1b3c1c */
extern unsigned char LAB_001b3c28; /* 0x1b3c28 */
extern int DAT_004724d4; /* 0x4724d4 */
extern int DAT_004724d8; /* 0x4724d8 */
extern int DAT_004724dc; /* 0x4724dc */
extern unsigned int *DAT_004ea7e0; /* 0x4ea7e0 */
extern unsigned int *DAT_004ea7f4; /* 0x4ea7f4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002826d4. */
/* Supplied declaration required: FUN_00282780. */
/* Supplied declaration required: FUN_002be624. */
extern unsigned int *FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: aeabi_idivmod. */
extern unsigned int aeabi_uidivmod(unsigned int);


void FUN_001b1b94(int *param_1,int param_2)

{
/* irregular: 27 goto(s); irregular input(s): in_fpscr; 5 native warning(s); review required */
  char temp_v0;
  short temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  int temp_v4;
  int *piVar8;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  int temp_v8;
  float temp_v9;
  unsigned char temp_v10 [124];
  
  if (((param_1[4] & 1U) == 0) && (param_1[6] != 0)) {
    if ((romwright_code *)param_1[9] != (romwright_code *)0x0 && param_2 != 0) {
      temp_v2 = 0;
      if ((unsigned int *)param_1[0xb] != (unsigned int *)0x0) {
        temp_v2 = *(unsigned int *)param_1[0xb];
      }
      (*(romwright_code *)param_1[9])(temp_v2);
    }
    if ((param_1[4] & 0x80U) == 0) {
      temp_v5 = param_1[1];
      temp_v3 = param_1[2];
      temp_v4 = temp_v3;
      if (*param_1 != 0) {
        FUN_002be624(temp_v10,&LAB_001b1ee4);
        FUN_00282780(temp_v5,temp_v3,0x96,0xe);
        DAT_004724d4 = temp_v5 + 2;
        DAT_004724dc = 5;
        temp_v4 = temp_v3 + 0x12;
        DAT_004724d8 = temp_v3 + 0xc;
      }
      if ((param_1[4] & 4U) == 0) {
        FUN_00282780(temp_v5,temp_v4,0x96,param_1[6] * 10 + 4);
      }
      DAT_004724d4 = temp_v5 + 2;
      DAT_004724d8 = temp_v4 + 2;
      piVar8 = (int *)param_1[5];
      temp_v4 = 0;
      if ((param_1[4] & 0x10U) != 0) {
        temp_v3 = param_1[6] + 1;
      }
      else {
        temp_v3 = param_1[3];
      }
      if (0 < param_1[6]) {
        do {
          temp_v5 = piVar8[4];
          if (temp_v4 == temp_v3) {
            temp_v6 = 4;
          }
          else {
            temp_v6 = 0;
          }
          if (temp_v5 == -1) {
            temp_v6 = temp_v6 + 8;
          }
          else if (temp_v5 == -2) {
            temp_v6 = 2;
          }
          temp_v8 = (int)(float)piVar8[5];
          in_fpscr = in_fpscr & 0xfffffff;
          if (temp_v8 == 0) {
            temp_v8 = 1;
          }
          DAT_004724dc = temp_v6;
          switch((char)piVar8[1]) {
          case 0:
            break;
          case 1:
            temp_v2 = aeabi_idivmod((int)*(char *)piVar8[2],temp_v8);
            FUN_002be624(temp_v10,&LAB_001b1ef0,*piVar8,temp_v2);
            goto LAB_001b24c4;
          case 2:
            temp_v2 = aeabi_idivmod(*(unsigned char *)piVar8[2],temp_v8);
            FUN_002be624(temp_v10,&LAB_001b1ef0,*piVar8,temp_v2);
            goto LAB_001b24c4;
          case 3:
            temp_v2 = aeabi_idivmod((int)*(short *)piVar8[2],temp_v8);
            FUN_002be624(temp_v10,&LAB_001b1ef0,*piVar8,temp_v2);
            goto LAB_001b24c4;
          case 4:
            temp_v2 = aeabi_idivmod(*(unsigned short *)piVar8[2],temp_v8);
            FUN_002be624(temp_v10,&LAB_001b1ef0,*piVar8,temp_v2);
            goto LAB_001b24c4;
          case 5:
            temp_v2 = aeabi_idivmod(*(unsigned int *)piVar8[2],temp_v8);
            FUN_002be624(temp_v10,&LAB_001b1ef0,*piVar8,temp_v2);
            goto LAB_001b24c4;
          case 6:
            temp_v2 = aeabi_uidivmod(*(unsigned int *)piVar8[2]);
            FUN_002be624(temp_v10,&LAB_001b1ef0,*piVar8,temp_v2);
            goto LAB_001b24c4;
          case 7:
            temp_v2 = aeabi_uidivmod(*(unsigned int *)piVar8[2]);
            FUN_002be624(temp_v10,&LAB_001b2224,*piVar8,temp_v2);
            goto LAB_001b24c4;
          case 8:
            FUN_002be624(temp_v10,&LAB_001b2230,*piVar8);
            goto LAB_001b24c4;
          case 9:
            goto LAB_001b22d0;
          case 10:
            goto LAB_001b22d0;
          case 0xb:
            goto LAB_001b22d0;
          case 0xc:
            goto LAB_001b22d0;
          case 0xd:
            goto LAB_001b22d0;
          case 0xe:
            goto LAB_001b22d0;
          case 0xf:
            goto LAB_001b22d0;
          case 0x10:
            goto LAB_001b22d0;
          case 0x11:
            goto LAB_001b22d0;
          case 0x12:
          case 0x13:
            FUN_002826d4(DAT_004724d4 + 4,DAT_004724d8,0x20,0x20,0x80000000);
            DAT_004724dc = 2;
            FUN_002be624(temp_v10,&LAB_001b223c,*piVar8);
            DAT_004724dc = temp_v6;
            FUN_002be624(temp_v10,&LAB_001b2244,*(unsigned int *)piVar8[2] & 0xff,temp_v10);
            goto LAB_001b24c4;
          case 0x14:
            DAT_004724dc = 4;
            FUN_002be624(temp_v10,&LAB_001b223c,*piVar8);
            DAT_004724dc = temp_v6;
            FUN_002be624(temp_v10,&LAB_001b2244,(*(unsigned int *)piVar8[2] & 0xffff) >> 8,temp_v10);
            goto LAB_001b24c4;
          case 0x15:
            DAT_004724dc = 5;
            FUN_002be624(temp_v10,&LAB_001b223c,*piVar8);
            DAT_004724dc = temp_v6;
            FUN_002be624(temp_v10,&LAB_001b2244,(*(unsigned int *)piVar8[2] & 0xffffff) >> 0x10,temp_v10
                        );
            goto LAB_001b24c4;
          case 0x16:
            DAT_004724dc = 6;
            FUN_002be624(temp_v10,&LAB_001b223c,*piVar8);
            DAT_004724dc = temp_v6;
            FUN_002be624(temp_v10,&LAB_001b2244,*(unsigned int *)piVar8[2] >> 0x18,temp_v10);
            goto LAB_001b24c4;
          case 0x17:
            switch(*(unsigned int *)piVar8[2]) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b2250,*piVar8);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b225c,*piVar8);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b2268,*piVar8);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b2274,*piVar8);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b2280,*piVar8);
              break;
            case 5:
              FUN_002be624(temp_v10,&LAB_001b228c,*piVar8);
              break;
            case 6:
              FUN_002be624(temp_v10,&LAB_001b2298,*piVar8);
              break;
            default:
              FUN_002be624(temp_v10,&LAB_001b22a4,*piVar8);
            }
            goto LAB_001b24c4;
          case 0x18:
            temp_v7 = (float)VectorSignedToFloat(DAT_004724d4 - 2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v9 = (float)VectorSignedToFloat(DAT_004724d8 + 2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v6 = (int)temp_v7;
            temp_v5 = (int)temp_v9;
            temp_v8 = (int)(temp_v7 + 150.0f);
            puVar5 = (unsigned int *)FUN_002c32a0(0x10000,0x100,0,0x68,0x10);
            puVar5[2] = temp_v6;
            puVar5[3] = temp_v5;
            puVar5[4] = temp_v8;
            puVar5[5] = temp_v5;
            puVar5[1] = 6;
            puVar5[6] = 0xffffc040;
            puVar3 = puVar5;
            if (DAT_004ea7e0 != (unsigned int *)0x0) {
              *DAT_004ea7f4 = (unsigned int)puVar5;
              puVar3 = DAT_004ea7e0;
            }
            DAT_004ea7e0 = puVar3;
            DAT_004ea7f4 = puVar5;
            *puVar5 = 0;
            DAT_004724d8 = DAT_004724d8 + 5;
            goto LAB_001b2548;
          case 0x19:
            if (*piVar8 != 0) {
              DAT_004724dc = 5;
              FUN_002be624(temp_v10,&LAB_001b2624);
            }
            goto LAB_001b24c4;
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
            if (piVar8[3] != 0xffffff && temp_v5 != 0xffffff) {
              if (piVar8[3] != 0xfffffe && temp_v5 != 0xfffffe) {
                FUN_002be624(temp_v10,&LAB_001b2634,*piVar8);
                break;
              }
              DAT_004724dc = temp_v6 + 8;
            }
            FUN_002be624(temp_v10,&LAB_001b262c,*piVar8);
            break;
          case 0x20:
            temp_v0 = *(char *)piVar8[2];
            if (temp_v0 != '\0') {
              if (temp_v0 != '\x01') {
                if (temp_v0 != '\x02') {
                  FUN_002be624(temp_v10,&LAB_001b29ac,*piVar8);
                  break;
                }
                FUN_002be624(temp_v10,&LAB_001b293c,*piVar8);
              }
              else {
                FUN_002be624(temp_v10,&LAB_001b2930,*piVar8);
              }
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b263c,*piVar8);
            }
            break;
          case 0x21:
            goto LAB_001b22d0;
          case 0x22:
            FUN_002be624(temp_v10,&LAB_001b25bc,*piVar8);
            break;
          case 0x23:
            FUN_002be624(temp_v10,&LAB_001b2958,*piVar8);
            break;
          case 0x24:
LAB_001b22d0:
            FUN_002be624(temp_v10,&LAB_001b25bc,*piVar8);
LAB_001b24c4:
            DAT_004724d8 = DAT_004724d8 + 10;
            goto LAB_001b2548;
          case 0x25:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b37dc,*piVar8);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b38b8,*piVar8);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b3bb0,*piVar8);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b38c4,*piVar8);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b38d0,*piVar8);
              break;
            case 5:
              FUN_002be624(temp_v10,&LAB_001b3b98,*piVar8);
              break;
            case 6:
              FUN_002be624(temp_v10,&LAB_001b3b5c,*piVar8);
              break;
            case 7:
              FUN_002be624(temp_v10,&LAB_001b3b68,*piVar8);
              break;
            case 8:
              FUN_002be624(temp_v10,&LAB_001b3b74,*piVar8);
            }
            break;
          case 0x26:
            switch(*(unsigned int *)piVar8[2]) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b37dc,*piVar8);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b38b8,*piVar8);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b3bb0,*piVar8);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b38c4,*piVar8);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b38d0,*piVar8);
              break;
            case 5:
              FUN_002be624(temp_v10,&LAB_001b3b98,*piVar8);
              break;
            case 6:
              FUN_002be624(temp_v10,&LAB_001b3b5c,*piVar8);
              break;
            case 7:
              FUN_002be624(temp_v10,&LAB_001b3b68,*piVar8);
              break;
            case 8:
              FUN_002be624(temp_v10,&LAB_001b3b74,*piVar8);
            }
            break;
          case 0x27:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b3b74,*piVar8);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b37dc,*piVar8);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b38b8,*piVar8);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b3bb0,*piVar8);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b38c4,*piVar8);
              break;
            case 5:
              FUN_002be624(temp_v10,&LAB_001b38d0,*piVar8);
              break;
            case 6:
              FUN_002be624(temp_v10,&LAB_001b3b50,*piVar8);
            }
            break;
          case 0x28:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b37e8,*piVar8);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b37f4,*piVar8);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b3800,*piVar8);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b380c,*piVar8);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b3818,*piVar8);
            }
            break;
          case 0x29:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b3824,*piVar8);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b3830,*piVar8);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b383c,*piVar8);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b3848,*piVar8);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b3854,*piVar8);
              break;
            case 5:
              FUN_002be624(temp_v10,&LAB_001b3860,*piVar8);
              break;
            case 6:
              FUN_002be624(temp_v10,&LAB_001b386c,*piVar8);
              break;
            case 7:
              FUN_002be624(temp_v10,&LAB_001b3878,*piVar8);
              break;
            case 8:
              FUN_002be624(temp_v10,&LAB_001b3884,*piVar8);
              break;
            case 9:
              FUN_002be624(temp_v10,&LAB_001b3890,*piVar8);
              break;
            case 10:
              FUN_002be624(temp_v10,&LAB_001b389c,*piVar8);
            }
            break;
          case 0x2a:
            switch(*(unsigned int *)piVar8[2] >> 0x10) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b38ac,*piVar8);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b38b8,*piVar8);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b3bb0,*piVar8);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b38c4,*piVar8);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b38d0,*piVar8);
              break;
            case 5:
              FUN_002be624(temp_v10,&LAB_001b3b50,*piVar8);
              break;
            case 6:
              FUN_002be624(temp_v10,&LAB_001b3b5c,*piVar8);
              break;
            case 7:
              FUN_002be624(temp_v10,&LAB_001b3b68,*piVar8);
              break;
            case 8:
              FUN_002be624(temp_v10,&LAB_001b3b74,*piVar8);
            }
            break;
          case 0x2b:
            FUN_002be624(temp_v10,&LAB_001b2964,*piVar8);
            break;
          case 0x2c:
            temp_v2 = aeabi_idivmod((int)*(short *)piVar8[2],temp_v8);
            FUN_002be624(temp_v10,&LAB_001b2cd0,*piVar8,temp_v2);
            break;
          case 0x2d:
            if (*(int *)piVar8[2] != 0) {
              if (*(int *)piVar8[2] != 1) {
                FUN_002be624(temp_v10,&LAB_001b3c10,*piVar8);
              }
              else {
                FUN_002be624(temp_v10,&LAB_001b3c28,*piVar8);
              }
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b3c1c,*piVar8);
            }
            break;
          case 0x2e:
            temp_v1 = *(short *)piVar8[2];
            if (temp_v1 != 0) {
              if (temp_v1 != 1) {
                if (temp_v1 != 2) {
                  FUN_002be624(temp_v10,&LAB_001b29ac,*piVar8);
                  break;
                }
                FUN_002be624(temp_v10,&LAB_001b2cc4,*piVar8);
              }
              else {
                FUN_002be624(temp_v10,&LAB_001b29dc,*piVar8);
              }
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b2cdc,*piVar8);
            }
            break;
          case 0x2f:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b2cdc,*piVar8);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b2ce8,*piVar8);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b2cf4,*piVar8);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b2d00,*piVar8);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b2d0c,*piVar8);
              break;
            case 5:
              FUN_002be624(temp_v10,&LAB_001b2d18,*piVar8);
              break;
            case 6:
              FUN_002be624(temp_v10,&LAB_001b2d24,*piVar8);
              break;
            case 7:
              FUN_002be624(temp_v10,&LAB_001b2d30,*piVar8);
              break;
            case 8:
              FUN_002be624(temp_v10,&LAB_001b2d3c,*piVar8);
              break;
            case 9:
              FUN_002be624(temp_v10,&LAB_001b2d48,*piVar8);
              break;
            case 10:
              FUN_002be624(temp_v10,&LAB_001b2d54,*piVar8);
              break;
            case 0xb:
              FUN_002be624(temp_v10,&LAB_001b2d60,*piVar8);
              break;
            case 0xc:
              FUN_002be624(temp_v10,&LAB_001b2d6c,*piVar8);
              break;
            case 0xd:
              FUN_002be624(temp_v10,&LAB_001b2d78,*piVar8);
              break;
            default:
              FUN_002be624(temp_v10,&LAB_001b2d84,*piVar8);
            }
            break;
          case 0x30:
            switch(*(unsigned short *)piVar8[2]) {
            case 0:
              FUN_002be624(temp_v10,&LAB_001b2d90,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 1:
              FUN_002be624(temp_v10,&LAB_001b2fe0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 2:
              FUN_002be624(temp_v10,&LAB_001b2ff0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 3:
              FUN_002be624(temp_v10,&LAB_001b3000,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 4:
              FUN_002be624(temp_v10,&LAB_001b3010,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 5:
              FUN_002be624(temp_v10,&LAB_001b3020,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 6:
              FUN_002be624(temp_v10,&LAB_001b3030,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 7:
              FUN_002be624(temp_v10,&LAB_001b3040,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 8:
              FUN_002be624(temp_v10,&LAB_001b3050,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 9:
              FUN_002be624(temp_v10,&LAB_001b3060,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 10:
              FUN_002be624(temp_v10,&LAB_001b3070,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xb:
              FUN_002be624(temp_v10,&LAB_001b3080,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xc:
              FUN_002be624(temp_v10,&LAB_001b3090,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xd:
              FUN_002be624(temp_v10,&LAB_001b30a0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xe:
              FUN_002be624(temp_v10,&LAB_001b30b0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xf:
              FUN_002be624(temp_v10,&LAB_001b30c0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x10:
              FUN_002be624(temp_v10,&LAB_001b30d0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x11:
              FUN_002be624(temp_v10,&LAB_001b33c4,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x12:
              FUN_002be624(temp_v10,&LAB_001b33d4,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x13:
              FUN_002be624(temp_v10,&LAB_001b33e4,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x14:
              FUN_002be624(temp_v10,&LAB_001b33f4,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x15:
              FUN_002be624(temp_v10,&LAB_001b3404,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x16:
              FUN_002be624(temp_v10,&LAB_001b3414,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x17:
              FUN_002be624(temp_v10,&LAB_001b3424,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x18:
              FUN_002be624(temp_v10,&LAB_001b3434,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x19:
              FUN_002be624(temp_v10,&LAB_001b3444,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x1a:
              FUN_002be624(temp_v10,&LAB_001b3454,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x1b:
              FUN_002be624(temp_v10,&LAB_001b3464,*piVar8,*(unsigned short *)piVar8[2]);
            }
            break;
          case 0x31:
          case 0x32:
          case 0x34:
            FUN_002be624(temp_v10,&LAB_001b3474,*piVar8);
            break;
          case 0x33:
            temp_v1 = *(short *)piVar8[2];
            if (temp_v1 != 0) {
              if (temp_v1 != 1) {
                if (temp_v1 == 2) {
                  FUN_002be624(temp_v10,&LAB_001b3480,*piVar8);
                }
              }
              else {
                FUN_002be624(temp_v10,&LAB_001b3498,*piVar8);
              }
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b348c,*piVar8);
            }
            break;
          case 0x35:
            if (*(int *)piVar8[2] != 1) {
              if (*(int *)piVar8[2] != 2) {
                FUN_002be624(temp_v10,&LAB_001b38ac,*piVar8);
                break;
              }
              FUN_002be624(temp_v10,&LAB_001b34b0,*piVar8);
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b34a4,*piVar8);
            }
            break;
          case 0x36:
            if (*(char *)piVar8[2] == '\0') {
              FUN_002be624(temp_v10,&LAB_001b3854,*piVar8);
              break;
            }
            if (*(char *)piVar8[2] == '\x01') {
              FUN_002be624(temp_v10,&LAB_001b3824,*piVar8);
              break;
            }
            FUN_002be624(temp_v10,&LAB_001b29ac,*piVar8);
            break;
          case 0x37:
            if (*(char *)piVar8[2] != '\0') {
              if (*(char *)piVar8[2] != '\x01') {
                FUN_002be624(temp_v10,&LAB_001b29ac,*piVar8);
                break;
              }
              FUN_002be624(temp_v10,&LAB_001b2978,*piVar8);
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b2970,*piVar8);
            }
            break;
          case 0x38:
            temp_v0 = *(char *)piVar8[2];
            if (temp_v0 == '\0') {
              FUN_002be624(temp_v10,&LAB_001b38ac,*piVar8);
              break;
            }
            if (temp_v0 != '\x01') {
              if (temp_v0 != '\x02') {
                FUN_002be624(temp_v10,&LAB_001b29ac,*piVar8);
                break;
              }
              FUN_002be624(temp_v10,&LAB_001b2988,*piVar8);
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b2980,*piVar8);
            }
            break;
          case 0x39:
            FUN_002be624(temp_v10,&LAB_001b3b80,*piVar8);
            break;
          case 0x3a:
            temp_v5 = *(int *)piVar8[2];
            if (temp_v5 == 0) {
              FUN_002be624(temp_v10,&LAB_001b3b98,*piVar8);
              break;
            }
            if (temp_v5 != 1) {
              if (temp_v5 == 2) {
                FUN_002be624(temp_v10,&LAB_001b3bb0,*piVar8);
                break;
              }
              if (temp_v5 == 3) {
                FUN_002be624(temp_v10,&LAB_001b3b8c,*piVar8);
              }
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b3ba4,*piVar8);
            }
            break;
          case 0x3b:
            temp_v0 = *(char *)piVar8[2];
            if (temp_v0 == '\0') {
              FUN_002be624(temp_v10,&LAB_001b3c1c,*piVar8);
              break;
            }
            if (temp_v0 != '\x01') {
              if (temp_v0 != '\x02') {
                FUN_002be624(temp_v10,&LAB_001b29ac,*piVar8);
                break;
              }
              FUN_002be624(temp_v10,&LAB_001b29a0,*piVar8);
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b2994,*piVar8);
            }
            break;
          case 0x3c:
            temp_v0 = *(char *)piVar8[2];
            if (temp_v0 != '\0') {
              if (temp_v0 != '\x01') {
                if (temp_v0 != '\x02') {
                  FUN_002be624(temp_v10,&LAB_001b29ac,*piVar8);
                }
                else {
                  FUN_002be624(temp_v10,&LAB_001b29d0,*piVar8);
                }
              }
              else {
                FUN_002be624(temp_v10,&LAB_001b29c4,*piVar8);
              }
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b29b8,*piVar8);
            }
            if (temp_v4 == temp_v3) {
              DAT_004724dc = 4;
            }
            else {
              DAT_004724dc = 5;
            }
            break;
          case 0x3d:
            if (*(int *)piVar8[2] != 0) {
              if (*(int *)piVar8[2] == 1) {
                FUN_002be624(temp_v10,&LAB_001b3bbc,*piVar8);
              }
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b3bc8,*piVar8);
            }
            break;
          case 0x3e:
            temp_v5 = *(int *)piVar8[2];
            if (temp_v5 != 0) {
              if (temp_v5 != 1) {
                if (temp_v5 != 2) {
                  if (temp_v5 == 3) {
                    FUN_002be624(temp_v10,&LAB_001b3bd4,*piVar8);
                  }
                }
                else {
                  FUN_002be624(temp_v10,&LAB_001b3c04,*piVar8);
                }
              }
              else {
                FUN_002be624(temp_v10,&LAB_001b3bf4,*piVar8);
              }
            }
            else {
              FUN_002be624(temp_v10,&LAB_001b3be4,*piVar8);
            }
            break;
          default:
            goto LAB_001b2548;
          }
          DAT_004724d8 = DAT_004724d8 + 10;
LAB_001b2548:
          temp_v4 = temp_v4 + 1;
          piVar8 = piVar8 + 6;
        } while (temp_v4 < param_1[6]);
      }
    }
  }
  return;
}
