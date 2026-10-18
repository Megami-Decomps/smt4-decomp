/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c3398` (_code @ 0x2c3398, 0x644 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} void_stack;

extern int FUN_00202450(); /* 0x202450 */
extern int FUN_00227418(); /* 0x227418 */
extern int FUN_0025ec04(); /* 0x25ec04 */
extern unsigned char LAB_002c3794; /* 0x2c3794 */
extern unsigned char LAB_002c37a4; /* 0x2c37a4 */
extern unsigned char LAB_002c37b4; /* 0x2c37b4 */
extern unsigned char LAB_002c37cc; /* 0x2c37cc */
extern unsigned char LAB_002c37dc; /* 0x2c37dc */
extern int FUN_003d56dc(); /* 0x3d56dc */
extern unsigned char DAT_0052b8bc; /* 0x52b8bc */
extern unsigned char DAT_0052b970; /* 0x52b970 */
extern unsigned char DAT_0052bac0; /* 0x52bac0 */
extern unsigned char DAT_0052baf0; /* 0x52baf0 */
extern unsigned int *DAT_0057f108; /* 0x57f108 */
extern int DAT_0057f268; /* 0x57f268 */
extern unsigned char DAT_005e1eb0; /* 0x5e1eb0 */
extern unsigned char DAT_005e1eba; /* 0x5e1eba */
extern unsigned char DAT_005f1634; /* 0x5f1634 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_001ab888. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_0020d700. */
/* Supplied declaration required: FUN_0020d934. */
/* Supplied declaration required: FUN_002304d0. */
/* Supplied declaration required: FUN_0023f604. */
/* Supplied declaration required: FUN_0026f148. */
/* Supplied declaration required: FUN_0026f7f0. */
/* Supplied declaration required: FUN_0026fc00. */
/* Supplied declaration required: FUN_002a2cb4. */
/* Supplied declaration required: FUN_002a4878. */
extern unsigned int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002c8538. */
extern int FUN_002e27b8(void);
/* Supplied declaration required: FUN_002e5c48. */
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_002ef9f0(void);
/* Supplied declaration required: FUN_002f78a0. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_003344b4. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_003423e8. */
/* Supplied declaration required: FUN_003493dc. */
extern unsigned char FUN_0036d134(void);
/* Supplied declaration required: FUN_0038b1c4. */
extern int FUN_0038b568(void);
/* Supplied declaration required: FUN_003a7040. */
extern unsigned char FUN_003b6f00(void);
extern unsigned char FUN_003c0dcc(void);
extern int FUN_003deee4(unsigned int);
extern unsigned char FUN_003e42f0(void);
/* Supplied declaration required: FUN_003f3fcc. */
/* Supplied declaration required: FUN_003f5220. */
/* Supplied declaration required: FUN_003f525c. */
extern int FUN_00418768(unsigned int);
/* Supplied declaration required: FUN_0050d6e4. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


/* WARNING: Removing unreachable block (ram,0x002c3ae0) */

void FUN_002c3398(void)

{
/* irregular: 8 goto(s); 42 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int *puVar4;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar11;
  
  if (DAT_0057f108 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x33c0,1);
    DAT_0057f108 = puVar2;
  }
  puVar2 = DAT_0057f108;
  FUN_002e6354();
  FUN_0050d6e4(&DAT_005e1eb0);
  FUN_0031a400();
  puVar3 = &LAB_002c3794;
  FUN_0014e38c(&LAB_002c3794,4,0,0,FUN_003d56dc,0,0);
  *puVar2 = (unsigned int)puVar3;
  FUN_0015155c(&LAB_002c37a4,0x7e,0,0,FUN_00202450,0,0,puVar3);
  FUN_0015155c(&LAB_002c37b4,0xda,0,0,FUN_00202450,0,0,*puVar2);
  puVar3 = &LAB_002c37cc;
  FUN_0015155c(&LAB_002c37cc,0xeb,0,0,FUN_00227418,0,0,*puVar2);
  puVar2[2] = (unsigned int)puVar3;
  FUN_0015155c(&LAB_002c37dc,0xe9,0,0,FUN_0025ec04,0,0,*puVar2);
  puVar2 = DAT_0057f108;
  *(unsigned char *)(DAT_0057f108 + 0x2e) = 0;
  *(unsigned char *)((int)puVar2 + 0xb9) = 3;
  puVar2[0xcee] = 0;
  DAT_005e1eba = 0;
  DAT_005f1634 = 0;
  FUN_002a2cb4();
  FUN_0038b1c4();
  FUN_003a7040();
  FUN_002e5c48();
  FUN_00342010();
  FUN_003423e8(0);
  puVar4 = puVar2 + 0x18e;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object();
  FUN_001505ac(puVar4,&DAT_0052b8bc,0xb4,&DAT_0052b970,0x150,&DAT_0052bac0,0x30,0,0,&DAT_0052baf0,
               0x4d0);
  FUN_0014e188(puVar2 + 0x196,0x14,0,puVar4,0xc9);
  FUN_0014e188(puVar2 + 0x1b9,0x14,0,puVar4,0xc9);
  FUN_00184758(puVar2 + 0x1b9,1,0);
  FUN_0014e188(puVar2 + 0x1dc,0x14,0,puVar4,0xc9);
  FUN_001846d0(puVar2 + 0x1dc,10);
  FUN_0014e188(puVar2 + 0x1ff,0x14,0,puVar4,0xc9);
  FUN_001846d0(puVar2 + 0x1ff,2);
  FUN_0014e188(puVar2 + 0x222,0x14,0,puVar4,0xc9);
  temp_v6 = 0;
  do {
    FUN_0014e188(puVar2 + temp_v6 * 0x23 + 0x245,0x14,0x22,puVar4,0xc9);
    temp_v6 = temp_v6 + 1;
  } while (temp_v6 < 8);
  FUN_0014e188(puVar2 + 0x35d,0x14,0,puVar4,0xc9);
  FUN_001846d0(puVar2 + 0x35d,1);
  FUN_0014e188(puVar2 + 0x380,0x14,0,puVar4,0xc9);
  FUN_001846d0(puVar2 + 0x380,9);
  FUN_0026fc00(2,1,0xffffffff,0);
  FUN_002f78a0(puVar2);
  FUN_0014e188(puVar2 + 0x682,0x14,0,puVar4,2);
  *(unsigned char *)(puVar2 + 0x6c8) = 0;
  FUN_0014e188(puVar2 + 0x6a5,0x14,0,puVar4,0xc9);
  FUN_001846d0(puVar2 + 0x6a5,0xb);
  puVar4 = DAT_0057f108;
  puVar11 = DAT_0057f108 + 0xcac;
  *(unsigned char *)puVar11 = 0;
  *(unsigned char *)((int)puVar4 + 0x32b1) = 0;
  *(unsigned char *)((int)puVar4 + 0x32b2) = 0;
  *(unsigned char *)((int)puVar4 + 0x32b3) = 0;
  *(unsigned char *)(puVar4 + 0xcad) = 0;
  *(unsigned char *)((int)puVar4 + 0x32b5) = 0;
  *(unsigned char *)((int)puVar4 + 0x32b6) = 0;
  temp_v6 = FUN_003deee4(1);
  if ((temp_v6 != 0) || (temp_v6 = FUN_00418768(1), temp_v6 == 0)) {
    *(unsigned char *)puVar11 = 1;
  }
  *(unsigned char *)((int)puVar4 + 0x32b1) = 0;
  temp_v6 = FUN_003deee4(0);
  if ((temp_v6 != 0) || (temp_v6 = FUN_00418768(0), temp_v6 == 0)) {
    *(unsigned char *)((int)puVar4 + 0x32b1) = 1;
  }
  puVar4 = DAT_0057f108;
  temp_v0 = FUN_003c0dcc();
  *(unsigned char *)((int)puVar4 + 0x32b2) = temp_v0;
  temp_v0 = FUN_003b6f00();
  *(unsigned char *)((int)puVar4 + 0x32b3) = temp_v0;
  puVar4 = DAT_0057f108;
  *(unsigned char *)(DAT_0057f108 + 0xcad) = 0;
  temp_v6 = FUN_002e27b8();
  if (0 < temp_v6) {
    *(unsigned char *)(puVar4 + 0xcad) = 1;
  }
  puVar4 = DAT_0057f108;
  temp_v0 = FUN_003e42f0();
  *(unsigned char *)((int)puVar4 + 0x32b5) = temp_v0;
  puVar4 = DAT_0057f108;
  temp_v0 = FUN_0036d134();
  *(unsigned char *)((int)puVar4 + 0x32b6) = temp_v0;
  *(unsigned char *)(puVar2 + 0x29) = 1;
  FUN_0020d700();
  FUN_001b4a90((int)puVar2 + 0x1b22,0x4a,0xffffffff);
  FUN_001ab888();
  FUN_0023f604(0xb);
  FUN_0023f604(0xd);
  FUN_0023f604(0xe);
  FUN_0026f7f0();
  FUN_0026f148(0x13);
  FUN_0026f148(0x14);
  FUN_0026f148(0x15);
  FUN_0026f148(0x16);
  FUN_0026f148(0x17);
  FUN_0026f148(0x18);
  FUN_0026f148(0x19);
  FUN_003493dc(1);
  temp_v6 = DAT_0057f268;
  FUN_001ab888(&DAT_0057f268,0,0xffffffff);
  *(unsigned char *)(temp_v6 + 0x9b4) = 1;
  FUN_001b4a90(temp_v6 + 0x9c0,4,1);
  temp_v1 = 0;
  temp_v5 = 0;
  do {
    temp_v2 = temp_v1 + 1;
    temp_v5 = temp_v5 + 2;
    *(unsigned short *)(temp_v6 + temp_v1 * 8 + 0xa84) = 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(temp_v6 + temp_v2 * 8 + 0xa84) = 1;
  } while (temp_v5 < 0x18);
  temp_v1 = 0;
  do {
    temp_v5 = temp_v6 + temp_v1 * 4;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x26) = 0;
    FUN_003f525c(*(unsigned int *)(temp_v5 + 0xa10),0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = 0;
  do {
    temp_v5 = temp_v6 + temp_v1 * 4;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x26) = 0;
    FUN_003f525c(*(unsigned int *)(temp_v5 + 0xa20),0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x18);
  temp_v5 = 0;
  temp_v1 = 0;
  *(unsigned int *)(temp_v6 + 0x9c0) = 0;
  do {
    temp_v2 = temp_v5 + 1;
    temp_v1 = temp_v1 + 2;
    *(unsigned short *)(temp_v6 + temp_v5 * 8 + 0xa84) = 0;
    temp_v5 = temp_v5 + 2;
    *(unsigned short *)(temp_v6 + temp_v2 * 8 + 0xa84) = 0;
  } while (temp_v1 < 0x18);
  *(unsigned int *)(temp_v6 + 0x20) = 1;
  FUN_002c8538(0);
  if (*(int *)(temp_v6 + 0x20) == 8) {
    if (*(char *)(temp_v6 + 0x42) != '\0') {
      temp_v5 = temp_v6 + 0xdb4;
      temp_v3 = FUN_002a4878();
      temp_v4 = FUN_002a4894(temp_v5);
      temp_v1 = 0;
      FUN_002304d0(0,temp_v3,temp_v4,*(unsigned int *)(temp_v6 + 0x2c));
      if (temp_v1 == 0) {
        temp_v1 = 0;
        if (*(char *)(temp_v6 + 0x9b4) == '\x04') {
          do {
            temp_v2 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v2 != 0) {
              if (*(short *)(DAT_0057f268 + ((temp_v2 * 4 - 4) + temp_v1 % 4) * 8 + 0xa84) != 0) {
LAB_002c4664:
                FUN_002a4914(temp_v5,temp_v1 % 4);
                FUN_002a4964(temp_v5,((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1);
                if (temp_v1 < 0x18) goto LAB_002c4a2c;
                break;
              }
            }
            else if (*(char *)(DAT_0057f268 + temp_v1 % 4 + 0x9c0) != '\0') goto LAB_002c4664;
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x18);
          temp_v1 = 0;
          do {
            if (*(char *)(DAT_0057f268 + temp_v1 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v5);
              temp_v1 = 0;
              FUN_002a4964(temp_v5,temp_v1);
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
        }
        else {
          do {
            if (*(char *)(DAT_0057f268 + temp_v1 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v5,temp_v1);
              FUN_002a4964(temp_v5,0);
              if (temp_v1 < 4) goto LAB_002c4a2c;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
          temp_v1 = 0;
          do {
            temp_v2 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v2 != 0) {
              if (*(short *)(DAT_0057f268 + ((temp_v2 * 4 - 4) + temp_v1 % 4) * 8 + 0xa84) != 0) {
                FUN_002a4914(temp_v5,temp_v1 % 4);
                temp_v1 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
                FUN_002a4964(temp_v5,temp_v1);
                break;
              }
            }
            else if (*(char *)(DAT_0057f268 + temp_v1 % 4 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v5,temp_v1 % 4);
              temp_v1 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
              FUN_002a4964(temp_v5,temp_v1);
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x18);
        }
      }
    }
    else {
      temp_v3 = FUN_002a4878(temp_v6 + 0xd50);
      temp_v4 = FUN_002a4894(temp_v6 + 0xd50);
      temp_v1 = 0;
      FUN_002304d0(0,temp_v3,temp_v4,*(unsigned int *)(temp_v6 + 0x2c));
      if (temp_v1 == 0) {
        temp_v1 = 0;
        if (*(char *)(temp_v6 + 0x9b4) == '\x04') {
          do {
            temp_v5 = ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1;
            temp_v2 = temp_v1 % 4 + *(int *)(temp_v6 + 0x2c) * 0xc;
            if (temp_v5 != 0) {
              if (*(short *)(DAT_0057f268 + ((temp_v5 * 4 - 4) + temp_v2) * 8 + 0xa84) != 0) {
LAB_002c4858:
                temp_v5 = temp_v1 + *(int *)(temp_v6 + 0x2c) * 0xc;
                if (temp_v5 < 0xc) {
                  *(unsigned int *)(temp_v6 + 0x2c) = 0;
                  FUN_002a4914(temp_v6 + 0xd50,temp_v1 % 4);
                  FUN_002a4964(temp_v6 + 0xd50,
                               ((int)(temp_v1 + ((unsigned int)(temp_v1 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                else {
                  temp_v5 = temp_v5 - 0xc;
                  *(unsigned int *)(temp_v6 + 0x2c) = 1;
                  FUN_002a4914(temp_v6 + 0xd50,temp_v5 % 4);
                  FUN_002a4964(temp_v6 + 0xd50,
                               ((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                if (temp_v1 < 0x18) goto LAB_002c4a2c;
                break;
              }
            }
            else if (*(char *)(DAT_0057f268 + temp_v2 + 0x9c0) != '\0') goto LAB_002c4858;
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x18);
          temp_v1 = 0;
          do {
            if (*(char *)(DAT_0057f268 + temp_v1 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v6 + 0xd50);
              temp_v1 = 0;
              temp_v5 = temp_v6 + 0xd50;
              FUN_002a4964(temp_v5,temp_v1);
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
        }
        else {
          do {
            if (*(char *)(DAT_0057f268 + temp_v1 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v6 + 0xd50,temp_v1);
              FUN_002a4964(temp_v6 + 0xd50,0);
              if (temp_v1 < 4) goto LAB_002c4a2c;
              break;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 4);
          temp_v1 = DAT_0057f268;
          temp_v5 = 0;
          do {
            temp_v2 = ((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v2 != 0) {
              if (*(short *)(DAT_0057f268 + (temp_v5 % 4 + (temp_v2 * 4 - 4)) * 8 + 0xa84) == 0)
              goto LAB_002c4a1c;
LAB_002c49c4:
              if (temp_v5 < 0xc) {
                if (*(int *)(temp_v6 + 0x2c) != 1) {
                  *(unsigned int *)(temp_v6 + 0x2c) = 0;
                }
                else {
                  *(unsigned int *)(DAT_0057f268 + 0x2c) = *(unsigned int *)(DAT_0057f268 + 0x2c) ^ 1;
                  FUN_00184758(temp_v1 + 0x180,5,0);
                  temp_v2 = 0;
                  do {
                    FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa10),
                                 *(unsigned int *)(temp_v1 + 0x2c));
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < 4);
                  temp_v2 = 0;
                  do {
                    FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa20),
                                 *(unsigned int *)(temp_v1 + 0x2c));
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < 0x18);
                }
                FUN_002a4914(temp_v6 + 0xd50,temp_v5 % 4);
                FUN_002a4964(temp_v6 + 0xd50,
                             ((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) + 1);
                break;
              }
              if (*(int *)(temp_v6 + 0x2c) != 0) {
                *(unsigned int *)(temp_v6 + 0x2c) = 1;
              }
              else {
                *(unsigned int *)(DAT_0057f268 + 0x2c) = *(unsigned int *)(DAT_0057f268 + 0x2c) ^ 1;
                FUN_00184758(temp_v1 + 0x180,4,0);
                temp_v2 = 0;
                do {
                  FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa10),
                               *(unsigned int *)(temp_v1 + 0x2c));
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < 4);
                temp_v2 = 0;
                do {
                  FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa20),
                               *(unsigned int *)(temp_v1 + 0x2c));
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < 0x18);
              }
              temp_v5 = temp_v5 - 0xc;
              FUN_002a4914(temp_v6 + 0xd50,temp_v5 % 4);
              temp_v1 = ((int)(temp_v5 + ((unsigned int)(temp_v5 >> 0x1f) >> 0x1e)) >> 2) + 1;
              temp_v5 = temp_v6 + 0xd50;
              FUN_002a4964(temp_v5,temp_v1);
              break;
            }
            if (*(char *)(DAT_0057f268 + temp_v5 % 4 + 0x9c0) != '\0') goto LAB_002c49c4;
LAB_002c4a1c:
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 0x18);
        }
      }
    }
  }
LAB_002c4a2c:
  FUN_0020d934();
  temp_v1 = DAT_0057f268;
  if (*(int *)(temp_v6 + 0x1c) != 0x1b) {
    return;
  }
  temp_v6 = *(int *)(temp_v6 + 0x20);
  *(unsigned int *)(DAT_0057f268 + 0x24) = *(unsigned int *)(DAT_0057f268 + 0x1c);
  *(int *)(temp_v1 + 0x1c) = temp_v6;
  *(unsigned int *)(temp_v1 + 0x18) = 0;
  if (temp_v6 == 0x1b) {
    temp_v6 = FUN_0038b568();
    if (temp_v6 == 0) {
      *(unsigned int *)(temp_v1 + 0x1c) = 0x1c;
      return;
    }
    temp_v6 = FUN_002ef9f0();
    if (temp_v6 == 0) {
      FUN_003343f0();
    }
    temp_v6 = *(int *)(temp_v1 + 0x1c);
  }
  if (temp_v6 == 0x15) {
    temp_v6 = 0;
    do {
      temp_v5 = temp_v1 + temp_v6 * 4;
      FUN_003f525c(*(unsigned int *)(temp_v5 + 0xa10),0);
      *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x27) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    temp_v6 = 0;
    do {
      temp_v5 = temp_v1 + temp_v6 * 4;
      FUN_003f525c(*(unsigned int *)(temp_v5 + 0xa20),0);
      *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x27) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x18);
    FUN_003344b4(0);
  }
  if (*(int *)(temp_v1 + 0x1c) == 0x16) {
    temp_v6 = 0;
    do {
      temp_v5 = temp_v1 + temp_v6 * 4;
      FUN_003f525c(*(unsigned int *)(temp_v5 + 0xa10),0);
      *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v5 + 0xa10) + 0x27) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
    temp_v6 = 0;
    do {
      temp_v5 = temp_v1 + temp_v6 * 4;
      FUN_003f525c(*(unsigned int *)(temp_v5 + 0xa20),0);
      *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x25) = 0;
      *(unsigned char *)(*(int *)(temp_v5 + 0xa20) + 0x27) = 0;
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x18);
    FUN_003344b4(0);
    if (*(char *)(temp_v1 + 0x9c0) != '\0') {
      FUN_003f3fcc(*(unsigned int *)(temp_v1 + 0xa10),0xff);
    }
    temp_v6 = 0;
    do {
      if (*(char *)(temp_v1 + temp_v6 + 0x9c1) != '\0') {
        FUN_003f3fcc(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0xa14),0xff);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
    temp_v6 = 0;
    do {
      if (*(short *)(temp_v1 + temp_v6 * 8 + 0xa84) != 0) {
        FUN_003f3fcc(*(unsigned int *)(temp_v1 + temp_v6 * 4 + 0xa20),0xff);
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x18);
  }
  return;
}
