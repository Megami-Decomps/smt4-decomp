/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004845ac` (_code @ 0x4845ac, 0x624 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(int, unsigned int, unsigned char [4]);
int FUN_00164b5c(...);
int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00485108(...);
int FUN_0048560c(int, int, int, int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: efctSetSpeed. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_0019dc44(unsigned int, int);
extern int FUN_002a4878(int);
extern int FUN_00348eb4(int);
/* Supplied declaration required: FUN_00485108. */
/* Supplied declaration required: FUN_0048560c. */


void FUN_004845ac(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  short temp_v3;
  unsigned char temp_v4 [4];
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar10;
  short temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned int in_fpscr;
  unsigned char temp_v12 [4];
  unsigned int temp_v13;
  
  temp_v10 = 0;
  do {
    temp_v8 = 0;
    do {
      temp_v5 = *(int *)(param_1 + 0x10);
      temp_v11 = temp_v5 == temp_v8;
      if (temp_v11) {
        temp_v5 = *(int *)(param_1 + 0x14);
      }
      if (!temp_v11 || temp_v5 != temp_v10) {
        temp_v9 = *(short *)(
                           "艠艡艢艣艤芁节芃芄芅艏艐艑艒艓艥艦艧艨艩芆芇芈芉芊艔艕艖艗艘艪艫艬艭艮芋芌芍芎芏腉膗膔膓腏良艰艱色艳芐芑芒芓芔膕膖腩腪腻艴艵艶艷艸芕芖芗芘芙腼膁膃膄腈艹腀腀腀腀芚腀腀腀腀腞腃腄腆腇腉腈腠膏膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘膦膨膪膩膫腆膎臍臝臎蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉臷膝腉腈腠膏膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘膦膨膪膩膫腆膎臍臝臎艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏臷膝艐艑艒艓艔艕艖艗艘艏腀腀腀腀蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉腀腀腀腀蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀ŀ"
                           + temp_v8 * 2 + temp_v10 * 0x1e);
        temp_v5 = FUN_001834a4(0x23,temp_v10 * 0xf + temp_v8 + 0x56);
        (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v5 + 10);
        temp_v13 = 0x15;
        FUN_00164b5c(2,0x23,1,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v5 + 8));
        temp_v6 = FUN_001834a4(0x23,0x1a);
        temp_v7 = *(int *)(param_1 + 0xa4);
        temp_v0 = *(short *)(temp_v6 + 8);
        temp_v1 = *(short *)(temp_v5 + 8);
        temp_v2 = *(short *)(temp_v5 + 10);
        temp_v3 = *(short *)(temp_v6 + 10);
        if (temp_v9 != -1) {
          temp_v5 = FUN_0019dc44(3,(int)temp_v1);
          temp_v5 = (**(romwright_code **)(**(int **)(temp_v5 + 8) + 0x44))(*(int **)(temp_v5 + 8),temp_v9);
          (*(unsigned int *)temp_v4) = (*(unsigned int *)temp_v12);
          if ((temp_v5 == 0) && (temp_v9 != 0)) {
            temp_v9 = -0x7ec0;
          }
          VectorSignedToFloat((int)temp_v2 + (int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v12[1] = (char)temp_v9;
          temp_v12[0] = (char)((unsigned short)temp_v9 >> 8);
          temp_v12[3] = temp_v4[3];
          temp_v12[2] = 0;
          VectorSignedToFloat(temp_v7 + temp_v1 + (int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_00162790(3,0xffffffff,temp_v12);
          efctSetSpeed();
        }
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < 0xf);
    temp_v10 = temp_v10 + 1;
  } while (temp_v10 < 6);
  if (*(char *)(param_1 + 0x260) == '\0') {
    temp_v9 = *(short *)(
                       "艠艡艢艣艤芁节芃芄芅艏艐艑艒艓艥艦艧艨艩芆芇芈芉芊艔艕艖艗艘艪艫艬艭艮芋芌芍芎芏腉膗膔膓腏良艰艱色艳芐芑芒芓芔膕膖腩腪腻艴艵艶艷艸芕芖芗芘芙腼膁膃膄腈艹腀腀腀腀芚腀腀腀腀腞腃腄腆腇腉腈腠膏膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘膦膨膪膩膫腆膎臍臝臎蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉臷膝腉腈腠膏膑膒膓膕腇腩腪膃膄腫腬腭腮腯腰腱腲腳腴腵腶腷腸腹腺腞腟腑腐腢腻腼腾膀膁膖腅腁腂腄腣腤腥腦腧腨膋膍腕腔腓腒腗腖腘腙膧膔致至臉臈腌腍腎腽膙膚膠膡膞膟膤膥膢膣膛膜臵臶膉膊膘膦膨膪膩膫腆膎臍臝臎艐艑艒艓艔艕艖艗艘艏艐艑艒艓艔艕艖艗艘艏臷膝艐艑艒艓艔艕艖艗艘艏腀腀腀腀蝀蝁蝂蝃蝄蝅蝆蝇蝈蝉腀腀腀腀蝔蝕蝖蝗蝘蝙蝚蝛蝜蝝腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀艐艑艒艓艔艕艖艗艘艏腀腀腀腀ŀ"
                       + *(int *)(param_1 + 0x10) * 2 + *(int *)(param_1 + 0x14) * 0x1e);
    temp_v10 = FUN_001834a4(0x23,*(int *)(param_1 + 0x14) * 0xf + 0x56 + *(int *)(param_1 + 0x10));
    (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v10 + 10);
    temp_v13 = 0x15;
    FUN_00164b5c(2,0x23,2,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v10 + 8));
    temp_v8 = FUN_001834a4(0x23,0x22);
    temp_v13 = 1;
    (*(unsigned int *)temp_v12) = 0x0;
    FUN_0048560c(param_1,(int)temp_v9,
                 *(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v10 + 8) + (int)*(short *)(temp_v8 + 8)
                 ,(int)*(short *)(temp_v10 + 10) + (int)*(short *)(temp_v8 + 10));
    if (*(char *)(param_1 + 1) == '\x02') {
      efctSetSpeed();
      temp_v8 = g_renderCtx;
      temp_v5 = FUN_00169294(6,1,0);
      piVar10 = (int *)(temp_v8 + 0x12b8);
      temp_v6 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v5;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v6 != temp_v5) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v10 + 10);
      temp_v13 = 0x1f;
      FUN_00164b5c(2,0x23,3,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v10 + 8));
      if (0 < *(short *)(param_1 + 0x560)) {
        (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v10 + 10);
        temp_v13 = 0x1f;
        FUN_001835b4(2,0x23,0x21,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v10 + 8));
      }
      temp_v10 = g_renderCtx;
      temp_v8 = FUN_00169294(6,7,0);
      piVar10 = (int *)(temp_v10 + 0x12b8);
      temp_v5 = piVar10[*piVar10 + 2];
      piVar10[*piVar10 + 2] = temp_v8;
      if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v5 != temp_v8) {
        (**(romwright_code **)(temp_v10 + 0x12d4))();
        *(unsigned char *)(temp_v10 + 0x12d0) = 0;
      }
      efctSetSpeed();
    }
  }
  if (*(char *)(param_1 + 0x29) == '\0') {
    temp_v8 = 0;
    temp_v10 = FUN_00348eb4(param_1 + 0x1fc);
    if (0 < temp_v10) {
      do {
        temp_v10 = FUN_001834a4(0x23,temp_v8 + 0xc6);
        if (temp_v8 != 3) {
          (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v10 + 10);
          temp_v13 = 0x15;
          FUN_00164b5c(2,0x23,4,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v10 + 8));
          (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v10 + 10);
          temp_v13 = 0x1a;
          FUN_001835b4(2,0x23,temp_v8 + 0x29,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v10 + 8));
          efctSetSpeed();
        }
        else {
          temp_v5 = (int)*(short *)(temp_v10 + 10);
          temp_v10 = *(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v10 + 8);
          efctSetSpeed();
          temp_v13 = 0x15;
          (*(unsigned int *)temp_v12) = (unsigned int)temp_v5;
          FUN_001835b4(2,0x23,0x151,temp_v10);
          temp_v13 = 0x15;
          (*(unsigned int *)temp_v12) = (unsigned int)temp_v5;
          FUN_001835b4(2,0x23,0x152,temp_v10);
          temp_v13 = 0x1a;
          (*(unsigned int *)temp_v12) = (unsigned int)temp_v5;
          FUN_001835b4(2,0x23,0x14f,temp_v10);
        }
        temp_v8 = temp_v8 + 1;
        temp_v10 = FUN_00348eb4(param_1 + 0x1fc);
      } while (temp_v8 < temp_v10);
    }
    if (*(char *)(param_1 + 0x260) != '\0') {
      temp_v10 = FUN_002a4878(param_1 + 0x1fc);
      temp_v8 = FUN_001834a4(0x23,temp_v10 + 0xc6);
      if (temp_v10 != 3) {
        (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v8 + 10);
        temp_v13 = 0x1f;
        FUN_00164b5c(2,0x23,5,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v8 + 8));
        (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v8 + 10);
        temp_v13 = 0x24;
        FUN_001835b4(2,0x23,temp_v10 + 0x32,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v8 + 8));
        efctSetSpeed();
        efctSetSpeed();
        temp_v10 = g_renderCtx;
        temp_v5 = FUN_00169294(6,1,0);
        piVar10 = (int *)(temp_v10 + 0x12b8);
        temp_v6 = piVar10[*piVar10 + 2];
        piVar10[*piVar10 + 2] = temp_v5;
        if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v6 != temp_v5) {
          (**(romwright_code **)(temp_v10 + 0x12d4))();
          *(unsigned char *)(temp_v10 + 0x12d0) = 0;
        }
        (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v8 + 10);
        temp_v13 = 0x29;
        FUN_00164b5c(2,0x23,6,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v8 + 8));
        temp_v10 = g_renderCtx;
        temp_v5 = FUN_00169294(6,7,0);
        piVar10 = (int *)(temp_v10 + 0x12b8);
        temp_v6 = piVar10[*piVar10 + 2];
        piVar10[*piVar10 + 2] = temp_v5;
        if (*(char *)(temp_v10 + 0x12d0) != '\0' || temp_v6 != temp_v5) {
          (**(romwright_code **)(temp_v10 + 0x12d4))();
          *(unsigned char *)(temp_v10 + 0x12d0) = 0;
        }
        if (0 < *(short *)(param_1 + 0x560)) {
          (*(unsigned int *)temp_v12) = (unsigned int)(int)*(short *)(temp_v8 + 10);
          temp_v13 = 0x29;
          FUN_001835b4(2,0x23,0x39,*(int *)(param_1 + 0xa4) + (int)*(short *)(temp_v8 + 8));
        }
      }
      else {
        FUN_00485108(param_1,(int)*(short *)(temp_v8 + 8) + *(int *)(param_1 + 0xa4),
                     (int)*(short *)(temp_v8 + 10));
      }
      efctSetSpeed();
      return;
    }
  }
  return;
}

} /* extern "C" */
