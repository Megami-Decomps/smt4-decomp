/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00509670` (_code @ 0x509670, 0xd64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cbd84(int, int, unsigned int);
int FUN_001cbd94(int);
int FUN_001d0b34(void);
int voiceOwnerClear(int);
int halfArrayOwnerGet(int, unsigned int);
int voiceOwnerRefresh(int, unsigned int);
int FUN_00462374(int, unsigned int);
int FUN_00465ba0(int);
int FUN_00465bd0(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);
int __aeabi_idivmod(...);

typedef struct fn_00509670_arg0 fn_00509670_arg0;
struct fn_00509670_arg0 {
    unsigned char pad_0x0[0x5];
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x72];
    undefined1 field_0x78; /* +0x78 */
    unsigned char pad_0x79[0x3];
    undefined4 field_0x7c; /* +0x7c */
    undefined1 field_0x80; /* +0x80 */
    unsigned char pad_0x81[0xaf];
    void *field_0x130; /* +0x130 */
};

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
} param_5_stack;

extern signed char DAT_005c1d24; /* 0x5c1d24 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int lcgRandomHigh16(void);
extern int FUN_001c3078(int, unsigned int);
/* Supplied declaration required: FUN_001cbd84. */
/* Supplied declaration required: FUN_001cbd94. */
/* Supplied declaration required: FUN_001d0b34. */
/* Supplied declaration required: voiceOwnerClear. */
/* Supplied declaration required: halfArrayOwnerGet. */
/* Supplied declaration required: voiceOwnerRefresh. */
/* Supplied declaration required: FUN_00462374. */
/* Supplied declaration required: FUN_00465ba0. */
/* Supplied declaration required: FUN_00465bd0. */
/* Supplied declaration required: __aeabi_idivmod. */


void FUN_00509670(fn_00509670_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 6 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  char temp_v2;
  unsigned char temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned short temp_v7;
  int *piVar8;
  unsigned char *pbVar9;
  unsigned int temp_v8;
  unsigned short *puVar11;
  unsigned char temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  unsigned int temp_v14;
  float temp_v15;
  
  piVar8 = (int *)(param_2 + 0x1c);
  temp_v8 = param_4 & 0xff;
  temp_v5 = param_4 * 5;
  temp_v10 = *(int *)(param_2 + 300);
  temp_v12 = 0.0078125f;
  temp_v13 = 0.390625f;
  temp_v14 = 0;
  temp_v15 = 100.0f;
  temp_v9 = (unsigned char)param_4;
  temp_v4 = (unsigned short)param_5;
  temp_v0 = (short)param_4;
  if (param_3 < 0x100) {
    if (param_3 == 0xcc) {
      *(unsigned char *)(param_2 + 0xec) = temp_v9;
      return;
    }
    if ((int)param_3 >= 0xcd) {
      switch(param_3) {
      case 0xcd:
        *(unsigned char *)(param_2 + 0xb8) = temp_v9;
        return;
      case 0xce:
        *(unsigned char *)(param_2 + 0x81) = param_4 != 0;
        return;
      case 0xcf:
        *(unsigned char *)(param_2 + 0xf7) = temp_v9;
        return;
      case 0xd0:
        *(unsigned char *)(param_2 + 0xf8) = temp_v9;
        return;
      case 0xd1:
        *(unsigned char *)(param_2 + 0xf9) = temp_v9;
        return;
      case 0xd2:
        *(unsigned char *)(param_2 + 0xfa) = temp_v9;
        return;
      case 0xd3:
        *(unsigned char *)(param_2 + 0xfb) = temp_v9;
        return;
      case 0xd4:
        temp_v8 = (unsigned int)*(unsigned char *)(param_2 + 0x78);
        if (temp_v8 >= 10) {
          return;
        }
        piVar8[temp_v8 * 2 + 4] = *(int *)(param_2 + 0x20);
        *(unsigned char *)((int)piVar8 + temp_v8 * 8 + 0xd) = temp_v9;
        *(unsigned char *)(piVar8 + temp_v8 * 2 + 3) = 1;
        temp_v2 = *(char *)(param_2 + 0x78) + '\x01';
        break;
      case 0xd5:
        pbVar9 = (unsigned char *)(param_2 + 0x92);
        temp_v5 = (int)*(short *)(param_2 + 0x96);
        if (*(short *)(param_2 + 0x94) <= temp_v5) goto LAB_0050999c;
        goto LAB_005099a4;
      case 0xd6:
        if (DAT_005c1d24 == '\0') {
          return;
        }
        if ((int)param_4 >= 0x20) {
          if ((int)param_4 >= 0x30) {
            return;
          }
          halfArrayOwnerGet(param_2,param_4 - 0x20);
          return;
        }
        FUN_00465ba0(temp_v10);
        return;
      case 0xd7:
        pbVar9 = (unsigned char *)(param_2 + 0x9e);
        temp_v5 = (int)*(short *)(param_2 + 0xa2);
        if (*(short *)(param_2 + 0xa0) <= temp_v5) goto LAB_00509a58;
        goto LAB_00509a60;
      case 0xd8:
        temp_v12 = (float)VectorSignedToFloat(param_4 - 0x40,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_2 + 0x104) = temp_v12 * 0.015625f;
        return;
      case 0xd9:
        *(unsigned char *)(param_2 + 0x100) = temp_v9;
        return;
      case 0xda:
        *(unsigned char *)(param_2 + 0x101) = temp_v9;
        return;
      case 0xdb:
        *(unsigned char *)(param_2 + 0xff) = temp_v9;
        return;
      case 0xdc:
        *(unsigned char *)(param_2 + 0xf2) = temp_v9 - 0x40;
        return;
      case 0xdd:
        FUN_00462374(param_2,param_4 & 0xff);
        return;
      default:
        return;
      case 0xdf:
        *(unsigned char *)(param_2 + 0x82) = temp_v8 >= 0x40;
        return;
      case 0xe0:
        *(int *)(param_2 + 0xb4) = temp_v5;
        return;
      case 0xe1:
        temp_v8 = 0x3ff;
        if (((int)param_4 < 0x400) && (temp_v8 = param_4, (int)param_4 < 0)) {
          temp_v8 = 0;
        }
        *(short *)(temp_v10 + 0x76) = (short)temp_v8;
        return;
      case 0xe3:
        temp_v12 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_2 + 0x88) = temp_v12 * 0.015625f;
        return;
      case 0xe4:
        if (temp_v0 == 0) {
          *(unsigned int *)(param_2 + 0xb0) = 0;
          return;
        }
        temp_v12 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_2 + 0xb0) = 100.0f / temp_v12;
        return;
      case 0xfb:
        *(unsigned char *)(param_2 + 0xf8) = 0xff;
        *(unsigned char *)(param_2 + 0xf9) = 0xff;
        *(unsigned char *)(param_2 + 0xfa) = 0xff;
        *(unsigned char *)(param_2 + 0xfb) = 0xff;
        *(unsigned short *)(param_2 + 0xfc) = 0xff;
        return;
      case 0xfc:
        temp_v8 = (unsigned int)*(unsigned char *)(param_2 + 0x78);
        if (temp_v8 == 0) {
          return;
        }
        if ((char)piVar8[temp_v8 * 2 + 1] == '\0') {
          return;
        }
        temp_v2 = *(char *)((int)piVar8 + temp_v8 * 8 + 5);
        if ((temp_v2 == '\0') || (temp_v2 = temp_v2 - '\x01', temp_v2 != '\0')) {
          *(char *)((int)piVar8 + temp_v8 * 8 + 5) = temp_v2;
          *(int *)(param_2 + 0x20) = piVar8[temp_v8 * 2 + 2];
          return;
        }
        temp_v2 = *(unsigned char *)(param_2 + 0x78) - 1;
        break;
      case 0xfd:
        temp_v8 = (unsigned int)*(unsigned char *)(param_2 + 0x78);
        if (temp_v8 == 0) {
          return;
        }
        while( 1 ) {
          temp_v6 = temp_v8 - 1;
          temp_v8 = temp_v6 & 0xff;
          *(char *)(param_2 + 0x78) = (char)temp_v6;
          if ((char)piVar8[temp_v8 * 2 + 3] == '\0') break;
          if (temp_v8 == 0) {
            return;
          }
        }
        if (piVar8 + temp_v8 * 2 == (int *)0xfffffff4) {
          return;
        }
        temp_v5 = (piVar8 + temp_v8 * 2)[4];
        *(int *)(param_2 + 0x20) = temp_v5;
        return;
      }
      *(char *)(param_2 + 0x78) = temp_v2;
      return;
    }
    if (param_3 == 0xbf) {
      *(unsigned char *)(param_2 + 0x79) = param_4 != 0;
      return;
    }
    if ((int)param_3 < 0xbf) {
      if (param_3 != 0xb2) {
        if ((int)param_3 >= 0xb2) {
          if (param_3 == 0xb6) {
            *(unsigned char *)(param_2 + 0x83) = temp_v9;
            return;
          }
          if ((int)param_3 >= 0xb7) {
            if (param_3 == 0xbd) {
              *(unsigned char *)(param_2 + 0xba) = temp_v9;
              return;
            }
            if (param_3 == 0xbe) {
              *(unsigned char *)(param_2 + 0xb9) = temp_v9;
            }
            return;
          }
          if (param_3 == 0xb3) {
            *(unsigned char *)(param_2 + 0xf0) = temp_v9;
            return;
          }
          if (param_3 != 0xb4) {
            if (param_3 != 0xb5) {
              return;
            }
            temp_v12 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(param_2 + 0x108) = temp_v12 * 0.007874016f;
            return;
          }
          *(unsigned char *)(param_2 + 0xfe) = temp_v9;
          return;
        }
        if (param_3 != 0x8a) {
          if ((int)param_3 >= 0x8b) {
            if (param_3 == 0xb0) {
              *(unsigned char *)(temp_v10 + 0x75) = temp_v9;
              return;
            }
            if (param_3 != 0xb1) {
              return;
            }
            *(short *)(param_2 + 0xfc) = (short)temp_v8;
            return;
          }
          if (param_3 == 0x81) {
            if ((int)param_4 < 0x10000) {
              *(unsigned int *)(param_2 + 0x84) = param_4 & 0xffff;
            }
            return;
          }
          if (param_3 == 0x88) {
            temp_v5 = FUN_001c3078(temp_v10,param_4);
            if (temp_v5 == 0) {
              return;
            }
            if (temp_v5 == param_2) {
              return;
            }
            FUN_001d0b34();
            FUN_001cbd84(temp_v5,*piVar8,param_5);
            FUN_001cbd94(temp_v5);
            return;
          }
          if (param_3 != 0x89) {
            return;
          }
        }
        else {
          temp_v8 = (unsigned int)*(unsigned char *)(param_2 + 0x78);
          if (temp_v8 >= 10) {
            return;
          }
          piVar8[temp_v8 * 2 + 4] = *(int *)(param_2 + 0x20);
          *(unsigned char *)(piVar8 + temp_v8 * 2 + 3) = 0;
          *(char *)(param_2 + 0x78) = *(char *)(param_2 + 0x78) + '\x01';
        }
        temp_v5 = *piVar8 + param_4;
        *(int *)(param_2 + 0x20) = temp_v5;
        return;
      }
      *(unsigned char *)(param_2 + 0x27) = param_4 != 0;
      if (param_4 == 0) {
        return;
      }
      voiceOwnerRefresh(param_2,0xffffffff);
      voiceOwnerClear(param_2);
      return;
    }
    switch(param_3) {
    case 0xc0:
      temp_v9 = temp_v9 - 0x40;
      pbVar9 = (unsigned char *)(param_2 + 0x98);
      temp_v5 = (int)*(short *)(param_2 + 0x9c);
      if (*(short *)(param_2 + 0x9a) <= temp_v5) {
LAB_00509a58:
        temp_v1 = pbVar9[1];
        *pbVar9 = temp_v1;
        *(unsigned short *)(pbVar9 + 4) = 0;
        pbVar9[1] = temp_v9;
        *(unsigned short *)(pbVar9 + 2) = temp_v4;
        return;
      }
      break;
    case 0xc1:
      pbVar9 = (unsigned char *)(param_2 + 0x8c);
      temp_v5 = (int)*(short *)(param_2 + 0x90);
      if (*(short *)(param_2 + 0x8e) <= temp_v5) {
LAB_0050999c:
        temp_v1 = pbVar9[1];
        *pbVar9 = temp_v1;
        pbVar9[4] = 0;
        pbVar9[5] = 0;
        pbVar9[1] = temp_v9;
        *(unsigned short *)(pbVar9 + 2) = temp_v4;
        return;
      }
      goto LAB_005099a4;
    case 0xc2:
      pbVar9 = (unsigned char *)(temp_v10 + 0x78);
      temp_v5 = (int)*(short *)(temp_v10 + 0x7c);
      if (*(short *)(temp_v10 + 0x7a) <= temp_v5) {
        temp_v1 = pbVar9[1];
      }
      else {
LAB_005099a4:
        temp_v1 = *pbVar9;
        temp_v2 = __aeabi_idivmod(((unsigned int)pbVar9[1] - (unsigned int)temp_v1) * temp_v5);
        temp_v1 = temp_v2 + temp_v1;
      }
      *pbVar9 = temp_v1;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[1] = temp_v9;
      *(unsigned short *)(pbVar9 + 2) = temp_v4;
      return;
    case 0xc3:
      *(unsigned char *)(param_2 + 0xf4) = temp_v9;
      return;
    case 0xc4:
      pbVar9 = (unsigned char *)(param_2 + 0xa4);
      temp_v5 = (int)*(short *)(param_2 + 0xa8);
      if (*(short *)(param_2 + 0xa6) <= temp_v5) goto LAB_00509a58;
      break;
    case 0xc5:
      *(unsigned char *)(param_2 + 0xf1) = temp_v9;
      return;
    case 0xc6:
      *(unsigned char *)(param_2 + 0xf5) = temp_v9;
      return;
    case 199:
      *(unsigned char *)(param_2 + 0x25) = param_4 != 0;
      return;
    case 200:
      *(unsigned char *)(param_2 + 0x26) = param_4 != 0;
      voiceOwnerRefresh(param_2,0xffffffff);
      voiceOwnerClear(param_2);
      return;
    case 0xc9:
      *(unsigned char *)(param_2 + 0x81) = 1;
      *(unsigned char *)(param_2 + 0xf6) = *(char *)(param_2 + 0xf4) + temp_v9;
      return;
    case 0xca:
      temp_v12 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_2 + 0xac) = temp_v12 * 0.0078125f;
      return;
    case 0xcb:
      temp_v12 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_2 + 0xb0) = temp_v12 * 0.390625f;
      return;
    default:
      return;
    }
LAB_00509a60:
    temp_v1 = *pbVar9;
    temp_v2 = __aeabi_idivmod(((int)(char)pbVar9[1] - (int)(char)temp_v1) * temp_v5);
    temp_v1 = temp_v2 + temp_v1;
    *pbVar9 = temp_v1;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[1] = temp_v9;
    *(unsigned short *)(pbVar9 + 2) = temp_v4;
    return;
  }
  if (param_3 >= 0x10000) {
    return;
  }
  temp_v6 = param_3 & 0xff;
  puVar11 = (unsigned short *)0x0;
  if ((param_3 & 0xf0) == 0x80 || (param_3 & 0xf0) == 0x90) {
    if ((int)param_4 < 0x20) {
      puVar11 = (unsigned short *)FUN_00465ba0(temp_v10);
    }
    else {
      if ((int)param_4 >= 0x30) {
        return;
      }
      puVar11 = (unsigned short *)halfArrayOwnerGet(param_2,param_4 - 0x20);
    }
    if (puVar11 == (unsigned short *)0x0) {
      return;
    }
  }
  if (temp_v6 == 0xa3) {
    temp_v12 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_2 + 0xc0) = temp_v12 * temp_v13;
    return;
  }
  if (temp_v6 >= 0xa4) {
    if (temp_v6 == 0xae) {
      temp_v13 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_2 + 0xdc) = temp_v13 * temp_v12;
      return;
    }
    if (temp_v6 < 0xaf) {
      switch(temp_v6) {
      case 0xa4:
        *(unsigned char *)(param_2 + 0xed) = temp_v9;
        return;
      case 0xa5:
        *(unsigned char *)(param_2 + 200) = temp_v9;
        return;
      case 0xa6:
        *(unsigned char *)(param_2 + 0xd9) = temp_v9;
        return;
      case 0xa7:
        *(unsigned char *)(param_2 + 0xda) = temp_v9;
        return;
      case 0xa8:
        temp_v13 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_2 + 0xcc) = temp_v13 * temp_v12;
        return;
      case 0xa9:
        temp_v12 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_2 + 0xd0) = temp_v12 * temp_v13;
        return;
      case 0xaa:
        *(unsigned char *)(param_2 + 0xee) = temp_v9;
        return;
      case 0xab:
        *(unsigned char *)(param_2 + 0xd8) = temp_v9;
        return;
      case 0xac:
        *(unsigned char *)(param_2 + 0xe9) = temp_v9;
        return;
      case 0xad:
        *(unsigned char *)(param_2 + 0xea) = temp_v9;
        return;
      default:
        return;
      }
    }
    if (temp_v6 == 0xe2) {
      if (temp_v0 == 0) {
        *(unsigned int *)(param_2 + 0xc0) = temp_v14;
        return;
      }
      temp_v12 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_2 + 0xc0) = temp_v15 / temp_v12;
      return;
    }
    if (temp_v6 < 0xe2) {
      if (temp_v6 == 0xb1) {
        *(unsigned char *)(param_2 + 0xe8) = temp_v9;
        return;
      }
      if (temp_v6 < 0xb2) {
        if (temp_v6 != 0xaf) {
          if (temp_v6 == 0xb0) {
            *(unsigned char *)(param_2 + 0xef) = temp_v9;
          }
          return;
        }
        temp_v12 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_2 + 0xe0) = temp_v12 * temp_v13;
        return;
      }
      if (temp_v6 != 0xe0) {
        if (temp_v6 == 0xe1) {
          *(int *)(param_2 + 0xc4) = temp_v5;
        }
        return;
      }
      FUN_00465bd0(temp_v10,param_4 & 0xffff,param_2);
      return;
    }
    if (temp_v6 == 0xe3) {
      *(int *)(param_2 + 0xd4) = temp_v5;
      return;
    }
    if (temp_v6 == 0xe4) {
      if (temp_v0 == 0) {
        *(unsigned int *)(param_2 + 0xd0) = temp_v14;
        return;
      }
      temp_v12 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_2 + 0xd0) = temp_v15 / temp_v12;
      return;
    }
    if (temp_v6 == 0xe5) {
      *(int *)(param_2 + 0xe4) = temp_v5;
      return;
    }
    if (temp_v6 != 0xe6) {
      return;
    }
    if (temp_v0 == 0) {
      *(unsigned int *)(param_2 + 0xe0) = temp_v14;
      return;
    }
    temp_v12 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_2 + 0xe0) = temp_v15 / temp_v12;
    return;
  }
  switch(temp_v6) {
  case 0x80:
    *puVar11 = temp_v4;
    return;
  case 0x81:
    temp_v4 = *puVar11 + temp_v4;
    break;
  case 0x82:
    temp_v4 = *puVar11 - temp_v4;
    break;
  case 0x83:
    temp_v4 = *puVar11 * temp_v4;
    break;
  case 0x84:
    if (param_5 == 0) {
      return;
    }
    temp_v4 = __aeabi_idivmod((int)(short)*puVar11,(int)(short)temp_v4);
    break;
  case 0x85:
    if ((int)param_5 >= 0) {
      temp_v4 = *puVar11 << (param_5 & 0xff);
    }
    else {
      temp_v4 = (unsigned short)((int)(short)*puVar11 >> (-param_5 & 0xff));
    }
    break;
  case 0x86:
    temp_v11 = (int)param_5 < 0;
    if (temp_v11) {
      param_5 = (unsigned int)(short)-temp_v4;
    }
    temp_v5 = lcgRandomHigh16();
    temp_v4 = (unsigned short)(temp_v5 * (param_5 + 1) >> 0x10);
    if (temp_v11) {
      temp_v4 = -temp_v4;
    }
    break;
  case 0x87:
    temp_v4 = *puVar11 & temp_v4;
    break;
  case 0x88:
    temp_v4 = *puVar11 | temp_v4;
    break;
  case 0x89:
    temp_v4 = *puVar11 ^ temp_v4;
    break;
  case 0x8a:
    temp_v4 = ~temp_v4;
    break;
  case 0x8b:
    if (param_5 != 0) {
      __aeabi_idivmod((int)(short)*puVar11,param_5);
      *puVar11 = temp_v7;
      return;
    }
  default:
    return;
  case 0x90:
    if ((int)(short)*puVar11 != param_5) {
      temp_v3 = 0;
    }
    else {
      temp_v3 = 1;
    }
    *(unsigned char *)(param_2 + 0x24) = temp_v3;
    return;
  case 0x91:
    if ((int)(short)*puVar11 < (int)param_5) {
      temp_v3 = 0;
      *(unsigned char *)(param_2 + 0x24) = temp_v3;
      return;
    }
    temp_v3 = 1;
    *(unsigned char *)(param_2 + 0x24) = temp_v3;
    return;
  case 0x92:
    if ((int)(short)*puVar11 <= (int)param_5) {
      temp_v3 = 0;
      *(unsigned char *)(param_2 + 0x24) = temp_v3;
      return;
    }
    temp_v3 = 1;
    *(unsigned char *)(param_2 + 0x24) = temp_v3;
    return;
  case 0x93:
    if ((int)param_5 < (int)(short)*puVar11) {
      temp_v3 = 0;
      *(unsigned char *)(param_2 + 0x24) = temp_v3;
      return;
    }
    temp_v3 = 1;
    *(unsigned char *)(param_2 + 0x24) = temp_v3;
    return;
  case 0x94:
    if ((int)param_5 <= (int)(short)*puVar11) {
      temp_v3 = 0;
      *(unsigned char *)(param_2 + 0x24) = temp_v3;
      return;
    }
    temp_v3 = 1;
    *(unsigned char *)(param_2 + 0x24) = temp_v3;
    return;
  case 0x95:
    if ((int)(short)*puVar11 == param_5) {
      temp_v3 = 0;
      *(unsigned char *)(param_2 + 0x24) = temp_v3;
      return;
    }
    temp_v3 = 1;
    *(unsigned char *)(param_2 + 0x24) = temp_v3;
    return;
  case 0xa0:
    *(unsigned char *)(param_2 + 0xc9) = temp_v9;
    return;
  case 0xa1:
    *(unsigned char *)(param_2 + 0xca) = temp_v9;
    return;
  case 0xa2:
    temp_v13 = (float)VectorUnsignedToFloat(temp_v8,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(param_2 + 0xbc) = temp_v13 * temp_v12;
    return;
  }
  *puVar11 = temp_v4;
  return;
}

} /* extern "C" */
