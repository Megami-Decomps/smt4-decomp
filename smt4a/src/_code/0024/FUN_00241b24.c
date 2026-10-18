/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241b24` (_code @ 0x241b24, 0x8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_00241e80; /* 0x241e80 */
extern unsigned char LAB_00241e8c; /* 0x241e8c */
extern unsigned char LAB_002421c0; /* 0x2421c0 */
extern unsigned char LAB_002421cc; /* 0x2421cc */
extern unsigned char LAB_002421d8; /* 0x2421d8 */
extern unsigned char LAB_002421e0; /* 0x2421e0 */
extern unsigned char LAB_002421ec; /* 0x2421ec */
extern unsigned char LAB_002421f8; /* 0x2421f8 */
extern unsigned char LAB_00242204; /* 0x242204 */
extern unsigned char LAB_00242210; /* 0x242210 */
extern unsigned char LAB_0024221c; /* 0x24221c */
extern unsigned char LAB_00242228; /* 0x242228 */
extern unsigned char LAB_00242234; /* 0x242234 */
extern unsigned char LAB_00242240; /* 0x242240 */
extern unsigned char LAB_00242558; /* 0x242558 */
extern unsigned char LAB_002425c0; /* 0x2425c0 */
extern unsigned char LAB_002425c8; /* 0x2425c8 */
extern unsigned char LAB_002425d0; /* 0x2425d0 */
extern unsigned char LAB_002425d8; /* 0x2425d8 */
extern unsigned char LAB_002428cc; /* 0x2428cc */
extern unsigned char LAB_002428d8; /* 0x2428d8 */
extern unsigned char LAB_002428f4; /* 0x2428f4 */
extern unsigned char LAB_00242900; /* 0x242900 */
extern unsigned char LAB_0024290c; /* 0x24290c */
extern unsigned char LAB_00242914; /* 0x242914 */
extern unsigned char LAB_0024291c; /* 0x24291c */
extern unsigned char LAB_00242924; /* 0x242924 */
extern unsigned char LAB_00242930; /* 0x242930 */
extern unsigned char LAB_0024293c; /* 0x24293c */
extern unsigned char LAB_00242948; /* 0x242948 */
extern unsigned char LAB_00242954; /* 0x242954 */
extern unsigned char LAB_00242960; /* 0x242960 */
extern unsigned char LAB_0024296c; /* 0x24296c */
extern unsigned char LAB_00242978; /* 0x242978 */
extern unsigned char LAB_00242c60; /* 0x242c60 */
extern unsigned char LAB_00242c6c; /* 0x242c6c */
extern unsigned char LAB_00242c78; /* 0x242c78 */
extern unsigned char LAB_00242c84; /* 0x242c84 */
extern unsigned char LAB_00242c90; /* 0x242c90 */
extern unsigned char LAB_00242c9c; /* 0x242c9c */
extern unsigned char LAB_00242ca8; /* 0x242ca8 */
extern unsigned char LAB_00242cb4; /* 0x242cb4 */
extern unsigned char LAB_00242cc0; /* 0x242cc0 */
extern unsigned char LAB_00242ccc; /* 0x242ccc */
extern unsigned char LAB_00242cd8; /* 0x242cd8 */
extern unsigned char LAB_00242ce4; /* 0x242ce4 */
extern unsigned char LAB_00242cf0; /* 0x242cf0 */
extern unsigned char LAB_00242cfc; /* 0x242cfc */
extern unsigned char LAB_00242d08; /* 0x242d08 */
extern unsigned char LAB_00242d14; /* 0x242d14 */
extern unsigned char LAB_00242d20; /* 0x242d20 */
extern unsigned char LAB_00242d2c; /* 0x242d2c */
extern unsigned char LAB_00242f7c; /* 0x242f7c */
extern unsigned char LAB_00242f8c; /* 0x242f8c */
extern unsigned char LAB_00242f9c; /* 0x242f9c */
extern unsigned char LAB_00242fac; /* 0x242fac */
extern unsigned char LAB_00242fbc; /* 0x242fbc */
extern unsigned char LAB_00242fcc; /* 0x242fcc */
extern unsigned char LAB_00242fdc; /* 0x242fdc */
extern unsigned char LAB_00242fec; /* 0x242fec */
extern unsigned char LAB_00242ffc; /* 0x242ffc */
extern unsigned char LAB_0024300c; /* 0x24300c */
extern unsigned char LAB_0024301c; /* 0x24301c */
extern unsigned char LAB_0024302c; /* 0x24302c */
extern unsigned char LAB_0024303c; /* 0x24303c */
extern unsigned char LAB_0024304c; /* 0x24304c */
extern unsigned char LAB_0024305c; /* 0x24305c */
extern unsigned char LAB_0024306c; /* 0x24306c */
extern unsigned char LAB_00243360; /* 0x243360 */
extern unsigned char LAB_00243370; /* 0x243370 */
extern unsigned char LAB_00243380; /* 0x243380 */
extern unsigned char LAB_00243390; /* 0x243390 */
extern unsigned char LAB_002433a0; /* 0x2433a0 */
extern unsigned char LAB_002433b0; /* 0x2433b0 */
extern unsigned char LAB_002433c0; /* 0x2433c0 */
extern unsigned char LAB_002433d0; /* 0x2433d0 */
extern unsigned char LAB_002433e0; /* 0x2433e0 */
extern unsigned char LAB_002433f0; /* 0x2433f0 */
extern unsigned char LAB_00243400; /* 0x243400 */
extern unsigned char LAB_00243410; /* 0x243410 */
extern unsigned char LAB_0024341c; /* 0x24341c */
extern unsigned char LAB_00243428; /* 0x243428 */
extern unsigned char LAB_00243434; /* 0x243434 */
extern unsigned char LAB_00243440; /* 0x243440 */
extern unsigned char LAB_0024344c; /* 0x24344c */
extern unsigned char LAB_00243778; /* 0x243778 */
extern unsigned char LAB_00243784; /* 0x243784 */
extern unsigned char LAB_00243790; /* 0x243790 */
extern unsigned char LAB_0024379c; /* 0x24379c */
extern unsigned char LAB_002437a8; /* 0x2437a8 */
extern unsigned char LAB_002437b4; /* 0x2437b4 */
extern unsigned char LAB_002437c0; /* 0x2437c0 */
extern unsigned char LAB_002437cc; /* 0x2437cc */
extern unsigned char LAB_002437d8; /* 0x2437d8 */
extern unsigned char LAB_002437e4; /* 0x2437e4 */
extern unsigned char LAB_002437f0; /* 0x2437f0 */
extern unsigned char LAB_002437fc; /* 0x2437fc */
extern unsigned char LAB_00243808; /* 0x243808 */
extern unsigned char LAB_00243814; /* 0x243814 */
extern unsigned char LAB_00243820; /* 0x243820 */
extern unsigned char LAB_0024382c; /* 0x24382c */
extern unsigned char LAB_00243838; /* 0x243838 */
extern unsigned char LAB_00243848; /* 0x243848 */
extern unsigned char LAB_00243854; /* 0x243854 */
extern unsigned char LAB_00243860; /* 0x243860 */
extern unsigned char LAB_0024386c; /* 0x24386c */
extern unsigned char LAB_00243b30; /* 0x243b30 */
extern unsigned char LAB_00243b3c; /* 0x243b3c */
extern unsigned char LAB_00243b48; /* 0x243b48 */
extern unsigned char LAB_00243b54; /* 0x243b54 */
extern unsigned char LAB_00243b60; /* 0x243b60 */
extern unsigned char LAB_00243b6c; /* 0x243b6c */
extern unsigned char LAB_00243b78; /* 0x243b78 */
extern unsigned char LAB_00243b84; /* 0x243b84 */
extern unsigned char LAB_00243b90; /* 0x243b90 */
extern unsigned char LAB_00243b9c; /* 0x243b9c */
extern unsigned char LAB_00243ba8; /* 0x243ba8 */
extern unsigned char LAB_00243bb4; /* 0x243bb4 */
extern unsigned char LAB_00243bc0; /* 0x243bc0 */
extern unsigned char LAB_00243bd0; /* 0x243bd0 */
extern unsigned char LAB_00243be0; /* 0x243be0 */
extern unsigned char LAB_00243be8; /* 0x243be8 */
extern unsigned char LAB_00243bf4; /* 0x243bf4 */
extern unsigned char LAB_00243c00; /* 0x243c00 */
extern unsigned char LAB_00243c0c; /* 0x243c0c */
extern unsigned char LAB_00243c18; /* 0x243c18 */
extern int DAT_005c10cc; /* 0x5c10cc */
extern int DAT_005c10d0; /* 0x5c10d0 */
extern int DAT_005c10d4; /* 0x5c10d4 */
extern unsigned int *DAT_006471a0; /* 0x6471a0 */
extern unsigned int *DAT_006471b4; /* 0x6471b4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_002b3fd8. */
/* Supplied declaration required: FUN_002cf28c. */
/* Supplied declaration required: aeabi_idivmod. */
extern unsigned int aeabi_uidivmod(unsigned int);


void FUN_00241b24(int *param_1,int param_2)

{
/* irregular: 27 goto(s); irregular input(s): in_fpscr; 6 native warning(s); review required */
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
  
  if (param_1 == (int *)0x0) {
    return;
  }
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
        FUN_00100388(temp_v10,&LAB_00241e80);
        FUN_002b3fd8(temp_v5,temp_v3,0x96,0xe);
        DAT_005c10cc = temp_v5 + 2;
        DAT_005c10d4 = 5;
        temp_v4 = temp_v3 + 0x12;
        DAT_005c10d0 = temp_v3 + 0xc;
      }
      if ((param_1[4] & 4U) == 0) {
        FUN_002b3fd8(temp_v5,temp_v4,0x96,param_1[6] * 10 + 4);
      }
      DAT_005c10cc = temp_v5 + 2;
      DAT_005c10d0 = temp_v4 + 2;
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
          DAT_005c10d4 = temp_v6;
          switch((char)piVar8[1]) {
          case 0:
            break;
          case 1:
            temp_v2 = aeabi_idivmod((int)*(char *)piVar8[2],temp_v8);
            FUN_00100388(temp_v10,&LAB_00241e8c,*piVar8,temp_v2);
            goto LAB_00242460;
          case 2:
            temp_v2 = aeabi_idivmod(*(unsigned char *)piVar8[2],temp_v8);
            FUN_00100388(temp_v10,&LAB_00241e8c,*piVar8,temp_v2);
            goto LAB_00242460;
          case 3:
            temp_v2 = aeabi_idivmod((int)*(short *)piVar8[2],temp_v8);
            FUN_00100388(temp_v10,&LAB_00241e8c,*piVar8,temp_v2);
            goto LAB_00242460;
          case 4:
            temp_v2 = aeabi_idivmod(*(unsigned short *)piVar8[2],temp_v8);
            FUN_00100388(temp_v10,&LAB_00241e8c,*piVar8,temp_v2);
            goto LAB_00242460;
          case 5:
            temp_v2 = aeabi_idivmod(*(unsigned int *)piVar8[2],temp_v8);
            FUN_00100388(temp_v10,&LAB_00241e8c,*piVar8,temp_v2);
            goto LAB_00242460;
          case 6:
            temp_v2 = aeabi_uidivmod(*(unsigned int *)piVar8[2]);
            FUN_00100388(temp_v10,&LAB_00241e8c,*piVar8,temp_v2);
            goto LAB_00242460;
          case 7:
            temp_v2 = aeabi_uidivmod(*(unsigned int *)piVar8[2]);
            FUN_00100388(temp_v10,&LAB_002421c0,*piVar8,temp_v2);
            goto LAB_00242460;
          case 8:
            FUN_00100388(temp_v10,&LAB_002421cc,*piVar8);
            goto LAB_00242460;
          case 9:
            goto LAB_0024226c;
          case 10:
            goto LAB_0024226c;
          case 0xb:
            goto LAB_0024226c;
          case 0xc:
            goto LAB_0024226c;
          case 0xd:
            goto LAB_0024226c;
          case 0xe:
            goto LAB_0024226c;
          case 0xf:
            goto LAB_0024226c;
          case 0x10:
            goto LAB_0024226c;
          case 0x11:
            goto LAB_0024226c;
          case 0x12:
          case 0x13:
            FUN_002cf28c(DAT_005c10cc + 4,DAT_005c10d0,0x20,0x20,0x80000000);
            DAT_005c10d4 = 2;
            FUN_00100388(temp_v10,&LAB_002421d8,*piVar8);
            DAT_005c10d4 = temp_v6;
            FUN_00100388(temp_v10,&LAB_002421e0,*(unsigned int *)piVar8[2] & 0xff,temp_v10);
            goto LAB_00242460;
          case 0x14:
            DAT_005c10d4 = 4;
            FUN_00100388(temp_v10,&LAB_002421d8,*piVar8);
            DAT_005c10d4 = temp_v6;
            FUN_00100388(temp_v10,&LAB_002421e0,(*(unsigned int *)piVar8[2] & 0xffff) >> 8,temp_v10);
            goto LAB_00242460;
          case 0x15:
            DAT_005c10d4 = 5;
            FUN_00100388(temp_v10,&LAB_002421d8,*piVar8);
            DAT_005c10d4 = temp_v6;
            FUN_00100388(temp_v10,&LAB_002421e0,(*(unsigned int *)piVar8[2] & 0xffffff) >> 0x10,temp_v10
                        );
            goto LAB_00242460;
          case 0x16:
            DAT_005c10d4 = 6;
            FUN_00100388(temp_v10,&LAB_002421d8,*piVar8);
            DAT_005c10d4 = temp_v6;
            FUN_00100388(temp_v10,&LAB_002421e0,*(unsigned int *)piVar8[2] >> 0x18,temp_v10);
            goto LAB_00242460;
          case 0x17:
            switch(*(unsigned int *)piVar8[2]) {
            case 0:
              FUN_00100388(temp_v10,&LAB_002421ec,*piVar8);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_002421f8,*piVar8);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_00242204,*piVar8);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_00242210,*piVar8);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_0024221c,*piVar8);
              break;
            case 5:
              FUN_00100388(temp_v10,&LAB_00242228,*piVar8);
              break;
            case 6:
              FUN_00100388(temp_v10,&LAB_00242234,*piVar8);
              break;
            default:
              FUN_00100388(temp_v10,&LAB_00242240,*piVar8);
            }
            goto LAB_00242460;
          case 0x18:
            temp_v7 = (float)VectorSignedToFloat(DAT_005c10cc - 2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v9 = (float)VectorSignedToFloat(DAT_005c10d0 + 2,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v6 = (int)temp_v7;
            temp_v5 = (int)temp_v9;
            temp_v8 = (int)(temp_v7 + 150.0f);
            puVar5 = (unsigned int *)0x10000;
            FUN_00167ab4(0x10000,0x100,0,0x68,0x10);
            puVar5[2] = temp_v6;
            puVar5[3] = temp_v5;
            puVar5[4] = temp_v8;
            puVar5[5] = temp_v5;
            puVar5[1] = 6;
            puVar5[6] = 0xffffc040;
            puVar3 = puVar5;
            if (DAT_006471a0 != (unsigned int *)0x0) {
              *DAT_006471b4 = (unsigned int)puVar5;
              puVar3 = DAT_006471a0;
            }
            DAT_006471a0 = puVar3;
            DAT_006471b4 = puVar5;
            *puVar5 = 0;
            DAT_005c10d0 = DAT_005c10d0 + 5;
            goto LAB_002424e4;
          case 0x19:
            if (*piVar8 != 0) {
              DAT_005c10d4 = 5;
              FUN_00100388(temp_v10,&LAB_002425c0);
            }
            goto LAB_00242460;
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
            if (piVar8[3] != 0xffffff && temp_v5 != 0xffffff) {
              if (piVar8[3] != 0xfffffe && temp_v5 != 0xfffffe) {
                FUN_00100388(temp_v10,&LAB_002425d0,*piVar8);
                break;
              }
              DAT_005c10d4 = temp_v6 + 8;
            }
            FUN_00100388(temp_v10,&LAB_002425c8,*piVar8);
            break;
          case 0x20:
            temp_v0 = *(char *)piVar8[2];
            if (temp_v0 != '\0') {
              if (temp_v0 != '\x01') {
                if (temp_v0 != '\x02') {
                  FUN_00100388(temp_v10,&LAB_00242948,*piVar8);
                  break;
                }
                FUN_00100388(temp_v10,&LAB_002428d8,*piVar8);
              }
              else {
                FUN_00100388(temp_v10,&LAB_002428cc,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_002425d8,*piVar8);
            }
            break;
          case 0x21:
            goto LAB_0024226c;
          case 0x22:
            FUN_00100388(temp_v10,&LAB_00242558,*piVar8);
            break;
          case 0x23:
            FUN_00100388(temp_v10,&LAB_002428f4,*piVar8);
            break;
          case 0x24:
LAB_0024226c:
            FUN_00100388(temp_v10,&LAB_00242558,*piVar8);
LAB_00242460:
            DAT_005c10d0 = DAT_005c10d0 + 10;
            goto LAB_002424e4;
          case 0x25:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(temp_v10,&LAB_00243778,*piVar8);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_00243854,*piVar8);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_00243b90,*piVar8);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_00243860,*piVar8);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_0024386c,*piVar8);
              break;
            case 5:
              FUN_00100388(temp_v10,&LAB_00243b78,*piVar8);
              break;
            case 6:
              FUN_00100388(temp_v10,&LAB_00243b3c,*piVar8);
              break;
            case 7:
              FUN_00100388(temp_v10,&LAB_00243b48,*piVar8);
              break;
            case 8:
              FUN_00100388(temp_v10,&LAB_00243b54,*piVar8);
            }
            break;
          case 0x26:
            switch(*(unsigned int *)piVar8[2]) {
            case 0:
              FUN_00100388(temp_v10,&LAB_00243778,*piVar8);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_00243854,*piVar8);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_00243b90,*piVar8);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_00243860,*piVar8);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_0024386c,*piVar8);
              break;
            case 5:
              FUN_00100388(temp_v10,&LAB_00243b78,*piVar8);
              break;
            case 6:
              FUN_00100388(temp_v10,&LAB_00243b3c,*piVar8);
              break;
            case 7:
              FUN_00100388(temp_v10,&LAB_00243b48,*piVar8);
              break;
            case 8:
              FUN_00100388(temp_v10,&LAB_00243b54,*piVar8);
            }
            break;
          case 0x27:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(temp_v10,&LAB_00243b54,*piVar8);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_00243778,*piVar8);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_00243854,*piVar8);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_00243b90,*piVar8);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_00243860,*piVar8);
              break;
            case 5:
              FUN_00100388(temp_v10,&LAB_0024386c,*piVar8);
              break;
            case 6:
              FUN_00100388(temp_v10,&LAB_00243b30,*piVar8);
            }
            break;
          case 0x28:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(temp_v10,&LAB_00243784,*piVar8);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_00243790,*piVar8);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_0024379c,*piVar8);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_002437a8,*piVar8);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_002437b4,*piVar8);
            }
            break;
          case 0x29:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(temp_v10,&LAB_002437c0,*piVar8);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_002437cc,*piVar8);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_002437d8,*piVar8);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_002437e4,*piVar8);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_002437f0,*piVar8);
              break;
            case 5:
              FUN_00100388(temp_v10,&LAB_002437fc,*piVar8);
              break;
            case 6:
              FUN_00100388(temp_v10,&LAB_00243808,*piVar8);
              break;
            case 7:
              FUN_00100388(temp_v10,&LAB_00243814,*piVar8);
              break;
            case 8:
              FUN_00100388(temp_v10,&LAB_00243820,*piVar8);
              break;
            case 9:
              FUN_00100388(temp_v10,&LAB_0024382c,*piVar8);
              break;
            case 10:
              FUN_00100388(temp_v10,&LAB_00243838,*piVar8);
            }
            break;
          case 0x2a:
            switch(*(unsigned int *)piVar8[2] >> 0x10) {
            case 0:
              FUN_00100388(temp_v10,&LAB_00243848,*piVar8);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_00243854,*piVar8);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_00243b90,*piVar8);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_00243860,*piVar8);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_0024386c,*piVar8);
              break;
            case 5:
              FUN_00100388(temp_v10,&LAB_00243b30,*piVar8);
              break;
            case 6:
              FUN_00100388(temp_v10,&LAB_00243b3c,*piVar8);
              break;
            case 7:
              FUN_00100388(temp_v10,&LAB_00243b48,*piVar8);
              break;
            case 8:
              FUN_00100388(temp_v10,&LAB_00243b54,*piVar8);
            }
            break;
          case 0x2b:
            FUN_00100388(temp_v10,&LAB_00242900,*piVar8);
            break;
          case 0x2c:
            temp_v2 = aeabi_idivmod((int)*(short *)piVar8[2],temp_v8);
            FUN_00100388(temp_v10,&LAB_00242c6c,*piVar8,temp_v2);
            break;
          case 0x2d:
            if (*(int *)piVar8[2] != 0) {
              if (*(int *)piVar8[2] != 1) {
                FUN_00100388(temp_v10,&LAB_00243c00,*piVar8);
              }
              else {
                FUN_00100388(temp_v10,&LAB_00243c18,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_00243c0c,*piVar8);
            }
            break;
          case 0x2e:
            temp_v1 = *(short *)piVar8[2];
            if (temp_v1 != 0) {
              if (temp_v1 != 1) {
                if (temp_v1 != 2) {
                  FUN_00100388(temp_v10,&LAB_00242948,*piVar8);
                  break;
                }
                FUN_00100388(temp_v10,&LAB_00242c60,*piVar8);
              }
              else {
                FUN_00100388(temp_v10,&LAB_00242978,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_00242c78,*piVar8);
            }
            break;
          case 0x2f:
            switch(*(unsigned char *)piVar8[2]) {
            case 0:
              FUN_00100388(temp_v10,&LAB_00242c78,*piVar8);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_00242c84,*piVar8);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_00242c90,*piVar8);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_00242c9c,*piVar8);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_00242ca8,*piVar8);
              break;
            case 5:
              FUN_00100388(temp_v10,&LAB_00242cb4,*piVar8);
              break;
            case 6:
              FUN_00100388(temp_v10,&LAB_00242cc0,*piVar8);
              break;
            case 7:
              FUN_00100388(temp_v10,&LAB_00242ccc,*piVar8);
              break;
            case 8:
              FUN_00100388(temp_v10,&LAB_00242cd8,*piVar8);
              break;
            case 9:
              FUN_00100388(temp_v10,&LAB_00242ce4,*piVar8);
              break;
            case 10:
              FUN_00100388(temp_v10,&LAB_00242cf0,*piVar8);
              break;
            case 0xb:
              FUN_00100388(temp_v10,&LAB_00242cfc,*piVar8);
              break;
            case 0xc:
              FUN_00100388(temp_v10,&LAB_00242d08,*piVar8);
              break;
            case 0xd:
              FUN_00100388(temp_v10,&LAB_00242d14,*piVar8);
              break;
            default:
              FUN_00100388(temp_v10,&LAB_00242d20,*piVar8);
            }
            break;
          case 0x30:
            switch(*(unsigned short *)piVar8[2]) {
            case 0:
              FUN_00100388(temp_v10,&LAB_00242d2c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 1:
              FUN_00100388(temp_v10,&LAB_00242f7c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 2:
              FUN_00100388(temp_v10,&LAB_00242f8c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 3:
              FUN_00100388(temp_v10,&LAB_00242f9c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 4:
              FUN_00100388(temp_v10,&LAB_00242fac,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 5:
              FUN_00100388(temp_v10,&LAB_00242fbc,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 6:
              FUN_00100388(temp_v10,&LAB_00242fcc,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 7:
              FUN_00100388(temp_v10,&LAB_00242fdc,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 8:
              FUN_00100388(temp_v10,&LAB_00242fec,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 9:
              FUN_00100388(temp_v10,&LAB_00242ffc,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 10:
              FUN_00100388(temp_v10,&LAB_0024300c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xb:
              FUN_00100388(temp_v10,&LAB_0024301c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xc:
              FUN_00100388(temp_v10,&LAB_0024302c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xd:
              FUN_00100388(temp_v10,&LAB_0024303c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xe:
              FUN_00100388(temp_v10,&LAB_0024304c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0xf:
              FUN_00100388(temp_v10,&LAB_0024305c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x10:
              FUN_00100388(temp_v10,&LAB_0024306c,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x11:
              FUN_00100388(temp_v10,&LAB_00243360,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x12:
              FUN_00100388(temp_v10,&LAB_00243370,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x13:
              FUN_00100388(temp_v10,&LAB_00243380,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x14:
              FUN_00100388(temp_v10,&LAB_00243390,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x15:
              FUN_00100388(temp_v10,&LAB_002433a0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x16:
              FUN_00100388(temp_v10,&LAB_002433b0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x17:
              FUN_00100388(temp_v10,&LAB_002433c0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x18:
              FUN_00100388(temp_v10,&LAB_002433d0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x19:
              FUN_00100388(temp_v10,&LAB_002433e0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x1a:
              FUN_00100388(temp_v10,&LAB_002433f0,*piVar8,*(unsigned short *)piVar8[2]);
              break;
            case 0x1b:
              FUN_00100388(temp_v10,&LAB_00243400,*piVar8,*(unsigned short *)piVar8[2]);
            }
            break;
          case 0x31:
          case 0x32:
          case 0x34:
            FUN_00100388(temp_v10,&LAB_00243410,*piVar8);
            break;
          case 0x33:
            temp_v1 = *(short *)piVar8[2];
            if (temp_v1 != 0) {
              if (temp_v1 != 1) {
                if (temp_v1 == 2) {
                  FUN_00100388(temp_v10,&LAB_0024341c,*piVar8);
                }
              }
              else {
                FUN_00100388(temp_v10,&LAB_00243434,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_00243428,*piVar8);
            }
            break;
          case 0x35:
            if (*(int *)piVar8[2] != 1) {
              if (*(int *)piVar8[2] != 2) {
                FUN_00100388(temp_v10,&LAB_00243848,*piVar8);
                break;
              }
              FUN_00100388(temp_v10,&LAB_0024344c,*piVar8);
            }
            else {
              FUN_00100388(temp_v10,&LAB_00243440,*piVar8);
            }
            break;
          case 0x36:
            if (*(char *)piVar8[2] == '\0') {
              FUN_00100388(temp_v10,&LAB_002437f0,*piVar8);
              break;
            }
            if (*(char *)piVar8[2] == '\x01') {
              FUN_00100388(temp_v10,&LAB_002437c0,*piVar8);
              break;
            }
            FUN_00100388(temp_v10,&LAB_00242948,*piVar8);
            break;
          case 0x37:
            if (*(char *)piVar8[2] != '\0') {
              if (*(char *)piVar8[2] != '\x01') {
                FUN_00100388(temp_v10,&LAB_00242948,*piVar8);
                break;
              }
              FUN_00100388(temp_v10,&LAB_00242914,*piVar8);
            }
            else {
              FUN_00100388(temp_v10,&LAB_0024290c,*piVar8);
            }
            break;
          case 0x38:
            temp_v0 = *(char *)piVar8[2];
            if (temp_v0 == '\0') {
              FUN_00100388(temp_v10,&LAB_00243848,*piVar8);
              break;
            }
            if (temp_v0 != '\x01') {
              if (temp_v0 != '\x02') {
                FUN_00100388(temp_v10,&LAB_00242948,*piVar8);
                break;
              }
              FUN_00100388(temp_v10,&LAB_00242924,*piVar8);
            }
            else {
              FUN_00100388(temp_v10,&LAB_0024291c,*piVar8);
            }
            break;
          case 0x39:
            FUN_00100388(temp_v10,&LAB_00243b60,*piVar8);
            break;
          case 0x3a:
            temp_v5 = *(int *)piVar8[2];
            if (temp_v5 == 0) {
              FUN_00100388(temp_v10,&LAB_00243b78,*piVar8);
              break;
            }
            if (temp_v5 != 1) {
              if (temp_v5 == 2) {
                FUN_00100388(temp_v10,&LAB_00243b90,*piVar8);
                break;
              }
              if (temp_v5 == 3) {
                FUN_00100388(temp_v10,&LAB_00243b6c,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_00243b84,*piVar8);
            }
            break;
          case 0x3b:
            temp_v0 = *(char *)piVar8[2];
            if (temp_v0 == '\0') {
              FUN_00100388(temp_v10,&LAB_00243c0c,*piVar8);
              break;
            }
            if (temp_v0 != '\x01') {
              if (temp_v0 != '\x02') {
                FUN_00100388(temp_v10,&LAB_00242948,*piVar8);
                break;
              }
              FUN_00100388(temp_v10,&LAB_0024293c,*piVar8);
            }
            else {
              FUN_00100388(temp_v10,&LAB_00242930,*piVar8);
            }
            break;
          case 0x3c:
            temp_v0 = *(char *)piVar8[2];
            if (temp_v0 != '\0') {
              if (temp_v0 != '\x01') {
                if (temp_v0 != '\x02') {
                  FUN_00100388(temp_v10,&LAB_00242948,*piVar8);
                }
                else {
                  FUN_00100388(temp_v10,&LAB_0024296c,*piVar8);
                }
              }
              else {
                FUN_00100388(temp_v10,&LAB_00242960,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_00242954,*piVar8);
            }
            if (temp_v4 == temp_v3) {
              DAT_005c10d4 = 4;
            }
            else {
              DAT_005c10d4 = 5;
            }
            break;
          case 0x3d:
            temp_v5 = *(int *)piVar8[2];
            if (temp_v5 != 0) {
              if (temp_v5 != 1) {
                if (temp_v5 == 2) {
                  FUN_00100388(temp_v10,&LAB_00243b9c,*piVar8);
                }
              }
              else {
                FUN_00100388(temp_v10,&LAB_00243bb4,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_00243ba8,*piVar8);
            }
            break;
          case 0x3e:
            if (*(int *)piVar8[2] != 0) {
              if (*(int *)piVar8[2] == 1) {
                FUN_00100388(temp_v10,&LAB_00243bc0,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_00243bd0,*piVar8);
            }
            break;
          case 0x3f:
            if (*(int *)piVar8[2] != 0) {
              if (*(int *)piVar8[2] != 1) {
                FUN_00100388(temp_v10,&LAB_00243be0,*piVar8);
              }
              else {
                FUN_00100388(temp_v10,&LAB_00243bf4,*piVar8);
              }
            }
            else {
              FUN_00100388(temp_v10,&LAB_00243be8,*piVar8);
            }
            break;
          default:
            goto LAB_002424e4;
          }
          DAT_005c10d0 = DAT_005c10d0 + 10;
LAB_002424e4:
          temp_v4 = temp_v4 + 1;
          piVar8 = piVar8 + 6;
        } while (temp_v4 < param_1[6]);
      }
    }
  }
  return;
}
