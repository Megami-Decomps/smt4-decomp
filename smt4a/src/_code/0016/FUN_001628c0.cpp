/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001628c0` (_code @ 0x1628c0, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int libc_strcat(unsigned char [64], unsigned int);
int asdSoundGetObjectCount(void);
int FUN_00167f94(void);
int FUN_00168750(unsigned char [64], int, int, unsigned char *, unsigned char *);
int libc_strcpy(int, unsigned char [64]);
int rt_aeabi_memclr(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spF0; /* 0xf0: local_f0 */
} param_4_stack;

extern unsigned char LAB_00167f44; /* 0x167f44 */
extern unsigned char DAT_0061978c; /* 0x61978c */
extern signed char DAT_00619972; /* 0x619972 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: libc_strcat. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: asdSoundGetObjectCount. */
/* Supplied declaration required: FUN_00167f94. */
/* Supplied declaration required: FUN_00168750. */
extern int jyoucyuGetTableEntry(unsigned int);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: rt_aeabi_memclr. */


unsigned int FUN_001628c0(unsigned int param_1,int param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: irregular input(s): in_d0; 7 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned int temp_v1;
  unsigned long long in_d0;
  unsigned char temp_v2 [64];
  unsigned char temp_v3 [64];
  unsigned char temp_v4 [76];
  
  rt_aeabi_memclr(temp_v2,0x40);
  rt_aeabi_memclr(temp_v3,0x40);
  rt_aeabi_memclr(temp_v4,0x40);
  temp_v0 = jyoucyuGetTableEntry(1);
  if ((((temp_v0 != 0) || (temp_v0 = FUN_00162ea4(), temp_v0 != 0)) || (DAT_00619972 != '\0')) ||
     (param_2 == 0)) {
    return 0xffffffff;
  }
  FUN_00100388(temp_v3,"snd/voice/");
  libc_strcat(temp_v3,param_1);
  FUN_00100388(temp_v2,"%s.bcwav",temp_v3);
  asdSoundGetObjectCount();
  temp_v1 = 0;
  do {
    pcVar2 = (char *)(&DAT_0061978c + temp_v1 * 0x78);
    while( 1 ) {
      if (*pcVar2 == '\0') {
        if (temp_v1 == 0xffffffff) {
          return 0xffffffff;
        }
        if (temp_v1 >= 4) {
          return 0xffffffff;
        }
        temp_v0 = temp_v1 * 0x78;
        puVar4 = &DAT_0061978c + temp_v0;
        if (puVar4 == (unsigned char *)0x0) {
          return 0xffffffff;
        }
        puVar3 = temp_v2;
        FUN_00167f94();
        if (puVar3 == (unsigned char *)0x0) {
          return 0xffffffff;
        }
        *(unsigned int *)(temp_v0 + 0x6197dc) = 0;
        *(unsigned int *)(temp_v0 + 0x6197e0) = 0;
        *(unsigned int *)(temp_v0 + 0x6197f4) = 0;
        *(unsigned char *)(temp_v0 + 0x619800) = param_3;
        *puVar4 = 1;
        *(int *)(temp_v0 + 0x6197e4) = (int)in_d0;
        *(int *)(temp_v0 + 0x6197e8) = (int)((unsigned long long)in_d0 >> 0x20);
        *(char *)(temp_v0 + 0x619801) = (char)param_2;
        *(unsigned char *)(temp_v0 + 0x619803) = param_4;
        libc_strcpy(temp_v0 + 0x61978d,temp_v2);
        FUN_00168750(temp_v2,0,3,&LAB_00167f44,puVar4);
        return temp_v1;
      }
      temp_v1 = temp_v1 + 1;
      if ((int)temp_v1 >= 4) {
        return 0xffffffff;
      }
      if (temp_v1 < 4) break;
      pcVar2 = (char *)0x0;
    }
  } while( 1 );
}

} /* extern "C" */
