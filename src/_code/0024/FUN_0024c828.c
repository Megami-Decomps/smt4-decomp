/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024c828` (_code @ 0x24c828, 0xe18 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
    unsigned int sp1E4; /* 0x1e4: local_1e4 */
    unsigned int sp1E8; /* 0x1e8: local_1e8 */
} param_3_stack;

/* Supplied declaration required: FUN_00229b2c. */
extern int FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_002475e4. */
/* Supplied declaration required: FUN_0027eb98. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_002b4854. */
extern unsigned int FUN_003c8608(void);
/* Supplied declaration required: FUN_003cf3d4. */
/* Supplied declaration required: FUN_003cfa28. */
/* Supplied declaration required: FUN_003d038c. */
/* Supplied declaration required: FUN_003d0e18. */
/* Supplied declaration required: FUN_003d11f8. */


void FUN_0024c828(int *param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  short temp_v7;
  unsigned short *puVar9;
  short *psVar10;
  int temp_v8;
  short *psVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned char temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12 [110];
  
  temp_v11 = 0;
  temp_v10 = 0;
  temp_v2 = FUN_0027eb98(param_1);
  switch(*(unsigned short *)(*(int *)(temp_v2 + 0x28) + 0x14c)) {
  case 1:
    temp_v2 = FUN_0027eb98(param_1);
    temp_v11 = (unsigned int)((**(unsigned int **)(temp_v2 + 0x20) & 0x10) == 0);
    temp_v2 = FUN_0027eb98(param_1);
    FUN_002475e4(temp_v12,*param_1,*(unsigned int *)(temp_v2 + 0x20));
    if ((short)temp_v12[0] == 0) {
      temp_v10 = 0;
    }
    else {
      temp_v10 = 1;
    }
    break;
  case 2:
  case 3:
    temp_v2 = FUN_0027eb98(param_1);
    temp_v7 = *(short *)(*(int *)(temp_v2 + 0x28) + 0x14e);
    temp_v2 = FUN_0027eb98(param_1);
    FUN_003d0e18(param_1,*(unsigned int *)(temp_v2 + 0x20),(int)temp_v7,&temp_v11,&temp_v10);
    break;
  case 8:
    temp_v2 = FUN_0027eb98(param_1);
    temp_v2 = (int)*(short *)(*(int *)(temp_v2 + 0x28) + 0x14e);
    FUN_002b4854();
    if (*(short *)(temp_v2 + 0x62) == 0) {
      temp_v3 = FUN_0027eb98(param_1);
      temp_v11 = (unsigned int)((**(unsigned int **)(temp_v3 + 0x20) & 0x10) != 0);
      if ((*(unsigned char *)(temp_v2 + 0x6a) & 0x80) == 0) {
        temp_v10 = 0;
        break;
      }
      temp_v10 = 1;
      break;
    }
    temp_v3 = FUN_0027eb98(param_1);
    FUN_003d0e18(param_1,*(unsigned int *)(temp_v3 + 0x20),*(unsigned short *)(temp_v2 + 0x62),&temp_v11,
                 &temp_v10);
    break;
  case 0xb:
    temp_v2 = FUN_0027eb98(param_1);
    temp_v11 = (unsigned int)((**(unsigned int **)(temp_v2 + 0x20) & 0x10) != 0);
    temp_v10 = 0;
  }
  temp_v6 = temp_v11;
  temp_v2 = 0;
  do {
    puVar13 = (unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288);
    if (((-1 < *(short *)((int)puVar13 + 0x6e)) && (temp_v4 = *puVar13, (temp_v4 & 1) != 0)) &&
       ((temp_v4 & 0x40) == 0)) {
      if (temp_v6 != 1) {
        if ((temp_v4 & 0x10) == 0) {
          if ((temp_v4 & 0x20) != 0) {
            temp_v4 = FUN_003c8608();
            if (temp_v4 != 0) {
              *puVar13 = *puVar13 | 0x400;
            }
          }
          else {
            *puVar13 = *puVar13 | 0x400;
          }
        }
      }
      else {
        temp_v4 = temp_v4 & 0x10;
        if (temp_v4 != 0) {
          *puVar13 = *puVar13 | 0x400;
        }
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 0x6d);
  if (temp_v10 == 1 || temp_v10 == 2) {
    FUN_003d11f8(param_1,temp_v11);
    return;
  }
  switch(param_2) {
  default:
    return;
  case 1:
    temp_v2 = FUN_0023ec3c(99);
    temp_v3 = 0;
    temp_v8 = 0x6d;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    do {
      temp_v6 = *puVar13;
      puVar13 = puVar13 + 0xa2;
      if ((temp_v6 & 0x400) != 0) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v8 = temp_v8 - 1;
    } while (temp_v8 != 0);
    if (temp_v3 >= 3) {
      if (temp_v2 < 0x1e) {
        FUN_003d038c(param_1,3);
        return;
      }
      if (temp_v2 < 0x41) {
        FUN_003d038c(param_1,2);
        return;
      }
    }
    else {
      temp_v3 = FUN_00293c98();
      if (*(short *)(temp_v3 + 0x1fc4) != 2) {
        FUN_003cf3d4(param_1);
        return;
      }
      if (temp_v2 < 0x28) {
        FUN_003d038c(param_1,2);
        return;
      }
    }
  case 4:
    FUN_003cfa28(param_1);
    return;
  case 2:
    FUN_003cf3d4(param_1);
    return;
  case 3:
    FUN_00229b2c(param_1);
    return;
  case 5:
    temp_v7 = 10000;
    temp_v2 = 0;
    temp_v3 = 0x6d;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    puVar14 = puVar13 + 0x6e;
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      temp_v9 = (*puVar13 & 0x400) != 0;
      temp_v1 = 0;
      if (temp_v9) {
        temp_v1 = (short)*puVar14;
      }
      if (temp_v9 && temp_v1 < temp_v7) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
        temp_v7 = temp_v1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      puVar14 = puVar14 + 0xa2;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    if (temp_v2 != 0) {
      temp_v3 = FUN_0027eb98(param_1);
      temp_v3 = temp_v3 + 0x38;
      temp_v6 = temp_v12[temp_v2 - 1];
      *(unsigned char *)(temp_v6 + temp_v3) = 1;
      return;
    }
    FUN_003cf3d4(param_1);
    return;
  case 6:
    temp_v2 = 0;
    temp_v7 = 0;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    temp_v3 = 0x6d;
    puVar14 = puVar13 + 0x6e;
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      temp_v9 = (*puVar13 & 0x400) != 0;
      temp_v1 = 0;
      if (temp_v9) {
        temp_v1 = (short)*puVar14;
      }
      if (temp_v9 && temp_v7 < temp_v1) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
        temp_v7 = temp_v1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      puVar14 = puVar14 + 0xa2;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    if (temp_v2 == 0) {
      FUN_003cf3d4(param_1);
      return;
    }
    temp_v3 = FUN_0027eb98();
    temp_v3 = temp_v3 + 0x38;
    temp_v6 = temp_v12[temp_v2 - 1];
    *(unsigned char *)(temp_v6 + temp_v3) = 1;
    return;
  case 7:
    temp_v2 = 0;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    temp_v3 = 0x6d;
    puVar9 = (unsigned short *)((int)puVar13 + 0x1c6);
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      if (((*puVar13 & 0x400) != 0) && (((unsigned int)*puVar9 & (1 << (param_3 & 0xff))) != 0)) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      puVar9 = puVar9 + 0x144;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    temp_v2 = FUN_0023ec3c((temp_v2 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  case 8:
    temp_v2 = 0;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    temp_v3 = 0x6d;
    puVar9 = (unsigned short *)((int)puVar13 + 0x1c6);
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      if (((*puVar13 & 0x400) != 0) && (((unsigned int)*puVar9 & (1 << (param_3 & 0xff))) == 0)) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      puVar9 = puVar9 + 0x144;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    temp_v2 = FUN_0023ec3c((temp_v2 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  case 9:
    temp_v2 = 0;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    temp_v3 = 0x6d;
    puVar9 = (unsigned short *)((int)puVar13 + 0x1c6);
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      if (((*puVar13 & 0x400) != 0) && (((unsigned int)*puVar9 & (1 << (param_3 & 0xff))) != 0)) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      puVar9 = puVar9 + 0x144;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    temp_v2 = FUN_0023ec3c((temp_v2 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  case 10:
    temp_v2 = 0;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    temp_v3 = 0x6d;
    puVar9 = (unsigned short *)((int)puVar13 + 0x1c6);
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      if (((*puVar13 & 0x400) != 0) && (((unsigned int)*puVar9 & (1 << (param_3 & 0xff))) == 0)) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      puVar9 = puVar9 + 0x144;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    temp_v2 = FUN_0023ec3c((temp_v2 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  case 0xb:
    temp_v2 = 0;
    temp_v3 = 0x6d;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      if ((*puVar13 & 0x400) != 0 && (*puVar13 & 0x20) != 0) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    break;
  case 0xc:
    temp_v2 = 0;
    temp_v3 = 0x6d;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      if (((*puVar13 & 0x400) != 0) && ((*puVar13 & 0x20) == 0)) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    break;
  case 0xd:
    temp_v2 = 0;
    temp_v3 = 0x6d;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    puVar9 = (unsigned short *)((int)puVar13 + 0xce);
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      if (((*puVar13 & 0x400) != 0) && (*puVar9 == param_3)) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      puVar9 = puVar9 + 0x144;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    break;
  case 0xe:
    temp_v2 = 0;
    temp_v3 = 0x6d;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    puVar9 = (unsigned short *)((int)puVar13 + 0xce);
    psVar10 = (short *)((int)puVar13 + 0x6e);
    do {
      temp_v6 = *puVar13;
      temp_v9 = (temp_v6 & 0x400) != 0;
      if (temp_v9) {
        temp_v6 = (unsigned int)*puVar9;
      }
      if (temp_v9 && temp_v6 != param_3) {
        temp_v12[temp_v2] = (int)*psVar10;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      puVar9 = puVar9 + 0x144;
      psVar10 = psVar10 + 0x144;
    } while (temp_v3 != 0);
    break;
  case 0xf:
    temp_v2 = FUN_0027eb98(param_1);
    temp_v6 = (unsigned int)*(unsigned short *)(temp_v2 + 0x2c);
    temp_v2 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v6 + temp_v2 + 0x38) = 1;
    return;
  case 0x10:
    temp_v3 = 0;
    temp_v2 = 0;
    do {
      temp_v8 = temp_v2;
      if ((*(unsigned int *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288) & 0x400) != 0) {
        temp_v5 = FUN_0027eb98(param_1);
        temp_v6 = (unsigned int)*(short *)(*(int *)(*param_1 + 0x1fc0) + temp_v2 * 0x288 + 0x6e);
        if (*(unsigned short *)(temp_v5 + 0x2c) != temp_v6) {
          temp_v12[temp_v3] = temp_v6;
          temp_v3 = temp_v3 + 1;
        }
      }
      temp_v2 = temp_v8 + 1;
    } while (temp_v2 < 0x6d);
    temp_v2 = FUN_0023ec3c((temp_v3 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    temp_v6 = temp_v12[temp_v2];
    temp_v3 = temp_v3 + 0x38;
    *(unsigned char *)(temp_v6 + temp_v3) = 1;
    return;
  case 0x11:
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v3 * 0x288) & 0x400) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2) >> 10 == 3)) {
        temp_v12[temp_v2] = (int)*(short *)(temp_v8 + temp_v3 * 0x288 + 0x6e);
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    temp_v2 = FUN_0023ec3c((temp_v2 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  case 0x12:
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v3 * 0x288) & 0x400) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2) >> 10 == 4)) {
        temp_v12[temp_v2] = (int)*(short *)(temp_v8 + temp_v3 * 0x288 + 0x6e);
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    break;
  case 0x13:
    temp_v3 = 0;
    temp_v2 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v2 * 0x288) & 0x400) != 0) &&
         (*(unsigned short *)(temp_v2 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2) >> 10 == 1)) {
        temp_v12[temp_v3] = (int)*(short *)(temp_v8 + temp_v2 * 0x288 + 0x6e);
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
    temp_v2 = FUN_0023ec3c((temp_v3 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  case 0x14:
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v3 * 0x288) & 0x400) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2) >> 10 == 2)) {
        temp_v12[temp_v2] = (int)*(short *)(temp_v8 + temp_v3 * 0x288 + 0x6e);
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    break;
  case 0x15:
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v3 * 0x288) & 0x400) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2) >> 10 != 3)) {
        temp_v12[temp_v2] = (int)*(short *)(temp_v8 + temp_v3 * 0x288 + 0x6e);
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    break;
  case 0x16:
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v3 * 0x288) & 0x400) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2) >> 10 != 4)) {
        temp_v12[temp_v2] = (int)*(short *)(temp_v8 + temp_v3 * 0x288 + 0x6e);
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    break;
  case 0x17:
    temp_v3 = 0;
    temp_v2 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v2 * 0x288) & 0x400) != 0) &&
         (*(unsigned short *)(temp_v2 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2) >> 10 != 1)) {
        temp_v12[temp_v3] = (int)*(short *)(temp_v8 + temp_v2 * 0x288 + 0x6e);
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
    temp_v2 = FUN_0023ec3c((temp_v3 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  case 0x18:
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v3 * 0x288) & 0x400) != 0) &&
         (*(unsigned short *)(temp_v3 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2) >> 10 != 2)) {
        temp_v12[temp_v2] = (int)*(short *)(temp_v8 + temp_v3 * 0x288 + 0x6e);
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x6d);
    break;
  case 0x19:
    temp_v2 = 0;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    temp_v3 = 0x6d;
    psVar10 = (short *)(param_3 * 2 + 0x72 + (int)puVar13);
    psVar12 = (short *)((int)puVar13 + 0x6e);
    do {
      if (((*puVar13 & 0x400) != 0) && (0 < *psVar10)) {
        temp_v12[temp_v2] = (int)*psVar12;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      psVar10 = psVar10 + 0x144;
      psVar12 = psVar12 + 0x144;
    } while (temp_v3 != 0);
    break;
  case 0x1a:
    temp_v2 = 0;
    puVar13 = *(unsigned int **)(*param_1 + 0x1fc0);
    temp_v3 = 0x6d;
    psVar10 = (short *)(param_3 * 2 + 0x72 + (int)puVar13);
    psVar12 = (short *)((int)puVar13 + 0x6e);
    do {
      if (((*puVar13 & 0x400) != 0) && (0x7fffffff < (unsigned int)(int)*psVar10)) {
        temp_v12[temp_v2] = (int)*psVar12;
        temp_v2 = temp_v2 + 1;
      }
      temp_v3 = temp_v3 - 1;
      puVar13 = puVar13 + 0xa2;
      psVar10 = psVar10 + 0x144;
      psVar12 = psVar12 + 0x144;
    } while (temp_v3 != 0);
    temp_v2 = FUN_0023ec3c((temp_v2 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  case 0x1b:
    temp_v3 = 0;
    temp_v2 = 0;
    temp_v8 = *(int *)(*param_1 + 0x1fc0);
    do {
      if (((*(unsigned int *)(temp_v8 + temp_v2 * 0x288) & 0x400) != 0) &&
         (temp_v0 = *(unsigned short *)(temp_v2 * 0x288 + temp_v8 + param_3 * 2 + 0x1f2),
         (temp_v0 >> 10 != 3 && temp_v0 >> 10 != 4) && temp_v0 >> 10 != 1)) {
        temp_v12[temp_v3] = (int)*(short *)(temp_v8 + temp_v2 * 0x288 + 0x6e);
        temp_v3 = temp_v3 + 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
    temp_v2 = FUN_0023ec3c((temp_v3 - 1U) & 0xffff);
    temp_v3 = FUN_0027eb98(param_1);
    *(unsigned char *)(temp_v12[temp_v2] + temp_v3 + 0x38) = 1;
    return;
  }
  temp_v2 = FUN_0023ec3c((temp_v2 - 1U) & 0xffff);
  temp_v3 = FUN_0027eb98(param_1);
  temp_v6 = temp_v12[temp_v2];
  temp_v3 = temp_v3 + 0x38;
  *(unsigned char *)(temp_v6 + temp_v3) = 1;
  return;
}
