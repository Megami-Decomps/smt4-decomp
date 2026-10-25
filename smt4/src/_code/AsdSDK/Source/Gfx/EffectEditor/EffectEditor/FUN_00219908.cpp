/* NON_MATCHING: the stick values stay unwritten as in retail (its stub call was inlined away) but the argument setup for that call is not emitted, the phase samples are inlined in another order and register assignment differs (237 vs 234 rows); the free camera update is the same. */
#include "shard/W6_W6Match6_PhaseTrig.h"

extern "C" {

/* The editor's free camera: position and rotation (degrees), kept as two vectors. */
extern PhaseVector DAT_004d924c;     /* camera position offset */
extern PhaseVector DAT_004d9258;     /* camera rotation (degrees) */
extern PhaseVector DAT_004d9240;     /* orbit centre */
extern PhaseVector g_effectEditorCameraDefaults;     /* orbit anchor */
extern PhaseVector DAT_004d9234;     /* up vector */
extern u8 g_effectEditorCamera[];            /* the editor camera */
extern const PhaseTrigEntry DAT_00407ed0[];

s32 padIsButtonPressed(u32 button);
s32 FUN_002c15fc(u32 button);
void nn_math_ARMv6_VEC3TransformAsm_2AD44C(PhaseVector *destination, const f32 *matrix);
void FUN_002c1edc(void *camera, const PhaseVector *eye, const PhaseVector *center, const PhaseVector *up);

/* Updates the editor's free camera from the pads: both sticks turn and move it (button 27
 * resets it, 28 swaps the move axes, 23/18 raise and lower it), then rebuilds the orbit offset
 * through the rotation matrix of the three angles and aims the camera at the orbit centre. */
void FUN_00219908(void)
{
    f32 stick[4]; /* retail's stick read was a stub call armlink inlined to `mov r0,#0`: nothing writes these, so they hold whatever the stack had */
    f32 matrix[16];
    PhaseVector offset;
    PhaseVector center;
    PhaseVector eye;

    if (padIsButtonPressed(27) != 0) {
        DAT_004d924c.x = 0.0f;
        DAT_004d924c.y = 0.0f;
        DAT_004d924c.z = 0.0f;
        DAT_004d9258.x = 0.0f;
        DAT_004d9258.y = 0.0f;
        DAT_004d9258.z = 0.0f;
    }
    DAT_004d9258.y += stick[2] * 3.2f;
    DAT_004d9258.x -= stick[3] * 3.2f;
    if (FUN_002c15fc(28) == 0) {
        DAT_004d924c.x += stick[0] * 10.0f;
        DAT_004d924c.z -= stick[1] * 10.0f;
    }
    if (FUN_002c15fc(23) != 0) {
        DAT_004d924c.y -= 5.0f;
    }
    if (FUN_002c15fc(18) != 0) {
        DAT_004d924c.y += 5.0f;
    }
    offset.x = g_effectEditorCameraDefaults.x - DAT_004d9240.x;
    offset.y = g_effectEditorCameraDefaults.y - DAT_004d9240.y;
    offset.z = g_effectEditorCameraDefaults.z - DAT_004d9240.z;
    PhaseSinCos a = samplePhase(DAT_00407ed0, DAT_004d9258.x * 0.71111107f);
    PhaseSinCos b = samplePhase(DAT_00407ed0, DAT_004d9258.y * 0.71111107f);
    PhaseSinCos c = samplePhase(DAT_00407ed0, DAT_004d9258.z * 0.71111107f);

    matrix[0] = c.cosine * b.cosine;
    matrix[1] = a.sine * c.cosine * b.sine - a.cosine * c.sine;
    matrix[2] = a.sine * c.sine + a.cosine * c.cosine * b.sine;
    matrix[3] = 0.0f;
    matrix[4] = c.sine * b.cosine;
    matrix[5] = a.cosine * c.cosine + a.sine * c.sine * b.sine;
    matrix[6] = a.cosine * c.sine * b.sine - a.sine * c.cosine;
    matrix[7] = 0.0f;
    matrix[8] = -b.sine;
    matrix[9] = a.sine * b.cosine;
    matrix[10] = a.cosine * b.cosine;
    matrix[11] = 0.0f;
    nn_math_ARMv6_VEC3TransformAsm_2AD44C(&offset, matrix);
    center.x = DAT_004d9240.x + DAT_004d924c.x;
    center.y = DAT_004d9240.y + DAT_004d924c.y;
    center.z = DAT_004d9240.z + DAT_004d924c.z;
    eye.x = center.x + offset.x;
    eye.y = center.y + offset.y;
    eye.z = center.z + offset.z;
    FUN_002c1edc(g_effectEditorCamera, &eye, &center, &DAT_004d9234);
}

}
