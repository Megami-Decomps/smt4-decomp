/* NON_MATCHING: struct-assignment lowering differs: retail copies the base matrix's first eight words through registers while also spilling them to the stack and keeps the arguments pushed (r0-r3); here whole-matrix ldm/stm. */
#include "common.h"

struct Mtx44 {
    f32 m[16];
};

/* A camera's matrix set: the base matrix, the three optional overrides and the composed result. */
struct CameraMatrices {
    /* 0x0000 */ u8 unk0000[0x534];
    /* 0x0534 */ Mtx44 third;
    /* 0x0574 */ u8 unk0574[0x44];
    /* 0x05B8 */ Mtx44 base;
    /* 0x05F8 */ u8 unk05F8[0xB20];
    /* 0x1118 */ Mtx44 second;
    /* 0x1158 */ Mtx44 first;
    /* 0x1198 */ Mtx44 composed;
};

extern "C" {
void nn_math_ARMv6_MTX44MultAsm(Mtx44 *result, const Mtx44 *left, const Mtx44 *right);

/* Sets the three matrices (each from its override or the base) and composes them into the result. */
void FUN_00187a84(CameraMatrices *camera, const Mtx44 *first, const Mtx44 *second, const Mtx44 *third)
{
    camera->composed = camera->base;
    if (first != NULL) {
        camera->first = *first;
        nn_math_ARMv6_MTX44MultAsm(&camera->composed, &camera->composed, &camera->first);
    } else {
        camera->first = camera->base;
    }
    if (second != NULL) {
        camera->second = *second;
        nn_math_ARMv6_MTX44MultAsm(&camera->composed, &camera->composed, &camera->second);
    } else {
        camera->second = camera->base;
    }
    if (third != NULL) {
        camera->third = *third;
        nn_math_ARMv6_MTX44MultAsm(&camera->composed, &camera->composed, &camera->third);
        return;
    }
    camera->third = camera->base;
}

}
