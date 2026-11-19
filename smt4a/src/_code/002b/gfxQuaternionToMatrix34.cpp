/* NON_MATCHING: retail copies the second and third matrix rows as a 2-word ldm/stm plus a separate third word (reading the last word first); armcc here copies each row with one 3-word ldm/stm. */
#include "common.h"
#include "shard/W5_W5Match1_RecordKeys.h"
#include "gfx/VectorScratch.h"

struct Vec3 {
    f32 x, y, z;
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

void matrix44SetIdentity(void);
void FUN_00514598(void);
void gfxQuaternionWorkspaceBuildMatrix(void);

/* Builds the 3x4 rotation matrix of a quaternion (translation zero) through the camera workspace. */
void gfxQuaternionToMatrix34(Matrix34 *output, const Vector4 *quaternion)
{
    matrix44SetIdentity();
    g_vectorScratch.first.vector = *quaternion;
    FUN_00514598();
    gfxQuaternionWorkspaceBuildMatrix();
    // Copy the first three floats of each of the workspace matrix's rows.
    output->row0 = *reinterpret_cast<const Vec3 *>(g_vectorScratch.matrix.rows[0]);
    output->row1 = *reinterpret_cast<const Vec3 *>(g_vectorScratch.matrix.rows[1]);
    output->row2 = *reinterpret_cast<const Vec3 *>(g_vectorScratch.matrix.rows[2]);
    output->translation.x = 0.0f;
    output->translation.y = 0.0f;
    output->translation.z = 0.0f;
}

} /* extern "C" */
