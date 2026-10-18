/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001066ac` (_code @ 0x1066ac, 0x30c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004c5634; /* 0x4c5634 */
extern signed char DAT_004c581a; /* 0x4c581a */

/* Supplied declaration required: FUN_0010b7f4. */
/* Supplied declaration required: FUN_0010b8ac. */
/* Supplied declaration required: FUN_0010c078. */
/* Supplied declaration required: FUN_0010c1f4. */
/* Supplied declaration required: FUN_0010dcc8. */
extern int FUN_002c17d4(unsigned int);
extern int FUN_002c1830(unsigned int, unsigned int);
extern int FUN_002c1a28(unsigned int);
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c3b44. */
/* Supplied declaration required: FUN_002c4360. */
extern int FUN_002c583c(unsigned int);


void FUN_001066ac(void)

{
/* irregular: 6 unstructured edge(s); 7 goto(s); 7 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  unsigned int temp_v1;
  int temp_v2;
  char temp_v3;
  unsigned char *puVar6;
  unsigned int temp_v4;
  char *pcVar8;
  unsigned int temp_v5;
  
  temp_v0 = FUN_002c583c(1);
  if (temp_v0 != 0) {
    return;
  }
  temp_v5 = 0;
  pcVar8 = (char *)(&DAT_004c5634 + temp_v5 * 0x78);
LAB_001066ec:
  if (*pcVar8 == '\x02') {
    if ((*(unsigned int *)(pcVar8 + 0x68) & 1) != 0) {
      if ((pcVar8[0x74] & 2U) == 0) {
LAB_00106784:
        temp_v1 = *(unsigned int *)(pcVar8 + 0x44);
        FUN_0010c078(temp_v1,*(unsigned int *)(pcVar8 + 0x4c),1);
        *(unsigned int *)(pcVar8 + 0x48) = temp_v1;
        FUN_0010dcc8();
        if (*(int *)(pcVar8 + 0x50) != 3) {
          FUN_0010b7f4(*(unsigned int *)(pcVar8 + 0x48),pcVar8[0x75],0);
        }
        else {
          FUN_0010b7f4(*(unsigned int *)(pcVar8 + 0x48),(unsigned char)pcVar8[0x75] >> 1,0);
        }
        if (*(int *)(pcVar8 + 0x44) != 0) {
          FUN_002c4360();
        }
        pcVar8[0x44] = '\0';
        pcVar8[0x45] = '\0';
        pcVar8[0x46] = '\0';
        pcVar8[0x47] = '\0';
        temp_v4 = (*(unsigned int *)(pcVar8 + 0x68) & 0xfffffffe) | 2;
        goto LAB_00106908;
      }
      temp_v4 = 0;
      do {
        puVar6 = &DAT_004c5634 + temp_v4 * 0x78;
        while( 1 ) {
          temp_v0 = FUN_002c1a28(*(unsigned int *)(puVar6 + 0x48));
          if (temp_v0 != 0) {
            if (puVar6 == (unsigned char *)0x0) goto LAB_00106758;
            temp_v4 = 0;
            do {
              puVar6 = &DAT_004c5634 + temp_v4 * 0x78;
              while( 1 ) {
                temp_v2 = FUN_002c1a28(*(unsigned int *)(puVar6 + 0x48));
                temp_v0 = 0;
                if (temp_v2 != 0) {
                  temp_v0 = *(int *)(puVar6 + 0x50);
                }
                if (temp_v2 != 0 && temp_v0 != 4) {
                  *(unsigned int *)(puVar6 + 0x68) = *(unsigned int *)(puVar6 + 0x68) | 4;
                  *(unsigned int *)(puVar6 + 0x70) = 0;
                }
                temp_v4 = temp_v4 + 1;
                if ((int)temp_v4 >= 4) goto LAB_00106784;
                if (3 >= temp_v4) break;
                puVar6 = (unsigned char *)0x0;
              }
            } while( 1 );
          }
          temp_v4 = temp_v4 + 1;
          if ((int)temp_v4 >= 4) goto LAB_00106758;
          if (temp_v4 < 4) break;
          puVar6 = (unsigned char *)0x0;
        }
      } while( 1 );
    }
    if ((*(unsigned int *)(pcVar8 + 0x68) & 2) != 0) {
      if (((DAT_004c581a != '\0') || (temp_v0 = FUN_002c1f28(), temp_v0 != 0)) &&
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
        FUN_0010b8ac(*(unsigned int *)(pcVar8 + 0x48));
        *(unsigned int *)(pcVar8 + 0x68) = (*(unsigned int *)(pcVar8 + 0x68) & 0xfffffff9) | 8;
      }
      else {
        temp_v0 = FUN_002c1a28(*(unsigned int *)(pcVar8 + 0x48));
        if ((temp_v0 == 0) && (*(int *)(pcVar8 + 100) >= 1)) {
          pcVar8[0x76] = '\x01';
          temp_v4 = (*(unsigned int *)(pcVar8 + 0x68) & 0xfffffff9) | 8;
LAB_00106908:
          *(unsigned int *)(pcVar8 + 0x68) = temp_v4;
        }
        else {
          *(int *)(pcVar8 + 100) = *(int *)(pcVar8 + 100) + 1;
        }
      }
    }
    if (((*(unsigned int *)(pcVar8 + 0x68) & 8) != 0) &&
       (temp_v0 = FUN_002c1a28(*(unsigned int *)(pcVar8 + 0x48)), temp_v0 == 0)) {
      temp_v3 = pcVar8[0x76];
      if ((pcVar8[0x74] & 4U) != 0) {
        temp_v3 = '\0';
      }
      FUN_0010c1f4(*(unsigned int *)(pcVar8 + 0x48));
      FUN_002c3b44(pcVar8,0x78);
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
  goto LAB_00106970;
LAB_00106758:
  temp_v4 = 0;
  while( 1 ) {
    if (temp_v4 >= 4) {
      pcVar2 = (char *)0x0;
    }
    else {
      pcVar2 = (char *)(&DAT_004c5634 + temp_v4 * 0x78);
    }
    if (*pcVar2 == '\x01') break;
    temp_v4 = temp_v4 + 1;
    if ((int)temp_v4 >= 4) goto LAB_00106784;
  }
  if (*(int *)(pcVar8 + 0x44) != 0) {
    FUN_002c4360();
  }
  pcVar8[0x44] = '\0';
  pcVar8[0x45] = '\0';
  pcVar8[0x46] = '\0';
  pcVar8[0x47] = '\0';
  FUN_002c3b44(pcVar8,0x78);
  pcVar8[0x68] = '\0';
  pcVar8[0x69] = '\0';
  pcVar8[0x6a] = '\0';
  pcVar8[0x6b] = '\0';
  *pcVar8 = '\0';
LAB_00106970:
  temp_v5 = temp_v5 + 1;
  if ((int)temp_v5 >= 4) {
    if (DAT_004c581a != '\x01') {
      return;
    }
    temp_v0 = FUN_002c1830(9,2);
    if (temp_v0 == 0) {
      temp_v0 = FUN_002c17d4(6);
      if (temp_v0 == 0) {
        DAT_004c581a = 0;
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
    pcVar8 = (char *)(&DAT_004c5634 + temp_v5 * 0x78);
  }
  goto LAB_001066ec;
}
