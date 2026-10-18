/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015aef0` (_code @ 0x15aef0, 0x1b04 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 151 slot(s), 604 byte(s) */
typedef struct {
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp178; /* 0x178: local_178 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned int sp18C; /* 0x18c: local_18c */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned int sp198; /* 0x198: local_198 */
    unsigned int sp19C; /* 0x19c: local_19c */
    unsigned int sp1A0; /* 0x1a0: local_1a0 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
    unsigned int sp1CC; /* 0x1cc: local_1cc */
    unsigned int sp1D0; /* 0x1d0: local_1d0 */
    unsigned int sp1D4; /* 0x1d4: local_1d4 */
    unsigned int sp1D8; /* 0x1d8: local_1d8 */
    unsigned int sp1DC; /* 0x1dc: local_1dc */
    unsigned int sp1E0; /* 0x1e0: local_1e0 */
    unsigned int sp1E4; /* 0x1e4: local_1e4 */
    unsigned int sp1E8; /* 0x1e8: local_1e8 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
    unsigned int sp1F4; /* 0x1f4: local_1f4 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
    unsigned int sp1FC; /* 0x1fc: local_1fc */
    unsigned int sp200; /* 0x200: local_200 */
    unsigned int sp204; /* 0x204: local_204 */
    unsigned int sp208; /* 0x208: local_208 */
    unsigned int sp20C; /* 0x20c: local_20c */
    unsigned int sp210; /* 0x210: local_210 */
    unsigned int sp214; /* 0x214: local_214 */
    unsigned int sp218; /* 0x218: local_218 */
    unsigned int sp21C; /* 0x21c: local_21c */
    unsigned int sp220; /* 0x220: local_220 */
    unsigned int sp224; /* 0x224: local_224 */
    unsigned int sp228; /* 0x228: local_228 */
    unsigned int sp22C; /* 0x22c: local_22c */
    unsigned int sp230; /* 0x230: local_230 */
    unsigned int sp234; /* 0x234: local_234 */
    unsigned int sp238; /* 0x238: local_238 */
    unsigned int sp23C; /* 0x23c: local_23c */
    unsigned int sp240; /* 0x240: local_240 */
    unsigned int sp244; /* 0x244: local_244 */
    unsigned int sp248; /* 0x248: local_248 */
    unsigned int sp24C; /* 0x24c: local_24c */
    unsigned int sp250; /* 0x250: local_250 */
    unsigned int sp254; /* 0x254: local_254 */
    unsigned int sp258; /* 0x258: local_258 */
    unsigned int sp25C; /* 0x25c: local_25c */
    unsigned int sp260; /* 0x260: local_260 */
    unsigned int sp264; /* 0x264: local_264 */
    unsigned int sp268; /* 0x268: local_268 */
    unsigned int sp26C; /* 0x26c: local_26c */
    unsigned int sp270; /* 0x270: local_270 */
    unsigned int sp278; /* 0x278: local_278 */
    unsigned int sp27C; /* 0x27c: local_27c */
    unsigned int sp280; /* 0x280: local_280 */
    unsigned int sp284; /* 0x284: local_284 */
    unsigned int sp288; /* 0x288: local_288 */
    unsigned int sp28C; /* 0x28c: local_28c */
    unsigned int sp290; /* 0x290: local_290 */
    unsigned int sp294; /* 0x294: local_294 */
    unsigned int sp298; /* 0x298: local_298 */
    unsigned int sp2A0; /* 0x2a0: local_2a0 */
    unsigned int sp2C4; /* 0x2c4: local_2c4 */
    unsigned int sp2C8; /* 0x2c8: local_2c8 */
    unsigned int sp2CC; /* 0x2cc: local_2cc */
    unsigned int sp2D0; /* 0x2d0: local_2d0 */
    unsigned int sp2D4; /* 0x2d4: local_2d4 */
    unsigned int sp2D8; /* 0x2d8: local_2d8 */
    unsigned int sp2DC; /* 0x2dc: local_2dc */
    unsigned int sp2E0; /* 0x2e0: local_2e0 */
    unsigned int sp2E4; /* 0x2e4: local_2e4 */
    unsigned int sp2E8; /* 0x2e8: local_2e8 */
    unsigned int sp2EC; /* 0x2ec: local_2ec */
    unsigned int sp2F0; /* 0x2f0: local_2f0 */
    unsigned int sp304; /* 0x304: local_304 */
    unsigned int sp308; /* 0x308: local_308 */
    unsigned int sp30C; /* 0x30c: local_30c */
    unsigned int sp310; /* 0x310: local_310 */
    unsigned int sp314; /* 0x314: local_314 */
    unsigned int sp318; /* 0x318: local_318 */
    unsigned int sp31C; /* 0x31c: local_31c */
    unsigned int sp320; /* 0x320: local_320 */
    unsigned int sp324; /* 0x324: local_324 */
    unsigned int sp328; /* 0x328: local_328 */
} param_2_stack;

extern unsigned char DAT_0055b538; /* 0x55b538 */


unsigned int * FUN_0015aef0(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  unsigned int temp_v1;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int *piVar16;
  int *piVar17;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int temp_v14;
  int *piVar24;
  int *piVar25;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  unsigned int *puVar31;
  unsigned int *temp_v20;
  int *unaff_r6;
  int *unaff_r7;
  int *unaff_r8;
  int *unaff_r9;
  int *unaff_r10;
  int *unaff_r11;
  unsigned char temp_v21;
  unsigned int *temp_v22;
  int *temp_v23;
  int temp_v24;
  int temp_v25;
  unsigned int temp_v26;
  int *temp_v27;
  int temp_v28;
  int temp_v29;
  unsigned int temp_v30;
  int *temp_v31;
  int temp_v32;
  int temp_v33;
  unsigned int temp_v34;
  int *temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  int *temp_v40;
  unsigned int temp_v41;
  int *temp_v42;
  unsigned int temp_v43;
  int *temp_v44;
  int *temp_v45;
  int *temp_v46;
  unsigned int temp_v47;
  unsigned int temp_v48;
  int *temp_v49;
  int *temp_v50;
  int *temp_v51;
  unsigned int temp_v52;
  int temp_v53;
  int *temp_v54;
  int *temp_v55;
  unsigned int temp_v56;
  int *temp_v57;
  int *temp_v58;
  int *temp_v59;
  unsigned int temp_v60;
  unsigned int temp_v61;
  unsigned int temp_v62;
  int *temp_v63;
  int *temp_v64;
  int *temp_v65;
  unsigned int temp_v66;
  int *temp_v67;
  int *temp_v68;
  int *temp_v69;
  unsigned int temp_v70;
  int *temp_v71;
  int *temp_v72;
  int *temp_v73;
  unsigned int temp_v74;
  int *temp_v75;
  int temp_v76;
  int temp_v77;
  unsigned int temp_v78;
  int *temp_v79;
  int temp_v80;
  int temp_v81;
  unsigned int temp_v82;
  int *temp_v83;
  int temp_v84;
  int temp_v85;
  unsigned int temp_v86;
  int *temp_v87;
  int temp_v88;
  int temp_v89;
  unsigned int temp_v90;
  int *temp_v91;
  int *temp_v92;
  int *temp_v93;
  unsigned int temp_v94;
  int *temp_v95;
  int temp_v96;
  int temp_v97;
  unsigned int temp_v98;
  int *temp_v99;
  int temp_v100;
  int temp_v101;
  unsigned int temp_v102;
  int *temp_v103;
  int temp_v104;
  int temp_v105;
  unsigned int temp_v106;
  int *temp_v107;
  int *temp_v108;
  int *temp_v109;
  unsigned int temp_v110;
  int *temp_v111;
  unsigned int temp_v112;
  unsigned int temp_v113;
  unsigned int temp_v114;
  int *temp_v115;
  unsigned int temp_v116;
  unsigned int temp_v117;
  unsigned int temp_v118;
  int *temp_v119;
  int *temp_v120;
  int *temp_v121;
  unsigned int temp_v122;
  int *temp_v123;
  int temp_v124;
  int temp_v125;
  unsigned int temp_v126;
  int *temp_v127;
  int temp_v128;
  int temp_v129;
  unsigned int temp_v130;
  int *temp_v131;
  int *temp_v132;
  int *temp_v133;
  unsigned int temp_v134;
  int *temp_v135;
  int *temp_v136;
  int *temp_v137;
  unsigned int temp_v138;
  int *temp_v139;
  int temp_v140;
  int temp_v141;
  unsigned int temp_v142;
  int *temp_v143;
  int temp_v144;
  int temp_v145;
  unsigned int temp_v146;
  int *temp_v147;
  int *temp_v148;
  int *temp_v149;
  unsigned int temp_v150;
  int *temp_v151;
  int *temp_v152;
  int *temp_v153;
  int *temp_v154;
  unsigned int temp_v155;
  unsigned int *temp_v156;
  int *temp_v157;
  unsigned int *temp_v158;
  int *temp_v159;
  int *temp_v160;
  int temp_v161;
  int temp_v162;
  unsigned int temp_v163;
  int *temp_v164;
  int temp_v165;
  int temp_v166;
  unsigned int temp_v167;
  
  temp_v60 = 0;
  temp_v61 = 0;
  temp_v64 = (int *)0x0;
  temp_v65 = (int *)0x0;
  temp_v62 = 0x40000000;
  temp_v68 = (int *)0x0;
  temp_v69 = (int *)0x0;
  temp_v66 = 0x40000000;
  temp_v72 = (int *)0x0;
  temp_v73 = (int *)0x0;
  temp_v70 = 0x40000000;
  temp_v76 = 0;
  temp_v77 = 0;
  temp_v74 = 0x40000000;
  temp_v80 = 0;
  temp_v81 = 0;
  temp_v78 = 0x40000000;
  temp_v165 = 0;
  temp_v82 = 0x40000000;
  temp_v166 = 0;
  temp_v84 = 0;
  temp_v167 = 0x40000000;
  temp_v85 = 0;
  temp_v88 = 0;
  temp_v89 = 0;
  temp_v86 = 0x40000000;
  temp_v92 = (int *)0x0;
  temp_v90 = 0x40000000;
  temp_v93 = (int *)0x0;
  temp_v96 = 0;
  temp_v97 = 0;
  temp_v94 = 0x40000000;
  temp_v100 = 0;
  temp_v101 = 0;
  temp_v98 = 0x40000000;
  temp_v161 = 0;
  temp_v102 = 0x40000000;
  temp_v104 = 0;
  temp_v162 = 0;
  temp_v163 = 0x40000000;
  temp_v105 = 0;
  temp_v108 = (int *)0x0;
  temp_v109 = (int *)0x0;
  temp_v106 = 0x40000000;
  temp_v110 = 0x40000000;
  temp_v59 = param_2;
  temp_v63 = param_2;
  temp_v67 = param_2;
  temp_v71 = param_2;
  temp_v75 = param_2;
  temp_v79 = param_2;
  temp_v83 = param_2;
  temp_v87 = param_2;
  temp_v91 = param_2;
  temp_v95 = param_2;
  temp_v99 = param_2;
  temp_v103 = param_2;
  temp_v107 = param_2;
  temp_v160 = param_2;
  temp_v164 = param_2;
  if ((char)*param_1 != '\0') {
    temp_v19 = param_1[1];
    temp_v35 = param_2;
    if (temp_v19 != 0) {
      temp_v36 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v36 = 0;
    }
    temp_v1 = temp_v36;
    piVar1 = temp_v35;
    temp_v38 = temp_v19 & 0x3fffffff;
    if (&temp_v59 != &temp_v35) {
      temp_v36 = temp_v60;
      temp_v38 = temp_v62;
      temp_v35 = temp_v59;
      temp_v59 = piVar1;
      temp_v60 = temp_v1;
      temp_v61 = temp_v1;
      temp_v62 = temp_v19 & 0x3fffffff;
    }
    temp_v37 = temp_v36;
    temp_v19 = 0;
    if (temp_v35 != (int *)0x0) {
      temp_v19 = temp_v36;
    }
    if (temp_v35 != (int *)0x0 && temp_v19 != 0) {
      (**(romwright_code **)(*temp_v35 + 0xc))(temp_v35,temp_v36);
    }
    temp_v19 = param_1[2];
    temp_v49 = param_2;
    if (temp_v19 != 0) {
      temp_v50 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v50 = (int *)0x0;
    }
    piVar3 = temp_v50;
    piVar1 = temp_v49;
    temp_v52 = temp_v19 & 0x3fffffff;
    if (&temp_v63 != &temp_v49) {
      temp_v50 = temp_v64;
      temp_v52 = temp_v66;
      temp_v49 = temp_v63;
      temp_v63 = piVar1;
      temp_v64 = piVar3;
      temp_v65 = piVar3;
      temp_v66 = temp_v19 & 0x3fffffff;
    }
    temp_v51 = temp_v50;
    piVar1 = (int *)0x0;
    if (temp_v49 != (int *)0x0) {
      piVar1 = temp_v50;
    }
    if (temp_v49 != (int *)0x0 && piVar1 != (int *)0x0) {
      (**(romwright_code **)(*temp_v49 + 0xc))(temp_v49,temp_v50);
    }
    temp_v19 = param_1[3];
    temp_v131 = param_2;
    if (temp_v19 != 0) {
      temp_v132 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v132 = (int *)0x0;
    }
    piVar3 = temp_v132;
    piVar1 = temp_v131;
    temp_v134 = temp_v19 & 0x3fffffff;
    if (&temp_v67 != &temp_v131) {
      temp_v132 = temp_v68;
      temp_v134 = temp_v70;
      temp_v131 = temp_v67;
      temp_v67 = piVar1;
      temp_v68 = piVar3;
      temp_v69 = piVar3;
      temp_v70 = temp_v19 & 0x3fffffff;
    }
    temp_v133 = temp_v132;
    piVar1 = (int *)0x0;
    if (temp_v131 != (int *)0x0) {
      piVar1 = temp_v132;
    }
    if (temp_v131 != (int *)0x0 && piVar1 != (int *)0x0) {
      (**(romwright_code **)(*temp_v131 + 0xc))(temp_v131,temp_v132);
    }
    temp_v19 = param_1[4];
    temp_v135 = param_2;
    if (temp_v19 != 0) {
      temp_v136 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v136 = (int *)0x0;
    }
    piVar3 = temp_v136;
    piVar1 = temp_v135;
    temp_v138 = temp_v19 & 0x3fffffff;
    if (&temp_v71 != &temp_v135) {
      temp_v136 = temp_v72;
      temp_v138 = temp_v74;
      temp_v135 = temp_v71;
      temp_v71 = piVar1;
      temp_v72 = piVar3;
      temp_v73 = piVar3;
      temp_v74 = temp_v19 & 0x3fffffff;
    }
    temp_v137 = temp_v136;
    piVar1 = (int *)0x0;
    if (temp_v135 != (int *)0x0) {
      piVar1 = temp_v136;
    }
    if (temp_v135 != (int *)0x0 && piVar1 != (int *)0x0) {
      (**(romwright_code **)(*temp_v135 + 0xc))(temp_v135,temp_v136);
    }
    temp_v19 = param_1[6];
    temp_v31 = param_2;
    if (temp_v19 != 0) {
      temp_v32 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v32 = 0;
    }
    temp_v0 = temp_v32;
    piVar1 = temp_v31;
    temp_v34 = temp_v19 & 0x3fffffff;
    if (&temp_v75 != &temp_v31) {
      temp_v32 = temp_v76;
      temp_v34 = temp_v78;
      temp_v31 = temp_v75;
      temp_v75 = piVar1;
      temp_v76 = temp_v0;
      temp_v77 = temp_v0;
      temp_v78 = temp_v19 & 0x3fffffff;
    }
    temp_v33 = temp_v32;
    temp_v0 = 0;
    if (temp_v31 != (int *)0x0) {
      temp_v0 = temp_v32;
    }
    if (temp_v31 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v31 + 0xc))(temp_v31,temp_v32);
    }
    temp_v19 = param_1[7];
    temp_v127 = param_2;
    if (temp_v19 != 0) {
      temp_v128 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v128 = 0;
    }
    temp_v0 = temp_v128;
    piVar1 = temp_v127;
    temp_v130 = temp_v19 & 0x3fffffff;
    if (&temp_v79 != &temp_v127) {
      temp_v128 = temp_v80;
      temp_v130 = temp_v82;
      temp_v127 = temp_v79;
      temp_v79 = piVar1;
      temp_v80 = temp_v0;
      temp_v81 = temp_v0;
      temp_v82 = temp_v19 & 0x3fffffff;
    }
    temp_v129 = temp_v128;
    temp_v0 = 0;
    if (temp_v127 != (int *)0x0) {
      temp_v0 = temp_v128;
    }
    if (temp_v127 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v127 + 0xc))(temp_v127,temp_v128);
    }
    temp_v19 = param_1[8];
    temp_v27 = param_2;
    if (temp_v19 != 0) {
      temp_v28 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v28 = 0;
    }
    temp_v0 = temp_v28;
    piVar1 = temp_v27;
    temp_v30 = temp_v19 & 0x3fffffff;
    if (&temp_v164 != &temp_v27) {
      temp_v28 = temp_v165;
      temp_v30 = temp_v167;
      temp_v27 = temp_v164;
      temp_v164 = piVar1;
      temp_v165 = temp_v0;
      temp_v166 = temp_v0;
      temp_v167 = temp_v19 & 0x3fffffff;
    }
    temp_v29 = temp_v28;
    temp_v0 = 0;
    if (temp_v27 != (int *)0x0) {
      temp_v0 = temp_v28;
    }
    if (temp_v27 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v27 + 0xc))(temp_v27,temp_v28);
    }
    temp_v19 = param_1[9];
    temp_v139 = param_2;
    if (temp_v19 != 0) {
      temp_v140 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v140 = 0;
    }
    temp_v0 = temp_v140;
    piVar1 = temp_v139;
    temp_v142 = temp_v19 & 0x3fffffff;
    if (&temp_v83 != &temp_v139) {
      temp_v140 = temp_v84;
      temp_v142 = temp_v86;
      temp_v139 = temp_v83;
      temp_v83 = piVar1;
      temp_v84 = temp_v0;
      temp_v85 = temp_v0;
      temp_v86 = temp_v19 & 0x3fffffff;
    }
    temp_v141 = temp_v140;
    temp_v0 = 0;
    if (temp_v139 != (int *)0x0) {
      temp_v0 = temp_v140;
    }
    if (temp_v139 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v139 + 0xc))(temp_v139,temp_v140);
    }
    temp_v19 = param_1[10];
    temp_v23 = param_2;
    if (temp_v19 != 0) {
      temp_v24 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v24 = 0;
    }
    temp_v0 = temp_v24;
    piVar1 = temp_v23;
    temp_v26 = temp_v19 & 0x3fffffff;
    if (&temp_v87 != &temp_v23) {
      temp_v24 = temp_v88;
      temp_v26 = temp_v90;
      temp_v23 = temp_v87;
      temp_v87 = piVar1;
      temp_v88 = temp_v0;
      temp_v89 = temp_v0;
      temp_v90 = temp_v19 & 0x3fffffff;
    }
    temp_v25 = temp_v24;
    temp_v0 = 0;
    if (temp_v23 != (int *)0x0) {
      temp_v0 = temp_v24;
    }
    if (temp_v23 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v23 + 0xc))(temp_v23,temp_v24);
    }
    temp_v19 = param_1[5];
    temp_v147 = param_2;
    if (temp_v19 != 0) {
      temp_v148 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v148 = (int *)0x0;
    }
    piVar3 = temp_v148;
    piVar1 = temp_v147;
    temp_v150 = temp_v19 & 0x3fffffff;
    if (&temp_v91 != &temp_v147) {
      temp_v148 = temp_v92;
      temp_v150 = temp_v94;
      temp_v147 = temp_v91;
      temp_v91 = piVar1;
      temp_v92 = piVar3;
      temp_v93 = piVar3;
      temp_v94 = temp_v19 & 0x3fffffff;
    }
    temp_v149 = temp_v148;
    piVar1 = (int *)0x0;
    if (temp_v147 != (int *)0x0) {
      piVar1 = temp_v148;
    }
    if (temp_v147 != (int *)0x0 && piVar1 != (int *)0x0) {
      (**(romwright_code **)(*temp_v147 + 0xc))(temp_v147,temp_v148);
    }
    temp_v19 = param_1[0xb];
    temp_v143 = param_2;
    if (temp_v19 != 0) {
      temp_v144 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v144 = 0;
    }
    temp_v0 = temp_v144;
    piVar1 = temp_v143;
    temp_v146 = temp_v19 & 0x3fffffff;
    if (&temp_v95 != &temp_v143) {
      temp_v144 = temp_v96;
      temp_v146 = temp_v98;
      temp_v143 = temp_v95;
      temp_v95 = piVar1;
      temp_v96 = temp_v0;
      temp_v97 = temp_v0;
      temp_v98 = temp_v19 & 0x3fffffff;
    }
    temp_v145 = temp_v144;
    temp_v0 = 0;
    if (temp_v143 != (int *)0x0) {
      temp_v0 = temp_v144;
    }
    if (temp_v143 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v143 + 0xc))(temp_v143,temp_v144);
    }
    temp_v19 = param_1[0xc];
    temp_v123 = param_2;
    if (temp_v19 != 0) {
      temp_v124 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v124 = 0;
    }
    temp_v0 = temp_v124;
    piVar1 = temp_v123;
    temp_v126 = temp_v19 & 0x3fffffff;
    if (&temp_v99 != &temp_v123) {
      temp_v124 = temp_v100;
      temp_v126 = temp_v102;
      temp_v123 = temp_v99;
      temp_v99 = piVar1;
      temp_v100 = temp_v0;
      temp_v101 = temp_v0;
      temp_v102 = temp_v19 & 0x3fffffff;
    }
    temp_v125 = temp_v124;
    temp_v0 = 0;
    if (temp_v123 != (int *)0x0) {
      temp_v0 = temp_v124;
    }
    if (temp_v123 != (int *)0x0 && temp_v0 != 0) {
      (**(romwright_code **)(*temp_v123 + 0xc))(temp_v123,temp_v124);
    }
    temp_v19 = param_1[0xd];
    temp_v111 = param_2;
    if (temp_v19 != 0) {
      temp_v112 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v112 = 0;
    }
    temp_v1 = temp_v112;
    piVar1 = temp_v111;
    temp_v114 = temp_v19 & 0x3fffffff;
    if (&temp_v160 != &temp_v111) {
      temp_v112 = temp_v161;
      temp_v114 = temp_v163;
      temp_v111 = temp_v160;
      temp_v160 = piVar1;
      temp_v161 = temp_v1;
      temp_v162 = temp_v1;
      temp_v163 = temp_v19 & 0x3fffffff;
    }
    temp_v113 = temp_v112;
    temp_v19 = 0;
    if (temp_v111 != (int *)0x0) {
      temp_v19 = temp_v112;
    }
    if (temp_v111 != (int *)0x0 && temp_v19 != 0) {
      (**(romwright_code **)(*temp_v111 + 0xc))(temp_v111,temp_v112);
    }
    temp_v19 = param_1[0xe];
    temp_v115 = param_2;
    if (temp_v19 != 0) {
      temp_v116 = (**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    else {
      temp_v116 = 0;
    }
    temp_v1 = temp_v116;
    piVar1 = temp_v115;
    temp_v118 = temp_v19 & 0x3fffffff;
    if (&temp_v103 != &temp_v115) {
      temp_v116 = temp_v104;
      temp_v118 = temp_v106;
      temp_v115 = temp_v103;
      temp_v103 = piVar1;
      temp_v104 = temp_v1;
      temp_v105 = temp_v1;
      temp_v106 = temp_v19 & 0x3fffffff;
    }
    temp_v117 = temp_v116;
    temp_v19 = 0;
    if (temp_v115 != (int *)0x0) {
      temp_v19 = temp_v116;
    }
    if (temp_v115 != (int *)0x0 && temp_v19 != 0) {
      (**(romwright_code **)(*temp_v115 + 0xc))(temp_v115,temp_v116);
    }
    temp_v19 = param_1[0xf];
    temp_v119 = param_2;
    if (temp_v19 == 0) {
      temp_v120 = (int *)0x0;
    }
    else {
      temp_v120 = (int *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v19 << 2,0x20);
    }
    piVar3 = temp_v120;
    piVar1 = temp_v119;
    temp_v122 = temp_v19 & 0x3fffffff;
    if (&temp_v107 != &temp_v119) {
      temp_v120 = temp_v108;
      temp_v122 = temp_v110;
      temp_v119 = temp_v107;
      temp_v107 = piVar1;
      temp_v108 = piVar3;
      temp_v109 = piVar3;
      temp_v110 = temp_v19 & 0x3fffffff;
    }
    temp_v121 = temp_v120;
    piVar1 = (int *)0x0;
    if (temp_v119 != (int *)0x0) {
      piVar1 = temp_v120;
    }
    if (temp_v119 != (int *)0x0 && piVar1 != (int *)0x0) {
      (**(romwright_code **)(*temp_v119 + 0xc))(temp_v119,temp_v120);
    }
  }
  temp_v22 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0xf8,4);
  temp_v18 = temp_v166;
  temp_v17 = temp_v165;
  temp_v16 = temp_v162;
  temp_v15 = temp_v161;
  piVar25 = temp_v109;
  piVar24 = temp_v108;
  temp_v14 = temp_v105;
  temp_v13 = temp_v104;
  temp_v12 = temp_v101;
  temp_v11 = temp_v100;
  temp_v10 = temp_v97;
  temp_v9 = temp_v96;
  piVar17 = temp_v93;
  piVar16 = temp_v92;
  temp_v8 = temp_v89;
  temp_v7 = temp_v88;
  temp_v6 = temp_v85;
  temp_v5 = temp_v84;
  temp_v4 = temp_v81;
  temp_v3 = temp_v80;
  temp_v2 = temp_v77;
  temp_v0 = temp_v76;
  piVar8 = temp_v73;
  piVar7 = temp_v72;
  piVar6 = temp_v69;
  piVar5 = temp_v68;
  piVar3 = temp_v65;
  piVar1 = temp_v64;
  temp_v1 = temp_v61;
  temp_v19 = temp_v60;
  temp_v21 = temp_v22 == (unsigned int *)0x0;
  if (temp_v21) {
    puVar31 = (unsigned int *)0x0;
    temp_v22 = puVar31;
  }
  else {
    temp_v46 = temp_v59;
    temp_v60 = 0;
    temp_v61 = 0;
    temp_v44 = temp_v63;
    temp_v64 = (int *)0x0;
    temp_v65 = (int *)0x0;
    temp_v55 = temp_v67;
    temp_v27 = temp_v69;
    temp_v68 = (int *)0x0;
    temp_v69 = (int *)0x0;
    temp_v159 = temp_v71;
    temp_v23 = temp_v73;
    temp_v72 = (int *)0x0;
    temp_v73 = (int *)0x0;
    temp_v157 = temp_v91;
    temp_v31 = temp_v93;
    temp_v36 = temp_v94;
    temp_v93 = (int *)0x0;
    temp_v92 = (int *)0x0;
    temp_v152 = temp_v95;
    temp_v96 = 0;
    temp_v97 = 0;
    temp_v76 = 0;
    temp_v77 = 0;
    temp_v80 = 0;
    temp_v81 = 0;
    temp_v165 = 0;
    temp_v166 = 0;
    temp_v84 = 0;
    temp_v85 = 0;
    temp_v88 = 0;
    temp_v89 = 0;
    temp_v100 = 0;
    temp_v53 = temp_v101;
    temp_v101 = 0;
    temp_v48 = temp_v102;
    temp_v161 = 0;
    temp_v162 = 0;
    temp_v104 = 0;
    temp_v105 = 0;
    temp_v57 = temp_v107;
    temp_v35 = temp_v108;
    temp_v51 = temp_v109;
    temp_v47 = temp_v110;
    temp_v108 = (int *)0x0;
    temp_v109 = (int *)0x0;
    temp_v22[1] = (unsigned int)param_2;
    *temp_v22 = (unsigned int)&DAT_0055b538;
    temp_v22[2] = (unsigned int)temp_v59;
    temp_v22[3] = temp_v19;
    temp_v22[4] = temp_v1;
    temp_v22[5] = temp_v62;
    temp_v154 = (int *)0x0;
    temp_v22[6] = (unsigned int)temp_v63;
    temp_v22[7] = (unsigned int)piVar1;
    temp_v22[8] = (unsigned int)piVar3;
    temp_v22[9] = temp_v66;
    temp_v153 = (int *)0x0;
    temp_v22[10] = (unsigned int)temp_v67;
    temp_v22[0xb] = (unsigned int)piVar5;
    temp_v22[0xc] = (unsigned int)piVar6;
    temp_v22[0xd] = temp_v70;
    temp_v42 = (int *)0x0;
    temp_v22[0xe] = (unsigned int)temp_v71;
    temp_v22[0xf] = (unsigned int)piVar7;
    temp_v22[0x10] = (unsigned int)piVar8;
    temp_v22[0x11] = temp_v74;
    temp_v151 = (int *)0x0;
    temp_v22[0x12] = (unsigned int)temp_v91;
    temp_v22[0x13] = (unsigned int)piVar16;
    temp_v22[0x14] = (unsigned int)piVar17;
    temp_v22[0x15] = temp_v94;
    temp_v58 = (int *)0x0;
    temp_v22[0x16] = (unsigned int)temp_v95;
    temp_v22[0x17] = temp_v9;
    temp_v22[0x18] = temp_v10;
    temp_v22[0x19] = temp_v98;
    temp_v40 = (int *)0x0;
    temp_v22[0x1a] = (unsigned int)temp_v75;
    temp_v22[0x1b] = temp_v0;
    temp_v22[0x1c] = temp_v2;
    temp_v22[0x1d] = temp_v78;
    temp_v54 = (int *)0x0;
    temp_v22[0x1e] = (unsigned int)temp_v79;
    temp_v22[0x1f] = temp_v3;
    temp_v22[0x20] = temp_v4;
    temp_v22[0x21] = temp_v82;
    temp_v39 = 0;
    temp_v22[0x22] = (unsigned int)temp_v164;
    temp_v22[0x23] = temp_v17;
    temp_v22[0x24] = temp_v18;
    temp_v22[0x25] = temp_v167;
    temp_v41 = 0;
    temp_v22[0x26] = (unsigned int)temp_v83;
    temp_v22[0x27] = temp_v5;
    temp_v22[0x28] = temp_v6;
    temp_v22[0x29] = temp_v86;
    temp_v43 = 0;
    temp_v22[0x2a] = (unsigned int)temp_v87;
    temp_v22[0x2b] = temp_v7;
    temp_v22[0x2c] = temp_v8;
    temp_v22[0x2d] = temp_v90;
    temp_v45 = (int *)0x0;
    temp_v22[0x2e] = (unsigned int)temp_v99;
    temp_v22[0x2f] = temp_v11;
    temp_v22[0x30] = temp_v12;
    temp_v22[0x31] = temp_v102;
    temp_v155 = 0;
    temp_v22[0x32] = (unsigned int)temp_v160;
    temp_v22[0x33] = temp_v15;
    temp_v22[0x34] = temp_v16;
    temp_v22[0x35] = temp_v163;
    temp_v156 = (unsigned int *)0x0;
    temp_v22[0x36] = (unsigned int)temp_v103;
    temp_v22[0x37] = temp_v13;
    temp_v22[0x38] = temp_v14;
    temp_v22[0x39] = temp_v106;
    temp_v158 = (unsigned int *)0x0;
    puVar31 = temp_v22 + 0x3a;
    *puVar31 = (unsigned int)temp_v107;
    temp_v22[0x3b] = (unsigned int)piVar24;
    temp_v22[0x3c] = (unsigned int)piVar25;
    temp_v22[0x3d] = temp_v110;
    param_2 = temp_v79;
    param_1 = temp_v75;
    unaff_r6 = temp_v103;
    unaff_r7 = temp_v160;
    unaff_r8 = temp_v99;
    unaff_r9 = temp_v87;
    unaff_r10 = temp_v83;
    unaff_r11 = temp_v164;
    temp_v62 = temp_v62 & 0xc0000000;
    temp_v66 = temp_v66 & 0xc0000000;
    temp_v70 = temp_v70 & 0xc0000000;
    temp_v74 = temp_v74 & 0xc0000000;
    temp_v78 = temp_v78 & 0xc0000000;
    temp_v82 = temp_v82 & 0xc0000000;
    temp_v86 = temp_v86 & 0xc0000000;
    temp_v90 = temp_v90 & 0xc0000000;
    temp_v94 = temp_v94 & 0xc0000000;
    temp_v98 = temp_v98 & 0xc0000000;
    temp_v102 = temp_v102 & 0xc0000000;
    temp_v106 = temp_v106 & 0xc0000000;
    temp_v110 = temp_v110 & 0xc0000000;
    temp_v163 = temp_v163 & 0xc0000000;
    temp_v167 = temp_v167 & 0xc0000000;
  }
  temp_v121 = (int *)(unsigned int)!temp_v21;
  temp_v120 = (int *)(unsigned int)!temp_v21;
  temp_v119 = (int *)(unsigned int)!temp_v21;
  temp_v118 = (unsigned int)!temp_v21;
  temp_v117 = (unsigned int)!temp_v21;
  temp_v116 = (unsigned int)!temp_v21;
  temp_v115 = (int *)(unsigned int)!temp_v21;
  temp_v114 = (unsigned int)!temp_v21;
  temp_v113 = (unsigned int)!temp_v21;
  temp_v112 = (unsigned int)!temp_v21;
  temp_v56 = (unsigned int)!temp_v21;
  temp_v52 = (unsigned int)!temp_v21;
  temp_v50 = (int *)(unsigned int)!temp_v21;
  if (!temp_v21 && unaff_r6 != (int *)0x0) {
    puVar31 = temp_v158;
  }
  if ((!temp_v21 && unaff_r6 != (int *)0x0) && puVar31 != (unsigned int *)0x0) {
    (**(romwright_code **)(*unaff_r6 + 0xc))(unaff_r6);
    puVar31 = temp_v20;
  }
  if (temp_v121 != (int *)0x0 && unaff_r7 != (int *)0x0) {
    puVar31 = temp_v156;
  }
  if ((temp_v121 != (int *)0x0 && unaff_r7 != (int *)0x0) && puVar31 != (unsigned int *)0x0) {
    (**(romwright_code **)(*unaff_r7 + 0xc))(unaff_r7);
  }
  piVar1 = temp_v120;
  if (temp_v120 != (int *)0x0 && unaff_r8 != (int *)0x0) {
    piVar1 = (int *)temp_v155;
  }
  if ((temp_v120 != (int *)0x0 && unaff_r8 != (int *)0x0) && piVar1 != (int *)0x0) {
    (**(romwright_code **)(*unaff_r8 + 0xc))(unaff_r8,temp_v155);
  }
  piVar1 = temp_v119;
  if (temp_v119 != (int *)0x0 && unaff_r9 != (int *)0x0) {
    piVar1 = temp_v45;
  }
  if ((temp_v119 != (int *)0x0 && unaff_r9 != (int *)0x0) && piVar1 != (int *)0x0) {
    (**(romwright_code **)(*unaff_r9 + 0xc))(unaff_r9,temp_v45);
  }
  temp_v19 = temp_v118;
  if (temp_v118 != 0 && unaff_r10 != (int *)0x0) {
    temp_v19 = temp_v43;
  }
  if ((temp_v118 != 0 && unaff_r10 != (int *)0x0) && temp_v19 != 0) {
    (**(romwright_code **)(*unaff_r10 + 0xc))(unaff_r10,temp_v43);
  }
  temp_v19 = temp_v117;
  if (temp_v117 != 0 && unaff_r11 != (int *)0x0) {
    temp_v19 = temp_v41;
  }
  if ((temp_v117 != 0 && unaff_r11 != (int *)0x0) && temp_v19 != 0) {
    (**(romwright_code **)(*unaff_r11 + 0xc))(unaff_r11,temp_v41);
  }
  temp_v19 = temp_v116;
  if (temp_v116 != 0 && param_2 != (int *)0x0) {
    temp_v19 = temp_v39;
  }
  if ((temp_v116 != 0 && param_2 != (int *)0x0) && temp_v19 != 0) {
    (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v39);
  }
  piVar1 = temp_v115;
  if (temp_v115 != (int *)0x0 && param_1 != (int *)0x0) {
    piVar1 = temp_v54;
  }
  if ((temp_v115 != (int *)0x0 && param_1 != (int *)0x0) && piVar1 != (int *)0x0) {
    (**(romwright_code **)(*param_1 + 0xc))(param_1,temp_v54);
  }
  temp_v21 = temp_v114 != 0;
  piVar1 = (int *)0x0;
  if (temp_v21) {
    piVar1 = temp_v152;
  }
  piVar3 = piVar1;
  if (temp_v21 && piVar1 != (int *)0x0) {
    piVar3 = temp_v40;
  }
  if ((temp_v21 && piVar1 != (int *)0x0) && piVar3 != (int *)0x0) {
    (**(romwright_code **)(*temp_v152 + 0xc))(temp_v152,temp_v40);
  }
  temp_v21 = temp_v113 != 0;
  piVar1 = (int *)0x0;
  if (temp_v21) {
    piVar1 = temp_v157;
  }
  piVar3 = piVar1;
  if (temp_v21 && piVar1 != (int *)0x0) {
    piVar3 = temp_v58;
  }
  if ((temp_v21 && piVar1 != (int *)0x0) && piVar3 != (int *)0x0) {
    (**(romwright_code **)(*temp_v157 + 0xc))(temp_v157,temp_v58);
  }
  temp_v21 = temp_v112 != 0;
  piVar1 = (int *)0x0;
  if (temp_v21) {
    piVar1 = temp_v159;
  }
  piVar3 = piVar1;
  if (temp_v21 && piVar1 != (int *)0x0) {
    piVar3 = temp_v151;
  }
  if ((temp_v21 && piVar1 != (int *)0x0) && piVar3 != (int *)0x0) {
    (**(romwright_code **)(*temp_v159 + 0xc))(temp_v159,temp_v151);
  }
  temp_v21 = temp_v56 != 0;
  piVar1 = (int *)0x0;
  if (temp_v21) {
    piVar1 = temp_v55;
  }
  piVar3 = piVar1;
  if (temp_v21 && piVar1 != (int *)0x0) {
    piVar3 = temp_v42;
  }
  if ((temp_v21 && piVar1 != (int *)0x0) && piVar3 != (int *)0x0) {
    (**(romwright_code **)(*temp_v55 + 0xc))(temp_v55,temp_v42);
  }
  temp_v21 = temp_v52 != 0;
  piVar1 = (int *)0x0;
  if (temp_v21) {
    piVar1 = temp_v44;
  }
  piVar3 = piVar1;
  if (temp_v21 && piVar1 != (int *)0x0) {
    piVar3 = temp_v153;
  }
  if ((temp_v21 && piVar1 != (int *)0x0) && piVar3 != (int *)0x0) {
    (**(romwright_code **)(*temp_v44 + 0xc))(temp_v44,temp_v153);
  }
  temp_v21 = temp_v50 != (int *)0x0;
  piVar1 = (int *)0x0;
  if (temp_v21) {
    piVar1 = temp_v46;
  }
  piVar3 = piVar1;
  if (temp_v21 && piVar1 != (int *)0x0) {
    piVar3 = temp_v154;
  }
  if ((temp_v21 && piVar1 != (int *)0x0) && piVar3 != (int *)0x0) {
    (**(romwright_code **)(*temp_v46 + 0xc))(temp_v46,temp_v154);
  }
  temp_v109 = temp_v108;
  piVar1 = (int *)0x0;
  if (temp_v107 != (int *)0x0) {
    piVar1 = temp_v108;
  }
  if (temp_v107 != (int *)0x0 && piVar1 != (int *)0x0) {
    (**(romwright_code **)(*temp_v107 + 0xc))(temp_v107,temp_v108);
  }
  temp_v105 = temp_v104;
  temp_v0 = 0;
  if (temp_v103 != (int *)0x0) {
    temp_v0 = temp_v104;
  }
  if (temp_v103 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v103 + 0xc))(temp_v103,temp_v104);
  }
  temp_v162 = temp_v161;
  temp_v0 = 0;
  if (temp_v160 != (int *)0x0) {
    temp_v0 = temp_v161;
  }
  if (temp_v160 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v160 + 0xc))(temp_v160,temp_v161);
  }
  temp_v101 = temp_v100;
  temp_v0 = 0;
  if (temp_v99 != (int *)0x0) {
    temp_v0 = temp_v100;
  }
  if (temp_v99 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v99 + 0xc))(temp_v99,temp_v100);
  }
  temp_v97 = temp_v96;
  temp_v0 = 0;
  if (temp_v95 != (int *)0x0) {
    temp_v0 = temp_v96;
  }
  if (temp_v95 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v95 + 0xc))(temp_v95,temp_v96);
  }
  temp_v93 = temp_v92;
  piVar1 = (int *)0x0;
  if (temp_v91 != (int *)0x0) {
    piVar1 = temp_v92;
  }
  if (temp_v91 != (int *)0x0 && piVar1 != (int *)0x0) {
    (**(romwright_code **)(*temp_v91 + 0xc))(temp_v91,temp_v92);
  }
  temp_v89 = temp_v88;
  temp_v0 = 0;
  if (temp_v87 != (int *)0x0) {
    temp_v0 = temp_v88;
  }
  if (temp_v87 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v87 + 0xc))(temp_v87,temp_v88);
  }
  temp_v85 = temp_v84;
  temp_v0 = 0;
  if (temp_v83 != (int *)0x0) {
    temp_v0 = temp_v84;
  }
  if (temp_v83 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v83 + 0xc))(temp_v83,temp_v84);
  }
  temp_v166 = temp_v165;
  temp_v0 = 0;
  if (temp_v164 != (int *)0x0) {
    temp_v0 = temp_v165;
  }
  if (temp_v164 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v164 + 0xc))(temp_v164,temp_v165);
  }
  temp_v81 = temp_v80;
  temp_v0 = 0;
  if (temp_v79 != (int *)0x0) {
    temp_v0 = temp_v80;
  }
  if (temp_v79 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v79 + 0xc))(temp_v79,temp_v80);
  }
  temp_v77 = temp_v76;
  temp_v0 = 0;
  if (temp_v75 != (int *)0x0) {
    temp_v0 = temp_v76;
  }
  if (temp_v75 != (int *)0x0 && temp_v0 != 0) {
    (**(romwright_code **)(*temp_v75 + 0xc))(temp_v75,temp_v76);
  }
  temp_v73 = temp_v72;
  piVar1 = (int *)0x0;
  if (temp_v71 != (int *)0x0) {
    piVar1 = temp_v72;
  }
  if (temp_v71 != (int *)0x0 && piVar1 != (int *)0x0) {
    (**(romwright_code **)(*temp_v71 + 0xc))(temp_v71,temp_v72);
  }
  temp_v69 = temp_v68;
  piVar1 = (int *)0x0;
  if (temp_v67 != (int *)0x0) {
    piVar1 = temp_v68;
  }
  if (temp_v67 != (int *)0x0 && piVar1 != (int *)0x0) {
    (**(romwright_code **)(*temp_v67 + 0xc))(temp_v67,temp_v68);
  }
  temp_v65 = temp_v64;
  piVar1 = (int *)0x0;
  if (temp_v63 != (int *)0x0) {
    piVar1 = temp_v64;
  }
  if (temp_v63 != (int *)0x0 && piVar1 != (int *)0x0) {
    (**(romwright_code **)(*temp_v63 + 0xc))(temp_v63,temp_v64);
  }
  temp_v61 = temp_v60;
  temp_v19 = 0;
  if (temp_v59 != (int *)0x0) {
    temp_v19 = temp_v60;
  }
  if (temp_v59 != (int *)0x0 && temp_v19 != 0) {
    (**(romwright_code **)(*temp_v59 + 0xc))(temp_v59,temp_v60);
  }
  return temp_v22;
}
