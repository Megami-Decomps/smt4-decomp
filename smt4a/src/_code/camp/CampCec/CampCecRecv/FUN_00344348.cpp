/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00344348` (_code @ 0x344348, 0x34c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(unsigned char *, int, int, int, unsigned char *, int, int);
int FUN_0015155c(...);
int FUN_0016007c(...);
int FUN_00163060(int, int, int, int, int);
int FUN_00167ab4(...);
int FUN_001681cc(...);
int FUN_0016dfc4(void);
int FUN_002804b0(...);
int FUN_002c6fdc(void);
int FUN_002c76d8(...);
int FUN_002e3140(void);
int FUN_002e6354(void);
int FUN_002fb0d4(...);
int FUN_0031cf00(void);
int FUN_0036c700(void);
int FUN_003d8ecc(void);
int FUN_004310c0(void);
int nn_cfg_CTR_IsRestrictP2pCec(void);

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_0025d578; /* 0x25d578 */
extern unsigned char LAB_0025d5c4; /* 0x25d5c4 */
extern int FUN_002a28c0(...); /* 0x2a28c0 */
extern int FUN_003193a8(...); /* 0x3193a8 */
extern unsigned char LAB_0032e4a4; /* 0x32e4a4 */
extern unsigned char LAB_003446dc; /* 0x3446dc */
extern unsigned char LAB_003446f4; /* 0x3446f4 */
extern unsigned char LAB_00344708; /* 0x344708 */
extern unsigned char LAB_00344744; /* 0x344744 */
extern unsigned char LAB_00344758; /* 0x344758 */
extern unsigned char LAB_0035a3f0; /* 0x35a3f0 */
extern int FUN_0035a7c4(...); /* 0x35a7c4 */
extern int FUN_0035a840(...); /* 0x35a840 */
extern unsigned char LAB_0036d12c; /* 0x36d12c */
extern int FUN_0037bdfc(...); /* 0x37bdfc */
extern int FUN_003a5200(...); /* 0x3a5200 */
extern int FUN_003a60a8(...); /* 0x3a60a8 */
extern int FUN_003a611c(...); /* 0x3a611c */
extern unsigned char LAB_00514a64; /* 0x514a64 */
extern unsigned char LAB_00514b14; /* 0x514b14 */
extern unsigned char LAB_00514b84; /* 0x514b84 */
extern unsigned int *DAT_0057f128; /* 0x57f128 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_0016dfc4. */
extern unsigned int FUN_002684ac(unsigned int);
/* Supplied declaration required: FUN_002804b0. */
extern unsigned int FUN_002a2cf0(void);
/* Supplied declaration required: FUN_002c6fdc. */
/* Supplied declaration required: FUN_002c76d8. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002fb0d4. */
/* Supplied declaration required: FUN_0031cf00. */
/* Supplied declaration required: FUN_0036c700. */
/* Supplied declaration required: FUN_003d8ecc. */
/* Supplied declaration required: FUN_004310c0. */
extern int FUN_004bd340(unsigned char *, unsigned int);
/* Supplied declaration required: nn_cfg_CTR_IsRestrictP2pCec. */


void FUN_00344348(unsigned char param_1)

{
/* irregular: 26 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar7;
  unsigned char temp_v3;
  int temp_v4;
  unsigned char *temp_v5;
  unsigned char *temp_v6;
  unsigned char *temp_v7;
  unsigned int *temp_v8;
  
  if (DAT_0057f128 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    FUN_00163060(0x100,0x100,0,0x808,1);
    DAT_0057f128 = puVar1;
  }
  puVar1 = DAT_0057f128;
  FUN_002e6354();
  puVar2 = &LAB_003446dc;
  FUN_0014e38c(&LAB_003446dc,3,0,0,&LAB_0025d5c4,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_003446f4,0x86,0,0,&LAB_0025d578,0,0,puVar2);
  FUN_0015155c(&LAB_00344708,0xe2,0,0,&LAB_0025d578,0,0,*puVar1);
  *(unsigned char *)((int)puVar1 + 0x7d5) = param_1;
  *(unsigned char *)(puVar1 + 0xfa) = 0;
  puVar1[0xea] = 0xffffffff;
  puVar1[0xeb] = 0;
  puVar1[0xec] = 0xffffffff;
  puVar1[0xed] = 0xffffffff;
  puVar1[3] = (unsigned int)FUN_0035a840;
  puVar1[4] = (unsigned int)FUN_003a5200;
  puVar1[5] = (unsigned int)FUN_0037bdfc;
  puVar1[6] = (unsigned int)&LAB_0032e4a4;
  puVar1[7] = (unsigned int)FUN_003193a8;
  puVar1[8] = (unsigned int)&LAB_0035a3f0;
  puVar1[9] = (unsigned int)FUN_0035a7c4;
  puVar1[10] = (unsigned int)FUN_003a60a8;
  puVar1[0xb] = (unsigned int)FUN_003a611c;
  puVar3 = &LAB_0036d12c;
  puVar1[0xd] = (unsigned int)&LAB_0036d12c;
  FUN_0031cf00();
  puVar1[0xf8] = 0;
  puVar2 = puVar3;
  nn_cfg_CTR_IsRestrictP2pCec();
  if (puVar2 != (unsigned char *)0x0) {
    puVar1[0xf8] = 1;
  }
  else {
    FUN_004310c0();
    if (puVar2 == (unsigned char *)0x0) {
      temp_v0 = 2;
      puVar1[0xf8] = temp_v0;
    }
    else {
      temp_v1 = FUN_002a2cf0();
      temp_v3 = temp_v1 == 0;
      if (temp_v3) {
        temp_v1 = (unsigned int)*(unsigned char *)((int)puVar1 + 0x7d5);
      }
      if (!(!temp_v3 || temp_v1 != 0)) {
        temp_v0 = 6;
        puVar1[0xf8] = temp_v0;
      }
      else if (puVar3 != (unsigned char *)0x0) {
        temp_v2 = FUN_004bd340(puVar3,1);
        if (temp_v2 != 0) {
          puVar1[0xf8] = 3;
        }
        else {
          temp_v2 = FUN_004bd340(puVar3,10);
          if (temp_v2 != 0) {
            puVar1[0xf8] = 4;
          }
        }
      }
    }
  }
  *(unsigned char *)(puVar1 + 0x1f5) = 0;
  if (puVar1[0xf8] != 0) {
    FUN_002804b0(&LAB_00344744,puVar1 + 0xd4,0);
    FUN_002804b0(&LAB_00344758,puVar1 + 0xd5,0);
    puVar1[0xeb] = 8;
  }
  else {
    FUN_001681cc(3);
    FUN_001681cc(0xbb);
    FUN_002c6fdc();
    FUN_003d8ecc();
    FUN_002c76d8(2);
    temp_v0 = FUN_002684ac(2);
    FUN_0036c700();
    puVar1[0x1f6] = temp_v0;
    *(unsigned char *)(puVar1 + 0x1fc) = 0;
    puVar1[0x1fd] = 0;
    temp_v0 = 0x100;
    FUN_00167ab4(0x100,0x100,0,0x1000,0x1000,1);
    puVar1[0x201] = temp_v0;
    puVar7 = (unsigned int *)0x18;
    FUN_0016007c(0x18,puVar3);
    if (puVar7 != (unsigned int *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(unsigned char *)(puVar7 + 4) = 0;
    }
    puVar1[0x1fe] = (unsigned int)puVar7;
    FUN_0016dfc4();
    temp_v4 = 4;
    temp_v5 = &LAB_00514a64;
    temp_v6 = &LAB_00514b84;
    temp_v7 = &LAB_00514b14;
    puVar7 = puVar1 + 0x1ff;
    temp_v8 = puVar1;
    FUN_002fb0d4(puVar7,&temp_v4,FUN_002a28c0,&temp_v8,
                 *(int *)(puVar1[0x1fe] + 0xc) + *(int *)(puVar1[0x1fe] + 8),0x11,0xfffffffe,0);
    if (((unsigned int)puVar7 & 0x7e00000) != 0x600000 && (int)puVar7 < 0) {
      FUN_002e3140();
      return;
    }
  }
  return;
}

} /* extern "C" */
