/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013af10` (_code @ 0x13af10, 0x32c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

int asdSoundObjectRegister(unsigned int, int, int);
int asdSoundObjectFadeOut(unsigned int);
AsdSndObject *asdSoundObjectCreate(u32 data, u32 option, u32 kind, f32 gain0, f32 gain1);
void FUN_0014375c(AsdSndObject *sound, f32 leftGain, f32 rightGain);
int FUN_001517b4(int, int);
int FUN_00152bf8(unsigned int);
int asdMemFree(void);
int rt_aeabi_memclr(char *, int);

extern unsigned char DAT_0061978c; /* 0x61978c */
extern signed char DAT_00619972; /* 0x619972 */

/* Supplied declaration required: asdSoundObjectRegister. */
/* Supplied declaration required: asdSoundObjectFadeOut. */
/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_00152bf8. */
extern int FUN_00162ea4(void);
extern int FUN_00163fd4(unsigned int);
extern int FUN_001681a4(unsigned int);
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: rt_aeabi_memclr. */


void FUN_0013af10(void)

{
/* irregular: 6 unstructured edge(s); 7 goto(s); 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  char *pcVar4;
  char temp_v3;
  unsigned char *puVar6;
  unsigned int temp_v4;
  char *pcVar8;
  unsigned int temp_v5;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 != 0) {
    return;
  }
  temp_v5 = 0;
  pcVar8 = (char *)(&DAT_0061978c + temp_v5 * 0x78);
LAB_0013af58:
  if (*pcVar8 == '\x02') {
    if ((*(unsigned int *)(pcVar8 + 0x68) & 1) != 0) {
      if ((pcVar8[0x74] & 2U) == 0) {
LAB_0013aff0:
        temp_v1 = (unsigned int)asdSoundObjectCreate(*(unsigned int *)(pcVar8 + 0x44),
            *(unsigned int *)(pcVar8 + 0x4c), (unsigned char)pcVar8[0x77] == 1 ? 3 : 1,
            0.0f, 0.0f);
        *(unsigned int *)(pcVar8 + 0x48) = temp_v1;
        FUN_0014375c((AsdSndObject *)temp_v1, *(float *)(pcVar8 + 0x5c),
            *(float *)(pcVar8 + 0x58));
        if (*(int *)(pcVar8 + 0x50) != 3) {
          asdSoundObjectRegister(*(unsigned int *)(pcVar8 + 0x48),pcVar8[0x75],0);
        }
        else {
          asdSoundObjectRegister(*(unsigned int *)(pcVar8 + 0x48),(unsigned char)pcVar8[0x75] >> 1,0);
        }
        temp_v4 = (*(unsigned int *)(pcVar8 + 0x68) & 0xfffffffe) | 2;
        goto LAB_0013b178;
      }
      temp_v4 = 0;
      do {
        puVar6 = &DAT_0061978c + temp_v4 * 0x78;
        while( 1 ) {
          temp_v0 = FUN_001681a4(*(unsigned int *)(puVar6 + 0x48));
          if (temp_v0 != 0) {
            if (puVar6 == (unsigned char *)0x0) goto LAB_0013afc4;
            temp_v4 = 0;
            do {
              puVar6 = &DAT_0061978c + temp_v4 * 0x78;
              while( 1 ) {
                temp_v2 = FUN_001681a4(*(unsigned int *)(puVar6 + 0x48));
                temp_v0 = 0;
                if (temp_v2 != 0) {
                  temp_v0 = *(int *)(puVar6 + 0x50);
                }
                if (temp_v2 != 0 && temp_v0 != 4) {
                  *(unsigned int *)(puVar6 + 0x68) = *(unsigned int *)(puVar6 + 0x68) | 4;
                  *(unsigned int *)(puVar6 + 0x70) = 0;
                }
                temp_v4 = temp_v4 + 1;
                if ((int)temp_v4 >= 4) goto LAB_0013aff0;
                if (3 >= temp_v4) break;
                puVar6 = (unsigned char *)0x0;
              }
            } while( 1 );
          }
          temp_v4 = temp_v4 + 1;
          if ((int)temp_v4 >= 4) goto LAB_0013afc4;
          if (temp_v4 < 4) break;
          puVar6 = (unsigned char *)0x0;
        }
      } while( 1 );
    }
    if ((*(unsigned int *)(pcVar8 + 0x68) & 2) != 0) {
      if (((DAT_00619972 != '\0') || (temp_v0 = FUN_00162ea4(), temp_v0 != 0)) &&
         (*(int *)(pcVar8 + 0x50) != 4)) {
        *(unsigned int *)(pcVar8 + 0x68) = *(unsigned int *)(pcVar8 + 0x68) | 4;
        pcVar8[0x70] = '\0';
        pcVar8[0x71] = '\0';
        pcVar8[0x72] = '\0';
        pcVar8[0x73] = '\0';
      }
      if ((*(unsigned int *)(pcVar8 + 0x68) & 4) != 0) {
        pcVar8[0x70] = '\x03';
        pcVar8[0x71] = '\0';
        pcVar8[0x72] = '\0';
        pcVar8[0x73] = '\0';
        asdSoundObjectFadeOut(*(unsigned int *)(pcVar8 + 0x48));
        *(unsigned int *)(pcVar8 + 0x68) = (*(unsigned int *)(pcVar8 + 0x68) & 0xfffffff9) | 8;
      }
      else {
        temp_v0 = FUN_001681a4(*(unsigned int *)(pcVar8 + 0x48));
        if ((temp_v0 == 0) && (*(int *)(pcVar8 + 100) >= 1)) {
          pcVar8[0x76] = '\x01';
          temp_v4 = (*(unsigned int *)(pcVar8 + 0x68) & 0xfffffff9) | 8;
LAB_0013b178:
          *(unsigned int *)(pcVar8 + 0x68) = temp_v4;
        }
        else {
          *(int *)(pcVar8 + 100) = *(int *)(pcVar8 + 100) + 1;
        }
      }
    }
    if (((*(unsigned int *)(pcVar8 + 0x68) & 8) != 0) &&
       (temp_v0 = FUN_001681a4(*(unsigned int *)(pcVar8 + 0x48)), temp_v0 == 0)) {
      temp_v3 = pcVar8[0x76];
      if ((pcVar8[0x74] & 4U) != 0) {
        temp_v3 = '\0';
      }
      if (*(int *)(pcVar8 + 0x44) != 0) {
        asdMemFree();
      }
      pcVar8[0x44] = '\0';
      pcVar8[0x45] = '\0';
      pcVar8[0x46] = '\0';
      pcVar8[0x47] = '\0';
      FUN_00152bf8(*(unsigned int *)(pcVar8 + 0x48));
      rt_aeabi_memclr(pcVar8,0x78);
      if (temp_v3 != '\0') {
        pcVar8[0x76] = '\x01';
      }
      pcVar8[0x68] = '\0';
      pcVar8[0x69] = '\0';
      pcVar8[0x6a] = '\0';
      pcVar8[0x6b] = '\0';
      *pcVar8 = '\0';
    }
  }
  goto LAB_0013b1f0;
LAB_0013afc4:
  temp_v4 = 0;
  while( 1 ) {
    if (temp_v4 >= 4) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = (char *)(&DAT_0061978c + temp_v4 * 0x78);
    }
    if (*pcVar4 == '\x01') break;
    temp_v4 = temp_v4 + 1;
    if ((int)temp_v4 >= 4) goto LAB_0013aff0;
  }
  if (*(int *)(pcVar8 + 0x44) != 0) {
    asdMemFree();
  }
  pcVar8[0x44] = '\0';
  pcVar8[0x45] = '\0';
  pcVar8[0x46] = '\0';
  pcVar8[0x47] = '\0';
  rt_aeabi_memclr(pcVar8,0x78);
  pcVar8[0x68] = '\0';
  pcVar8[0x69] = '\0';
  pcVar8[0x6a] = '\0';
  pcVar8[0x6b] = '\0';
  *pcVar8 = '\0';
LAB_0013b1f0:
  temp_v5 = temp_v5 + 1;
  if ((int)temp_v5 >= 4) {
    if (DAT_00619972 != '\x01') {
      return;
    }
    temp_v0 = 9;
    FUN_001517b4(9,2);
    if (temp_v0 == 0) {
      temp_v0 = FUN_00163fd4(6);
      if (temp_v0 == 0) {
        DAT_00619972 = 0;
        return;
      }
      return;
    }
    return;
  }
  if (temp_v5 >= 4) {
    pcVar8 = (char *)0x0;
  }
  else {
    pcVar8 = (char *)(&DAT_0061978c + temp_v5 * 0x78);
  }
  goto LAB_0013af58;
}

} /* extern "C" */
