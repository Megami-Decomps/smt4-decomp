/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e738c` (_code @ 0x3e738c, 0x870 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003e738c_arg0 fn_003e738c_arg0;
struct fn_003e738c_arg0 {
    unsigned char pad_0x0[0x5];
    undefined1 field_0x5; /* +0x5 */
    unsigned char pad_0x6[0x3a];
    undefined1 field_0x40; /* +0x40 */
    unsigned char pad_0x41[0x3];
    undefined4 field_0x44; /* +0x44 */
    unsigned char pad_0x48[0x2];
    undefined1 field_0x4a; /* +0x4a */
    unsigned char pad_0x4b[0x79];
    void *field_0xc4; /* +0xc4 */
};

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern signed char DAT_00473534; /* 0x473534 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern int FUN_00150f9c(void);
extern int FUN_001584f8(int, unsigned int);
/* Supplied declaration required: FUN_0015c4fc. */
/* Supplied declaration required: FUN_0023578c. */
/* Supplied declaration required: FUN_0037f5d0. */
/* Supplied declaration required: FUN_0037f600. */
/* Supplied declaration required: aeabi_idivmod. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_Close. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_FreeAllChannel. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_Open. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_ReleaseAllChannel. */
/* Supplied declaration required: nw_snd_internal_driver_SequenceTrack_SetMute. */


void FUN_003e738c(fn_003e738c_arg0 *param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned short temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned short temp_v6;
  int *piVar7;
  unsigned char *pbVar8;
  unsigned short *puVar9;
  unsigned char temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  float temp_v10;
  
  temp_v8 = *(int *)(param_2 + 0xc0);
  piVar7 = (int *)(param_2 + 0x1c);
  temp_v3 = (unsigned short)param_5;
  if (param_3 >= 0x100) {
    if (param_3 >= 0x10000) {
      return;
    }
    temp_v4 = param_3 & 0xff;
    puVar9 = (unsigned short *)0x0;
    if ((param_3 & 0xf0) == 0x80 || (param_3 & 0xf0) == 0x90) {
      if ((int)param_4 < 0x20) {
        puVar9 = (unsigned short *)FUN_0037f5d0(temp_v8);
      }
      else {
        if ((int)param_4 >= 0x30) {
          return;
        }
        puVar9 = (unsigned short *)FUN_0023578c(param_2,param_4 - 0x20);
      }
      if (puVar9 == (unsigned short *)0x0) {
        return;
      }
    }
    if (temp_v4 == 0x89) {
      temp_v3 = *puVar9 ^ temp_v3;
      *puVar9 = temp_v3;
      return;
    }
    if (temp_v4 < 0x8a) {
      switch(temp_v4) {
      case 0x80:
        *puVar9 = temp_v3;
        return;
      case 0x81:
        temp_v3 = *puVar9 + temp_v3;
        break;
      case 0x82:
        temp_v3 = *puVar9 - temp_v3;
        break;
      case 0x83:
        temp_v3 = *puVar9 * temp_v3;
        break;
      case 0x84:
        if (param_5 == 0) {
          return;
        }
        temp_v3 = aeabi_idivmod((int)(short)*puVar9);
        break;
      case 0x85:
        if ((int)param_5 >= 0) {
          temp_v3 = *puVar9 << (param_5 & 0xff);
        }
        else {
          temp_v3 = (unsigned short)((int)(short)*puVar9 >> (-param_5 & 0xff));
        }
        break;
      case 0x86:
        temp_v9 = (int)param_5 < 0;
        if (temp_v9) {
          param_5 = (unsigned int)(short)-param_5;
        }
        temp_v8 = FUN_00150f9c();
        temp_v3 = (unsigned short)(temp_v8 * (param_5 + 1) >> 0x10);
        if (temp_v9) {
          temp_v3 = -temp_v3;
        }
        break;
      case 0x87:
        temp_v3 = *puVar9 & temp_v3;
        break;
      case 0x88:
        temp_v3 = *puVar9 | temp_v3;
        break;
      default:
        return;
      }
      *puVar9 = temp_v3;
      return;
    }
    if (temp_v4 != 0x92) {
      if (temp_v4 < 0x92) {
        if (temp_v4 == 0x8a) {
          temp_v3 = ~temp_v3;
          *puVar9 = temp_v3;
          return;
        }
        if (temp_v4 == 0x8b) {
          if (param_5 == 0) {
            return;
          }
          aeabi_idivmod((int)(short)*puVar9,param_5);
          *puVar9 = temp_v6;
          return;
        }
        if (temp_v4 != 0x90) {
          if (temp_v4 != 0x91) {
            return;
          }
          if ((int)(short)*puVar9 < (int)param_5) {
            temp_v2 = 0;
            *(unsigned char *)(param_2 + 0x24) = temp_v2;
            return;
          }
        }
        else if ((int)(short)*puVar9 != param_5) {
          temp_v2 = 0;
          *(unsigned char *)(param_2 + 0x24) = temp_v2;
          return;
        }
      }
      else if (temp_v4 != 0x93) {
        if (temp_v4 != 0x94) {
          if (temp_v4 != 0x95) {
            if (temp_v4 != 0xe0) {
              return;
            }
            FUN_0037f600(temp_v8,param_4 & 0xffff,param_2);
            return;
          }
          if ((int)(short)*puVar9 == param_5) {
            temp_v2 = 0;
            *(unsigned char *)(param_2 + 0x24) = temp_v2;
            return;
          }
        }
        else if ((int)param_5 <= (int)(short)*puVar9) {
          temp_v2 = 0;
          *(unsigned char *)(param_2 + 0x24) = temp_v2;
          return;
        }
      }
      else if ((int)param_5 < (int)(short)*puVar9) {
        temp_v2 = 0;
        *(unsigned char *)(param_2 + 0x24) = temp_v2;
        return;
      }
    }
    else if ((int)(short)*puVar9 <= (int)param_5) {
      temp_v2 = 0;
      *(unsigned char *)(param_2 + 0x24) = temp_v2;
      return;
    }
    temp_v2 = 1;
    *(unsigned char *)(param_2 + 0x24) = temp_v2;
    return;
  }
  temp_v4 = param_4 & 0xff;
  temp_v7 = (unsigned char)param_4;
  if (param_3 == 0xcc) {
    *(unsigned char *)(param_2 + 100) = temp_v7;
    return;
  }
  temp_v0 = (unsigned char)(param_4 - 0x40);
  if ((int)param_3 >= 0xcd) {
    if (param_3 == 0xd9) {
      *(unsigned char *)(param_2 + 0x93) = temp_v7;
      return;
    }
    if ((int)param_3 >= 0xda) {
      if (param_3 == 0xe0) {
        *(unsigned int *)(param_2 + 0x5c) = param_4 * 5;
        return;
      }
      if ((int)param_3 < 0xe1) {
        switch(param_3) {
        case 0xda:
          *(unsigned char *)(param_2 + 0x94) = temp_v7;
          return;
        case 0xdb:
          *(unsigned char *)(param_2 + 0x92) = temp_v7;
          return;
        case 0xdc:
          *(unsigned char *)(param_2 + 0x87) = temp_v0;
          return;
        case 0xdd:
          nw_snd_internal_driver_SequenceTrack_SetMute(param_2,param_4 & 0xff);
          return;
        case 0xde:
          return;
        case 0xdf:
          *(unsigned char *)(param_2 + 0x4c) = temp_v4 >= 0x40;
          return;
        default:
          return;
        }
      }
      if (param_3 == 0xfb) {
        *(unsigned char *)(param_2 + 0x8c) = 0xff;
        *(unsigned char *)(param_2 + 0x8d) = 0xff;
        *(unsigned char *)(param_2 + 0x8e) = 0xff;
        *(unsigned char *)(param_2 + 0x8f) = 0xff;
        *(unsigned short *)(param_2 + 0x90) = 0xff;
        return;
      }
      if ((int)param_3 < 0xfc) {
        if (param_3 == 0xe1) {
          temp_v4 = 0x3ff;
          if (((int)param_4 < 0x400) && (temp_v4 = param_4, (int)param_4 < 0)) {
            temp_v4 = 0;
          }
          *(short *)(temp_v8 + 0x78) = (short)temp_v4;
          return;
        }
        if (param_3 != 0xe3) {
          return;
        }
        temp_v10 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
        *(float *)(param_2 + 0x68) = temp_v10 * 0.015625f;
        return;
      }
      if (param_3 != 0xfc) {
        if (param_3 != 0xfd) {
          return;
        }
        temp_v4 = (unsigned int)*(unsigned char *)(param_2 + 0x40);
        if (temp_v4 == 0) {
          return;
        }
        while( 1 ) {
          temp_v5 = temp_v4 - 1;
          temp_v4 = temp_v5 & 0xff;
          *(char *)(param_2 + 0x40) = (char)temp_v5;
          if ((char)piVar7[temp_v4 * 2 + 3] == '\0') break;
          if (temp_v4 == 0) {
            return;
          }
        }
        if (piVar7 + temp_v4 * 2 == (int *)0xfffffff4) {
          return;
        }
        temp_v8 = (piVar7 + temp_v4 * 2)[4];
        *(int *)(param_2 + 0x20) = temp_v8;
        return;
      }
      temp_v4 = (unsigned int)*(unsigned char *)(param_2 + 0x40);
      if (temp_v4 == 0) {
        return;
      }
      if ((char)piVar7[temp_v4 * 2 + 1] == '\0') {
        return;
      }
      temp_v1 = *(char *)((int)piVar7 + temp_v4 * 8 + 5);
      if ((temp_v1 == '\0') || (temp_v1 = temp_v1 - '\x01', temp_v1 != '\0')) {
        *(char *)((int)piVar7 + temp_v4 * 8 + 5) = temp_v1;
        *(int *)(param_2 + 0x20) = piVar7[temp_v4 * 2 + 2];
        return;
      }
      temp_v1 = *(unsigned char *)(param_2 + 0x40) - 1;
      *(char *)(param_2 + 0x40) = temp_v1;
      return;
    }
    switch(param_3) {
    case 0xcd:
      *(unsigned char *)(param_2 + 0x60) = temp_v7;
      return;
    case 0xce:
      *(unsigned char *)(param_2 + 0x4b) = param_4 != 0;
      return;
    case 0xcf:
      *(unsigned char *)(param_2 + 0x8b) = temp_v7;
      return;
    case 0xd0:
      *(unsigned char *)(param_2 + 0x8c) = temp_v7;
      return;
    case 0xd1:
      *(unsigned char *)(param_2 + 0x8d) = temp_v7;
      return;
    case 0xd2:
      *(unsigned char *)(param_2 + 0x8e) = temp_v7;
      return;
    case 0xd3:
      *(unsigned char *)(param_2 + 0x8f) = temp_v7;
      return;
    case 0xd4:
      temp_v4 = (unsigned int)*(unsigned char *)(param_2 + 0x40);
      if (temp_v4 < 3) {
        piVar7[temp_v4 * 2 + 4] = *(int *)(param_2 + 0x20);
        *(unsigned char *)((int)piVar7 + temp_v4 * 8 + 0xd) = temp_v7;
        *(unsigned char *)(piVar7 + temp_v4 * 2 + 3) = 1;
        temp_v1 = *(char *)(param_2 + 0x40) + '\x01';
        *(char *)(param_2 + 0x40) = temp_v1;
        return;
      }
      break;
    case 0xd5:
      *(unsigned char *)(param_2 + 0x84) = temp_v7;
      return;
    case 0xd6:
      if (DAT_00473534 != '\0') {
        if ((int)param_4 < 0x20) {
          FUN_0037f5d0(temp_v8);
          return;
        }
        if ((int)param_4 < 0x30) {
          FUN_0023578c(param_2,param_4 - 0x20);
          return;
        }
      }
      break;
    case 0xd7:
      pbVar8 = (unsigned char *)(param_2 + 0x78);
      temp_v8 = (int)*(short *)(param_2 + 0x7c);
      if (*(short *)(param_2 + 0x7a) <= temp_v8) goto LAB_003e76cc;
      goto LAB_003e76d4;
    case 0xd8:
      temp_v10 = (float)VectorSignedToFloat(param_4 - 0x40,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_2 + 0x98) = temp_v10 * 0.015625f;
      return;
    default:
      return;
    }
    return;
  }
  if (param_3 != 0xc0) {
    if ((int)param_3 < 0xc1) {
      if (param_3 != 0xb2) {
        if ((int)param_3 >= 0xb2) {
          if (param_3 == 0xb5) {
            temp_v10 = (float)VectorSignedToFloat(param_4,(unsigned char)(in_fpscr >> 0x16) & 3);
            *(float *)(param_2 + 0x9c) = temp_v10 * 0.007874016f;
            return;
          }
          if ((int)param_3 < 0xb6) {
            if (param_3 == 0xb3) {
              *(unsigned char *)(param_2 + 0x85) = temp_v7;
              return;
            }
            if (param_3 == 0xb4) {
              *(unsigned char *)(param_2 + 0x95) = temp_v7;
            }
            return;
          }
          if (param_3 == 0xb6) {
            *(unsigned char *)(param_2 + 0x4d) = temp_v7;
            return;
          }
          if (param_3 != 0xbf) {
            return;
          }
          *(unsigned char *)(param_2 + 0x41) = param_4 != 0;
          return;
        }
        if (param_3 != 0x8a) {
          if ((int)param_3 >= 0x8b) {
            if (param_3 == 0xb0) {
              *(unsigned char *)(temp_v8 + 0x76) = temp_v7;
              return;
            }
            if (param_3 != 0xb1) {
              return;
            }
            *(short *)(param_2 + 0x90) = (short)temp_v4;
            return;
          }
          if (param_3 == 0x81) {
            if ((int)param_4 < 0x10000) {
              *(unsigned int *)(param_2 + 0x50) = param_4 & 0xffff;
            }
            return;
          }
          if (param_3 == 0x88) {
            temp_v8 = FUN_001584f8(temp_v8,param_4);
            if (temp_v8 == 0) {
              return;
            }
            if (temp_v8 == param_2) {
              return;
            }
            nw_snd_internal_driver_SequenceTrack_Close();
            FUN_0015c4fc(temp_v8,*piVar7,param_5);
            nw_snd_internal_driver_SequenceTrack_Open(temp_v8);
            return;
          }
          if (param_3 != 0x89) {
            return;
          }
        }
        else {
          temp_v4 = (unsigned int)*(unsigned char *)(param_2 + 0x40);
          if (temp_v4 >= 3) {
            return;
          }
          piVar7[temp_v4 * 2 + 4] = *(int *)(param_2 + 0x20);
          *(unsigned char *)(piVar7 + temp_v4 * 2 + 3) = 0;
          *(char *)(param_2 + 0x40) = *(char *)(param_2 + 0x40) + '\x01';
        }
        temp_v8 = *piVar7 + param_4;
        *(int *)(param_2 + 0x20) = temp_v8;
        return;
      }
      *(unsigned char *)(param_2 + 0x27) = param_4 != 0;
      if (param_4 == 0) {
        return;
      }
      nw_snd_internal_driver_SequenceTrack_ReleaseAllChannel(param_2,0xffffffff);
      nw_snd_internal_driver_SequenceTrack_FreeAllChannel(param_2);
      return;
    }
    switch(param_3) {
    case 0xc1:
      pbVar8 = (unsigned char *)(param_2 + 0x6c);
      if ((int)*(short *)(param_2 + 0x70) >= (int)*(short *)(param_2 + 0x6e)) {
        temp_v0 = *(unsigned char *)(param_2 + 0x6d);
      }
      else {
        temp_v0 = *pbVar8;
        temp_v1 = aeabi_idivmod(((unsigned int)*(unsigned char *)(param_2 + 0x6d) - (unsigned int)temp_v0) *
                              (int)*(short *)(param_2 + 0x70));
        temp_v0 = temp_v1 + temp_v0;
      }
      *pbVar8 = temp_v0;
      *(unsigned short *)(pbVar8 + 4) = 0;
      pbVar8[1] = temp_v7;
      *(unsigned short *)(pbVar8 + 2) = temp_v3;
      return;
    case 0xc2:
      *(unsigned char *)(temp_v8 + 0x74) = temp_v7;
      return;
    case 0xc3:
      *(unsigned char *)(param_2 + 0x88) = temp_v7;
      return;
    case 0xc4:
      goto LAB_003e7660;
    case 0xc5:
      *(unsigned char *)(param_2 + 0x86) = temp_v7;
      return;
    case 0xc6:
      *(unsigned char *)(param_2 + 0x89) = temp_v7;
      return;
    case 199:
      *(unsigned char *)(param_2 + 0x25) = param_4 != 0;
      return;
    case 200:
      *(unsigned char *)(param_2 + 0x26) = param_4 != 0;
      nw_snd_internal_driver_SequenceTrack_ReleaseAllChannel(param_2,0xffffffff);
      nw_snd_internal_driver_SequenceTrack_FreeAllChannel(param_2);
      return;
    case 0xc9:
      *(unsigned char *)(param_2 + 0x4b) = 1;
      *(unsigned char *)(param_2 + 0x8a) = *(char *)(param_2 + 0x88) + temp_v7;
      return;
    case 0xca:
      temp_v10 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_2 + 0x54) = temp_v10 * 0.0078125f;
      return;
    case 0xcb:
      temp_v10 = (float)VectorUnsignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_2 + 0x58) = temp_v10 * 0.390625f;
      return;
    default:
      return;
    }
  }
  pbVar8 = (unsigned char *)(param_2 + 0x72);
  temp_v8 = (int)*(short *)(param_2 + 0x76);
  temp_v7 = temp_v0;
  if (*(short *)(param_2 + 0x74) <= temp_v8) {
LAB_003e76cc:
    temp_v0 = pbVar8[1];
  }
  else {
LAB_003e76d4:
    temp_v0 = *pbVar8;
    temp_v1 = aeabi_idivmod(((int)(char)pbVar8[1] - (int)(char)temp_v0) * temp_v8);
    temp_v0 = temp_v1 + temp_v0;
  }
  *pbVar8 = temp_v0;
  pbVar8[4] = 0;
  pbVar8[5] = 0;
  pbVar8[1] = temp_v7;
  *(unsigned short *)(pbVar8 + 2) = temp_v3;
  return;
LAB_003e7660:
  pbVar8 = (unsigned char *)(param_2 + 0x7e);
  temp_v8 = (int)*(short *)(param_2 + 0x82);
  if (*(short *)(param_2 + 0x80) <= temp_v8) goto LAB_003e76cc;
  goto LAB_003e76d4;
}
