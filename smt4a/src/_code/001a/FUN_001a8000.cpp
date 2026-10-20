/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8000` (_code @ 0x1a8000, 0x3bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b361c(unsigned char *, unsigned int);

typedef struct fn_001a8000_arg3 fn_001a8000_arg3;
struct fn_001a8000_arg3 {
    unsigned char pad_0x0[0x20];
    ushort field_0x20; /* +0x20 */
    unsigned char pad_0x22[0x1a];
    byte field_0x3c; /* +0x3c */
    byte field_0x3d; /* +0x3d */
    byte field_0x3e; /* +0x3e */
    unsigned char pad_0x3f[0x1];
    byte field_0x40; /* +0x40 */
    byte field_0x41; /* +0x41 */
    byte field_0x42; /* +0x42 */
    unsigned char pad_0x43[0x1];
    byte field_0x44; /* +0x44 */
    byte field_0x45; /* +0x45 */
    byte field_0x46; /* +0x46 */
    unsigned char pad_0x47[0x1];
    byte field_0x48; /* +0x48 */
    byte field_0x49; /* +0x49 */
    byte field_0x4a; /* +0x4a */
    unsigned char pad_0x4b[0x1];
    byte field_0x4c; /* +0x4c */
    byte field_0x4d; /* +0x4d */
    byte field_0x4e; /* +0x4e */
};

/* Supplied declaration required: FUN_001b361c. */


/* WARNING: Removing unreachable block (ram,0x001a837c) */
/* WARNING: Removing unreachable block (ram,0x001a8348) */
/* WARNING: Removing unreachable block (ram,0x001a83b0) */

void FUN_001a8000(int *param_1,unsigned int *param_2,int *param_3,fn_001a8000_arg3 *param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned char *puVar5;
  
  temp_v2 = 0;
  temp_v0 = *param_3 + (unsigned int)param_4->field_0x20 * 0x278;
  puVar5 = (unsigned char *)(temp_v0 + 4);
  if ((*(unsigned char *)(*param_1 + 6) & 0x10) != 0) {
    do {
      if (puVar5[temp_v2 + 0x164] != '\0') {
        temp_v1 = *param_3 + (unsigned int)param_4->field_0x20 * 0x278 + temp_v2 * 0x10;
        puVar5[temp_v2 * 0x2c + 0xb] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b4) *
                          (int)(short)(unsigned short)param_4->field_0x40) >> 8);
        puVar5[temp_v2 * 0x2c + 0xc] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b5) *
                          (int)(short)(unsigned short)param_4->field_0x41) >> 8);
        puVar5[temp_v2 * 0x2c + 0xd] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b6) *
                          (int)(short)(unsigned short)param_4->field_0x42) >> 8);
        puVar5[temp_v2 * 0x2c + 8] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b8) *
                          (int)(short)(unsigned short)param_4->field_0x44) >> 8);
        puVar5[temp_v2 * 0x2c + 9] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b9) *
                          (int)(short)(unsigned short)param_4->field_0x45) >> 8);
        puVar5[temp_v2 * 0x2c + 10] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1ba) *
                          (int)(short)(unsigned short)param_4->field_0x46) >> 8);
        puVar5[temp_v2 * 0x2c + 0xe] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1bc) *
                          (int)(short)(unsigned short)param_4->field_0x48) >> 8);
        puVar5[temp_v2 * 0x2c + 0xf] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1bd) *
                          (int)(short)(unsigned short)param_4->field_0x49) >> 8);
        puVar5[temp_v2 * 0x2c + 0x10] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1be) *
                          (int)(short)(unsigned short)param_4->field_0x4a) >> 8);
        puVar5[temp_v2 * 0x2c + 0x11] = *(unsigned char *)(temp_v1 + 0x1c0);
        puVar5[temp_v2 * 0x2c + 0x12] = *(unsigned char *)(temp_v1 + 0x1c1);
        puVar5[temp_v2 * 0x2c + 0x13] = *(unsigned char *)(temp_v1 + 0x1c2);
        puVar5[temp_v2 * 0x2c + 6] = (char)((*(unsigned char *)(*param_1 + 6) & 0x20) >> 5);
        puVar5[temp_v2 * 0x2c + 7] = (char)((*(unsigned char *)(*param_1 + 6) & 0x40) >> 6);
        puVar3 = puVar5 + temp_v2 * 0x2c + 4;
        FUN_001b361c(puVar3,*param_2);
        *param_2 = (unsigned int)puVar3;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  else {
    do {
      if (puVar5[temp_v2 + 0x164] != '\0') {
        temp_v1 = *param_3 + (unsigned int)param_4->field_0x20 * 0x278 + temp_v2 * 0x10;
        puVar3 = puVar5 + temp_v2 * 0x2c + 4;
        puVar5[temp_v2 * 0x2c + 0xb] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b4) *
                          (int)(short)(unsigned short)param_4->field_0x40) >> 8);
        puVar5[temp_v2 * 0x2c + 0xc] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b5) *
                          (int)(short)(unsigned short)param_4->field_0x41) >> 8);
        puVar5[temp_v2 * 0x2c + 0xd] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b6) *
                          (int)(short)(unsigned short)param_4->field_0x42) >> 8);
        puVar5[temp_v2 * 0x2c + 8] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b8) *
                          (int)(short)(unsigned short)param_4->field_0x44) >> 8);
        puVar5[temp_v2 * 0x2c + 9] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1b9) *
                          (int)(short)(unsigned short)param_4->field_0x45) >> 8);
        puVar5[temp_v2 * 0x2c + 10] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1ba) *
                          (int)(short)(unsigned short)param_4->field_0x46) >> 8);
        puVar5[temp_v2 * 0x2c + 0xe] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1bc) *
                          (int)(short)(unsigned short)param_4->field_0x48) >> 8);
        puVar5[temp_v2 * 0x2c + 0xf] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1bd) *
                          (int)(short)(unsigned short)param_4->field_0x49) >> 8);
        puVar5[temp_v2 * 0x2c + 0x10] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1be) *
                          (int)(short)(unsigned short)param_4->field_0x4a) >> 8);
        puVar5[temp_v2 * 0x2c + 0x11] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1c0) *
                          (int)(short)(unsigned short)param_4->field_0x4c) >> 8);
        puVar5[temp_v2 * 0x2c + 0x12] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1c1) *
                          (int)(short)(unsigned short)param_4->field_0x4d) >> 8);
        puVar5[temp_v2 * 0x2c + 0x13] =
             (char)((unsigned int)((int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x1c2) *
                          (int)(short)(unsigned short)param_4->field_0x4e) >> 8);
        puVar5[temp_v2 * 0x2c + 6] = (char)((*(unsigned char *)(*param_1 + 6) & 0x20) >> 5);
        puVar5[temp_v2 * 0x2c + 7] = (char)((*(unsigned char *)(*param_1 + 6) & 0x40) >> 6);
        FUN_001b361c(puVar3,*param_2);
        *param_2 = (unsigned int)puVar3;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  temp_v1 = *param_3 + (unsigned int)param_4->field_0x20 * 0x278;
  temp_v2 = (unsigned int)param_4->field_0x3c +
          ((unsigned int)((int)(short)(unsigned short)param_4->field_0x40 *
                 (int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x234)) >> 8);
  if (temp_v2 >= 0x100) {
    temp_v2 = 0xff;
  }
  *puVar5 = (char)temp_v2;
  temp_v2 = (unsigned int)param_4->field_0x3d +
          ((unsigned int)((int)(short)(unsigned short)param_4->field_0x41 *
                 (int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x235)) >> 8);
  if (temp_v2 >= 0x100) {
    temp_v2 = 0xff;
  }
  *(char *)(temp_v0 + 5) = (char)temp_v2;
  temp_v2 = (unsigned int)param_4->field_0x3e +
          ((unsigned int)((int)(short)(unsigned short)param_4->field_0x42 *
                 (int)(short)(unsigned short)*(unsigned char *)(temp_v1 + 0x236)) >> 8);
  if (temp_v2 >= 0x100) {
    temp_v2 = 0xff;
  }
  *(char *)(temp_v0 + 6) = (char)temp_v2;
  return;
}

} /* extern "C" */
