/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f400c` (_code @ 0x2f400c, 0x678 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028c618(...);
int FUN_0028c640(...);
int FUN_0029bb14(...);
int FUN_002a0428(...);
int FUN_002a5710(...);
int FUN_002ad8b4(...);
int FUN_002be624(...);
int FUN_0031d534(void);
int VectorSignedToFloat(...);

extern unsigned char LAB_002f4340; /* 0x2f4340 */
extern int *DAT_00447e10; /* 0x447e10 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int asdMdlManagerClone(int, unsigned int);
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
extern int asdMdlManagerCreateSecondList(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0029bb14. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a5710. */
/* Supplied declaration required: FUN_002ad8b4. */
extern int FUN_002adee0(int);
/* Supplied declaration required: FUN_002be624. */
extern char *FUN_002fb468(int);
/* Supplied declaration required: FUN_0031d534. */


unsigned int FUN_002f400c(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 9 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  char *pcVar4;
  int temp_v1;
  int temp_v2;
  int *piVar7;
  unsigned int in_fpscr;
  int temp_v3;
  unsigned long long temp_v4;
  unsigned char temp_v5 [140];
  
  piVar3 = DAT_00447e10;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v1 = *DAT_00447e10;
  if (temp_v1 != 0x15) {
    if (temp_v1 < 0x15) {
      if (temp_v1 != 10) {
        if (temp_v1 == 0xb) {
          temp_v2 = DAT_00447e10[1];
          piVar7 = DAT_00447e10 + temp_v2 * 0xb + 0x445;
          temp_v1 = FUN_002adee0(DAT_00447e10[temp_v2 * 0xb + 0x44d]);
          if (temp_v1 == 0) {
            return 0;
          }
          *(unsigned char *)piVar7 = 1;
          *(unsigned char *)((int)piVar3 + temp_v2 * 0x2c + 0x1115) = 1;
          *(unsigned char *)((int)piVar3 + temp_v2 * 0x2c + 0x1116) = 0;
          piVar3[temp_v2 * 0xb + 0x446] = temp_v3;
          piVar3[temp_v2 * 0xb + 0x447] = temp_v3;
          piVar3[temp_v2 * 0xb + 0x448] = temp_v3;
          piVar3[temp_v2 * 0xb + 0x449] = temp_v3;
          piVar3[temp_v2 * 0xb + 0x44a] = 2;
          *(unsigned char *)(piVar3 + temp_v2 * 0xb + 0x44e) = 1;
          piVar3[temp_v2 * 0xb + 0x44f] = -1;
          FUN_002a0428(piVar3[temp_v2 * 0xb + 0x44d],1);
          FUN_0028c640(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x44d] + 8),0,
                       piVar3 + temp_v2 * 0xb + 0x446);
          FUN_0028c618(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x44d] + 8),0);
          FUN_002a5710(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x44d] + 8),piVar3[temp_v2 * 0xb + 0x44a])
          ;
          FUN_0029bb14(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x44d] + 8));
          puVar2 = (unsigned int *)piVar3[temp_v2 * 0xb + 0x44d];
          *puVar2 = *puVar2 | 2;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
          *DAT_00447e10 = *DAT_00447e10 + 1;
          return 0;
        }
        if (temp_v1 != 0xc) {
          if (temp_v1 != 0x14) {
            return 0;
          }
          DAT_00447e10[1] = 0;
          piVar3[0x4ae] = 2;
          FUN_002be624(temp_v5,&LAB_002f4340,2);
          temp_v1 = asdMdlManagerCreateSecondList(temp_v5,7);
          piVar3[0x4b0] = temp_v1;
          *(unsigned char *)(piVar3 + 0x4af) = 0;
          *DAT_00447e10 = *DAT_00447e10 + 1;
          return 0;
        }
        temp_v1 = 1;
        do {
          piVar3 = DAT_00447e10;
          piVar7 = DAT_00447e10 + temp_v1 * 0xb + 0x445;
          DAT_00447e10[temp_v1 * 0xb + 1099] = 1;
          FUN_002be624(temp_v5,&LAB_002f4340,1);
          temp_v3 = asdMdlManagerClone(DAT_00447e10[0x44d],0);
          piVar3[temp_v1 * 0xb + 0x44d] = temp_v3;
          *(unsigned char *)(piVar3 + temp_v1 * 0xb + 0x44c) = 1;
          *(unsigned char *)piVar7 = 1;
          *(unsigned char *)((int)piVar3 + temp_v1 * 0x2c + 0x1115) = 1;
          *(unsigned char *)((int)piVar3 + temp_v1 * 0x2c + 0x1116) = 0;
          temp_v2 = (int)temp_v4;
          piVar3[temp_v1 * 0xb + 0x446] = temp_v2;
          piVar3[temp_v1 * 0xb + 0x447] = temp_v2;
          piVar3[temp_v1 * 0xb + 0x448] = temp_v2;
          piVar3[temp_v1 * 0xb + 0x449] = temp_v2;
          piVar3[temp_v1 * 0xb + 0x44a] = 2;
          *(unsigned char *)(piVar3 + temp_v1 * 0xb + 0x44e) = 1;
          piVar3[temp_v1 * 0xb + 0x44f] = -1;
          FUN_002a0428(temp_v3,1);
          FUN_0028c640(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x44d] + 8),0,
                       piVar3 + temp_v1 * 0xb + 0x446);
          FUN_0028c618(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x44d] + 8),0);
          FUN_002a5710(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x44d] + 8),piVar3[temp_v1 * 0xb + 0x44a])
          ;
          FUN_0029bb14(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x44d] + 8));
          puVar2 = (unsigned int *)piVar3[temp_v1 * 0xb + 0x44d];
          temp_v1 = temp_v1 + 1;
          *puVar2 = *puVar2 | 2;
          *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
          piVar3 = DAT_00447e10;
        } while (temp_v1 < 9);
        DAT_00447e10[1] = 0;
        temp_v0 = *(short *)((int)piVar3 + 0xe);
        if ((temp_v0 == 2 || temp_v0 == 3) || (temp_v0 == 6 || temp_v0 == 7)) {
          *piVar3 = 0x1e;
          return 0;
        }
        temp_v1 = 0x14;
      }
      else {
        DAT_00447e10[1] = 0;
        piVar3[1099] = 1;
        FUN_002be624(temp_v5,&LAB_002f4340,1);
        temp_v1 = asdMdlManagerCreateSecondList(temp_v5,0x38);
        piVar3[0x44d] = temp_v1;
        *(unsigned char *)(piVar3 + 0x44c) = 0;
        temp_v1 = *DAT_00447e10 + 1;
        piVar3 = DAT_00447e10;
      }
      *piVar3 = temp_v1;
    }
    else if (temp_v1 == 0x16) {
      temp_v1 = 1;
      do {
        piVar3 = DAT_00447e10;
        piVar7 = DAT_00447e10 + temp_v1 * 0xb + 0x4a8;
        DAT_00447e10[temp_v1 * 0xb + 0x4ae] = 2;
        FUN_002be624(temp_v5,&LAB_002f4340,2);
        temp_v3 = asdMdlManagerClone(DAT_00447e10[0x4b0],0);
        piVar3[temp_v1 * 0xb + 0x4b0] = temp_v3;
        *(unsigned char *)(piVar3 + temp_v1 * 0xb + 0x4af) = 1;
        *(unsigned char *)piVar7 = 1;
        *(unsigned char *)((int)piVar3 + temp_v1 * 0x2c + 0x12a1) = 1;
        *(unsigned char *)((int)piVar3 + temp_v1 * 0x2c + 0x12a2) = 0;
        temp_v2 = (int)temp_v4;
        piVar3[temp_v1 * 0xb + 0x4a9] = temp_v2;
        piVar3[temp_v1 * 0xb + 0x4aa] = temp_v2;
        piVar3[temp_v1 * 0xb + 0x4ab] = temp_v2;
        piVar3[temp_v1 * 0xb + 0x4ac] = temp_v2;
        piVar3[temp_v1 * 0xb + 0x4ad] = 2;
        *(unsigned char *)(piVar3 + temp_v1 * 0xb + 0x4b1) = 1;
        FUN_002a0428(temp_v3,1);
        FUN_0028c640(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x4b0] + 8),0,piVar3 + temp_v1 * 0xb + 0x4a9
                    );
        FUN_0028c618(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x4b0] + 8),0);
        FUN_002a5710(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x4b0] + 8),piVar3[temp_v1 * 0xb + 0x4ad]);
        FUN_0029bb14(*(unsigned int *)(piVar3[temp_v1 * 0xb + 0x4b0] + 8));
        puVar2 = (unsigned int *)piVar3[temp_v1 * 0xb + 0x4b0];
        temp_v1 = temp_v1 + 1;
        *puVar2 = *puVar2 | 2;
        *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
        piVar3 = DAT_00447e10;
      } while (temp_v1 < 3);
      DAT_00447e10[1] = 0;
      *piVar3 = 0x1e;
    }
    else {
      if (temp_v1 == 0x1e) {
        temp_v1 = 0;
        DAT_00447e10[1] = 0;
        FUN_0031d534();
        if (0 < (int)piVar3) {
          do {
            pcVar4 = (char *)FUN_002fb468(temp_v1);
            piVar3 = DAT_00447e10;
            if (*pcVar4 == -1) break;
            if (((int)*pcVar4 == (int)(short)DAT_00447e10[3]) &&
               ((int)pcVar4[1] == (int)*(short *)((int)DAT_00447e10 + 0xe))) {
              temp_v3 = 0;
              do {
                if ((char)DAT_00447e10[temp_v3 * 0x11 + 5] == '\0') goto LAB_002f45c4;
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 0x40);
              temp_v3 = -1;
LAB_002f45c4:
              DAT_00447e10[2] = temp_v3;
              temp_v3 = piVar3[1];
              piVar3[temp_v3 * 0x11 + 0xf] = (int)*(short *)(pcVar4 + 2);
              *(unsigned char *)(piVar3 + temp_v3 * 0x11 + 5) = 1;
              *(unsigned char *)((int)piVar3 + temp_v3 * 0x44 + 0x15) = 1;
              piVar3[temp_v3 * 0x11 + 6] = 0;
              piVar3[temp_v3 * 0x11 + 7] = 0;
              *(unsigned char *)(piVar3 + temp_v3 * 0x11 + 9) = 0;
              temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar4 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
              piVar3[temp_v3 * 0x11 + 10] = temp_v2;
              temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar4 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
              piVar3[temp_v3 * 0x11 + 0xb] = temp_v2;
              temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
              piVar3[temp_v3 * 0x11 + 0xc] = temp_v2;
              temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3)
              ;
              piVar3[temp_v3 * 0x11 + 0xd] = temp_v2;
              piVar3[temp_v3 * 0x11 + 0xe] = 2;
              FUN_002ad8b4(piVar3 + temp_v3 * 0x11 + 0x10,pcVar4 + 0xc);
              piVar3[temp_v3 * 0x11 + 0x15] = -1;
              piVar3 = DAT_00447e10;
              DAT_00447e10[1] = DAT_00447e10[1] + 1;
            }
            temp_v1 = temp_v1 + 1;
            FUN_0031d534();
          } while (temp_v1 < (int)piVar3);
        }
        *DAT_00447e10 = 99;
        return 1;
      }
      if (temp_v1 == 99) {
        return 1;
      }
    }
  }
  else {
    temp_v2 = DAT_00447e10[1];
    piVar7 = DAT_00447e10 + temp_v2 * 0xb + 0x4a8;
    temp_v1 = FUN_002adee0(DAT_00447e10[temp_v2 * 0xb + 0x4b0]);
    if (temp_v1 != 0) {
      *(unsigned char *)piVar7 = 1;
      *(unsigned char *)((int)piVar3 + temp_v2 * 0x2c + 0x12a1) = 1;
      *(unsigned char *)((int)piVar3 + temp_v2 * 0x2c + 0x12a2) = 0;
      piVar3[temp_v2 * 0xb + 0x4a9] = temp_v3;
      piVar3[temp_v2 * 0xb + 0x4aa] = temp_v3;
      piVar3[temp_v2 * 0xb + 0x4ab] = temp_v3;
      piVar3[temp_v2 * 0xb + 0x4ac] = temp_v3;
      piVar3[temp_v2 * 0xb + 0x4ad] = 2;
      *(unsigned char *)(piVar3 + temp_v2 * 0xb + 0x4b1) = 1;
      FUN_002a0428(piVar3[temp_v2 * 0xb + 0x4b0],1);
      FUN_0028c640(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x4b0] + 8),0,piVar3 + temp_v2 * 0xb + 0x4a9);
      FUN_0028c618(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x4b0] + 8),0);
      FUN_002a5710(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x4b0] + 8),piVar3[temp_v2 * 0xb + 0x4ad]);
      FUN_0029bb14(*(unsigned int *)(piVar3[temp_v2 * 0xb + 0x4b0] + 8));
      puVar2 = (unsigned int *)piVar3[temp_v2 * 0xb + 0x4b0];
      *puVar2 = *puVar2 | 2;
      *(unsigned char *)(*(int *)(puVar2[2] + 0x2c) + 0x1f6) = 0;
      *DAT_00447e10 = *DAT_00447e10 + 1;
    }
  }
  return 0;
}

} /* extern "C" */
