/* NON_MATCHING: retail copies the second and third matrix rows as a 2-word ldm/stm plus a separate third word (reading the last word first); armcc here copies each row with one 3-word ldm/stm. */
#include "common.h"
#include "shard/W5_W5Match1_RecordKeys.h"

struct Vec3 {
    f32 x, y, z;
};

/* The camera scratch block, extended to the workspace rotation at 0x100 and its matrix at 0x140. */
struct CameraScratchRotation {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ Vector4 rotation;
    /* 0x110 */ u8 unk110[0x30];
    /* 0x140 */ Vec3 row0;
    /* 0x14C */ f32 pad0;
    /* 0x150 */ Vec3 row1;
    /* 0x15C */ f32 pad1;
    /* 0x160 */ Vec3 row2;
};

/* A 3x4 matrix: three rows and a translation. */
struct Matrix34 {
    /* 0x00 */ Vec3 row0;
    /* 0x0C */ f32 pad0;
    /* 0x10 */ Vec3 row1;
    /* 0x1C */ f32 pad1;
    /* 0x20 */ Vec3 row2;
    /* 0x2C */ f32 pad2;
    /* 0x30 */ Vec3 translation;
};

extern "C" {

extern CameraScratchRotation DAT_006471dc;
void matrix44SetIdentity(void);
void FUN_00514598(void);
void FUN_001bc460(void);

/* Builds the 3x4 rotation matrix of a quaternion (translation zero) through the camera workspace. */
void FUN_002b4c30(Matrix34 *output, const Vector4 *quaternion)
{
    matrix44SetIdentity();
    DAT_006471dc.rotation = *quaternion;
    FUN_00514598();
    FUN_001bc460();
    output->row0 = DAT_006471dc.row0;
    output->row1 = DAT_006471dc.row1;
    output->row2 = DAT_006471dc.row2;
    output->translation.x = 0.0f;
    output->translation.y = 0.0f;
    output->translation.z = 0.0f;
}

} /* extern "C" */
