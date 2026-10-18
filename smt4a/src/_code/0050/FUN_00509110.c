/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00509110` (_code @ 0x509110, 0x280 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_00508600(unsigned short *);
extern unsigned int *FUN_0050860c(unsigned short *);
extern unsigned int *FUN_00508628(unsigned short *);
/* Supplied declaration required: FUN_00508778. */
extern unsigned int *FUN_005087a0(unsigned short *);
extern unsigned short *FUN_0050883c(void);
extern unsigned short *FUN_00508848(int);
extern int nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo(unsigned int);
extern int nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType(void);


unsigned int FUN_00509110(int param_1,unsigned int param_2,unsigned short *param_3)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned short *puVar8;
  unsigned char *puVar9;
  unsigned char *puVar10;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  
  temp_v1 = nw_snd_internal_SoundArchiveFile_InfoBlockBody_GetSoundInfo
                    (*(unsigned int *)(param_1 + 0x3c));
  temp_v3 = 0;
  if (temp_v1 != 0) {
    temp_v2 = nw_snd_internal_SoundArchiveFile_SoundInfo_GetSoundType();
    if (temp_v2 != 2) {
      temp_v3 = 0;
    }
    else {
      if (*(unsigned int *)(param_1 + 8) >= 0x2030100) {
        puVar5 = (unsigned short *)FUN_0050883c();
        *param_3 = *puVar5;
        param_3[1] = puVar5[1];
        puVar6 = (unsigned int *)FUN_00508628(puVar5);
        if (puVar6 != (unsigned int *)0x0) {
          temp_v0 = (unsigned char)*puVar6;
        }
        else {
          temp_v0 = 1;
        }
        *(unsigned char *)((int)param_3 + 0x3f) = temp_v0;
        *(unsigned int *)(param_3 + 0x1c) = *(unsigned int *)(puVar5 + 6);
        puVar6 = (unsigned int *)FUN_00508600(puVar5);
        temp_v3 = *puVar6;
        *(char *)(param_3 + 0x1e) = (char)temp_v3;
        *(char *)((int)param_3 + 0x3d) = (char)((unsigned int)temp_v3 >> 8);
        *(char *)(param_3 + 0x1f) = (char)((unsigned int)temp_v3 >> 0x10);
        if (*(unsigned int *)(param_1 + 8) >= 0x2030200) {
          *(unsigned int *)(param_3 + 0x20) = *(unsigned int *)(puVar5 + 0x10);
        }
        else {
          *(unsigned int *)(param_3 + 0x20) = 0xffffffff;
        }
        puVar7 = (unsigned int *)FUN_0050860c(puVar5);
      }
      else {
        puVar8 = (unsigned short *)FUN_00508848(temp_v1);
        *param_3 = *puVar8;
        param_3[1] = puVar8[1];
        puVar5 = puVar8;
        FUN_00508778();
        *(char *)((int)param_3 + 0x3f) = (char)puVar5;
        *(unsigned int *)(param_3 + 0x1c) = 0x3f800000;
        *(unsigned char *)(param_3 + 0x1e) = 0x7f;
        *(unsigned char *)((int)param_3 + 0x3d) = 0;
        *(unsigned char *)(param_3 + 0x1f) = 0;
        *(unsigned int *)(param_3 + 0x20) = 0xffffffff;
        puVar7 = (unsigned int *)FUN_005087a0(puVar8);
      }
      if (puVar7 != (unsigned int *)0x0) {
        temp_v7 = *puVar7;
        temp_v6 = 0;
        do {
          if (temp_v7 <= temp_v6) break;
          puVar10 = (unsigned char *)((int)param_3 + temp_v6 * 0xd + 4);
          if ((temp_v6 < *puVar7) && ((short)puVar7[temp_v6 * 2 + 1] == 0x220e)) {
            puVar9 = (unsigned char *)(puVar7[temp_v6 * 2 + 2] + (int)puVar7);
          }
          else {
            puVar9 = (unsigned char *)0x0;
          }
          *puVar10 = *puVar9;
          *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 5) = puVar9[1];
          *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 6) = puVar9[2];
          *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 7) = puVar9[3];
          *(char *)((int)param_3 + temp_v6 * 0xd + 0xe) =
               (char)*(unsigned int *)(puVar9 + *(int *)(puVar9 + 8));
          if (*(unsigned int *)(param_1 + 8) >= 0x2030100) {
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 8) = puVar9[*(int *)(puVar9 + 0x10)];
            temp_v8 = 0;
            do {
              temp_v4 = temp_v8 + 1;
              puVar10[temp_v8 + 5] = puVar9[temp_v8 + *(int *)(puVar9 + 0x10) + 1];
              temp_v8 = temp_v4;
            } while (temp_v4 < 2);
          }
          else {
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 8) = 0x7f;
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 9) = 0;
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 10) = 0;
          }
          if (*(unsigned int *)(param_1 + 8) >= 0x2030100) {
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 0xb) = puVar9[0x14];
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 0xc) = puVar9[0x15];
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 0xd) = puVar9[0x16];
          }
          else {
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 0xb) = 0x40;
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 0xc) = 0;
            *(unsigned char *)((int)param_3 + temp_v6 * 0xd + 0xd) = 0;
          }
          temp_v8 = (unsigned int)*(unsigned char *)((int)param_3 + temp_v6 * 0xd + 0xe);
          if (temp_v8 >= 3) {
            temp_v8 = 2;
            temp_v4 = 0;
LAB_00509358:
            do {
              temp_v5 = temp_v4 + 1;
              puVar10[temp_v4 + 0xb] = puVar9[temp_v4 + *(int *)(puVar9 + 8) + 4];
              temp_v4 = temp_v5;
            } while (temp_v5 < temp_v8);
          }
          else {
            temp_v4 = 0;
            if (temp_v8 != 0) goto LAB_00509358;
          }
          temp_v6 = temp_v6 + 1;
        } while (temp_v6 < 4);
      }
      temp_v3 = 1;
    }
  }
  return temp_v3;
}
